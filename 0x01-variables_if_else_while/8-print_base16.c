#include <stdio.h>

/**
 * main - Prints a hexadecimal string
 *
 * Return : always o (success)
 */
int main(void)
{
char c;

for (c = '0'; c <= 'f'; c++)
{
	putchar(c);
}

for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}

putchar('\n');

return (0);
}
