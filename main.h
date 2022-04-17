#ifndef LCPRINT_FUNCTION
#define LCPRINT_FUNCTION
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* struct class_sy - A class that stores symbols and functions
* @oper: The operator
* @function: Used funcyion
*/
struct class_sy
{
	char *oper;
	int (*function)(va_list);
};
typedef struct class_sy function_converting;
int reader(const char *format, function_converting lis_of_functions[], va_list list_list_of_arguements);
int _printf(const char *format, ...);
int _printing_character(char);
int printing_character(va_list);
int printing_string(va_list);
int printing_percent_specifier(va_list);
int printing_int(va_list);
int print_num(va_list);
int printing_in_binary(va_list);
int print_reverse(va_list arguement);
int rot_13_ed_string(va_list);
int _unsigned(va_list);
int printing_in_octal_system(va_list array);
int printing_hexadecimal_system(va_list array);
int printing_all_hexadecimal(va_list array);
unsigned int length_of_base(unsigned int, int);
char *reverse_string(char *);
void writing_the_bas(char *string);
char *memorycopy(char *destination, char *source, unsigned int n);
int printing_unsgined_integer(unsigned int);
#endif
