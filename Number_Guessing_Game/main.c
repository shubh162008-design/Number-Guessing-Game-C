#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0)); // Generate a random number   
    int random_number = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guessed_number;
    int no_of_guesses = 0;
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a random number between 1 and 100. Can you guess it?\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guessed_number);
        no_of_guesses++;
        if (guessed_number > random_number) {
            printf("Too high! Try again.\n");
        } else if (guessed_number < random_number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number in %d attempts!\n", no_of_guesses);
        }
    } while (guessed_number != random_number);


    return 0;
}