#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    printf("Check 0\n");
    printf("Check 1\n");
    printf("Check 2\n");
    printf("Check 3\n");
    printf("Check 4\n");
    printf("Check 5\n");
    printf("Check 6\n");
    printf("Check 7\n");

    printf("Requirement success\n");
    printf("Requirement fail\n");
    printf("Code success\n");
    printf("Code fail\n");
    printf("Efficiency success\n");
    printf("Efficiency fail\n");
    printf("Text answer success\n");
    printf("Text answer fail\n");

    printf("Skipped - Previous check failed\n");

    printf("Infinite loop incoming :(\n");
    i = 0;
    /*
    while (i < 10)
    {
        putchar(i);
    }
    */
    printf("Infinite loop avoided! \\o/\n");
    
    return (0);
}
