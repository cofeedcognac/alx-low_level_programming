#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for uppercase and 0 for others
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
