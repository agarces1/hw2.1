
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int
main()
{
	//initialize empty variables
	float americanCurrency, ChocolatePounds, temperatureInCelsius, euros, kilograms, tempInF;

	//ask for dollar amount to spend
	cout << "How many U.S. dollars can you afford to spend on your trip?:";
	cin >> americanCurrency;
	//converts dollars to euros
	euros = americanCurrency * 0.83;
	//ask for pound of chocolate in LBL
	cout << "How many pounds of chocolate will you be buying?:";
	cin >> ChocolatePounds;
	//converts to kilograms
	kilograms = ChocolatePounds / 2.2;
	//ask for celsius temperature 
	cout << "What is the temperature in \370C on the European news?:";
	cin >> temperatureInCelsius;
	//converts to Fah
	tempInF = temperatureInCelsius * 9 / 5 + 32;
	//sets decimal points to 2
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "ITINERARY NOTES" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "\04 You have " << euros << " Euros to spend" << endl;
	cout << "\04 Plan to buy " << kilograms << "Kg of chocolate for family and friends." << endl;
	cout << "\04 The temperature in Europe is " << tempInF << " \370F, so dress appropriately." << endl;
	cout << "\04 Bon voyage!" << endl;

	return 0;
}
