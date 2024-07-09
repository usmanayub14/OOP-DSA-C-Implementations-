#include <iostream>
#include<math.h>
#include<cassert>
using namespace std;


class Player
{
private:
	int ShirtNo; // Shirt number for a player
	int SeasonTotalRuns; // Total runs scored in the season by that player
	int SeasonInnings; // Total innings played by that player in the season
	int SeasonDeliveriesFaced; // Total deliveries faced by that player in the season
	int flag = 0;

public:

	Player()
	{
		ShirtNo = 50;
		SeasonTotalRuns = 0;
		SeasonInnings = 1;
		SeasonDeliveriesFaced = 1;
	}

	Player(int s_no, int t_runs, int s_in, int s_del);

	int set_ShirtNo(int);
	int set_SeasonInnings(int);
	int set_SeasonDeliveriesFaced(int);
	int set_SeasonTotalRuns(int);

	int get_ShirtNo() { return ShirtNo; }
	int get_SeasonInnings() { return SeasonInnings; }
	int get_SeasonDeliveriesFaced() { return SeasonDeliveriesFaced; }
	int get_SeasonTotalRuns() { return SeasonTotalRuns; }

	float get_Avg()	{ return (float)SeasonTotalRuns / SeasonInnings; }
	float get_strikeRate()	{ return ((float)SeasonTotalRuns / SeasonDeliveriesFaced) * 100; }
	int getFlag(){ return flag; }
};

int main()

{
	int S_NO, T_RUNS, S_IN, S_DEL, PL_NO, flag;

	Player P1;
	Player P2;
	
	do
	{
		cout << "Enter the Shirt No of Player 1: "; cin >> S_NO;
		cout << "Enter the Season Total Runs of Player 1: "; cin >> T_RUNS;
		cout << "Enter the Season Innings of Player 1: ";	cin >> S_IN;
		cout << "Enter the Season Deliveries Faced by Player 1: "; cin >> S_DEL;

		Player P1(S_NO, T_RUNS, S_IN, S_DEL);
		
		flag = P1.getFlag();
	} while (flag == 0);

	do
	{
		cout << "\nEnter the Shirt No of Player 2: "; cin >> S_NO;
		cout << "Enter the Season Total Runs of Player 2: "; cin >> T_RUNS;
		cout << "Enter the Season Innings of Player 2: "; cin >> S_IN;
		cout << "Enter the Season Deliveries Faced by Player 2: "; cin >> S_DEL;

		Player P2(S_NO, T_RUNS, S_IN, S_DEL);
		flag = P2.getFlag();
	} while (flag == 0);


	Player P3, P4, P5;

	
	do{cout << "\nEnter the Shirt No of Player 3: "; cin >> S_NO;} 
	while (P3.set_ShirtNo(S_NO) == 1);
	
	do{cout << "Enter the Season Total Runs of Player 3: "; cin >> T_RUNS;} 
	while (P3.set_SeasonTotalRuns(T_RUNS) == 1);
	
	do{cout << "Enter the Season Innings of Player 3: "; cin >> S_IN;} 
	while (P3.set_SeasonInnings(S_IN) == 1);
	
	do{cout << "Enter the Season Deliveries Faced by Player 3: "; cin >> S_DEL;} 
	while (P3.set_SeasonDeliveriesFaced(S_DEL) == 1);


	do{cout << "\nEnter the Shirt No of Player 4: "; cin >> S_NO;} 
	while (P4.set_ShirtNo(S_NO) == 1);
	
	do{cout << "Enter the Season Total Runs of Player 4: "; cin >> T_RUNS;} 
	while (P4.set_SeasonTotalRuns(T_RUNS) == 1);
	
	do{cout << "Enter the Season Innings of Player 4: "; cin >> S_IN;} 
	while (P4.set_SeasonInnings(S_IN) == 1);
	
	do{cout << "Enter the Season Deliveries Faced by Player 4: "; cin >> S_DEL;} 
	while (P4.set_SeasonDeliveriesFaced(S_DEL) == 1);


	do
	{
		cout << "\nEnter the Players whose data you want to see (Enter 0 to exit): "; cin >> PL_NO;

		switch (PL_NO)
		{
		case 1: cout << "The Shirt No. of Player 1 is: " << P1.get_ShirtNo() << endl;
			cout << "The Season Total Runs of Player 1 are: " << P1.get_SeasonTotalRuns() << endl;
			cout << "The Season Innings of Player 1 are: " << P1.get_SeasonInnings() << endl;
			cout << "The Season Deliveries Faced by Player 1 are: " << P1.get_SeasonDeliveriesFaced() << endl;
			cout << "The Average of Player 1 is: " << P1.get_Avg() << endl;
			cout << "The Strike Rate of Player 1 is: " << P1.get_strikeRate() << endl;
			break;

		case 2: cout << "The Shirt No. of Player 2 is: " << P2.get_ShirtNo() << endl;
			cout << "The Season Total Runs of Player 2 are: " << P2.get_SeasonTotalRuns() << endl;
			cout << "The Season Innings of Player 2 are: " << P2.get_SeasonInnings() << endl;
			cout << "The Season Deliveries Faced by Player 2 are: " << P2.get_SeasonDeliveriesFaced() << endl;
			cout << "The Average of Player 2 is: " << P2.get_Avg() << endl;
			cout << "The Strike Rate of Player 2 is: " << P2.get_strikeRate() << endl;
			break;

		case 3: cout << "The Shirt No. of Player 3 is: " << P3.get_ShirtNo() << endl;
			cout << "The Season Total Runs of Player 3 are: " << P3.get_SeasonTotalRuns() << endl;
			cout << "The Season Innings of Player 3 are: " << P3.get_SeasonInnings() << endl;
			cout << "The Season Deliveries Faced by Player 3 are: " << P3.get_SeasonDeliveriesFaced() << endl;
			cout << "The Average of Player 3 is: " << P3.get_Avg() << endl;
			cout << "The Strike Rate of Player 3 is: " << P3.get_strikeRate() << endl;
			break;

		case 4: cout << "The Shirt No. of Player 4 is: " << P4.get_ShirtNo() << endl;
			cout << "The Season Total Runs of Player 4 are: " << P4.get_SeasonTotalRuns() << endl;
			cout << "The Season Innings of Player 4 are: " << P4.get_SeasonInnings() << endl;
			cout << "The Season Deliveries Faced by Player 4 are: " << P4.get_SeasonDeliveriesFaced() << endl;
			cout << "The Average of Player 4 is: " << P4.get_Avg() << endl;
			cout << "The Strike Rate of Player 4 is: " << P4.get_strikeRate() << endl;
			break;

		case 5: cout << "The Shirt No. of Player 5 is: " << P5.get_ShirtNo() << endl;
			cout << "The Season Total Runs of Player 5 are: " << P5.get_SeasonTotalRuns() << endl;
			cout << "The Season Innings of Player 5 are: " << P5.get_SeasonInnings() << endl;
			cout << "The Season Deliveries Faced by Player 5 are: " << P5.get_SeasonDeliveriesFaced() << endl;
			cout << "The Average of Player 5 is: " << P5.get_Avg() << endl;
			cout << "The Strike Rate of Player 5 is: " << P5.get_strikeRate() << endl;
			break;
		}
	} while (PL_NO != 0);

	return 0;
}

Player::Player(int s_no, int t_runs, int s_in, int s_del)
{
	int digCount = (s_no == 0) ? 1 : (log10(s_no) + 1);
	if (digCount != 2)
		{cout << "Error! Enter a two digit shirt number\n" << endl; return;}
	else ShirtNo = s_no;

	if (s_in <= 0 || s_in>10)
		{cout << "Error! Enter non-zero season innings under 10 \n" << endl; return;}
	else SeasonInnings = s_in;

	if (t_runs <= 0 || t_runs>3600)
		{cout << "Error! Enter total runs between 0 and 3600 \n" << endl; return;}
	else SeasonTotalRuns = t_runs;

	if (s_del <= 0 || s_del>600)
		{cout << "Error! Enter non-zero season deliveries faced under 600 \n" << endl; return;}
	else SeasonDeliveriesFaced = s_del;
	
	flag = 1;
}

int Player::set_ShirtNo(int s_no)
{
	int digCount = (s_no == 0) ? 1 : (log10(s_no) + 1);
	if (digCount != 2)
		{cout << "Error! Enter a two digit number "; return 1;}
	ShirtNo = s_no; return 0;
}

int Player::set_SeasonTotalRuns(int t_runs)
{
	if (t_runs <= 0 || t_runs>3600)
		{cout << "Error! Enter a number between 0 and 3600 "; return 1;}
	SeasonTotalRuns = t_runs; return 0;
}

int Player::set_SeasonInnings(int s_in)
{
	if (s_in <= 0 || s_in>10)
		{cout << "Error! Enter a number between 0 and 10 "; return 1;}
	SeasonInnings = s_in; return 0;
}

int Player::set_SeasonDeliveriesFaced(int s_del)
{
	if (s_del <= 0 || s_del>600)
		{cout << "Error! Enter a number between 0 and 600  "; return 1;}
	SeasonDeliveriesFaced = s_del; return 0;
}

