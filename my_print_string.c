#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * my_print_string - writes the character c to stdout
 * @s: The string to print
 *
 * Return: 1.
 */
int my_print_string(va_list s)
{
	char *my_string;
	int  c = 0;

	my_string = va_arg(s, char *);
	if (my_string == NULL)
		my_string = "(null)";
	while (my_string[c])
	{
		_putchar(my_string[c]);
		c++;
	}
	return (c);
}
