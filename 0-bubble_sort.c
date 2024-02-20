#include "sort.h"

/**
 * bubble_sort - sorts an integer array using the Bubble sort algorithm
 * @array: array to sort
 * @size: array's size
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
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

/**
 * swap - swaps between elements
 * @arr: array
 * @i: element a
 * @j: element b
 */
void swap(int *arr, size_t i, size_t j)
{
	int tmp;

	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;

}
