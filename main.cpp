#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    unsigned int student_Id;
    char address[100];
};

int main()
{
    int numberOfStudents;
    struct student *students;
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);
    getchar();
    students = (struct student *)malloc(numberOfStudents * sizeof(struct student));
    if (students == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter the student details:\n");
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf((students + i)->name, sizeof(students + i)->name);
        printf("Student ID: ");
        scanf("%u", &(students + i)->student_Id);
        printf("Address: ");
        scanf((students + i)->address, sizeof(students + i)->address);
        printf("\n");
    }
    printf("Entered student details:\n");
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s", (students + i)->name);
        printf("Student ID: %u\n", (students + i)->student_Id);
        printf("Address: %s\n\n", (students + i)->address);
    }
    free(students);

    return 0;
}
