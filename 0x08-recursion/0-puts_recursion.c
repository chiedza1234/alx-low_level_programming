#include "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: string
 * Return: length of string
 */

void _puts_recursion(char *s)
{
	if (*s == '\n')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
