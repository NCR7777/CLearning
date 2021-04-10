//
// Created by nachunrui at 21:50 of 2021/4/9.
//

#include <stdio.h>

void chapter3() {
    // int x = 100;
    // printf("十进制：%d，八进制：%o，十六进制：%x", x, x, x);
    // printf("\n");
    // printf("十进制：%d，八进制：%#o，十六进制：%#x", x, x, x);

    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long veryBig = 12345678908642;
    // char a = '\a';

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("veryBig = %lld and not %ld\n", veryBig, veryBig);

}
