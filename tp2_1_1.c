#include <stdio.h>
#include <stdlib.h>

#define N 20

int i;
double vt[N];

int main(){
    srand(time(NULL));
    for(i = 0;i<N; i++)
    {
        vt[i] = 1 + rand() % 100;
        printf("%.0f\n", vt[i]);
    }
    getchar();
    return 0;
}
