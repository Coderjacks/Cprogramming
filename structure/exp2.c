#include<stdio.h>
#include<string.h>
main()
{
    struct Student
    {
         int rollno;
         char name[20];
         float heigth;
    };
      struct Student s1;
      s1.rollno=12;
      s1.heigth=12.4567;
      strcpy(s1.name,"brijesh");
      printf("student one rollno: %d\n",s1.rollno);
       printf("student one name: %s\n",s1.name);
      printf("student one heigth: %f\n",s1.heigth);
      printf("address of student one rollno: %d\n",&s1.rollno);
       printf("address of student one name: %d\n",&s1.name);
      printf("address of student one heigth: %d\n",&s1.heigth);

}
