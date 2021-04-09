#include <stdio.h>

void one_three();
void two();

void chapter3();

int main(void) {
    printf("Starting now\n");
    one_three();
    printf("Done!\n");
    chapter3();
    return 0;
}

void one_three(){
    printf("One\n");
    two();
    printf("Three\n");
}

void two(){
    printf("Two\n");
}
