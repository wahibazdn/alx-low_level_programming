#include "main.h"

/**
 * _isalpha - entry point
 * @c: alpha character
 * Return: if char is a letter then 1. otherwise 0
 */

int _isalpha(int c)

{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
