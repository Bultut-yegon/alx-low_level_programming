#include <stdio.h>
/**
 * main - using a certain function to ouput sizes of data types
 * Return: 0 (very good)
 */
int main(void)
{
int j;
char r;
long int q;
long long int t;
float z;
printf("The size of integer is: %lu.byte(s)\n", (unsigned int)sizeof(j));
printf("The size of character is: %lu.byte(s)\n", (unsigned char)sizeof(r));
printf("The size of long integer: %lu.byte(s)\n", (unsigned long)sizeof(q));
printf("The size of L long integer: %lu.byte(s)\n", (unsigned long)sizeof(t));
printf("The size of float is: %lu.byte(s)\n", (unsigned int)sizeof(z));
return (0);
}
