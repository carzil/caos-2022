#include <stdio.h>

int main() {
    printf("_Alignof(char) = %lu\n", _Alignof(char));
    printf("_Alignof(short) = %lu\n", _Alignof(short));
    printf("_Alignof(int) = %lu\n", _Alignof(int));
    printf("_Alignof(long) = %lu\n", _Alignof(long));
    printf("_Alignof(long) long = %lu\n", _Alignof(long long));
    printf("_Alignof(float) = %lu\n", _Alignof(float));
    printf("_Alignof(double) = %lu\n", _Alignof(double));
    return 0;
}
