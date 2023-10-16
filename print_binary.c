#include "main.h"
/**
 * print_binary - converts to binary
 * @b: argument
 *
 * Return: integer
 */
int print_binary(va_list b)
{
	int flag = 0;
	int count = 0;
	int i, a = 1, k;
	unsigned int num  = va_arg(b, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			k = p >> (31 - i);
			_putchar(k + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
