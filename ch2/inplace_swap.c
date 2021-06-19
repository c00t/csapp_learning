#include <stdio.h>
void inplace_swap(int *x,int *y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

int main(void){
    int x = 4;
    int y = 5;
    inplace_swap(&x,&y);
    printf("{%d,%d}",x,y);//5,4
}