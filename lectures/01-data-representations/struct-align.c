#include <stdio.h>
#include <stddef.h>

struct A {
    int in;
    long long ll;
    char ch;
};

int main() {
    printf("sizeof(A) = %zd\n", sizeof(struct A));
    printf("sizeof(char) + sizeof(long long) + sizeof(int) = %zd\n", sizeof(char) + sizeof(long long) + sizeof(int));

    printf("offset of ch = %zd\n", offsetof(struct A, ch));
    printf("offset of ll = %zd\n", offsetof(struct A, ll));
    printf("offset of in = %zd\n", offsetof(struct A, in));

    printf("_Alignof(struct A) = %zd\n", _Alignof(struct A));
    return 0;
}
