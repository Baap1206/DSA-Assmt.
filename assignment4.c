#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random integer with 10 digits
int generateRandomInteger() {
    return 5000000000 + rand() % 5000000000;
}

// Function to find the highest base of an integer
int findHighestBase(int num) {
    int highest_base = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit > highest_base) {
            highest_base = digit;
        }
        num /= 10;
    }
    return highest_base + 1;
}

int main() {
    srand(time(0));

    int highest_base_count[10] = {0}; // Array to store the count of different highest bases

    printf("Random Integers and their Highest Bases:\n");
    int i;
    for (i = 0; i < 50; ++i) {
        int random_integer = generateRandomInteger();
        int highest_base = findHighestBase(random_integer);
        highest_base_count[highest_base - 1]++; // Increment the count for the respective highest base

        printf("The Highest Base of %d is %d.\n", random_integer, highest_base);
    }

    printf("\nHighest Base Frequency over different bases:\n");

    for (i = 0; i < 10; ++i) {
        printf("Base %d: %d occurrence(s).\n", (i + 1), highest_base_count[i]);
    }

    return 0;
}
//Divyanshu Sharma
