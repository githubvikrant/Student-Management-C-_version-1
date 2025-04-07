// student.h
#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    int roll;
    char name[50];
    float marks;
} Student;

void addStudent();
void displayStudents();

#endif
