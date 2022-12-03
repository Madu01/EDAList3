# include <stdio.h>

int main(void)
{
    int m = 0;
    int n = 0;
    int vetM[100];
    int vetN[100];
    char words[16] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};
    char oitavasDfinal[8];
    char quartasDfinal[4];
    char semifinal[2];
    char final[1];

    for (int i = 0; i <= 15; i++)
    {
        scanf("%d %d", &vetM[i] ,&vetN[i]);
    }

    for (int i = 0; i <= 16; i++)
    {
        if (vetM[i] > vetN[i])
        {
            oitavasDfinal[i] = words[i];
        }
        if (vetM[i] < vetN[i])
        {
            oitavasDfinal[i] = words[i+1];
        }
    }

    for (int i = 0; i <= 8; i++)
    {
        if (vetM[i] > vetN[i])
        {
            quartasDfinal[0] = words[i];
        }
    }

    for (int i = 0; i <= 4; i++)
    {
        if (vetM[i] > vetN[i])
        {
            quartasDfinal[0] = words[i];
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        if (vetM[i] > vetN[i])
        {
            result[0] = words[i];
        }
    }
  
}
