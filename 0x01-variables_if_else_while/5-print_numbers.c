#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 * Description: 'main value prints single digits in number bases'
 * Retrun: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
