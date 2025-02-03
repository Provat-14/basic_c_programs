#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char name[30];
    int age;

    // write file
    file = fopen("data.txt", "w"); 
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // input name & age
    printf("\nHello Programer..?!\n");
    printf("This is a simple C program that allows you to read and write files.\n\n");
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); 
    name[strcspn(name, "\n")] = '\0'; 

    printf("Enter your age: ");
    scanf("%d", &age);

    
    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    fclose(file);

    printf("\nData written in file successfully!\n");

    // Read file
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

   
    char line[100];
    printf("Reading data from file:\n\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
    printf("\nEnjoy your code!!!\n");

    return 0;
}
