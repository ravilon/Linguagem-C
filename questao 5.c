 #include <stdio.h>
 #include <stdlib.h>

int main(){
int l, c, bombas;          // contadores
bombas=0;
int matriz[5][5] = {{0, 1, 1, 0, 0},
                    {0, 0, 0, 1, 0},
                    {1, 1, 0, 1, 0},
                    {0, 1, 0, 0, 0},
                    {1, 1, 0, 0, 0}};

for(i=0; i<5; i++){ // para as linhas
    for(j=0; l<5; c++){ // para as colunas 
            if (matriz[l][c] == 1)
            {
            bombas++;    // contador de bombas
            }
        }
     }
    printf("foram encontradas %d bombas \n", bombas);       // bombas encontradas
    
    system("pause");
    return 0;
}

