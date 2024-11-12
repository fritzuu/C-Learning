/*
int         (4 bytes) | %d for printing
double      (8 bytes) | %lf for printing
float       (4 bytes) | %f for printing
char        (1 byte) | % for printing
*/

#include <stdio.h>

int main(){
    double number = 10.8777; 
    float number1 = 17.9;
    printf("Number = %.2lf", number);
    printf("\nNumber1 = %.2f", number1);
    return 0;
}