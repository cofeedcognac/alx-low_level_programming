#include "main.h"
/**
 * main - Print -putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "-putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
