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
printf("Size of an char: %lu byte(s)\n", (unsigned int)sizeof(r));
printf("Size of a int: %lu byte(s)\n", (unsigned char)sizeof(j));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(q));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("Size of a float: %lu byte(s)\n", (unsigned int)sizeof(z));
return (0);
}
