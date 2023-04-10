#include "main.h"

/**
 * print_binary - A function that prints the binary representation of q.
 * @q: The number to print
 */

void print_binary(unsigned long int q)
{
	if (q > 1)
	{
		print_binary(q >> 1);
	}

	_putchar((q & 1) + '0');
}
