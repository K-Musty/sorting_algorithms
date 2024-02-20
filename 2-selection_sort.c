#include "sort.h"

/**
 * selection_sort - Sorts an integer array using the Selection sort algorithm
 * @array: array
 * @size: array size
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	if (array && size > 1)
		for (i = 0; i < size - 1; i++)
			for (j = 0; j < size - i - 1; j++)
				if (array[j] > array[j + 1])
				{
					swap(array, j, j + 1);
					print_array(array, size);
				}
}

