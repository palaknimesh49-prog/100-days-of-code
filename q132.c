#include <stdio.h>

enum Traffic { RED, YELLOW, GREEN };

int main() {
    enum Traffic light;
    char color[10];

    scanf("%s", color);

    if (strcmp(color, "RED") == 0)
        light = RED;
    else if (strcmp(color, "YELLOW") == 0)
        light = YELLOW;
    else
        light = GREEN;

    switch (light) {
        case RED: printf("Stop"); break;
        case YELLOW: printf("Wait"); break;
        case GREEN: printf("Go"); break;
    }

    return 0;
}