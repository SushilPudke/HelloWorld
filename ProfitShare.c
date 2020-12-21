// Read capital investment for four partners to evalute profit share 
#include <stdio.h>
#include<conio.h>
void main()
{
	float A,B,C,D,net;
	float pr;
	clrscr();
	printf("Enter Capital of A :");
	scanf("%f",&A);
	printf("Enter Capital of B :");
	scanf("%f",&B);
	printf("Enter Capital of C:");
	scanf("%f",&C);
	printf("Enter Capital of D :");
	scanf("%f",&D);
	// compute net and profit share 
	net=A+B+C+D;
	printf("Enter total profit earned by a company :");
	scanf("%f",&pr);
	printf("Net Capital investement of all partners :%.2f\n",net);
	printf("Percent Share of A :%.2f\n",(A/net)*100);
	printf("Percent Share of B :%.2f\n",(B/net)*100);
	printf("Percent Share of C :%.2f\n",(C/net)*100);
	printf("Percent Share of D :%.2f\n",(D/net)*100);
	printf("Profite Share of A :%.2f\n",(A/net)*pr);
	printf("Profite Share of B :%.2f\n",(B/net)*pr);
	printf("Profite Share of A :%.2f\n",(C/net)*pr);
	printf("Profite Share of A :%.2f\n",(D/net)*pr);

}
