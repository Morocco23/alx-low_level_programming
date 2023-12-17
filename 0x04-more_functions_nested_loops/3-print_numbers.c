#include "main.h"
/**
 * print_numbers-prints the numbers, from 0 to 9, followed by a new line
 * using only two putchar function
 * does not return anything
 */
void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar('0' + i)
	}
	putchar('\n')
}
