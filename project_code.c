#include <stdio.h>
#include <stdlib.h>
struct student
{
   char name[50];
   int ID;
   int birth_year,birth_month,birth_day;
   int score;
};
int main() {
  struct student *ptr;
  int n;
  printf("Enter the number of students: ");
  scanf("%d", &n);

  // Memory allocation for n structures
  ptr = (struct student *)calloc(n , sizeof(struct student));
  for (int i = 0; i < n; ++i) {
    printf("Enter name :\n");
    scanf("%s",(ptr + i)->name);
     printf("Enter ID :\n");
    scanf("%d",&(ptr + i)->ID);
     printf("Enter birth_year:\n");
    scanf("%d",&(ptr + i)->birth_year);
     printf("Enter birth_month:\n");
    scanf("%d",&(ptr + i)->birth_month);
     printf("Enter birth_day:\n");
    scanf("%d",&(ptr + i)->birth_day);
     printf("Enter score:\n");
    scanf("%d",&(ptr + i)->score);
  }

  printf("Displaying Information:\n");
  for (int i = 0; i < n; ++i) {
printf("Name of student :");
printf("%s\n " ,(ptr + i)->name);
printf("ID :");
printf("%d\n " ,(ptr + i)->ID);
printf("birth_year:");
printf("%d\n " ,(ptr + i)->birth_year);
printf("birth_month:");
printf("%d\n ", (ptr + i)->birth_month);
printf("birth_day:");
printf("%d\n " ,(ptr + i)->birth_day);
printf("score:");
printf("%d\n\n\n ", (ptr + i)->score);

  }

  free(ptr);

  return 0;
}
