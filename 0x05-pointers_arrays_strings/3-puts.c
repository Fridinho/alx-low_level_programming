#include "main.h"

/**
 * _puts - prints a string, following by a new line, to stout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
