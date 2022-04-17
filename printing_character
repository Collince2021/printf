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
	function_converting list_of_functions[] = {
		{"c", printing_character},
		{"s", printing_string},
		{"%", printing_percent_specifier},
		{"d", printing_int},
		{"i", printing_int},
		{"b", printing_in_binary},
		{"r", printing_reverse},
		{"R", rot_13_ed_string},
		{"u", _unsigned},
		{"o", printing_in_octal_system},
		{"x", printing_in_hexadecimal_system},
		{"X", printing_All},
		{NULL, NULL}
	};
	va_list list_of_arguements;

	if (format == NULL)
		return (-1);

	va_start(list_of_arguememts, format);
	printed_chars = parser(format, list_of_functions, list_of_arguements);
	va_end(list_of_arguements);
	return (print_characters);
}
