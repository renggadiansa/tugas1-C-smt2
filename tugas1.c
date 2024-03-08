#include <stdio.h>
#include <string.h>

struct StudentRecord {
    char name[50];
    int averageScore;
    char dob[20];
};


int tugas1() {
    struct StudentRecord student;

    strcpy(student.name, "Tommy");
    student.averageScore = 91;
    strcpy(student.dob, "2 Apr 1980");

    printf("Name: %s\n", student.name);
    printf("Average Score: %d\n", student.averageScore);
    printf("Date of Birth: %s\n", student.dob);
    return 0;
}
