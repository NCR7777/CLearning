//
// Created by nachunrui at 21:50 of 2021/4/9.
//
#define printf __mingw_printf // 全局使用MinGW标准的printf函数进行输出，解决long double类型冲突
#include <stdio.h>

void chapter3() {
    // int x = 100;
    // printf("十进制：%d，八进制：%o，十六进制：%x", x, x, x);
    // printf("\n");
    // printf("十进制：%d，八进制：%#o，十六进制：%#x", x, x, x);

    // unsigned int un = 3000000000;
    // short end = 200;
    // long big = 65537;
    // long long veryBig = 12345678908642;
    // char a = '\a';
    // printf("un = %u and not %d" "\n", un, un);
    // printf("end = %hd and %d" "\n", end, end);
    // printf("big = %ld and not %hd" "\n", big, big);
    // printf("veryBig = %lld and not %ld" "\n", veryBig, veryBig);
    float a = 32000;
    double b = 2.14e9;
    long double c = 5.32e-5;
    printf("%f can be writen %e" "\n", a, a);
    printf("And it's %a in hexadecimal, power of 2 notation" "\n", a);
    printf("%f can be written %e" "\n", b, b);
    printf("%Lf can be written %Le" "\n", c, c, c);

}
