#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int s;
    int i;
    int sum = 0, temp;

    printf("Enter a string to reverse\n");
    scanf("%d", &s);
    temp = s;
    while (s > 0)
    {
        i = s % 10;
        sum = sum * 10 + i;
        s /= 10;
    }
    if (temp == sum)
    {
        printf("%d palindrome number", temp);
    }
    else
    {
        printf("%d not palindrome nmber", temp);
    }
    return 0;
}