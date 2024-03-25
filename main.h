#ifndef "MAIN_H"
#define "MAIN_H"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int print_char(va_list argc);
int print_str(va_list argc);
int print_percent(va_list argc);
_printf(const char *format, ...);

#endif
