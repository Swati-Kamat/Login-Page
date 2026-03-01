#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];
    char correct_username[] = "user123";
    char correct_password[] = "pass123";
    int login_success = 0;

    printf("--- Welcome to the Login System ---\n");

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        login_success = 1;
    }

    if (login_success) {
        printf("\nLogin Successful! Welcome, %s.\n", username);
    } else {
        printf("\nIncorrect username or password. Please try again.\n");
    }

    return 0;
}
