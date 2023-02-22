#include "main.h"

/**
 * main - main function
 * _putcher: print the alphabets putcher
 * Return: always 0
 */

int main(void)
{
char c[9] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}
