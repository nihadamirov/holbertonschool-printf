#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
/**
* struct print_st - print structure
* @type: format or type
* @function: right function to use
**/
typedef struct print_st
{
	char type;
	int (*function)();
} print_t;
int _printf(const char *format, ...);
int print_char(va_list x);
int print_string(va_list x);
int print_int(va_list x);
int _strlen(char *);
int _putchar(char c);
int print_perc(void);
int print_rev(va_list x);
int (*get_print(char type))(va_list);

#endif
