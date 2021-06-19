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
void test_show_bytes(int val){
    int ival = val;
    float fval = (float) val;
    int* pval = &val;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}
int main(void){
    // 可以发现，也是小端序的
    test_show_bytes(1);
    return 0;
}
