//Ethen Campos
//October 24 2017
//EthenCampos-COP2000-Homework3A
//This program will calculate different membership fees

#include <iostream>
#include <iomanip>

using namespace std;



int main()
{
	// Constants
	const int GOLD_LEVEL = 1,
		SILVER_LEVEL = 2,
		BRONZE_LEVEL = 3,
		QUIT = 4,
		totalYears = 10;
	const float GOLD_APR = 0.01,
		SILVER_APR = 0.02,
		BRONZE_APR = 0.04;

	// Variables
	int menu_choice;
	float INITIAL_FEE_GOLD = 1200.00,
		INITIAL_FEE_SILVER = 1200.00,
		INITIAL_FEE_BRONZE = 1200.00;

	cout << fixed << showpoint << setprecision(2);

	//do loop
	do
	{


		// Display Menu
		cout << "           Welcome to Ronda's Strikeforce Gym!!\n";
		cout << "x-------------------------------------------------x\n";
		cout << "          Membership Fee Calculator\n";
		cout << "1. Gold\n";
		cout << "2. Silver\n";
		cout << "3. Bronze\n";
		cout << "4. Quit\n\n";
		cout << "Please enter your membership level (1-3 Enter 4 to Quit) > ";
		cin >> menu_choice;

		// Validate the input 
		while (menu_choice < GOLD_LEVEL || menu_choice > QUIT)
		{
			cout << "Invalid entry! \n";
			cout << "Please enter a selection from 1-4: ";
			cin >> menu_choice;
		}

		// Quit 
		if (menu_choice != QUIT)
		{
			//Switch Statment
			switch (menu_choice)
			{


			case GOLD_LEVEL:

				for (int years = 1; years <= totalYears; years++)
				{
					INITIAL_FEE_GOLD = INITIAL_FEE_GOLD + (INITIAL_FEE_GOLD * GOLD_APR);
					cout << "Year " << years << "   " << INITIAL_FEE_GOLD << endl;
				}
				break;

			case SILVER_LEVEL:


				for (int years = 1; years <= totalYears; years++)
				{
					INITIAL_FEE_SILVER = INITIAL_FEE_SILVER + (INITIAL_FEE_SILVER * SILVER_APR);
					cout << "Year " << years << "   " << INITIAL_FEE_SILVER << endl;
				}
				break;


			case BRONZE_LEVEL:

				for (int years = 1; years <= totalYears; years++)
				{
					INITIAL_FEE_BRONZE = INITIAL_FEE_BRONZE + (INITIAL_FEE_BRONZE * BRONZE_APR);
					cout << "Year   " << years << "  " << INITIAL_FEE_BRONZE << endl;
				}
				break;


			}
		}
	}
	//while loop
	while (menu_choice != QUIT);
	cout << "Thank You For Using Ronda's Fee Calculator!\n";
	return 0;
}