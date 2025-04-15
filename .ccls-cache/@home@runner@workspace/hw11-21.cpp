//Introductory21.cpp - Displays the average stock price
//Created/revised by Christopher Hall on 4/15/2025

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getAverage(double prices[], int numElements);

int main()
{
	double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
	double average = 0.0;

//cal
	average = getAverage(prices, 10);
	
	cout << fixed << setprecision(2);
	cout << "Average stock price: $" << average << endl;
	return 0;
}	//end of main function

//Function definitions ************
double getAverage(double prices[], int numElements){
	double total = 0.0;
	for (int i =0; i < numElements; i += 1)
		total += prices[i];
	//end for
	return total / numElements;
}