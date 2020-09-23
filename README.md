# Weight-Class-BMI-Calculator
The program that inspired me to lose weight. So I built it a calculator that calculates the total BMI based on height (inches) and weight.

### What I've learned
- using a while loop to continuously run the program even after the total BMI has been presented to request more user input.
```cpp
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
```

- calculating the Body Mass Index based on the total amount of inches in height and weight size the user puts in.
```cpp
  	const double INCH_TO_CM = 2.54;
	const double POUNDS_TO_GM = 453.59;
```

- using the cmath library to deliver the calculation of any random integer.
```cpp
	#include <cmath>
```
- eat less sugar and stay healthy in order to keep the weight off, lol! Focus on the BMI; not the weight! :)

### How it works!
- Download the release version in .ZIP or .TAR.GZ to extract the files or simply download the .EXE in the repository. Enjoy! :)

### Here's an example
![ezgif-5-1c56fe34683a](https://user-images.githubusercontent.com/36749450/93844223-76516480-fc6a-11ea-886c-c710c466c67d.gif)

### License
[MIT](https://choosealicense.com/licenses/mit/)
