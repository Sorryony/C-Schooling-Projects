/* -----------------------------------------------------------------------------

FILE:             math_testor.CPP

DESCRIPTION:       Math test that keeps track of your score.

COMPILER:        Microsoft vis 2017.

NOTES:             Put other information here ...

MODIFICATION HISTORY:

Author                  Date               Version
---------------         ----------         --------------
Anthony  Giordano       11/06/2017         1
Anthony  Giordano       11/06/2017         1.1
Anthony  Giordano       11/07/2017         1.2
Anthony  Giordano       11/07/2017         1.3
Anthony  Giordano       11/08/2017         1.4
Anthony  Giordano       11/13/2017         1.5
Anthony  Giordano       11/15/2017         1.6

----------------------------------------------------------------------------- */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

// Proto types

//Info Functions
void Welcome();
char Get_Choice();
void T_info(char[], int);

//Math Functions
int t_addition(int, ofstream&);
int t_subbtraction(int, ofstream&);
int t_multi(int, ofstream&);
int t_division(int, ofstream&);

//Gear Funcations
int Diff(int);
char t_choice();
void damge_flash();
int score();



int main()
{
	const string PROGRAMMER_NAME = "Anthony Giordano";
	ofstream mymath;
	static time_t R_seed = time(NULL);
	

	Welcome();

	int d_level;
	char user_name[20], user_name2[20];
	cout << "Please enter user-name: ";
	cin >> user_name;
	cin >> user_name2;
	string file; 
	string file2;
	file = user_name;
	file2 = user_name2;

	int seed;
	cout << "Please choose your difficulty level from 1-5: ";
	cin >> seed;

	T_info(user_name, seed);

	system("PAUSE");
	system("cls");

	srand(R_seed);

	Diff(seed);
	mymath.open(file+"_"+file2+".txt", ios::out);
	mymath << "Start Of Program: " << ctime(&R_seed);
	mymath << user_name << "_" << user_name2 << endl;
	mymath << R_seed << endl;
	mymath << "Difficulty level: " << seed << endl;

	bool choice = true;
	while (choice)
	{

		char choice_m = Get_Choice();
		switch (choice_m)
		{

		case 'a':system("cls"); T_info(user_name, seed); t_addition(seed,mymath);
			break;
		case 'b':system("cls"); t_subbtraction(seed,mymath);
			break;
		case 'c':system("cls"); t_multi(seed,mymath);
			break;
		case 'd':system("cls"); t_division(seed,mymath);
			break;
		case 'q': choice = false;
			break;
		}
	}

	cout << "Programmed by: " << PROGRAMMER_NAME << " -- ";
	cout << __DATE__ << "  " __TIME__ << endl;
	cout << endl;

	static time_t R_seed2 = time(NULL);
	mymath << "End Program time: " <<  ctime(&R_seed2) << endl;
	mymath.close();

	system("pause");
	return 0;
}

char Get_Choice()
{
	char choice;

	cout << "           ARITHMETIC PRACTICE PROGRAM" << endl << endl;
	cout << " Welcome to the Math Skills Practice Program." << endl << endl;
	cout << " This program allows you to practice your math skills." << endl << endl;
	cout << " Choose what to practice in the menu shown below." << endl << endl;
	cout << " ---------------------------------------------------------" << endl << endl;
	cout << "          ARITHMETIC PRACTICE PROGRAM" << endl;
	cout << "                    MAIN MENU" << endl << endl;
	cout << " ---------------------------------------------------------" << endl << endl;
	cout << " \t\ta. Addition" << endl;
	cout << " \t\tb. Subtraction" << endl;
	cout << " \t\tc. Multiplication" << endl;
	cout << " \t\td. Division" << endl;
	cout << " \t\tq. Quit the program" << endl;
	cout << " ---------------------------------------------------------" << endl << endl;
	cout << " Enter your choice [ a b c d q ]:" << endl << endl;


	cin >> choice;

	choice = tolower(choice);

	if (choice >= 'a' && choice <= 'd' || choice == 'q')
		cout << endl << "You enetered: '" << choice;
	else
	{
		system("cls");
		cout << "\t\t\tyou did not enter 'a-d' and or 'q'" << endl;
		cout << "\t\t\tPlease try again" << endl;
	}
	cout << endl;

	return choice;

}


void T_info(char a[], int b)
{

	system("cls");
	cout << "Your user-name is: " << a << endl;
	cout << "The difficulty level you chose is: " << b << endl;
	cout << "--------------------------------------" << endl << endl << endl;
}

int t_subbtraction(int a, ofstream& mymath)
{
	int i;
	int attemps = 2;
	int R_points;
	double wrong;
	static time_t R_seed = time(NULL);
	mymath << "Problem Time : " << ctime(&R_seed) << endl;

	while (attemps < 3)
	{



		//int seed_fix = a /100;
		char choice;
		int num = Diff(a);
		double r_num = num;
		double num2 = (rand() % 75 + 10) + r_num + (rand() % 15);
		double num3 = (rand() % 75 + 10) + r_num + (rand() % 15);
		double result = num2 - num3;

		// Start of if statments for Generation
		if (num == 0)
		{
			int num5 = (rand() % 1 + 1) + r_num;
			int num6 = (rand() % 1 + 1) + r_num;
			num2 = num5 + (rand() % 6);
			num3 = num6 + (rand() % 6);
			result = num2 - num3;
		}

		if (num == 99)
		{
			int num5 = (rand() % 1 + 1) + r_num;
			int num6 = (rand() % 1 + 1) + r_num;
			num2 = num5 + (rand() % 900);
			num3 = num6 + (rand() % 900);
			result = num2 - num3;
		}

		if (num == 999)
		{
			int num5 = (rand() % 1 + 1) + r_num;
			int num6 = (rand() % 1 + 1) + r_num;
			num2 = num5 + (rand() % 9000);
			num3 = num6 + (rand() % 9000);
			result = num2 - num3;
		}

		if (num == 9999)
		{
			int num5 = (rand() % 1 + 1) + r_num;
			int num6 = (rand() % 1 + 1) + r_num;
			num2 = num5 + (rand() % 90000);
			num3 = num6 + (rand() % 90000);
			result = num2 - num3;
		}		// end of if statments for Generation

		double num4 = result + (rand() % 6);
		double num7 = result + (rand() % 6);
		double num8 = result + (rand() % 6);
		double num9 = result + (rand() % 6);

		for (i = 0; i <= 4; i++)
		{
			cout << "Solve:" << endl << endl;
			cout << "\t\t\t" << "  " << num2 << endl;
			cout << "\t\t\t" << "- " << num3 << endl;
			cout << "\t\t\t" << "----------" << endl;
			cout << "\t\t\t" << "??????????" << endl << endl;

			cout << "(a)" << "\t" << num4 << endl;
			cout << "(b)" << "\t" << num7 << endl;
			cout << "(c)" << "\t" << num8 << endl;
			cout << "(d)" << "\t" << num9 << endl;
			cout << "(e)" << "\t" << "NONE OF THE ABOVE" << endl;


			cout << "Choice: ";

			mymath << "Solve:" << endl << endl;
			mymath << "\t\t\t" << "  " << num2 << endl;
			mymath << "\t\t\t" << "- " << num3 << endl;
			mymath << "\t\t\t" << "----------" << endl;
			mymath << "\t\t\t" << "??????????" << endl << endl;

			mymath << "(a)" << "\t" << num4 << endl;
			mymath << "(b)" << "\t" << num7 << endl;
			mymath << "(c)" << "\t" << num8 << endl;
			mymath << "(d)" << "\t" << num9 << endl;
			mymath << "(e)" << "\t" << "NONE OF THE ABOVE" << endl;
			mymath << "Answer: " << result << endl << endl;




			char choice_m = t_choice();

			switch (choice_m)
			{
			case'a': 'a' == num4; if (num4 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num4 != result) { attemps; attemps++; i; i++; }
					 break;
			case'b': 'b' == num7; if (num7 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num7 != result) { attemps; attemps++; i; i++; }
					 break;
			case'c': 'c' == num8; if (num8 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num8 != result) { attemps; attemps++; i; i++; }
					 break;
			case'd': 'd' == num9; if (num9 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num9 != result) { attemps; attemps++; i; i++; }
					 break;
			case'e': wrong == 'e'; if (num4 != result && num7 != result && num8 != result && num9 != result) { R_points; R_points++; attemps = 3; i; i = 4; }
					 break;
			}

			system("cls");
			mymath << "Choice: " << choice_m << endl;
		}



		cout << "Your Score is: " << R_points << endl;
		if (R_points = 1) { score(); }
		system("PAUSE");
		system("cls");
	}

	return R_points;
}

int t_addition(int a, ofstream& mymath)
{
	int i;
	int attemps = 2;
	int R_points = 0;
	double wrong;
	static time_t R_seed = time(NULL);
	mymath << "Problem Time : " << ctime(&R_seed) << endl;

	while (attemps < 3)
	{



			//int seed_fix = a /100;
			char choice;
			int num = Diff(a);
			double r_num = num;
			double num2 = (rand() % 75 + 10) + r_num + (rand() % 15);
			double num3 = (rand() % 75 + 10) + r_num + (rand() % 15);
			double result = num2 + num3;

			// Start of if statments for Generation
			if (num == 0)
			{
				int num5 = (rand() % 1 + 1) + r_num;
				int num6 = (rand() % 1 + 1) + r_num;
				num2 = num5 + (rand() % 6);
				num3 = num6 + (rand() % 6);
				result = num2 + num3;
			}

			if (num == 99)
			{
				int num5 = (rand() % 1 + 1) + r_num;
				int num6 = (rand() % 1 + 1) + r_num;
				num2 = num5 + (rand() % 900);
				num3 = num6 + (rand() % 900);
				result = num2 + num3;
			}

			if (num == 999)
			{
				int num5 = (rand() % 1 + 1) + r_num;
				int num6 = (rand() % 1 + 1) + r_num;
				num2 = num5 + (rand() % 9000);
				num3 = num6 + (rand() % 9000);
				result = num2 + num3;
			}

			if (num == 9999)
			{
				int num5 = (rand() % 1 + 1) + r_num;
				int num6 = (rand() % 1 + 1) + r_num;
				num2 = num5 + (rand() % 90000);
				num3 = num6 + (rand() % 90000);
				result = num2 + num3;
			}		// end of if statments for Generation

			double num4 = result + (rand() % 6);
			double num7 = result + (rand() % 6);
			double num8 = result + (rand() % 6);
			double num9 = result + (rand() % 6);

			for (i = 0; i <= 4; i++)
			{
				cout << "Solve:" << endl << endl;
				cout << "\t\t\t" << "  " << num2 << endl;
				cout << "\t\t\t" << "+ " << num3 << endl;
				cout << "\t\t\t" << "----------" << endl;
				cout << "\t\t\t" << "??????????" << endl << endl;

				cout << "(a)" << "\t" << num4 << endl;
				cout << "(b)" << "\t" << num7 << endl;
				cout << "(c)" << "\t" << num8 << endl;
				cout << "(d)" << "\t" << num9 << endl;
				cout << "(e)" << "\t" << "NONE OF THE ABOVE" << endl;


				cout << "Choice: ";

				mymath << "Solve:" << endl << endl;
				mymath << "\t\t\t" << "  " << num2 << endl;
				mymath << "\t\t\t" << "+ " << num3 << endl;
				mymath << "\t\t\t" << "----------" << endl;
				mymath << "\t\t\t" << "??????????" << endl << endl;

				mymath << "(a)" << "\t" << num4 << endl;
				mymath << "(b)" << "\t" << num7 << endl;
				mymath << "(c)" << "\t" << num8 << endl;
				mymath << "(d)" << "\t" << num9 << endl;
				mymath << "(e)" << "\t" << "NONE OF THE ABOVE" << endl;
				mymath << "Answer: " << result << endl << endl;




				char choice_m = t_choice();

				switch (choice_m)
				{
				case'a': 'a' == num4; if (num4 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num4 != result) { attemps; attemps++; i; i++; }
						 break;
				case'b': 'b' == num7; if (num7 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num7 != result) { attemps; attemps++; i; i++; }
						 break;
				case'c': 'c' == num8; if (num8 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num8 != result) { attemps; attemps++; i; i++; }
						 break;
				case'd': 'd' == num9; if (num9 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num9 != result) { attemps; attemps++; i; i++; }
						 break;
				case'e': wrong == 'e'; if (num4 != result && num7 != result && num8 != result && num9 != result) { R_points; R_points++; attemps = 3; i; i = 4;}
						 break;
				}

				system("cls");
				mymath << "Choice: " << choice_m << endl;
			}
		


		cout << "Your Score is: " << R_points << endl;
		if (R_points = 1) { score(); }
		system("PAUSE");
		system("cls");
	}

	return R_points;
}

int t_division(int a ,ofstream& mymath)
{
	int i;
	int attemps = 2;
	int R_points = 0;
	double wrong;
	static time_t R_seed = time(NULL);
	mymath << "Problem Time : " <<  ctime(&R_seed) << endl;

	while (attemps < 3)
	{



		//int seed_fix = a /100;
		char choice;
		int num = Diff(a);
		double r_num = num;
		int num2 = (rand() % 75 + 10) + r_num + (rand() % 15);
		int num3 = (rand() % 75 + 10) + r_num + (rand() % 15);
		int result = num2 / num3;

		// Start of if statments for Generation
		if (num == 0)
		{
			int num5 = (rand() % 1 + 1) + r_num;
			int num6 = (rand() % 1 + 1) + r_num;
			num2 = num5 + (rand() % 6);
			num3 = num6 + (rand() % 6);
			result = num2 / num3;
		}

		if (num == 99)
		{
			int num5 = (rand() % 1 + 1) + r_num;
			int num6 = (rand() % 1 + 1) + r_num;
			num2 = num5 + (rand() % 900);
			num3 = num6 + (rand() % 900);
			result = num2 / num3;
		}

		if (num == 999)
		{
			int num5 = (rand() % 1 + 1) + r_num;
			int num6 = (rand() % 1 + 1) + r_num;
			num2 = num5 + (rand() % 9000);
			num3 = num6 + (rand() % 9000);
			result = num2 / num3;
		}

		if (num == 9999)
		{
			int num5 = (rand() % 1 + 1) + r_num;
			int num6 = (rand() % 1 + 1) + r_num;
			num2 = num5 + (rand() % 90000);
			num3 = num6 + (rand() % 90000);
			result = num2 / num3;
		}		// end of if statments for Generation

		double num4 = result + (rand() % 6);
		double num7 = result + (rand() % 6);
		double num8 = result + (rand() % 6);
		double num9 = result + (rand() % 6);

		for (i = 0; i <= 4; i++)
		{
			cout << "Solve:" << endl << endl;
			cout << "\t\t\t" << "  " << num2 << endl;
			cout << "\t\t\t" << "/ " << num3 << endl;
			cout << "\t\t\t" << "----------" << endl;
			cout << "\t\t\t" << "??????????" << endl << endl;

			cout << "(a)" << "\t" << num4 << endl;
			cout << "(b)" << "\t" << num7 << endl;
			cout << "(c)" << "\t" << num8 << endl;
			cout << "(d)" << "\t" << num9 << endl;
			cout << "(e)" << "\t" << "NONE OF THE ABOVE" << endl;


			cout << "Choice: ";

			mymath << "Solve:" << endl << endl;
			mymath << "\t\t\t" << "  " << num2 << endl;
			mymath << "\t\t\t" << "/ " << num3 << endl;
			mymath << "\t\t\t" << "----------" << endl;
			mymath << "\t\t\t" << "??????????" << endl << endl;

			mymath << "(a)" << "\t" << num4 << endl;
			mymath << "(b)" << "\t" << num7 << endl;
			mymath << "(c)" << "\t" << num8 << endl;
			mymath << "(d)" << "\t" << num9 << endl;
			mymath << "(e)" << "\t" << "NONE OF THE ABOVE" << endl;
			mymath << "Answer: " << result << endl << endl;




			char choice_m = t_choice();

			switch (choice_m)
			{
			case'a': 'a' == num4; if (num4 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num4 != result) { attemps; attemps++; i; i++; }
					 break;
			case'b': 'b' == num7; if (num7 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num7 != result) { attemps; attemps++; i; i++; }
					 break;
			case'c': 'c' == num8; if (num8 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num8 != result) { attemps; attemps++; i; i++; }
					 break;
			case'd': 'd' == num9; if (num9 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num9 != result) { attemps; attemps++; i; i++; }
					 break;
			case'e': wrong == 'e'; if (num4 != result && num7 != result && num8 != result && num9 != result) { R_points; R_points++; attemps = 3; i; i = 4; }
					 break;
			}

			system("cls");
			mymath << "Choice: " << choice_m << endl;
		}

		

		cout << "Your Score is: " << R_points << endl;
		if (R_points = 1) { score(); }
		system("PAUSE");
		system("cls");
	}

	return R_points;
}

int t_multi(int a, ofstream& mymath)
{
	int i;
	int attemps = 2;
	int R_points = 0;
	double wrong;
	static time_t R_seed = time(NULL);
	mymath << "Problem Time : " << ctime(&R_seed) << endl;

	while (attemps < 3)
	{



		//int seed_fix = a /100;
		char choice;
		int num = Diff(a);
		double r_num = num;
		double num2 = (rand() % 75 + 10) + r_num + (rand() % 15);
		double num3 = (rand() % 75 + 10) + r_num + (rand() % 15);
		double result = num2 * num3;

		// Start of if statments for Generation
		if (num == 0)
		{
			int num5 = (rand() % 1 + 1) + r_num;
			int num6 = (rand() % 1 + 1) + r_num;
			num2 = num5 + (rand() % 6);
			num3 = num6 + (rand() % 6);
			result = num2 * num3;
		}

		if (num == 99)
		{
			int num5 = (rand() % 1 + 1) + r_num;
			int num6 = (rand() % 1 + 1) + r_num;
			num2 = num5 + (rand() % 900);
			num3 = num6 + (rand() % 900);
			result = num2 * num3;
		}

		if (num == 999)
		{
			int num5 = (rand() % 1 + 1) + r_num;
			int num6 = (rand() % 1 + 1) + r_num;
			num2 = num5 + (rand() % 9000);
			num3 = num6 + (rand() % 9000);
			result = num2 * num3;
		}

		if (num == 9999)
		{
			int num5 = (rand() % 1 + 1) + r_num;
			int num6 = (rand() % 1 + 1) + r_num;
			num2 = num5 + (rand() % 90000);
			num3 = num6 + (rand() % 90000);
			result = num2 * num3;
		}		// end of if statments for Generation

		double num4 = result + (rand() % 6);
		double num7 = result + (rand() % 6);
		double num8 = result + (rand() % 6);
		double num9 = result + (rand() % 6);

		for (i = 0; i <= 4; i++)
		{
			cout << "Solve:" << endl << endl;
			cout << "\t\t\t" << "  " << num2 << endl;
			cout << "\t\t\t" << "X " << num3 << endl;
			cout << "\t\t\t" << "----------" << endl;
			cout << "\t\t\t" << "??????????" << endl << endl;

			cout << "(a)" << "\t" << num4 << endl;
			cout << "(b)" << "\t" << num7 << endl;
			cout << "(c)" << "\t" << num8 << endl;
			cout << "(d)" << "\t" << num9 << endl;
			cout << "(e)" << "\t" << "NONE OF THE ABOVE" << endl;


			cout << "Choice: ";

			mymath << "Solve:" << endl << endl;
			mymath << "\t\t\t" << "  " << num2 << endl;
			mymath << "\t\t\t" << "X " << num3 << endl;
			mymath << "\t\t\t" << "----------" << endl;
			mymath << "\t\t\t" << "??????????" << endl << endl;

			mymath << "(a)" << "\t" << num4 << endl;
			mymath << "(b)" << "\t" << num7 << endl;
			mymath << "(c)" << "\t" << num8 << endl;
			mymath << "(d)" << "\t" << num9 << endl;
			mymath << "(e)" << "\t" << "NONE OF THE ABOVE" << endl;
			mymath << "Answer: " << result << endl << endl;




			char choice_m = t_choice();

			switch (choice_m)
			{
			case'a': 'a' == num4; if (num4 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num4 != result) { attemps; attemps++; i; i++; }
					 break;
			case'b': 'b' == num7; if (num7 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num7 != result) { attemps; attemps++; i; i++; }
					 break;
			case'c': 'c' == num8; if (num8 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num8 != result) { attemps; attemps++; i; i++; }
					 break;
			case'd': 'd' == num9; if (num9 == result) { R_points; R_points++; attemps = 3; i = 4; } if (num9 != result) { attemps; attemps++; i; i++; }
					 break;
			case'e': wrong == 'e'; if (num4 != result && num7 != result && num8 != result && num9 != result) { R_points; R_points++; attemps = 3; i; i = 4; }
					 break;
			}

			system("cls");
			mymath << "Choice: " << choice_m << endl;
		}



		cout << "Your Score is: " << R_points << endl;
		if (R_points = 1) { score(); }
		system("PAUSE");
		system("cls");
	}

	return R_points;
}

int Diff(int a)
{
	double num;
	if (a == 0)
	{
		num = 0;
	}

	if (a == 1)
	{
		num = 0;
	}
	if (a == 2)
	{
		num = 9;
	}

	if (a == 3)
	{
		num = 99;
	}

	if (a == 4)
	{
		num = 999;
	}

	if (a == 5)
	{
		num = 9999;
	}

	return num;
}

char t_choice()
{
	char choice;
	cin >> choice;
	choice = tolower(choice);

	if (choice >= 'a' && choice <= 'e')
		cout << "You enetered: '" << choice << "', that is correct input." << endl;
	else
	{
		cout << "you did not enter 'a-e'" << endl;
		cout << "Program will now close" << endl;

	}
	cout << endl;

	return choice;
}

void Welcome()
{
	cout << "\t\t\t\t WELCOME TO A MATH TESTER PROGRAM!!!" << endl;
	cout << "\t\t\t\t RULES OF THIS PROGRAM ARE SIMPLE!" << endl;
	cout << "\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t YOU WILL BE TESTED FOR WHICH EVER MATH YOU CHOOSE TO TAKE!" << endl;
	cout << "\t\t\t\t IF YOU GET ONE  RIGHT +1 TO YOUR SCORE" << endl;
	system("PAUSE");
	system("cls");
	cout << "\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t              HAVE FUN!!!!!" << endl;
	cout << "\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t--------------------------------------------" << endl;
	damge_flash();
	system("cls");
}

void damge_flash()
{
	system("color 41");
	Sleep(350);
	system("color 02");
	Sleep(350);
	system("color 41");
	Sleep(350);
	system("color 02");
	Sleep(350);
	system("color 41");
	Sleep(350);
	system("color 02");
	Sleep(350);
	system("color 41");
	Sleep(350);
	system("color 02");
}

int score()
{
	int R_score = 0;
	R_score++;

	cout << R_score << endl;

	return R_score;
}
