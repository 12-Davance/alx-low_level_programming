#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Alx School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Alx ", "School !!!", 16);
    printf("%s\n", concat);
    free(concat);
    return (0);
}