#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i;)

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to calcuate its square
 *
 * Return: resulting the aquare of the root
 */
int _sqrt_recursion(int n);
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -  calculate  natural square root
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: resulting square rooot
 */
int _sqrt(int n, int i);
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
	return (i);

i	return (_sqrt(n, i + 1));
}
