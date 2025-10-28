#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("\t%d as an integer\n", 269);
    printf("\t%.2f as a float\n", 14.95);
    printf("\t%s as a string\n", "Launchpad");
    printf("\t%c as a character\n", '!');
    printf("Practice using printf()\n");
    printf("ESET %d\n", 269);
    printf("%c coding. %.2f weeks to go\n", 'C', 14.95);
    printf("%s\n", "Launchpad");
    printf("%c\n", '!');
	
		char first_initial, last_initial;
		int favorite_number;
		float decimal_number;
		printf("\nEnter your first initial: ");
		scanf(" %c", &first_initial);
		printf("You entered: %c\n", first_initial);
		printf("Enter your last initial: ");
		scanf(" %c", &last_initial);
		printf("You entered: %c\n", last_initial);
		printf("Enter your favorite integer: ");
		scanf("%d", &favorite_number);
		printf("You entered: %d\n", favorite_number);
		printf("Enter a decimal number: ");
		scanf("%f", &decimal_number);
		printf("You entered: %.2f\n", decimal_number);
		printf("You are:\n%c %c\nYou entered:%d and %.2f\n", first_initial, last_initial, favorite_number, decimal_number);


		char first_name[100], last_name[100];
		int age;
		printf("\nEnter your first name: ");
		scanf("%s", &first_name);
		printf("\nYou entered: %s", first_name);
		
		printf("\nEnter your last name: ");
		scanf("%s", &last_name);
		printf("\nYou entered: %s", last_name);
		
		printf("\nEnter your age: ");
		scanf("%d", &age);
		printf("\nYou entered: %d", age);
		
		printf("\n\nYou are %s %s, age %d.", first_name, last_name, age);
		strcpy(first_name, "John");
		strcpy(last_name, "Doe");
		age = 99;
		printf("\nYou are not %s %s, age %d", first_name, last_name, age);
		
		
}










