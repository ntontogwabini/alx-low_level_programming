#include "main.h"

/**
 * binary_to_uint -A function that converts a binary number to unsigned int
 * @b: pointer to character array
 * Description: convert a bin to unsigned int
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		num = num << 1;
		num += (*b - '0');
	}

	return (num);
}

