#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 *
 * return : Always 0 (Success)
 */
int main(void)/*return value is always 0 (success)*/
{
int i;

for (i = 0; i < 10; i++)
{
printf("%d", i);
}
putchar('\n');
return (0);
}
