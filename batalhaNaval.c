#include <stdio.h>
int main()
{
    
    int tabuleiro[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            tabuleiro[i][j] = 0;      
            printf("(%d,%d) ", i, j); 
        }
        printf("\n");
    }
    printf("\n");
    
    tabuleiro[1][2] = 1; 
    tabuleiro[2][2] = 1; 
    
    tabuleiro[3][0] = 2; 
    tabuleiro[3][1] = 2; 
    tabuleiro[3][2] = 2; 
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", tabuleiro[i][j]); 
        }
        printf("\n");
    }
    printf("\n");
    
    printf("Navio 1 (Vertical):\n");
    printf("Parte 1: (1,2)\n");
    printf("Parte 2: (2,2)\n");
    printf("Navio 2 (Horizontal):\n");
    printf("Parte 1: (3,0)\n");
    printf("Parte 2: (3,1)\n");
    printf("Parte 3: (3,2)\n");
    printf("\n");


    int tabuleiro10x10[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro10x10[i][j] = 0;
        }
    }
    
    tabuleiro10x10[1][1] = 3; 
    tabuleiro10x10[1][2] = 3; 
    tabuleiro10x10[2][2] = 3; 
    tabuleiro10x10[4][5] = 3; 
    tabuleiro10x10[5][5] = 3; 
    tabuleiro10x10[6][5] = 3; 
    tabuleiro10x10[7][7] = 3; 
    tabuleiro10x10[8][8] = 3; 
    tabuleiro10x10[3][0] = 3; 
    tabuleiro10x10[3][1] = 3; 
    tabuleiro10x10[3][2] = 3; 
    tabuleiro10x10[3][3] = 3; 
    
    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro10x10[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("Navio 1:\n");
    printf("Parte 1: (1,1)\n");
    printf("Parte 2: (1,2)\n");
    printf("Parte 3: (2,2)\n");
    printf("Navio 2:\n");
    printf("Parte 1: (4,5)\n");
    printf("Parte 2: (5,5)\n");
    printf("Parte 3: (6,5)\n");
    printf("Navio 3 (Diagonal):\n");
    printf("Parte 1: (7,7)\n");
    printf("Parte 2: (8,8)\n");
    printf("Navio 4:\n");
    printf("Parte 1: (3,0)\n");
    printf("Parte 2: (3,1)\n");
    printf("Parte 3: (3,2)\n");
    printf("Parte 4: (3,3)\n");
    printf("\n");

    
    int cone[3][5] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j >= 2 - i && j <= 2 + i)
            {
                cone[i][j] = 1;
            }
        }
    }
    printf("Cone:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    int octaedro[6][5] = {0};
    for (int i = 0; i < 6; i++)
    {
        int mid = 2;
        int dist = (i <= 2) ? i : 5 - i - 1;
        for (int j = 0; j < 5; j++)
        {
            if (j >= mid - dist && j <= mid + dist)
            {
                octaedro[i][j] = 1;
            }
        }
    }
    printf("Octaedro:\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    int cruz[5][5] = {0};
    for (int i = 0; i < 5; i++)
    {
        cruz[i][2] = 1;
        if (i == 2)
        {
            for (int j = 0; j < 5; j++)
            {
                cruz[i][j] = 1;
            }
        }
    }
    printf("Cruz:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}