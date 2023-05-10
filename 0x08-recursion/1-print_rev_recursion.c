#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @s: The string to print
 *
 * Return: Nothing.
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
