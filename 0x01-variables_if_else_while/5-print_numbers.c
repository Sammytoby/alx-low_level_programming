#include <stdio.h>
/**
 * main - Entry point
 *
 */
int main(void)
{
	char numb10;

	numb10 = '0';

	while (numb10 <= '9')
	{
		putchar(numb10);
		++numb10;
	}
	putchar('\n');

	return (0);
}
