#include "main.h"
/**
 * printf_num_bin - converts unsigned int to a binary number.
 * @fig: arguments.
 * Return: 1.
 */
int printf_num_bin(va_list fig)
{
	int flag = 0;
	int cont = 0;
	int x, a = 1, y;
	unsigned int num = va_arg(fig, unsigned int);
	unsigned int z;

	for (x = 0; x < 32; x++)

	{
		p = ((a << (31 - x)) & num);
		if (z >> (31 - x))
			flag = 1;
		if (flag)
		{
			y = z >> (31 - x);
			_putchar(y + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
