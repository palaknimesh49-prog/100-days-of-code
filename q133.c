#include <stdio.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;
    char month[4];

    scanf("%s", month);

    if (month[0] == 'F')
        printf("28 or 29 days");
    else if (month[0] == 'A' && month[1] == 'P')
        printf("30 days");
    else if (month[0] == 'A' || month[0] == 'J' || month[0] == 'S' || month[0] == 'N')
        printf("30 days");
    else
        printf("31 days");

    return 0;
}