#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 0
 */

void times_table(void)
{
	int row, column, prod, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column < 10; column++)
		{
			prod = row * column;
			tens = prod / 10;
			ones = prod % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones * '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
