#include "main.h"

/**
 * main - print_alphabet - prints every character of the alphabet
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
