#include <stdio.h>
#include <stdarg.h>

int _printf(char *format, ...)
{
	va_list args;
	va_start(args, format);

	for (int i=0; 
