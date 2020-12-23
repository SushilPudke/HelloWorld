// Array of objects - Cricket Class 
#include <iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<string.h>

class Cricket
{
	private :
		char Bnm[10];
		int score;
		static int tot;
	public :
		Cricket(){}
		Cricket(char nm[],int s){
		strcpy(Bnm,nm);
		score=s;
		tot+=score; // add individual score to total
		}
		void display() // Display batsman details 
	{
			cout<<"		"<<Bnm<<"			"<<score<<endl;
	}

	int getScore() // return individual batsman score 
	{
		return score;
	}
	static int getTotal()
	{
		return tot;
	}
	static float getAvg()
	{
		return (float) tot/50;
	}

}; // End of class 

int Cricket::tot=0;


void main()
{
	clrscr();
	Cricket pl[10];
	// Enter details of 10 players score 
	char Bnm[10];
	int score;

	for(int i=0;i<10;i++)
	{
		cout<<"Enter details of Batsman :"<<i+1<<endl;
		cout<<"Enter Name , Score :";
		cin>>Bnm>>score;
		pl[i]=Cricket(Bnm,score); // individual objects initialised
	}
	cout<<"Details of all players score :"<<endl;
	cout<<"Sr no        Batsman Name             Score    "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<setw(2)<<i+1;
		pl[i].display();
	}
	cout<<"=================================="<<endl;
	cout<<"Total Score of a Team in 50 Overs :"<<Cricket::getTotal()<<endl;
	cout<<"Average Score of a Team in 50 Overs :"<<Cricket::getAvg()<<endl;

	// Logic to find Highest n Lowest Scorer in a team 
	int mx=pl[0].getScore();
	int mxi=0;
	int mn=pl[0].getScore();
	int mni=0;
	for(i=1;i<10;i++)
	{
		
		if(pl[i].getScore()>mx)
		{
			mx=pl[i].getScore();
			mxi=i;
		}
		
		if(pl[i].getScore()<mn)
		{
			mn=pl[i].getScore();
			mni=i;
		}
	}
	cout<<"=============================="<<endl;
	cout<<"Highest Scorer in a Team :"<<endl;
	cout<<"Highest Score :"<<mx<<endl;
	cout<<"Details of highest scorer :"<<endl;
	pl[mxi].display();
	cout<<"=============================="<<endl;
	cout<<"Lowest Scorer in a Team :"<<endl;
	cout<<"Lowest  Score :"<<mn<<endl;
	cout<<"Details of Lowest scorer :"<<endl;
	pl[mni].display();

}
