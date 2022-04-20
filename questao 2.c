#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[30];
    int i, p, diferentes = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    p = strlen(palavra);
    p --;  // ultima posição da string (vetor)
    i = 0; // primeira posição da string (vetor)

    while(p >= i){
        if(palavra[i] != palavra[p]) // conta as letras diferentes
            diferentes ++;
        i++;
        p--;
    }

    if(diferentes == 0)
        printf("\n %s e palindroma...\n", palavra);
    else
        printf("\n %s nao e palindroma...\n", palavra);

    system("pause");
    return 0;
}