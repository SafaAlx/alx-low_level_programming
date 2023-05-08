#include "main.h"

/**
 * *_memset - fill memory whit a constant byte
 * @s: poiter to put the constant
 * @b: constant
 * @n: max bytes to use
 *
 * return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}