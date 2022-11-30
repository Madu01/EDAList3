/*
- quando um time ganha um jogo, ele recebe 3 pontos
- termina empatado, ambos os times recebem 1
- perdedor não recebe nenhum ponto. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nTeam; // num times 
    int nMatch;// num partidas
    char nameTeam[210][10];
    int point = 0;
    int vetPoints[1000];
    int result = 0;
    int resultDiv = 0;
    int num = 0;
    int numDraw = 0; // empates

    while(100 != 0)
    {
        scanf("%d %d", &nTeam, &nMatch);

        if((nTeam || nMatch) == 0)
        {
            printf("%d\n", numDraw);
        
            exit(0);
        }

        for (int i = 0; i < nTeam; i++)
        {
            scanf("%s %d", nameTeam[i], &vetPoints[i]);    
        }

        for (int i = 0; i < nMatch; i++)
        {
            resultDiv = vetPoints[i] % 3;
            if(vetPoints[i] != 1) {
                numDraw = resultDiv;
            }
        }

        for (int i = 0; i < nMatch; i++)
        {
            if(vetPoints[i] == 1) {
                result++;
            }
        }

        if (result > numDraw) 
        {
            numDraw = result - numDraw;
        }

        if (result < numDraw) 
        {
            numDraw = numDraw - result;
        }

    }
    return 0;
}
