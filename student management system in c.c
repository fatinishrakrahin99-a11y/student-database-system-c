#include <stdio.h>

struct Student {

    int id;
    char name[50];
    char department[50];
    float cgpa;

};

int main() {

    struct Student s[5] = {

        {101, "Rahin", "CSE", 3.80},
        {102, "Fatin", "EEE", 3.65},
        {103, "Hasan", "BBA", 3.50},
        {104, "Siam", "CSE", 3.90},
        {105, "Nabil", "ENG", 3.40}

    };

    int searchId;
    int found;

    while (1) {

        found = 0;

        printf("\n===== STUDENT DATABASE SYSTEM =====\n");
        printf("Enter Student ID (0 to Exit): ");
        scanf("%d", &searchId);

        // Exit Condition
        if (searchId == 0) {
            printf("\nExiting Program...\n");
            break;
        }

        // Search System
        for (int i = 0; i < 5; i++) {

            if (s[i].id == searchId) {

                printf("\n===== STUDENT INFORMATION =====\n");

                printf("Student ID   : %d\n", s[i].id);
                printf("Name         : %s\n", s[i].name);
                printf("Department   : %s\n", s[i].department);
                printf("CGPA         : %.2f\n", s[i].cgpa);

                found = 1;
                break;
            }
        }

        // If ID not found
        if (found == 0) {
            printf("\nStudent Not Found!\n");
        }
    }

    return 0;
}