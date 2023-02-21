#include "sort.h"
/**
 * bubble_sort - implement the bubble sort algorithm
 * @array: the array to sort
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int tmp, swap;
	size_t i, j;

	if (!array || !array[1])
		return;

	for (i = 0; i < size; i++)
	{
		swap = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swap = 1;
				print_array(array, size);
			}
		}
		if (swap == 0)
			break;
	}
}
