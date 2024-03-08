#include <stdio.h>
#include <stdbool.h>

struct Student {
    char name[50];
    int age;
};

bool isYounger(struct Student student1, struct Student student2) {
    return student1.age < student2.age;
}

int tugas5() {
    struct Student student1 = {"Student 1", 20};
    struct Student student2 = {"Student 2", 18};

    if (isYounger(student1, student2)) {
        printf("%s lebih muda dari %s\n", student1.name, student2.name);
    } else {
        printf("%s tidak lebih muda dari %s\n", student1.name, student2.name);
    }

    return 0;
}