#include <stdio.h>

typedef unsigned char* byte_pointer;
// use size_t as length type
void show_bytes(byte_pointer start,size_t len){
    for(int i=0;i<len;i++){
        printf("%.2x",start[i]);
    }
    printf("\n");
}
void show_int(int x){
    show_bytes((byte_pointer) &x,sizeof(int));
}
void show_float(float x){
    show_bytes((byte_pointer) &x,sizeof(x));
}
void show_pointer(void* x){
    show_bytes((byte_pointer) &x,sizeof(void*));
}

int main(void){
    int s_a = -20000;
    int shift_s_a = s_a >> 4;
    show_int(shift_s_a);//apple gcc default is arch.
    int s_b = 0xFECDBA98;
    int shift_s_b = s_b << 32;
    show_int(shift_s_b);
}