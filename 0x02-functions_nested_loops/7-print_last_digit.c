#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be worked on
 * Return: the value of the last digit
 *
 */

int print_last_digit(int n)
{
	int last;
	
	last = n % 10;
	if  (n < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
