// src/main.c
#include <stdio.h>
#include <stdlib.h>
#include "common.h"
//#include "input.h"
//#include "calc.h"
//#include "fileio.h"

int main() {
    // Array to hold student records in memory
    Student class_list[MAX_STUDENTS];
    int student_count = 0;
    int choice;

    printf("=== Student Grade & Management System ===\n");

    // 1. On startup, load any existing records from Panyin's module
    // student_count = load_students_from_file("database.txt", class_list);

    while(1) {
        printf("\nMenu:\n");
        printf("1. Add New Student Data\n");
        printf("2. Calculate Grades & Statistics\n");
        printf("3. Save and Export Report\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid selection.\n");
            break;
        }

        switch(choice) {
            case 1:
                // Abbie's module will be called here
                // class_list[student_count] = get_student_input();
                // student_count++;
                printf("[Simulated] Data collection active.\n");
                break;
                
            case 2:
                // Your calculation module will be called here
                // for(int i = 0; i < student_count; i++) {
                //     calculate_individual_gpa(&class_list[i]);
                // }
                // rank_students(class_list, student_count);
                printf("[Simulated] Number crunching active.\n");
                break;
                
            case 3:
                // Panyin's module will be called here
                // export_grade_report("report.txt", class_list, student_count);
                printf("[Simulated] File export active.\n");
                break;
                
            case 4:
                printf("Exiting program. Goodbye!\n");
                return 0;
                
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}