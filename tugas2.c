#include <stdio.h>

struct Date {
    int d, m, y;
};

void print_date2(struct Date aday) {
    char months[12][4] = {
            "Jan", "Feb", "Mar", "Apr", "May", "Jun",
            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("%d %s %d\n", aday.d, months[aday.m - 1], aday.y);
}

int tugas2() {
    struct Date date = {25, 12, 2000};
    print_date2(date);
    return 0;
}
