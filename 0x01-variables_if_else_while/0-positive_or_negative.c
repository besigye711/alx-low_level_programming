#include<stdio.h>
/**
* main - A program that prints if a number is positive , negative or 0
*Return: Always (0)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > o)
{
printf("%d is postive\n", n);
}
else if (n == 0)
{
printf("%d is a zero\n", n);
}
else
{
printf("%d is a negative\n", n);
}
return (0);
}
