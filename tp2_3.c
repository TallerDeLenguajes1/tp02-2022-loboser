#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int i,j;

int mt[N][M];
int *p = mt; 

int main(){
    srand(time(NULL));
    for(i = 0;i<N; i++)
    {
        printf("Fila %d: ", i);
        for(j = 0;j<M; j++)
        {
            *p = 1 + rand() % 100;
            printf("%d ", *p);
            p++;
        }
        printf("\n\n");
    }
    getchar();
    return 0;
}