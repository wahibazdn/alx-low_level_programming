#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char az;

	for (az = 97; az <= 122; az++)
		_putchar(az);
	_putchar("\n");
	return (0);
}
