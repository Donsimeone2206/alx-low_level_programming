#include "main.h"
#include<stdio.h>
/**
 *jack_bauer - a function that prints every minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59.
 *
 *Return: On success 1.
 */
void jack_bauer(void)
{
	int a = 0, b = 0, c = 0, d = 0;
	int n = 9;

	for (a = 0; a <= 2 ; a++)
	{
		if (a == 2)
			n = 3;
		for (b = 0; b <= n; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
			}

		}
	}
}
