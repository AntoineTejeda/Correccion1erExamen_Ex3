#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 4
void LlenaMatriz(int Matriz[N][M]);
void SumaVecinos(int Matriz[N][M], int Matriz2[N][M]);
void Imprime(int Matriz2[N][M]);
int main()
{
    int Matriz[N][M],Matriz2[N][M];
    LlenaMatriz(Matriz);
    Imprime(Matriz);
    printf("\n");
    SumaVecinos(Matriz,Matriz2);
    Imprime(Matriz2);
}

void LlenaMatriz(int Matriz[N][M])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&Matriz[i][j]);
        }
    }
}

void SumaVecinos(int Matriz[N][M], int Matriz2[N][M])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            if(i+1>0&&j+1>0&&i-1>=0&&j-1>=0)
            {
                Matriz2[i][j]=Matriz[i][j]+Matriz[i][j+1]+Matriz[i+1][j]+Matriz[i-1][j]+Matriz[i][j-1];
            }
            if(i==N-1&&j==0)
            {
                Matriz2[i][j]=Matriz[i][j]+Matriz[i][j+1]+Matriz[i-1][j];
            }
            if(i==N-1&&j==M-1)
            {
                Matriz2[i][j]=Matriz[i][j]+Matriz[i][j-1]+Matriz[i-1][j];
            }
            if(j==M-1&&i==0)
            {
                Matriz2[i][j]=Matriz[i][j]+Matriz[i][j-1]+Matriz[i+1][j];
            }
            if((i>0&&i<N-1)&&j==0)
            {
                Matriz2[i][j]=Matriz[i][j]+Matriz[i+1][j]+Matriz[i-1][j]+Matriz[i][j+1];
            }
            if((i>0&&i<N-1)&&j==M-1)
            {
                Matriz2[i][j]=Matriz[i][j]+Matriz[i+1][j]+Matriz[i-1][j]+Matriz[i][j-1];
            }
            if((j>0&&j<M-1)&&i==0)
            {
                Matriz2[i][j]=Matriz[i][j]+Matriz[i][j-1]+Matriz[i][j+1]+Matriz[i+1][j];
            }
            if((j>0&&j<M-1)&&i==N-1)
            {
                Matriz2[i][j]=Matriz[i][j]+Matriz[i][j-1]+Matriz[i][j+1]+Matriz[i-1][j];
            }
        }
    }
}

void Imprime(int Matriz2[N][M])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("%d\t",Matriz2[i][j]);
        }
        printf("\n");
    }
}
