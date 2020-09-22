// Written by Jamil Matheny

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()

{
	// declare the input variables
	
	int height;
	int weight;
	double heightInches;
	double weightPounds;
	double heightMeters;
	double weightKilos;
	double bmi;

	const double INCH_TO_CM = 2.54;
	const double POUNDS_TO_GM = 453.59;

	// prompt user for input and accept input
	// displays the BMI value
	// this block of code runs the loop whilst the height is entered from user input & not equal to 0.

	while (true) {
		cout << "Enter your height (inches): ";
		cin >> height;
		cout << endl;
		if (height == 0)
			break;
		cout << "Enter your weight (pounds): ";
		cin >> weight;
		cout << endl;
		if (weight == 0)
			break;
			
		heightMeters = height * INCH_TO_CM / 100;
		weightKilos = weight * POUNDS_TO_GM / 1000;
			//compute BMI

		bmi = weightKilos / pow(heightMeters, 2);
			//display computed BMI
		cout << "BMI: " << bmi << endl;
	}
			//display end of job string
		cout << "End of job" << endl;
}

