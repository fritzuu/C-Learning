#include <stdio.h>

int main(){

    double number;
    char alpha;

    printf("insert input values :");
    scanf("%lf %c", &number, &alpha);


    printf("double : %.2lf", number);
    printf("\nchar : %c", alpha);
}