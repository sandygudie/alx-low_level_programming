#include "main.h"
/**
 * print_alphabet - Display alphabets in lower case
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
