// Nested function 
#include <stdio.h>
#include<conio.h>

float per(int,int,int,int,int);
int total(int,int,int,int,int);

void main()
{
	char snm[10];
	int rn,s1,s2,s3,s4,s5;
	clrscr();
	// input student data
	printf("Enter Students name \t Roll no :");
	scanf("%s%d",&snm,&rn);
	printf("Enter Five Subjects marks :");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	// printf("Total marks obtained :%d\n",total(s1,s2,s3,s4,s5));
	printf("Percentage obtained :%.2f\n",per(s1,s2,s3,s4,s5));

}

float per(int s1,int s2,int s3,int s4,int s5)
{
	int tot=total(s1,s2,s3,s4,s5);
	float p;
	printf("Total obtained :%d\n",tot);
	p=(float) tot/5;
	return p;
}

int total(int s1,int s2,int s3,int s4,int s5)
{
	return s1+s2+s3+s4+s5;
}

