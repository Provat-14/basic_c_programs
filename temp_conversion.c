#include <stdio.h>

int main() {
    int choice;
    float temp, convertedTemp;

    printf("Temperature conversion menu.\n");
    printf("1. Fahrenheit to Celsius.\n");
    printf("2. Celsius to Fahrenheit.\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter your Fahrenheit temperature: ");
            scanf("%f", &temp);
            convertedTemp = (temp - 32) / 1.8;
            printf("Celsius Temperature: %.1f\n", convertedTemp);
            break;

        case 2:
            printf("Enter your Celsius temperature: ");
            scanf("%f", &temp);
            convertedTemp = (temp * 1.8) + 32;
            printf("Fahrenheit Temperature: %.1f\n", convertedTemp);
            break;

        default:
            printf("Please select a valid option (1 or 2).\n");
            break;
    }

    return 0;
}
