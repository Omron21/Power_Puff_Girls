// src/main.c
// allows these functions to called and not defined everything they are called
#ifndef common_H
#define common_H

//Define the student data type(These are preprocessed macros)
#define MAX_NAME_LEN 50
#define MAX_ID_LEN 50
#define MAX_STUDENTS 100

typedef struct //typedef struct{...} Student; where student is the type name
{
    char name[MAX_NAME_LEN];
    char id [MAX_ID_LEN];
    float grades[5]; //Array for up to 5 courses
    float gpa; // Calculated by Bubu
    char letter_grade; // Calculated by Bubu
} Student;
#endif // closes the header guard

