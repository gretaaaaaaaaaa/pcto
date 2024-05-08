#include <stdio.h>

int main()
{
    int voto;
    int min=6;

scanf("%s", &voto);
 printf("inserisci nome utente:");
    char  nomeutente[ 50 ];
scanf("%s", nomeutente);

printf("quanto prenderai all'esame di matematica?:");
    char  voto[ 50 ];
scanf("%d", &voto);
if(voto<min)
{
    printf("sei tato bocciato, ritenta l'anno prossimo");
}
if(voto>min)
 {
    printf("bravissimo! sostieni i prossimi esami");
 }
















}