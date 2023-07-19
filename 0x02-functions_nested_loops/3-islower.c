#include "main.h"

/**
 * _islower - entry point
 * @c: the lowercase char
 * Return: if c is lowercase then 1, otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else 
		return (0);
}
