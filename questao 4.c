 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
    int vetor[10];       // Variáveis: vetor, indice e contador
    int indice, i;

    for(i=0; i<10; i++){ // Preencher o vetor
        printf("Digite um valor para o vetor: %d\n", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o indice do elemento que deseja retirar:"); // entrada do indice do vetor a ser retirado 
    scanf("%d", &indice);
    indice = indice-1; // correção para suportar valores de 1 a 10
    vetor[indice] ='\0'; // retirar o elemento do vetor
    
    for ( i=indice; i<=10; i++){  // desloca os elementos
        vetor[i]=vetor[i+1];
        }
    

    for(i=0; i<9; i++){ // Imprime o indice ao lado do vetor
        indice=i+1;
        printf("posicao %d | %d |\n", indice, vetor[i]);  
    }
    system("pause");
    return 0;
}
