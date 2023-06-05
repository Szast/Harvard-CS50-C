#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //Verifica quantos argumentos possuem na linha de comando

    if (argc != 2)
    {
        printf("Assinale o Argumento\n");
        return 1;
    }
    else
    {
        //Verifica se o argumento não é um digito decimal

        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isdigit(argv[1][i]))
             {
                printf("./caesar key\n");
                return 1;
             }
        }
    }

    //Converter argv[1] em int

    int k = atoi(argv[1]);

    //Solicita texto ao usuário

    string p = get_string("Plaintext: ");

    printf("ciphertext:");

       //Verifica o tamanho da string
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        //Verificar se o caracter é alfabético e minúsculo e criptografa com o algoritmo de Cesar
        if (isalpha(p[i]) && islower(p[i]))
        {
            p[i] = p[i] - 97;
            int c = (p[i] + k) % 26;
            printf("%c", c + 97);
        }
        else if (isalpha(p[i]) && isupper(p[i]))
        {
            p[i] = p[i] - 65;
            int c = (p[i] + k) % 26;
            printf("%c", c + 65);
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");

}