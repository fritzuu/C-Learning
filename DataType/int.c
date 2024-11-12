/*
int         (4 bytes) | %d for printing
double      (8 bytes) | %lf for printing
float       (4 bytes) | %f for printing
char        (1 byte) | % for printing
*/

#include <stdio.h>

int main(){
    int age =10;
    printf("Age = %d", age);
    return 0;
}