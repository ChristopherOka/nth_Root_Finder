#include "functions.h"
#include <iostream>
#include <cmath>
#include <string>

void nth_root() {
	int root;
	double real;
	double imaginary;
	double r;
	double angle;
	std::cout << "Enter what root you'd like to find (eg. 3rd root, 5th root): ";
	std::cin >> root;
	std::cout << "Enter the real component: ";
	std::cin >> real;
	std::cout << "Enter the imaginary component: ";
	std::cin >> imaginary;
	r = sqrt(pow(real, 2) + pow(imaginary, 2)); //calculate the length of the complex number for polar form
	
	angle = abs(atan(imaginary / real)); //calculate the arg value
	if (real < 0 && imaginary > 0) { //performs a specific calculation for the 2nd quadrant 
		angle = 3.14159265358979323846 - angle;
	}
	else if (real < 0 && imaginary < 0) { //performs a specific calculation for the 3rd quadrant
		angle = angle + 3.141592653589793;
	}
	else if (real > 0 && imaginary < 0) { //performs a specific calculation for the 4th quadrant 
		angle = angle + 6.2831853; 
	}
	std::cout << "Your complex number in polar form is: ";
	std::cout << r << "(cos(" << angle << ") + isin(" << angle << "))\n"; //prints the first nth root
	std::cout << "Your roots are:\n";

	for (int i = 0; i < root; i++) { //repeats this calculation until all roots are calculated
		double new_angle = (angle / root) + ((i * 6.2831853) / root); 
		std::cout << root << "root(" << r << ")" << "(cos(" << new_angle << ") + isin(" << new_angle << "))\n"; //prints all the roots to console
	}
}
