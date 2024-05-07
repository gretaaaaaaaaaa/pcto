#include <stdio.h>

int main ()
{
    int annodinascita;
    scanf("%d", &annodinascita );
    if(annodinascita < 1969)
    {
        printf("DIFFERENZA: %d\n", 1969 - annodinascita);
    }
      else if(annodinascita > 1969)
    {
        printf("DIFFERENZA: %d\n", annodinascita - 1969);
    }
    else 
    {
        printf(" STESSO ANNO\n");
    }
}