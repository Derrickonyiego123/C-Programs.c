#include <stdio.h>

int main(void) {
    int mark;
    char grade;
    char choice;

    do {
        // Keep asking until a valid mark (0-100) is entered
        do {
            printf("Enter student's mark (0-100): ");
            scanf("%d", &mark);

            if (mark < 0 || mark > 100) {
                printf("Error: Invalid mark. Marks must be between 0 and 100.\n");
            }
        } while (mark < 0 || mark > 100);

        // Determine the grade
        if (mark >= 80) {
            grade = 'A';
        } else if (mark >= 70) {
            grade = 'B';
        } else if (mark >= 60) {
            grade = 'C';
        } else if (mark >= 50) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        printf("Mark: %d  Grade: %c\n", mark, grade);

        // Ask whether to continue
        printf("\nEnter another student's mark? (y/n): ");
        scanf(" %c", &choice);
        printf("\n");

    } while (choice == 'y' || choice == 'Y');

    printf("Program ended.\n");

    return 0;
}