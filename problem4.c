#include <stdio.h>

/*
 * This program takes a string as input and counts the number of vowels (a, e, i, o, u)
 * in the string using pointers and a loop.
 */
int countVowels(char *str)
{
    int count = 0;
    char *ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
        {
            count++;
        }
        ptr++;
    }

    return count;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int vowelCount = countVowels(str);
    printf("The number of vowels in the string is: %d\n", vowelCount);

    return 0;
}