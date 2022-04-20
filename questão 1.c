 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>


 int main(){
    // variáveis
    char frase[200],letra; // vetor que vai receber a frase a ser analisada
    int i,j, total; // contadores
    total=0;
    // entrada
    printf("Digite a frase: \n");
    gets(frase);
    printf("Digite o caracter a ser buscado: \n");
    scanf("%c", &letra);
    j=strlen(frase);
    // contagem do numero de caracteres presentes em frase
    for(i=0;i<j;i++)
    {
        if(frase[i]==letra)
        {
        total++;
        }
    }
    // exibir resultado
    printf("O numero de caracteres %c encontrado na frase foi de: %d\n", letra, total);
    system("pause");
    return 0;
 }