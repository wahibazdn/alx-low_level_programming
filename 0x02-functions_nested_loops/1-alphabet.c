#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char az;

	for (az = 97; az <= 122; az++)
		_putchar(az);
	_putchar('\n');
}
