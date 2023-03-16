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
printf("size of int: %lu byte(s)\n", (unsigned int)sizeof(j));
printf("size of char: %lu byte(s)\n", (unsigned char)sizeof(r));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(q));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("size of float: %lu byte(s)\n", (unsigned int)sizeof(z));
return (0);
}
