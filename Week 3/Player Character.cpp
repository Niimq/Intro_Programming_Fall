#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	// Task 1.

	string pName, nName = "Giant Slug";

	// Player information

	int pHP = 100, Mana = 200, pStrength, Dextenity, pDamage, pDodgeChance;

	// NPC Information.

	int nHP, nDamage, nStrength, Dodge = 20;



	// Assiging values for player randomly.
	srand(time(NULL));
	pStrength = rand() % 20 + 1;
	Dextenity = rand() % 20 + 1;

	pDamage = 20 + (pStrength * 2);
	pDodgeChance = 25 + (Dextenity / 2);


	// Assigning values for NPC

	nHP = rand() % 601 + 400;
	nStrength = 20 + rand() % 21;

	nDamage = nStrength * 2 + 10;

	
	// Task 2.
	cout << "Welcome to Game01, To start with please enter your username : \n";
	cin >> pName;
	system("CLS");

	// Displaying the information of Player.

	cout << "Information about player " << pName <<" is shown down below.\n";
	cout << "==============================================\n";
	cout << "Your Player's Health : " << pHP << endl;
	cout << "Your Player's Mana : " << Mana << endl;
	cout << "Your Player's Dextenity : " << Dextenity << endl;
	cout << "Your Player's strength : " << pStrength << endl;
	cout << "Your Player's Damage : " << pDamage << endl;
	cout << "Your Player's DodgeChance : " << pDodgeChance << endl;
	cout << "==============================================\n";

	cout << "\n\n";

	// Displaying the information of Boss.

	cout << "Information about " << nName << " is shown down below.\n";
	cout << "==============================================\n";
	cout << nName <<"'s Health : " << nHP << endl;
	cout << nName <<"'s strength : " << nStrength << endl;
	cout << nName <<"'s Damage : " << nDamage << endl;
	cout << nName <<"'s DodgeChance : " << Dodge << endl;
	cout << "==============================================\n";

	system("pause");
	system("CLS");

	// Task 3.

	// Deciding who will start first and how the attack function works.
	int Turns = rand () % 100 + 1;
	int HitBox = rand() % 100 + 1;

	if (Turns > 55)
	{
		// Player starts first
		cout << pName << "Starts first.\n";
		system("pause");
	}
	else if (HitBox > Dodge)
	{
		nHP = nHP - pDamage;
		cout << " Ouch! that hurts!\n";
		cout << nName << "'s HP is : " << nHP << endl;
	}
	else if (HitBox < Dodge)
	{
		cout << "Haha Nice Try Adventurer.\n";
	}
	else if (Turns < 55)
	{
		cout << nName << "Starts first.\n";
	}
	else if (HitBox > pDodgeChance)
	{
		pHP = pHP - nDamage;
		cout << " Ouch! that hurts!\n";
		cout << pName << "'s HP is : " << pHP << endl;
	}
	else
	{
		cout << "Smooth Dodge!\n";
	}

	// Fix this later.

	return 0;
}