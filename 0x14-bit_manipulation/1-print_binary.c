#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @x: The number to be printed in binary.
 */

void print_binary(unsigned long int x)
{
	if (x > 1)
		print_binary(x >> 1);

	_putchar((x & 1) + '0');
}
