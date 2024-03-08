#include <stdio.h>

struct Date {
    int d, m, y;
};

int sameDay(struct Date day1, struct Date day2) {
    if (day1.d == day2.d && day1.m == day2.m && day1.y == day2.y)
        return 1;
    else
        return 0;
}

int tugas4() {
    struct Date day1 = {20, 2, 2024};
    struct Date day2 = {20, 2, 2024};

    if (sameDay(day1, day2))
    printf("It is same day");
    else
        printf("It is not same day");


    return 0;
}

