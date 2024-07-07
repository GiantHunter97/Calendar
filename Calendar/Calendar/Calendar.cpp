// Calendar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int day = 0, month = 0, year = 0;
	int monthMax = 13, days31 = 31, days30 = 30, days29 = 29;
	int Row = 4, Column = 7;
	string weekDays[] = { "Sunday", "Monday", "Tuesday", "Wensday", "Thursday", "Friday", "Saturday" };
	string months[] = { "  January", "\tFebruary" , "\tMarch" , "\t\tApril" ,  "\n  May" ,"\t\tJune" ,"\t\tJuly" , "\t\tAugust" , "\n  September" , "\tOctober" , "\t\tNovember", "\tDecember" };
	

	for (month = 0; month < 12; month++)					//Months Are printed ok and properly spaced
	{
		cout << months[month];
	}

	cout << endl;
	for (int column = 0; column < 7; column++)
	{
		cout << weekDays[column] << " 1 ";
	}

/*
	for (int row = 1; row < 5; row++)
	{
		cout << "\nRow " << row << endl;

		for (int column = 0; column < 7; column++)
		{
			cout << weekDays[column]<<" ";

		}
		
	}
*/



	return 0;
}


void calendarDays(int row, int column, int day) 
{
	for (int row = 1; row < 5; row++)
	{
		cout << "\nRow " << row << endl;
		for (int column = 1; column < 8; column++)
		{
			cout << "Column " << column << " ";
		}
	}

}






/*
There's 7 months with 31 days - 1, 2, 3, 5, 7, 8, 10, 12
There's 4 months with 30 days - 4, 6, 9, 11
There's 1 with 29 - 2

Months are 


Just saving code

	for (int row = 1; row < 5; row++)
	{
		cout << "\nRow " << row<<endl;
		for (int column = 1; column < 8; column++)
		{
			cout << "Column " << column<< " ";
		}
	}




*/
