#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void eligible_clg(float marks, char category[10]) {
    char clg[5][50];
    float GP_Pune[] = {98, 92, 88};
    float GP_Nanded[] = {93, 89, 85};
    float GP_Amravati[] = {94, 90, 86};
    float GP_Aurangabad[] = {95, 92, 89};
    float GP_Mumbai[] = {97, 95, 92};
    float eligible_colleges = 0;
    int i;
    int choice;

    // Open category
    if (strcmp(category, "Open") == 0) {
	if (marks >= GP_Pune[0]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Pune");
	}
	if (marks >= GP_Nanded[0]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Nanded");
	}
	if (marks >= GP_Amravati[0]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Amravati");
	}
	if (marks >= GP_Aurangabad[0]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Aurangabad");
	}
	if (marks >= GP_Mumbai[0]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Mumbai");
	}
    }
    // Minor category
    else if (strcmp(category, "Minor") == 0) {
	if (marks >= GP_Pune[1]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Pune");
	}
	if (marks >= GP_Nanded[1]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Nanded");
	}
	if (marks >= GP_Amravati[1]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Amravati");
	}
	if (marks >= GP_Aurangabad[1]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Aurangabad");
	}
	if (marks >= GP_Mumbai[1]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Mumbai");
	}
    }
    // Reserved category
    else if (strcmp(category, "Reserved") == 0) {
	if (marks >= GP_Pune[2]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Pune");
	}
	if (marks >= GP_Nanded[2]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Nanded");
	}
	if (marks >= GP_Amravati[2]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Amravati");
	}
	if (marks >= GP_Aurangabad[2]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Aurangabad");
	}
	if (marks >= GP_Mumbai[2]) {
	    strcpy(clg[eligible_colleges++], "Government Polytechnic Mumbai");
	}
    }

    // Display eligible colleges
    if (eligible_colleges == 0) {
	printf("\t\tCongrats! for %f per. in SSC\n",marks);
	printf("\t\tBUT,You aren't eligible for any college\n");
    } else {
		printf("\t\tCongrats! for %f per. in SSC\n",marks);
	printf("\t\tYou are eligible for the following colleges:\n");
	for (i = 0; i < eligible_colleges; i++) {
	    printf("\t\t%d. %s\n",i+1, clg[i]);
	}


    }


}

void main() {
    char id[50], pass[50], rid[50], rpass[50];
    float marks;
    char category[10];
    int choice,gender,age,j,k;
    int a=0,up=0,low=0,digi=0,schar=0;
    clrscr();
    for (j=1;j<=100;j++){

    printf("\n");
		printf("\n\t\t ______    ________   ________  \n");
		printf("\t\t  / _____|   | |____  \ | |____  \           \n");
		printf("\t\t | |  _____  | |____) | | |____) |   \n");
		printf("\t\t | | |_   _| | |______/ | |______/\n");
		printf("\t\t | |___|_|   | |        | |  \n");
		printf("\t\t \______ |   |_|        |_| \n");
		printf("\t\t\t~By Swaraj\n\n\n\n");
getch();

printf("\n\n\n\n\t\t\t**********Registration**********\n\n");

    printf("\t\t\tEnter your id: ");
    scanf("%s", &id);

    //pwd:
    printf("\t\t\tEnter your password: ");
    scanf("%s", &pass);

   /* a=strlen(pass);

if(a<5)

{

printf("\t\tError: Password should contain contain minimum 5 characters\n ");

}

else if(a>12)

{

printf("\t\tError: Password shouldn't exceed 12 characters ");

}

goto pwd;*/




    printf("\n\n\n\n\n\n\n\t\t\tYour account has been created...!!\n\n\n\n\n\n\n\n");
    getch();
    printf("\n\n\n\n\n\n\t\t\t***Login Page***\n\n\n\n");
    user:
    printf("\t\t\tEnter Username:");
    scanf("%s", &rid);
    printf("\t\t\tEnter password:");
    scanf("%s", &rpass);

    if (strcmp(id, rid) == 0 && strcmp(pass, rpass) == 0) {
	printf("\t\tYou have successfully logged in.\n");
	printf("\n\n\t\t***Student's Academic Details***\n\n");
	printf("\t\tPlease Enter the Following Details:\n\n");

	printf("\t\tEnter your category (Open/Reserved/Minor): ");
	scanf("%s", &category);

	printf("\t\tEnter your 10th class percentage: ");
	scanf("%f", &marks);

	printf("\t\t Choose your gender:\n");
	printf("\t\t 1 for Male \n\t\t2 for Female \n\t\t3 for Others\n\t\t:");
	scanf("%d",&gender);

	printf("\t\tEnter your age:");
	scanf("%d",&age);

	// Call the function to check eligible colleges
	eligible_clg(marks, category);
    } else {
	printf("\t\tInvalid username or password. Please try again.\n");
	goto user;
	    }

       printf("\t\t1. Continue \t\t 2. Exit");
    printf("\n\n\t\tEnter your choice:");
    scanf("%d",&choice);
	if (choice ==2) {
    exit(1);
     }
     }

    getch();
}