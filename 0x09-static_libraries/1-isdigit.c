#include "main.h"

/**
 * _isdigit - check for a digit
 *
 * @c: ascii value to check
 *
 * Return: 1 if c is a digit, 0 for other
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
