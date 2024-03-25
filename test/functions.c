#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _putchar - Function that print a character
 *
 * @c: the character to print
 *
 * Return: number of byte
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}

/**
 * print_char - Function that print character
 *
 * @argc: the number of argument
 *
 * Return: the number of byte
 */
int print_char(va_list argc)
{
  char c;
  c = va_arg(argc, int);
  _putchar(c);
    return (1);
}

/**
 * print_str - Function that print a string
 *
 * @argc: the number of argument
 *
 * Return: number of caractere
 */
int print_str(va_list argc)
{
  int i, count = 0;
  char *str;
  str = va_arg(argc, char*);
  if (str == NULL)
    {
      str ="(null)";
      count = count + 6;
    }
  for (i = 0 ; str[i] != '\0' ; i++)
    {
      _putchar(str[i]);
      count++;
    }
  return (count);
}

/**
 * print_percent - Function that print percent
 *
 * @void: fonction sans argument
 *
 * Return: number of character
 */
int print_percent(void)
{
  _putchar('%');
  return (1);
}
