#include <stdio.h>
#include "calculator.h"
#include "display.h"

int main() {
    int exerciseType;
    int duration;
    char choice;

    do {
        printf("Select exercise type:\n");
        printf("1. Running\n");
        printf("2. Swimming\n");
        printf("3. Cycling\n");
        printf("Enter your choice (1-3): ");
if (scanf("%d", &exerciseType) != 1) {
    printf("Invalid input. Please enter a valid number.\n");
    while (getchar() != '\n'); // Clear input buffer
    continue;
}

        printf("Enter duration in minutes: ");
        if (scanf("%d", &duration) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        if (exerciseType < 1 || exerciseType > 3 || duration < 0) {
            printf("Invalid input. Please try again.\n");
            continue;
        }

        float caloriesBurned = calculateCalories((ExerciseType)(exerciseType - 1), (float)duration);
        const char* exerciseName = getExerciseTypeName((ExerciseType)(exerciseType - 1));
        displayResults(exerciseName, duration, caloriesBurned);

        printf("Do you want to enter another entry? (y/n): ");
        while (getchar() != '\n'); // Clear input buffer
        if (scanf(" %c", &choice) != 1) {
            choice = 'n'; // Default to 'no' if input is invalid
        }

    } while (choice == 'y' || choice == 'Y');

    return 0;
}