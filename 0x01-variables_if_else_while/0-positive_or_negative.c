nclude <stdlib.h>
#include <time.h>
#include <stdio.h>
/* More headers goes there */

/**
 * main - entry point
 * Return: Always 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0))
		n = rand() - RAND_MAX /2;

	if(n < 0)
	{
		printf("%d is negative\n", n);
	}
	if(n == 0)
	{
		printf("%d is zer \n", n);
	}
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	return(0)
}


