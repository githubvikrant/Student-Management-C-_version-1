#include <stdio.h>
#include "student.h"

int main() {
    int choice;

    while (1) {
        printf("\n==== Student Record Management ====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
