#include "main.h"
/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int print_characters;
	function_converting ls_of_f[] = {
		{"c", printing_character},
		{"s", printing_string},
		{"%", printing_percent_specifier},
		{"d", printing_int},
		{"i", printing_int},
		{"b", printing_in_binary},
		{"r", print_reverse},
		{"R", rot_13_ed_string},
		{"u", _unsigned},
		{"o", printing_in_octal_system},
		{"x", printing_hexadecimal_system},
		{"X", printing_all_hexadecimal},
		{NULL, NULL}
	};
	va_list ls_arg;

	if (format == NULL)
		return (-1);

	va_start(ls_arg, format);
	print_characters = reader(format, ls_of_f, ls_arg);
	va_end(ls_arg);
	return (print_characters);
}
