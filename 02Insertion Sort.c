/*
Aim: Insertion Sort
*/
#include <stdio.h>
#include <math.h>

int main() {
	int arr[20], n;
	int i, j, temp = 0;

// Fill Array
	printf("Enter size of array: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("Enter element %d: ", (i + 1));
		scanf("%d", &arr[i]);
	}

// Cycle through each element
	for (i = 1; i < n; i++) {
		for (j=i-1; arr[j] > arr[i] && j >= 0; j--){
		    temp = arr[i];
		    arr[i] = arr[j-1];
		    arr[j-1] = temp;
		}
	}

	printf("Sorted array\n");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
printf("\n");
	return 0;
}
