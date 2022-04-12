#include <stdio.h>
#include "main.h"

/**
 * main - print_alphabet
 */

void print_alphabet(void)
{
	char d;

	for(d = 'a'; d <= 'z'; d++)
		putchar(d);
	putchar('\n');
}
