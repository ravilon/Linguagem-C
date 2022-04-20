#include <stdio.h>
#include <stdlib.h>

int main(){
int seres, rest, metade, dias, mdia, mtotal, i;         // Variaveis 
dias=0;
rest=0;
mdia=0;
mtotal=0;

printf("Quantos seres tem nesse universo?");       // Entrada do numero de seres a serem atacados pelo homem roxo 
scanf("%d", &seres);

rest = seres;     // seres restantes              
metade = seres/2; // metade dos seres

do
    {
    mdia = rest/15;         // mortos no dia
    rest = rest - mdia;     // seres restantes
    mtotal = mtotal + mdia; // total de mortos 
    dias++;                 // contador de dias passados  /* code */
    printf("ao fim do dia %d restaram %d e morreram hoje %d. Ao todo %d\n", dias, rest, mdia, mtotal); // Porque fizeste isso thanos?
    } while (metade>=mtotal);
    system("pause");
    return 0;
}
