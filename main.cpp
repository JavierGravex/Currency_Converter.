#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std; 


void DTP();
void PTD();
void ETD(); 
void DTE();
void menu();



int main() {

	menu();



	return 0;
}

void menu() {

	int opt = 0;
	char opt2; 

	system("cls");

	cout << "---------------------------" << endl;
	cout << " \t MENU " << endl;
	cout << "---------------------------" << endl;
	cout << "1: Convert Dollar to Peso " << endl;
	cout << "2: Convert Peso to Dollar " << endl;
	cout << "3: Convert Euro to Dollar " << endl;
	cout << "4: Convert Dollar to Euro " << endl;
	cout << "5: Exit. " << endl;

	cout << "Enter option." << endl;
	cin >> opt;

	do {
		switch (opt)
		{
		case 1:
			
			DTP();
			break;

		case 2:
			
			PTD();
			break;
		
		case 3:
			
			ETD();
			break;
		
		case 4:
			
			DTE();
			break;

		case 5:

			cout << " Bye-bye space-cowboy! \n";
			exit(0);
			break;

		default:
			cout << "Wrong input mate!, Try again. " << endl;
			menu();
			break;
		}
		cout << "\n\nDo you want to do another operation? \n";
		cin >> opt2;


		if (opt2 == 'Y' || opt2 == 'y') {
			menu();
		}
		else if (opt2 == 'N' || opt2 == 'n') {
			cout << "\n See you later Space-Cowboy!!\n";
			exit(0);
		}
		else {
			exit(0);
		}

	} while (!6);


	
}


void DTP() {
	double x;
	double dollar = 0.058;

	cout << "Enter amount in Dollars: \n$";
	cin >> x;
	
	cout << "$" << x / dollar << " Pesos.";

}

void PTD() {
	double x; 
	double dollar = 0.058;

	cout << "Enter amount in Pesos: \n$";
	cin >> x;

	cout << "$" << setprecision(3) <<  x * dollar << " Dollars.";

}

void ETD() {
	double x;
	double dollar = 1.09;

	cout << "Enter amount in Euro: \n$";
	cin >> x;

	cout << "$" << x * dollar << " Dollar.";
}

void DTE() {
	double x;
	double dollar = 1.09;

	cout << "Enter amount in Dollar: \n$";
	cin >> x;

	cout << "$" << x / dollar << " Euros.";
}

