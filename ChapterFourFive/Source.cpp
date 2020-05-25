#include <iostream>
#include <string>

int main() {

	int stay = 1;
	int PER_NIGHT = 100;
	int SERVICE_FEE = 35;
	double TELE_FEE = 0.25;
	int choice;

	int nights = 0, minutes = 0, totalMinutes, services = 0, totalCharge = 0;

	std::cout << "WELCOME TO THE LAKE VIEW HOTEL \n";

	while (stay == 1) {
		nights++;
		std::cout << "Night " << nights << "\n";

		std::cout << "Would you like room service? >>> 1 for yes, 2 for no\n";
		std::cin >> choice;
		if (choice == 1) {
			services++;
		}

		std::cout << "Would you like to use the telephone? >>> 1 for yes, 2 for no\n";
		std::cin >> choice;
		if (choice == 1) {
			std::cout << "How many minnutes would you like to use the phone for?>>>\n";
			std::cin >> minutes;
			totalCharge += minutes;
		}
		std::cout << "Is tonight the last night you would like to stay? 1 for yes, 2 for no\n";
		std::cin >> choice;
		if (choice == 1) {
			stay = 0;
		}

	}
	totalCharge = (nights * PER_NIGHT) + (services * SERVICE_FEE) + (minutes * TELE_FEE);

	std::cout << "Your total will be $" << totalCharge << ".";

	return 0;
}
int triangle() {
	double sideOne;
	double sideTwo;
	double sideThree;
	double perimeter;
	double area;
	int quit = 0;
	int choice;

	while (quit < 1)
	{
		std::cout << "Enter a triangle to calculate: Equilateral Triangle = 1, Right Triangle = 2, or QUIT = Any Other Number\n";
		std::cin >> choice;
		if (choice == 1) {
			std::cout << "Equilateral Triangle Selected: \n";
			std::cout << "Enter side One: >>>\n";
			std::cin >> sideOne;
			std::cout << "Enter side Two: >>>\n";
			std::cin >> sideTwo;
			if (sideOne != sideTwo)
			{
				std::cout << "Not possible, try again.\n";
			}
			else if (sideOne == sideTwo)
			{
				sideThree = sideOne;
				perimeter = sideOne + sideTwo + sideThree;
				area = (sqrt(3) / 4) * (sideOne * sideOne);
				std::cout << "Missing Side = " << sideThree << "\nThe perimeter = " << perimeter << "\nThe area = " << area << "\n";
			}
		}
		else if (choice == 2)
		{
			std::cout << "Right Triangle Selected: \n";
			std::cout << "Enter side One: >>>\n";
			std::cin >> sideOne;
			std::cout << "Enter side Two: >>>\n";
			std::cin >> sideTwo;
			sideThree = sqrt((sideOne * sideOne) + (sideTwo * sideTwo));
			perimeter = sideOne + sideTwo + sideThree;
			area = (sideOne * sideTwo) / 2;
			std::cout << "Missing Side = " << sideThree << "\nThe perimeter = " << perimeter << "\nThe area = " << area << "\n";
		}
		else
		{
			quit++;
		}
	}
	return 0;
}
int pizzaParlor() {
	double pepperoni = 0.99, sausage = 1.10, ham = 2.30, olives = 0.70, largePizza = 15.99, mediumPizza = 12.99, small = 9.99, total = 0.0;
	int quit = 0;
	int choice;

	while (quit < 1) {

		std::cout << "Would you like a pizza? YES - 1, NO - 2\n";
		std::cin >> choice;
		if (choice == 1)
		{
			std::cout << "Pick a size: Large Pizza: 15.99 = 1, Medium Pizza: 12.99 = 2, Small Pizza: 9.99 = 3\n";
			std::cin >> choice;
			if (choice == 1)
			{
				int j = 0;
				total += largePizza;
				while (j < 1)
				{
					std::cout << "Pepperoni: 0.99 - 1, Sausage: 1.10 - 2, Ham: 2.30 - 3, Olives: 0.70 - 4, or QUIT - 5\n";
					std::cin >> choice;
					if (choice == 1)
					{
						total += pepperoni;
					}
					else if (choice == 2)
					{
						total += sausage;
					}
					else if (choice == 3)
					{
						total += ham;
					}
					else if (choice == 4)
					{
						total += olives;
					}
					else
					{
						j++;
					}
				}
			}
			else if (choice == 2)
			{
				int j = 0;
				total += mediumPizza;
				while (j < 1)
				{
					std::cout << "Pepperoni: 0.99 - 1, Sausage: 1.10 - 2, Ham: 2.30 - 3, Olives: 0.70 - 4, or QUIT - 5\n";
					std::cin >> choice;
					if (choice == 1)
					{
						total += pepperoni;
					}
					else if (choice == 2)
					{
						total += sausage;
					}
					else if (choice == 3)
					{
						total += ham;
					}
					else if (choice == 4)
					{
						total += olives;
					}
					else
					{
						j++;
					}
				}
			}
			else if (choice == 3)
			{
				int j = 0;
				total += small;
				while (j < 1)
				{
					std::cout << "Pepperoni: 0.99 - 1, Sausage: 1.10 - 2, Ham: 2.30 - 3, Olives: 0.70 - 4, or QUIT - 5\n";
					std::cin >> choice;
					if (choice == 1)
					{
						total += pepperoni;
					}
					else if (choice == 2)
					{
						total += sausage;
					}
					else if (choice == 3)
					{
						total += ham;
					}
					else if (choice == 4)
					{
						total += olives;
					}
					else
					{
						j++;
					}
				}
			}
		}
		else
		{
			quit++;
		}
		std::cout << "Your total: " << total << "\n";
	}
	return 0;
}