// Write a c program to guess the number which is generated randomly between 1 to 100.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1; // number generated will be between 1 to 100 as we selected here .
    int no_of_guesses=0;
    int guessed; 
    // Print the random nuber
    //printf("Random number between 1 and 100: %d\n", random_number);
      
    do
    {
        printf("Enter the number\n");
        scanf("%d",&guessed);
        if (guessed<random_number)
        {
            printf("higher number please \n");
        }
        else if (guessed>random_number)
        {
            printf("lower number please \n");
        }
        no_of_guesses++;        
    }while (guessed!=random_number);
    printf("you guessed the %d number in %d guesses \n congrats",random_number,no_of_guesses);
    return 0;
}