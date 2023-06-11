#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
int roll_no;
char name[30];
float ca1_320;
float ca2_320;
float ca3_320;
float ca1_401;
float ca2_401;
float ca3_401;
float ca1_101;
float ca2_101;
float ca3_101;
};
void create_record()
{
FILE *fp;
struct student s;
fp = fopen("CA_details.txt", "a");
printf("Enter the Roll Number of the Student: ");
scanf("%d", &s.roll_no);
printf("Enter the Name of the Student: ");
scanf("%s", &s.name);
aca1:
	printf("Enter the CA1 320 Marks of the Student: ");
	scanf("%f", &s.ca1_320);
	if(s.ca1_320>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto aca1;
	}
aca2:
	printf("Enter the CA2 320 Marks of the Student: ");
	scanf("%f", &s.ca2_320);
	if(s.ca2_320>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto aca2;
	}
aca3:
	printf("Enter the CA3 320 Marks of the Student: ");
	scanf("%f", &s.ca3_320);
	if(s.ca3_320>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto aca3;
	}
bca1:
	printf("Enter the CA1 401 Marks of the Student: ");
	scanf("%f", &s.ca1_401);
	if(s.ca1_401>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto bca1;
	}
bca2:
	printf("Enter the CA2 401 Marks of the Student: ");
	scanf("%f", &s.ca2_401);
	if(s.ca2_401>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto bca2;
	}
bca3:
	printf("Enter the CA3 401 Marks of the Student: ");
	scanf("%f", &s.ca3_401);
	if(s.ca3_401>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto bca3;
	}
cca1:
	printf("Enter the CA1 101 Marks of the Student: ");
	scanf("%f", &s.ca1_101);
	if(s.ca1_101>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto cca1;
	}
cca2:
	printf("Enter the CA2 101 Marks of the Student: ");
	scanf("%f", &s.ca2_101);
	if(s.ca2_101>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto cca2;
	}
cca3:
	printf("Enter the CA3 101 Marks of the Student: ");
	scanf("%f", &s.ca3_101);
	if(s.ca3_101>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto cca3;
	}
fwrite(&s, sizeof(s), 1, fp);
printf("\nRecord created successfully!\n\n");
fclose(fp);
}
void search_record()
{
FILE *fp;
struct student s;
int roll_no, found = 0;
fp = fopen("CA_details.txt", "r");
printf("Enter the Roll Number to search: ");
scanf("%d", &roll_no);
while (fread(&s, sizeof(s), 1, fp))
{
if (s.roll_no == roll_no)
{
printf("\nRecord found!\n");
printf("Roll Number: %d\n", s.roll_no);
printf("Name: %s\n", s.name);
printf("CA1 320 Marks: %.2f\n\n", s.ca1_320);
printf("CA2 320 Marks: %.2f\n\n", s.ca2_320);
printf("CA3 320 Marks: %.2f\n\n", s.ca3_320);
printf("CA1 401 Marks: %.2f\n\n", s.ca1_401);
printf("CA2 401 Marks: %.2f\n\n", s.ca2_401);
printf("CA3 401 Marks: %.2f\n\n", s.ca3_401);
printf("CA1 101 Marks: %.2f\n\n", s.ca1_101);
printf("CA2 101 Marks: %.2f\n\n", s.ca2_101);
printf("CA3 101 Marks: %.2f\n\n", s.ca3_101);
found = 1;
break;
}
}
if (found == 0)
{
printf("\nRecord not found!\n\n");
}
fclose(fp);
}
void modify_record()
{
FILE *fp;
struct student s;
int roll_no, found = 0;
fp = fopen("CA_details.txt", "r+");
printf("Enter the Roll Number to modify: ");
scanf("%d", &roll_no);
while (fread(&s, sizeof(s), 1, fp))
{
if (s.roll_no == roll_no)
{
printf("\nRecord found!\n");
printf("Roll Number: %d\n", s.roll_no);
printf("Name: %s\n", s.name);
printf("CA1 320 Marks: %.2f\n\n", s.ca1_320);
printf("CA2 320 Marks: %.2f\n\n", s.ca2_320);
printf("CA3 320 Marks: %.2f\n\n", s.ca3_320);
printf("CA1 401 Marks: %.2f\n\n", s.ca1_401);
printf("CA2 401 Marks: %.2f\n\n", s.ca2_401);
printf("CA3 401 Marks: %.2f\n\n", s.ca3_401);
printf("CA1 101 Marks: %.2f\n\n", s.ca1_101);
printf("CA2 101 Marks: %.2f\n\n", s.ca2_101);
printf("CA3 101 Marks: %.2f\n\n", s.ca3_101);
printf("Enter the new Name of the Student: ");
scanf("%s", &s.name);
aca1:
	printf("Enter the new CA1 320 Marks of the Student: ");
	scanf("%f", &s.ca1_320);
	if(s.ca1_320>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto aca1;
	}
aca2:
	printf("Enter the new CA2 320 Marks of the Student: ");
	scanf("%f", &s.ca2_320);
	if(s.ca2_320>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto aca2;
	}
aca3:
	printf("Enter the new CA3 320 Marks of the Student: ");
	scanf("%f", &s.ca3_320);
	if(s.ca3_320>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto aca3;
	}
bca1:
	printf("Enter the new CA1 401 Marks of the Student: ");
	scanf("%f", &s.ca1_401);
	if(s.ca1_401>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto bca1;
	}
bca2:
	printf("Enter the new CA2 401 Marks of the Student: ");
	scanf("%f", &s.ca2_401);
	if(s.ca2_401>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto bca2;
	}
bca3:
	printf("Enter the new CA3 401 Marks of the Student: ");
	scanf("%f", &s.ca3_401);
	if(s.ca3_401>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto bca3;
	}
cca1:
	printf("Enter the new CA1 101 Marks of the Student: ");
	scanf("%f", &s.ca1_101);
	if(s.ca1_101>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto cca1;
	}
cca2:	
	printf("Enter the new CA2 101 Marks of the Student: ");
	scanf("%f", &s.ca2_101);
	if(s.ca2_101>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto cca2;
	}
cca3:
	printf("Enter the new CA3 101 Marks of the Student: ");
	scanf("%f", &s.ca3_101);
	if(s.ca3_101>30)
	{
		printf("Marks should be less than or equal to 30.\n");
		goto cca3;
	}
fseek(fp, -sizeof(s), SEEK_CUR);
fwrite(&s, sizeof(s), 1, fp);
printf("\nRecord modified successfully!\n\n");
found = 1;
break;
}
}
if (found == 0)
{
printf("\nRecord not found!\n\n");
}
fclose(fp);
}
void delete_record()
{
FILE *fp, *temp;
struct student s;
int roll_no, found = 0;
fp = fopen("CA_details.txt", "r");
temp = fopen("temp.txt", "w");
printf("Enter the Roll Number to delete: ");
scanf("%d", &roll_no);
while (fread(&s, sizeof(s), 1, fp))
{
if (s.roll_no != roll_no)
{
fwrite(&s, sizeof(s), 1, temp);
}
else
{
found = 1;
}
}
if (found == 0)
{
printf("\nRecord not found!\n\n");
}
else
{
printf("\nRecord deleted successfully!\n\n");
}
fclose(fp);
fclose(temp);
remove("CA_details.txt");
rename("temp.txt", "CA_details.txt");
}
void display_record()
{
FILE *fp;
struct student s;
fp = fopen("CA_details.txt", "r");
if (fp == NULL)
{
printf("\nError: File could not be opened!\n\n");
return;
}
printf("\nRoll Number\tName\t\tCA1 320\tCA2 320\tCA3 320\tCA1 401\tCA2 401\tCA3 401\tCA1 101\tCA2 101\tCA3 101\n");
printf("-------------------------------------------------------------------------------------------------------------\n");
while (fread(&s, sizeof(s), 1, fp))
{
printf("%d\t\t%s\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", s.roll_no, s.name, s.ca1_320, s.ca2_320, s.ca3_320, s.ca1_401, s.ca2_401, s.ca3_401, s.ca1_101, s.ca2_101, s.ca3_101);
}
printf("\n");
fclose(fp);
}
int main()
{
int choice;
do
{
printf("------- Student CA Evaluator System -------\n\n");
printf("1. Create record\n");
printf("2. Search record\n");
printf("3. Modify record\n");
printf("4. Delete record\n");
printf("5. Display record\n");
printf("6. Exit\n\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
create_record();
break;
case 2:
search_record();
break;
case 3:
modify_record();
break;
case 4:
delete_record();
break;
case 5:
display_record();
break;
case 6:
printf("\nExiting the program...\n\n");
break;
default:
printf("\nInvalid choice! Try again.\n\n");
}
} while (choice != 6);
return 0;
}
