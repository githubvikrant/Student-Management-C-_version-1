#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void addStudent() {
    FILE *fp = fopen("students.dat", "ab");
    if (!fp) {
        perror("File opening failed");
        return;
    }

    Student s;
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    getchar();  // clear newline left by scanf
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);
    printf("✅ Student added successfully!\n");
}

void displayStudents() {
    FILE *fp = fopen("students.dat", "rb");
    if (!fp) {
        printf("No records found.\n");
        return;
    }

    Student s;
    printf("\n Student Records:\n");
    printf("--------------------------\n");
    while (fread(&s, sizeof(Student), 1, fp)) {
        printf("Roll: %d\nName: %sMarks: %.2f\n\n", s.roll, s.name, s.marks);
    }

    fclose(fp);
}



