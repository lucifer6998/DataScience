#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[20];
	int n;
	int i, j, temp, min;
	
	// Fill Array
	printf("Enter size of array: ");
	scanf("%d", &n);
printf("Enter elements: \n");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < n - 1; i++) {
		// Find the minimum element in unsorted array
		min = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min])
				min = j;
		}
		// Swap the found minimum with the first element
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	
	printf("Sorted array: \n");
	for (i = 0; i < n; i++)
		printf("%d  ", arr[i]);
	printf("\n");
	return 0;
}
