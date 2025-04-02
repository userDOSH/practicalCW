#include "calculator.h"

float calculateCalories(ExerciseType exercise, float duration) {
    float calories = 0.0;

    switch (exercise) {
        case RUNNING:
            calories = duration * 10; // Example: 10 calories per minute
            break;
        case SWIMMING:
            calories = duration * 8; // Example: 8 calories per minute
            break;
        case CYCLING:
            calories = duration * 6; // Example: 6 calories per minute
            break;
        default:
            break;
    }

    return calories;
}

const char* getExerciseTypeName(ExerciseType type) {
    switch (type) {
        case RUNNING: return "Running";
        case SWIMMING: return "Swimming";
        case CYCLING: return "Cycling";
        default: return "Unknown";
    }
}