#include <stdio.h>
#include <stdarg.h>

void printchar.c

{
	va_list args;
	va_start(args, format);

	for (int i = 0; format[i] != '\0'; ++i)
	{
		if (format[i] == '%')
		{
			++i;

			switch (format[i])
			{
				case 'c':
			{
				int arg = va_arg(args, int);
				_putchar.c(arg);
				break;
			}
				default:
			_putchar.c(format[i]);
			}
		}
		else
		{
			_putchar.c(format[i]);
		}
	}
	va_end(args);
}
