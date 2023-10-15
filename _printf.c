#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
  * find_function - function that finds formats for _printf
  * calls the corresponding function.
  * @format: format (char, string, int, decimal)
  * Return: NULL or function associated ;
  */
int (*find_function(const char *format))(va_list)
{
	unsigned int c = 0;
	code_f find_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{NULL, NULL}
	};

	while (find_f[c].sc)
	{
		if (find_f[c].sc[0] == (*format))
			return (find_f[c].f);
		c++;
	}
	return (NULL);
}
/**
  * _printf - function that produces output according to a format.
  * @format: format (char, string, int, decimal)
  * Return: size the output text;
  */
int _printf(const char *format, ...)
{
	va_list ap;
	int (*f)(va_list);
	unsigned int x = 0, cprint = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[x])
	{
		while (format[x] != '%' && format[x])
		{
			_putchar(format[x]);
			cprint++;
			x++;
		}
		if (format[x] == '\0')
			return (cprint);
		f = find_function(&format[x + 1]);
		if (f != NULL)
		{
			cprint += f(ap);
			x += 2;
			continue;
		}
		if (!format[x + 1])
			return (-1);
		_putchar(format[x]);
		cprint++;
		if (format[x + 1] == '%')
			x += 2;
		else
			x++;
	}
	va_end(ap);
	return (cprint);
}
