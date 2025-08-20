/*Rverse String 
INPUT: Demo
OUTPUT: omeD*/

#include<stdio.h>

void Reverse(char *str)
{
    char *p = str;
    while(*p != '\0')
    {
        p++;
     
    }
    p--;
    while(p >= str)
    {
        printf("%c\n",*p);
        p--;
    }
}
int main()
{
    char Arr[30];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}