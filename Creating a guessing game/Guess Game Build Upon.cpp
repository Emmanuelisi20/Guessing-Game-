/*Creating a guessing game and Expro the use of using if statements, do while statement and also making the user guess a ramdom number */
// Created by : Emmanuel Isidahomen 
#include<iostream>
#include<cmath>
#include<string>
#include<ctime>

using namespace std;

void play_games() // Funtions

{

	int random = rand() % 251;
	cout << random << endl;
	cout << "Guess a number:\n";
	while (true)
	{
		int guess;
		cin >> guess;
		if (guess == random)
		{
			cout << " Congratulations you won this game !\n";
			break;
		}	else if (guess < random)
		{
			cout << "Too Low fam\n";
		}	else
		{
			cout << "Too High Fam\n";
		}
	}
}

		int main()

		{
			srand(time(NULL));
			int choice;
			do
			{

				cout << "Press 0 to Quit your game\n";
				cout << "press 1 to Start a new game \n";
				cin >> choice;
				switch (choice)
				{
				case 0:
					cout << " This is the end of the game please stop here " << endl;
					return 0;
				case 1:
					play_games(); // Calling funtion for playing a video game.
					cout << "Let the games beginning  " << endl;
					break;
				}
			} while (choice != 0);
	}