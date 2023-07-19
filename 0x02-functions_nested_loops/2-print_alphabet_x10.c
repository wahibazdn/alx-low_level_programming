#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: void
 */

void print_alphabet_x10(void)

{
	char az;
	int  b = 0;
	
	while (b <= 9)	
	{
		for (az = 97; az <= 122; az++)
		{	
			_putchar(az);
		}
		_putchar('\n');
		b++;
	}
}
