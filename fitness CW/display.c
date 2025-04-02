#include <stdio.h>
#include "display.h"

void displayResults(const char* exerciseType, int duration, float calories) {
    printf("Exercise Type: %s\n", exerciseType);
    printf("Duration: %d minutes\n", duration);
    printf("Calories Burned: %.2f kcal\n", calories);
}