#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: series of number -- 10 times
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b >= 10)
			{
				putchar(b / 10 + '0');
			}
			putchar(b % 10 + '0');
		}
		putchar('\n');
	}
}
