#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    fp = fopen("students.txt", "w");

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    while(fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}