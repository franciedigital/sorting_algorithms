#include <stdio.h>
#include <sort.h>

// Swap two elements in the array
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hoare partition scheme
int partition(int *array, int low, int high) {
    int pivot = array[high]; // Choose the last element as the pivot
    int i = low - 1;
    int j = high + 1;

    while (1) {
        do {
            i++;
        } while (array[i] < pivot);

        do {
            j--;
        } while (array[j] > pivot);

        if (i >= j)
            return j;

        // Swap array[i] and array[j]
        swap(&array[i], &array[j]);
        printf("Array after swap: ");
        for (int k = 0; k <= high; k++) {
            printf("%d ", array[k]);
        }
        printf("\n");
    }
}

// Quick sort using Hoare partition scheme
void quick_sort_hoare(int *array, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(array, low, high);

        // Recursively sort the sub-arrays
        quick_sort_hoare(array, low, pivotIndex);
        quick_sort_hoare(array, pivotIndex + 1, high);
    }
}

// Wrapper function for quick_sort_hoare
void quick_sort_hoare_wrapper(int *array, size_t size) {
    quick_sort_hoare(array, 0, size - 1);
}

// Test the quick sort function
int main() {
    int array[] = {9, -3, 5, 2, 1, 0, 8, 4};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    quick_sort_hoare_wrapper(array, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
