#include <stdio.h>

int main()
{
    int TAM = 50, cont = 0;
    char string[TAM];

    printf("Digite uma palavra ou frase: ");
    scanf("%[^\n]", string);

    for(int i = 0;i < TAM;i++){
        if(string[i] == '\0'){
            break;
        } else {
            cont++;
        }
    }

    printf("Caracteres string: %d", cont);
}