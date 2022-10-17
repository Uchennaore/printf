#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int check_formatter(va_list args, const char *format, print_a_t print_a[])

/**
 * check_formatter - a function checks if the character pointer 
 * is NULL
 * @args: a pointer that is initiated by va_list
 * @format: a pointer variable that points to _printf
 * @_printf: the array of structs that is initiated in the _printf function
 *
 * Return: 0. else return number of characters printed
 */
int _printf(const char *format, ...)
