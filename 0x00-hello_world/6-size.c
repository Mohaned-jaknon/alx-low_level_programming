#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always  0 (success)
 */
int main(void)
{
printf ("size of a char: %lu byte(s)\n", sizedof(char));
printf ("size of a int: %lu byte(s)\n", sizedof(int));
printf ("size of a long int: %lu byte(s)\n", sizedof(long int));
printf ("size of a long long int: %lu byte(s)\n", sizedof(long long int));
printf ("size of a float: %lu byte(s)\n", sizedof(float));
return (0);
}
