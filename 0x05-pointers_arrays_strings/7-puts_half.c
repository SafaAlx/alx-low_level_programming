#include "main.h"

/**
 * puts_half - prints every character of a string
 * @str: char array string type
 * Description: if odd number of chars, print (length - 1) / 2
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
