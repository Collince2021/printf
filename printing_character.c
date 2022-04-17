#include "main.h"
/**
 * print_character - print the character  to stdout
 * @c:character to be printed
 * Return:When success 1 is returned.
 * When there is an error
 * -1 is returned, and erorr number is set.
 */
int print_character(char c)
{
	return (write(1, &c, 1));
}
