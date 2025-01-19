#include <stdio.h>

int main(void) {

    char operation[10];
    double num1, num2;

    printf("========================================\n");
    printf("Calculator App!\n\n");
    
    while (1) {
        printf("Enter the calculation:\n");
        scanf("%lf", &num1);
        scanf(" %c", &operation);
        scanf("%lf", &num2);
        //5 + 7
        printf("%lf\n", num1);
        printf("%c", operation);
        printf("%lf", &num2);
        break;
    }

    printf("\n========================================\n");
    return 0;
}