#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
		x *= -1;

	_putchar(x + '0');

	return (x);
}
