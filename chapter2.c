//
// Created by nachunrui at 1:09 of 2021/4/10.
//
#include <stdio.h>

void one_three();
void two();

void chapter2(void) {
    printf("Starting now\n");
    one_three();
    printf("Done!\n");
}

void one_three(){
    printf("One\n");
    two();
    printf("Three\n");
}

void two(){
    printf("Two\n");
}
