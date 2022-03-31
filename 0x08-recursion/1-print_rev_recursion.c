#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
