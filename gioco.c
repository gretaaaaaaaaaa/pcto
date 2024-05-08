#include <stdio.h>

int main()
{
    int voto;
    int min = 6;
    int risposta;
    int materia;
    int risultato;

 printf("inserisci nome utente:");
    char  nomeutente[ 50 ];
scanf("%s", nomeutente);

printf("sei pronto per gli esami(si/no)?\n");
scanf("%s", risposta);
if( risposta = si )
    {
    printf("allora cominciamo\n");
    printf("quanto prenderai all'esame di matematica?:");
    scanf("%d", &voto);
    if(voto < min)
    {
        printf("sei stato bocciato, ritenta l'anno prossimo");
    }
    else
     {
        printf("bravissimo, ora continua a studiare\n");
        printf("quale materia scegli ora?");
        scanf("%d", &materia);
        printf("sei sicuro di voler procedere(si/no)?\n");
            if( risposta= si )
            {
                printf("allora ci vediamo tra un'ora e mezza!\n");
                printf("un'ora e mezza dopo...\n");
                printf("com'è andata(bene/male)?\n");
                scanf("%d" &risultato);
                if
                
            }


    }
if(risposta= no)
{
    printf("e allora cosa aspetti? studia!!!");
}

    
















}
