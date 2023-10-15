#ifndef MAIN_H
#define MAIN_H




#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list c);
int my_print_string(va_list s);
int to_print_int(va_list i);
int _print_dec(va_list d);

/**
  * struct _code_format - Struct format
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct _code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif
