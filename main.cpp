#include<iostream>
#include<cmath>
using namespace std;

void thug(double m);
const double g = 6.674e-11;
const double l = 2.998e8;

int main() {
	double input;
	cout << "The mass of the object is: ";
	cin >> input;
	while (input != 0) {
		thug(input);
		cout << endl;
		cout << "The mass of the object is: ";
		cin >> input;
	}
}

void thug(double a) {
	double r = 2 * g * a;
	double nut = r / pow(l, 2);
	cout << "Radius is " << nut << " meters." << endl;
}
