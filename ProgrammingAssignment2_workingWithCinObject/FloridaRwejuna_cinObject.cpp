#include <iostream>

using namespace std;

int main() {

	const double LITERS_TO_GALLONS = 3.78533; 
	double liters, gallons;

	cout << " Enter the number of gallons: \n";
	cin >> gallons;

	liters = gallons * LITERS_TO_GALLONS;

	cout << " There are " << liters << " liters in " << gallons << " gallons" << endl;








	return 0;
}