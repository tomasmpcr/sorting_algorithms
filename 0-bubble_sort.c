#include "sort.h"

/**
 * bubble_sort - This function order the array
 * @array: The array to order
 * @size: Length the array
 * ----------------------------------------------
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int num;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			num = array[j];
			if ((j + 1) <= size && num > array[j + 1])
			{
				array[j] = array[j + 1];
				array[j + 1] = num;
				print_array(array, size);
			}
		}
	}
}
