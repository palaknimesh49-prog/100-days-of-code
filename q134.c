#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status s;
    char str[20];

    scanf("%s", str);

    if (strcmp(str, "SUCCESS") == 0)
        s = SUCCESS;
    else if (strcmp(str, "FAILURE") == 0)
        s = FAILURE;
    else
        s = TIMEOUT;

    switch (s) {
        case SUCCESS:
            printf("Operation successful");
            break;
        case FAILURE:
            printf("Operation failed");
            break;
        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}