#include "sort.h"

/**
 * selection_sort - sorts an array using the selection sort algorithm
 * @array: the array to sort
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index;
	int smallest;

	for (i = 0; i < size; i++)
	{
		smallest = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (smallest > array[j])
			{
				smallest = array[j];
				index = j;
			}
		}
		if (smallest != array[i])
		{
			array[index] = array[i];
			array[i] = smallest;
			print_array(array, size);
		}
	}
}
