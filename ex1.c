#include<stdio.h>


int main(void){

int guess;
int number = 3;

printf("Guess a number between 1 and 5: ");
scanf("%d", &guess);

if (guess == number)
    {
    printf("Correct!");
    }
else   {
    printf("Wrong guess! Try again.");
       }
}