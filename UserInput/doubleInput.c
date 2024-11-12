#include <stdio.h>

int main(){

    double number;
    char alpha;

    printf("insert double value :");
    scanf("%lf", &number);

    printf("insert char value :");
    scanf("\n%c", &alpha);

    printf("double : %.2lf", number);
    printf("\nchar : %c", alpha);
}