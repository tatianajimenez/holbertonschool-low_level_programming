#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Princiapl Function
 *
 * Return: Return 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n == 0)
{
printf("0 is zero\n");
}
else
{
if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is positive\n", n);
}
}
return (0);
}
