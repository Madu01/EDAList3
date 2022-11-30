#include <stdio.h>
#include <stdlib.h>

int listResult[1000001];
int listInput[1000001];
int inputs = 0;
int cont = 0;
int resultF91 = 0;
int result = 0;
int N = 0;

int f91(int N) {
    
    if (N >= 101) 
    {
        result = N - 10;
    }

    if (N <= 100)
    {
        result = f91(f91(N+11));
    }
    return result;
}

int main () {

    while (10000 != 0) 
    {
        scanf(" %d", &N);
        listInput[cont] = N;

        if (N == 0)
        {   
            for (int i=0; i < inputs; i++)
            {
                printf("f91(%d) = %d\n", listInput[i], listResult[i]);
            }
            
            exit(0);
        }

        f91(N);
        listResult[cont] = result;
        cont++;
        inputs++;
    }  
    return 0;
}

