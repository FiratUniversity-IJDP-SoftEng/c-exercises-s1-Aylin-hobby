#include <stdio.h>

int main() {
    int age;


    printf("What is your age? ");
    scanf("%d", &age);

    for (int i = 0; i < age; i++) {
        printf("Happy Birthday! \n" );
    }
  
}