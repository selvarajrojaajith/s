#include <stdio.h>
int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

    printf("\n evaluates to 1 if c is a lowercase vowal");
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    printf("\n evaluates to 1 (true) if c is an uppercase vowel");
   
   
    UppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    printf("\n evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;}
