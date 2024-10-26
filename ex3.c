#include <stdio.h>

int main() {
    char pet[10];

    printf("Do you have a dog or a cat? ");
    scanf("%s", pet);

    if (strcmp(pet, "cat") == 0) {
        printf("Meow! This is how a cat sounds like.\n");
    } else if (strcmp(pet, "dog") == 0) {
        printf("Woof! This is how a dog sounds like.\n");
    } else if (strcmp(pet, "none") ==0) {
        printf("You should adopt one!\n");
    }
  return 0;

}
