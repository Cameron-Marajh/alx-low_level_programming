#include <stdio.h>
#include <stdlib.h>
/**
*main- Main contain statement and loop
*Return: return 0;
*/
int main(void)
{
int x;
for (x <= 1; x <= 89; x++)
{
putchar((x % 10) + '0');
putchar((x / 10) + '0');
if (x != 89)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
