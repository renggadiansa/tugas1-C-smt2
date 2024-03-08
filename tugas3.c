#include <stdio.h>

struct Date {
    int d, m, y;
};

int dayofweek(struct Date aday) {

    if (aday.m < 3) {
        aday.m += 12;
        aday.y--;
    }
    int K = aday.y % 100;
    int J = aday.y / 100;
    int h = (aday.d + ((13 * (aday.m + 1)) / 5) + K + (K / 4) + (J / 4) - (2 * J)) % 7;
    if (h < 0)
        h += 7;
    return h;
}

int tugas3(){

    struct Date date = {21, 2, 2024};
    int dayOfWeek = dayofweek(date);

    printf("Hari dalam seminggu: %d\n", dayOfWeek);
}