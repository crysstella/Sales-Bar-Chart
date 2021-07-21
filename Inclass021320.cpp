#include <iostream>
using namespace std;

//Enter today’s sales for store 1: 1000
//Enter today’s sales for store 2: 1000
//Enter today’s sales for store 3: 1000
//Enter today’s sales for store 4: 1000
//Enter today’s sales for store 5: 1000
//SALES BAR CHART
//(Each * = $100)
//Store 1: **********
//Store 2: ************
//Store 3: ******************
//Store 4: ********
//Store 5: *******************

void main()
{
	int store1, store2, store3, store4, store5;
	cout << "Enter today's sales for store 1: " ;
	cin >> store1;
	cout << "Enter today's sales for store 2: ";
	cin >> store2;
	cout << "Enter today's sales for store 3: ";
	cin >> store3;
	cout << "Enter today's sales for store 4: ";
	cin >> store4;
	cout << "Enter today's sales for store 5: ";
	cin >> store5;

	cout << "SALES BAR CHART" << endl;
	cout << "Each *= 100" << endl;

	store1 /= 100;
	cout << "Store 1: ";
	for (int i = 0; i < store1; i++)
	{
		cout << "*";
	}
	cout << endl;

	store2 /= 100;
	cout << "Store 2: ";
	for (int i = 0; i < store2; i++)
	{
		cout << "*";
	}
	cout << endl;

	store3 /= 100;
	cout << "Store 3: ";
	for (int i = 0; i < store3; i++)
	{
		cout << "*";
	}
	cout << endl;

	store4 /= 100;
	cout << "Store 4: ";
	for (int i = 0; i < store4; i++)
	{
		cout << "*";
	}
	cout << endl;

	store5 /= 100;
	cout << "Store 5: ";
	for (int i = 0; i < store5; i++)
	{
		cout << "*";
	}
	cout << endl;

}