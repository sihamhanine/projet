#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct format{
  char *id;
  int (*f)();
} match;

int _putchar(char c);
int print_char(va_list argc);
int print_str(va_list argc);
int print_percent(void);
int _printf(const char *format, ...);

#endif
