#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabets
 * written by favour chima
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int repeat = 0;
	char letter;

	while (repeat < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	repeat++;
	}
}
