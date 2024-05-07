#include <stdio.h>

int main ()
{
    int a;
    int b;
    int c;
    scanf("%d", &a );
    scanf("%d", &b );
    scanf("%d", &c);

    if((a+b>c) && (a+c>b) && (c+b>a))
    {
        printf("è un triangolo\n");
        if ((a==c) || (c==b) || (a==b))
        {
            printf("è isoscele\n");
        }
        else if ((a==c) && (c==b))
        {
            printf("è equilatero\n");
        }
        else
        {
            printf("è scaleno\n");
        }
    }
    else
    {
        printf("non è un triangolo\n");
    }
}