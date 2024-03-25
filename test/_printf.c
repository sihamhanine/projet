#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - Function that print a string
 *
 * @format: the specifier character
 *
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
  match m[] = {
    {"%c", print_char},
    {"%s", print_str},
    {"%", print_percent}
  };

  va_list argc;
  int i, j, lent = 0;
  va_start(argc, format);
  if (format == NULL || (format[0] == '%' && format[1] == '\0'))
    {
      return (-1);
    }
      while (format[i] != '\0')
	{
	  for (j = 0 ; j >= 0 ; j++)
	    {
	      if ((m[j].id[0] == format[i]) && (m[j].id[1] == format[i + 1]))
		{
		  lent = lent + m[j].f(argc);
		  i = i + 2;
		}
	    }
	  _putchar(format[i]);
	  i++;
	  lent++;
	}
      va_end(argc);
      return (lent);
      }
      
