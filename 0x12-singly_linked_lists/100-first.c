#include "lists.h"

void _constructor(void) __attribute__ ((contructor));

/**
 * _constructor - executes before main()
 *
 * Return:void
 */
void _constuctor(void)
{
	print("you're breat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
