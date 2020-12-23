// Fibbonoci Series using user defined function 
#include <stdio.h>
#include<conio.h>
void fibbo(int ,int,int);

void main()
{
	int Ft,St,Tt;
	clrscr();
	printf("Enter First Term,Second Term, Total Terms :");
	scanf("%d%d%d",&Ft,&St,&Tt);
	fibbo(Ft,St,Tt);
	
}

// Function Definition

void fibbo(int Ft,int St,int Tt)
{
	int Rt,i;
	printf("%4d,%4d",Ft,St);
	for(i=3;i<=Tt;i++)
	{
		Rt=Ft+St;
		printf("%4d,",Rt);
	Ft=St;
	St=Rt;
	}

} // End of Function



