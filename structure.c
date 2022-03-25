#include<stdio.h>
int main()
{
  int n,i,avg;
  struct student
  {
  	int rollno,eng,math,science,social,lang1,lang2;
	char name[20];
	float avg;
  };
 struct student s[20];
 printf("Enter the number of students:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
	printf("Enter students %d details:\n",i+1);
	printf("Enter the roll number:");
	scanf("%d",&s[i].rollno);
	printf("Enter the students name:");
	scanf("%s",s[i].name);	
	printf("Enter English marks:");
	scanf("%d",&s[i].eng);
	printf("Enter Maths marks:");
	scanf("%d",&s[i].math);
	printf("Enter Science marks:");
	scanf("%d",&s[i].science);
	printf("Enter Social marks:");
	scanf("%d",&s[i].social);
	printf("Enter Language 1 marks:");
	scanf("%d",&s[i].lang1);
	printf("Enter Language 2 marks:");
	scanf("%d",&s[i].lang2);
 }
  for(i=0;i<n;i++)
  {
  	s[i].avg=(s[i].eng+s[i].math+s[i].science+s[i].social+s[i].lang1+s[i].lang2)/6;
  }
  printf("Enter the average marks:\n");
  scanf("%d",&avg);
  for(i=0;i<n;i++)
{
	if(s[i].avg>avg)
	{
		printf("Students scored above average\n");
	}
	else
	{
		printf("Students scored below average");
	}
}
return 0;
}
