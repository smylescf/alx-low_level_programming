#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: integer to be checked
 * Return: 1 if n > 0, 0 if n = 0, -1 if n < 0
 * written by favour chima
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return(1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return(-1);
		_putchar('-');
	}
	else
	{
		return(0);
		_putchar(0);
	}
}
