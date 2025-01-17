#include <stdio.h>

int main(void) {
    double fahrenheitInput = 0;
    double celsiusResult = 0;
    char continueInput = 'y';
     

    printf("\n==============================\n");
    printf("Convert Fahrenheit to Celsius!\n");

    
    while(continueInput == 'y') {
        printf("Type in the temperature in Fahrenheit: \n");
        scanf("%lg", &fahrenheitInput);
        //printf("You entered %lg degrees F.\n", fahrenheitInput);
        // (F - 32) * (5/9) = C
        celsiusResult = (fahrenheitInput - 32.0) * (5.0)/(9.0);
        printf("%lg°F -> %lg°C.\n", fahrenheitInput, celsiusResult);

        printf("Do you want to convert another temperature? (y/n)\n");
        scanf(" %c", &continueInput);
    }
    printf("\n==============================\n\n");
    return 0;
}