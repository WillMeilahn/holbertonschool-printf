#include <stdio.h>
#include <stdarg.h>

int main(void)
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
				case 's':
			{
				int arg = va_arg(args, int);
				_putchar(arg);
				break;
			}
				default:
			_putchar(format[i]);
			}
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(args);
}
