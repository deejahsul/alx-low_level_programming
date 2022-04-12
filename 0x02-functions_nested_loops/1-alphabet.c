#include <stdio.h>
#include "main.h"

/**
 * main - print_alphabet - prints every character of the alphabet
 */

void print_alphabet(i)
{
 	for (int i = 'a'; i<= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

/**
 * main - main function
 * Return; always 0
 */
int main(void)
{
	print_alphabet('i');
	return (0);
}
