#ifndef CALCULATOR_H
#define CALCULATOR_H

typedef enum {
    RUNNING,
    SWIMMING,
    CYCLING
} ExerciseType;

float calculateCalories(ExerciseType type, float duration);
const char* getExerciseTypeName(ExerciseType type); // Added declaration for getExerciseTypeName

#endif // CALCULATOR_H