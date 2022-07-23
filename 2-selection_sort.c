#include "sort.h"


/**
 * selection_sort - sorts an array using selection sort algorithm
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int least;

	for (i = 0; i < size; i++)
	{
		least = arr[i];
		idx = i;

		for (j = 1; j < size; j++)
		{
			if (least > array[j])
			{
				idx = j;
				least = array[j];
			}
		}
		swap(array, idx, i);
		print_array(array, size);
	}
}



/**
 * swap - swaps two elements in an array
 * @array: array
 * @idx: first index
 * @i: second index
 *
 * Return void
 */
void swap(int *array, size_t idx, size_t i)
{
	int temp;

	temp = array[idx];
	array[idx] = array[i];
	array[i] = temp;
}
