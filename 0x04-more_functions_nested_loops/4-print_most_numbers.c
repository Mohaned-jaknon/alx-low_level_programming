#include "main.h"

/**
 * print_most_numbers - func checks for a digit (0 through 9).
 *
 * Return: always 0.
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');

}
