// Lab 9-2.cpp - displays two monthly car payments
// Created/revised by Christopher Hall on 4/13/2025

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

// Function prototypes
double getAverage(double times[], int numElements);
double getLowest(double times[], int numElements);

int main() 
{ 
  double finishTimes[5] = {0.0};
  double avgTime = 0.0;
  double lowestTime = 0.0;

  // Input the finish times
  for (int i =0; i < 5; i += 1) {
    cout << "Time to finish race " << i + 1 << ": ";
    cin >> finishTimes[i];
  } //end for

  //call functions
  avgTime = getAverage(finishTimes, 5);
  lowestTime = getLowest(finishTimes, 5);

  // Output the results
  cout << fixed << setprecision(1) << endl;
  cout << "Average time: " << avgTime << endl;
  cout << "Lowest time: " << lowestTime << endl;
  return 0; 
} // end of main function

//Function definitions ************
double getAverage(double times[], int numElements){
  double total = 0.0;

  for (int i = 0; i < numElements; i += 1)
    total += times[i];
  //end for
  return total / numElements;
} // end getAverage

double getLowest(double times[], int numElements){
  double lowest = times[0];
  for (int i = 1; i < numElements; i += 1)
    if (times[i] < lowest)
      lowest = times[i];
  //end if
  //end for
  return lowest;
} // end getLowest