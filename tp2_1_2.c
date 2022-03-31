#include <stdio.h>
#include <stdlib.h>

#define N 20

int i;
double vt[N];
double *p = vt; 

int main(){
    srand(time(NULL));
    for(i = 0;i<N; i++)
    {
        *p = 1 + rand() % 100;
        printf("%.0f\n", *p);
        p++;
    }
    getchar();
    return 0;
}
