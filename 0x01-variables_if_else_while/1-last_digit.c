#include<stdio.h>
/**
* main - A program that prints the last digit of the number stored in the variable n.
*Return: Always (0)
*/
int main(void)
{
int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

if ((n % 10) > 5)

{
printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if ((n % 10) < 6 && (n % 10)
{
printf("last digit of %d is %d and is lees  than 6 and not 0\n", n, n % 10);
}
else
{
printf("last digit of %d is %d and is 0\n", n, n % 10);
}
return (0);
}
~                                                                                                                                                                      
~                                                                                                                                                                      
~                                                i
