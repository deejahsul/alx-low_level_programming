#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main
 * Return
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n < 0)
	{
		printf("%d is negative\n",
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n",
	}
	return (0);
}
