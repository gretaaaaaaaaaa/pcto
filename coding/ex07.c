#include <stdio.h>

int main()
{
    int limite;
    int eta;
    
    limite=18;
    printf("%d\n", limite);
    scanf("%d", &eta);

    if (limite > eta)
    {
        printf("minorenne\n");
    }
    else if(limite == eta)
    {
        printf("vabene\n");
    }
    else if(limite < eta)
    {
        printf("maggiorenne\n");
    }
}