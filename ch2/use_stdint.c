#include <stdint.h>
#include <stdio.h>

int main(void){
    int32_t x = 6;
    int64_t y = 8;
    int16_t z = 10;
    //don't have `PRIu32` like things.
    //printf("int16:%" PRId16 " int32:%" PRId32 " int64:%" PRId64 "\n" , z , x , y);
    printf("%d,%lld,%d\n",x,y,z);

    // cast from signed to unsigned
    short m = -1;
    unsigned short um = (unsigned short) m;
    printf("m=%d,sm=%u\n",m,um);
}