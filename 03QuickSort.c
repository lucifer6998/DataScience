#include <stdio.h>
#include <stdlib.h>

void quick_sort(int[], int, int);
int partition(int[], int, int);

int main() {
	int arr[50], n, i;
	printf("Enter size of array: ");
	scanf("%d", &n);

	printf("\nEnter array elements: \n");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	quick_sort(arr, 0, n - 1);

	printf("\nSorted Array:  ");

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}

void quick_sort(int a[], int l, int u) {
	int j;
	if (l < u) {
		j = partition(a, l, u);
		quick_sort(a, l, j - 1);
		quick_sort(a, j + 1, u);
	}
}

int partition(int a[], int l, int u) {
	int v, i, j, temp;
	v = a[l];
	i = l;
	j = u + 1;
	do {
		do {
			i++;
		} while (a[i] < v && i <= u);

		do {
			j--;
		} while (v < a[j]);

		if (i < j) {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	} while (i < j);

	a[l] = a[j];
	a[j] = v;

	return (j);
}
