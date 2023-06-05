#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string texto = get_string("Digite o Texto: ");

   int letras = 0;
   int palavras = z;
   int car;
   int frases = 0;


    for (car = 0; car < strlen(texto); car++)
    {
        if (texto[car] == ' '){
            palavras++;

        }

        else if (texto[car] == '.' || texto[car] == '?' || texto[car] == '!'){
            frases++;

        }

        else
        {
        letras++;
        }


    }


   float L = letras * 100 / palavras;
   float S = frases * 100 / palavras;

   float indice = 0.0588 * L - 0.296 * S - 15.8;




    if (indice >= 16 ){
        printf("Grade 16+");
    }
    else if (indice < 1){
        printf("Before Grade 1");
    }
    else {
        printf("Grade %i\n", (int)indice);
    }
   return(0);




    printf("\n");
}