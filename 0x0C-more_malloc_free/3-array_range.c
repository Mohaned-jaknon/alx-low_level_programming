#include "main.h"
#include <stdlib.h>

/**
 * int *array_range - creates an array of integers.
 * @min: least no
 * @max: biggest no
 *
 * Return: integer value
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

