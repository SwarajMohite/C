#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct name {
    char fname[50];
    char mname[50];
    char lname[50];
};

struct DOB {
    char date[50];
    char month[50];
    char year[50];
};

struct Student {
    struct name n;
    struct DOB birth;
};

char* eligible_clg(float marks, char category[10]) {
    char clg[5][50];
    char interest;
    float GP_Pune[] = {98, 92, 88};
    float GP_Nanded[] = {93, 89, 85};
    float GP_Amravati[] = {94, 90, 86};
    float GP_Aurangabad[] = {95, 92, 89};
    float GP_Mumbai[] = {97, 95, 92};
    float eligible_colleges = 0;
    int i;

    if (strcmp(category, "Open") == 0) {
        if (marks >= GP_Pune[0]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Pune");
        }
        if (marks >= GP_Nanded[0]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Nanded");
        }
        if (marks >= GP_Amravati[0]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Amravati");
        }
        if (marks >= GP_Aurangabad[0]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Aurangabad");
        }
        if (marks >= GP_Mumbai[0]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Mumbai");
        }
    } else if (strcmp(category, "Minor") == 0) {
        if (marks >= GP_Pune[1]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Pune");
        }
        if (marks >= GP_Nanded[1]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Nanded");
        }
        if (marks >= GP_Amravati[1]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Amravati");
        }
        if (marks >= GP_Aurangabad[1]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Aurangabad");
        }
        if (marks >= GP_Mumbai[1]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Mumbai");
        }
    } else if (strcmp(category, "Reserved") == 0) {
        if (marks >= GP_Pune[2]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Pune");
        }
        if (marks >= GP_Nanded[2]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Nanded");
        }
        if (marks >= GP_Amravati[2]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Amravati");
        }
        if (marks >= GP_Aurangabad[2]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Aurangabad");
        }
        if (marks >= GP_Mumbai[2]) {
            strcpy(clg[(int)eligible_colleges++], "Government Polytechnic Mumbai");
        }
    }

    if (eligible_colleges == 0) {
        printf("\t\tCongrats! for %f percent in SSC\n", marks);
        printf("\t\tBUT,You aren't eligible for any college\n");
    } else {
        printf("\t\tCongrats! for %f percent in SSC\n", marks);
        printf("\t\tYou are eligible for the following polytechnic colleges:\n");
        for (i = 0; i < (int)eligible_colleges; i++) {
            printf("\t\t%d. %s\n", i + 1, clg[i]);
            printf("\t\tAre you interested in this college?");
            printf("\n\t\tEnter 'Y' for Yes otherwise just Enter 'N'\n");
            scanf(" %c", &interest);
            if (interest == 'Y') {
                break; // Return dynamically allocated string
            } if (interest != 'Y'&&interest != 'N'){
                printf("\t\tInvalid input. Please enter 'Y' or 'N'\t\t:");
                i--; // Decrement i to repeat the loop for the same college
            }
        }
        printf("\t\tYou have chosen %s\n", clg[i]);
        printf("\t\tCongrats!\n");
    }
    return clg[i];
}

int main() {
    char id[50], pass[50], rid[50], rpass[50];
    float marks;
    struct Student s1;
    char category[10];
    int gender, age;
    int choice, j;
	clrscr();
	
    for (j = 1; j <= 100; j++) {
	time_t t;   // not a primitive datatype
    time(&t);

    printf("\n\n\t\tThe time is  (date and time): %s", ctime(&t));

  
     getch();
        printf("\n\n\t\t\t***Welcome to Technical Education Portal***\n\n");
        printf("\n");
        printf("\t\t   _____     _______    ______\n");
        printf("\t\t / _____|    | |__  \  | |__  \ \n");
        printf("\t\t| |  ______  | |__)  | | |__)  |\n");
        printf("\t\t| | |_  __|  | |____/  | |____/\n");
        printf("\t\t| |___| |    | |       | |  \n");
        printf("\t\t\_______|    | |       | | \n");
        printf("\t\t\t~By LogicLegends\n\n\n\n");
	getch();
        printf("\n\n\n\n\t\t\t**Registration**\n\n");
        printf("\t\t\tEnter your id: ");
        scanf("%s", id);
        printf("\t\t\tEnter your password: ");
        scanf("%s", pass);
        printf("\n\n\n\n\n\n\n\t\t\tYour account has been created...!!\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n\n\t\t\t*Login Page*\n\n\n\n");
    user:
        printf("\t\t\tEnter Username:");
        scanf("%s", rid);
        printf("\t\t\tEnter password:");
        scanf("%s", rpass);

        if (strcmp(id, rid) == 0 && strcmp(pass, rpass) == 0) {
            printf("\t\tYou have successfully logged in.\n");
            printf("\n\n\t\t*Student's Academic Details*\n\n");
            printf("\t\tPlease Enter the Following Details:\n\n");

            printf("\t\tEnter your category (Open/Reserved/Minor): ");
            scanf("%s", category);

            printf("\t\tEnter your 10th class percentage: ");
            scanf("%f", &marks);

            printf("\t\t Choose your gender:\n");
            printf("\t\t 1 for Male \n\t\t2 for Female \n\t\t3 for Others\n\t\t:");
            scanf("%d", &gender);

            printf("\t\tEnter your age:");
            scanf("%d", &age);

            // Call the function to check eligible colleges
            eligible_clg(marks, category);
        } else {
            printf("\t\tInvalid username or password. Please try again.\n");
            goto user;
        }
        printf("\n \t\tNow, Enter following details for seat confirmation\n\n");
        printf("\t\tCandidate's First Name:");
        scanf("%s", s1.n.fname);
        printf("\t\tCandidate's Father's Name:");
        scanf("%s", s1.n.mname);
        printf("\t\tCandidate's Surname:");
        scanf("%s", s1.n.lname);
        printf("\t\tCandidate's Date of Birth:");
        scanf("%s %s %s", s1.birth.date, s1.birth.month, s1.birth.year);
	getch();
        printf("\n\n\n\t\tCongrats!! Your seat in the college is confirmed\n");
	getch();
        printf("\n\t\tYour FORM\n\n");
        printf("\t\tCandidate's Full Name : %s %s %s\n", s1.n.lname, s1.n.mname, s1.n.fname);
        printf("\t\tCandidate's Date of Birth : %s %s %s\n", s1.birth.date, s1.birth.month, s1.birth.year);
        printf("\t\tCandidate's last year percentage : %f\n", marks);
        printf("\t\tCandidate's Category : %s\n", category);
	printf("\t\tCandidate's age : %d\n", age);
	getch();
        printf("\n\n\t\t1. Continue \t\t 2. Exit");
        printf("\n\n\t\tEnter your choice:");
        scanf("%d", &choice);
        if (choice == 2) {
            printf("\n\n\t\tThank You For Visiting US.....!!!\n\n");
            exit(0);
        }
    }
    return 0;
}
