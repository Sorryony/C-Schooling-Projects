/* -----------------------------------------------------------------------------

FILE:              Caculator.CPP

DESCRIPTION:       Does math all the way from adding to doing roots of any number.

COMPILER:          Microsoft Visual studios 2017

NOTES:             This is for the First project


MODIFICATION HISTORY:	2017/9/25  Started project and added Main Menu.
						2017/10/10 added 2nd Menu.
						2017/10/17 added Power and Root Funcations.
						2017/10/18 fixed up bugs and add .cpp file to Microsoft Visuals 2017.

Author                  Date               Version
---------------         ----------         --------------
Anthony Giordano        2017/10/18        1.0

----------------------------------------------------------------------------- */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>
#include <time.h>
#include <cstdlib>

using namespace std;

// Menus
char Get_Choice();
void SR_Choice();
char RS_Menu();



// First Menu Math
void Add_2_Numbers();
void Subtract_2_Numbers();
void Multiply_2_Numbers();
void Divide_2_Numbers();

//2nd Menu Math
void R_Squar();
void R_Cube();
void RTAP();
void SQRT();
void SQRT_3();
void Root();

// Flash
void quick_flash();
void damge_flash();

//Global
double ex = 2;
double base = 0;
double ex_3 = 3;
double ex_4 = 0;
double root = 0;
double Total;
double sq_2;

bool choice = true;
bool choice_m_2 = true;



/* -----------------------------------------------------------------------------
FUNCTION:          int_main()
DESCRIPTION:       Main source of code
RETURNS:           0
NOTES:             Where I put togather all my functions to creat the caculator
----------------------------------------------------------------------------- */
int main()
{
	
	
	while (choice)
	{
		char choice_m = Get_Choice();
		switch (choice_m)
		{
		case 'a': Add_2_Numbers();
			break;
		case 'b': Subtract_2_Numbers();
			break;
		case 'c': Multiply_2_Numbers();
			break;
		case 'd': Divide_2_Numbers();
			break;
		case 'e': SR_Choice();
			break;
		case 'q': choice = false;
			break;
		}
	}
	system("Pause");
	return 0;
}

/* -----------------------------------------------------------------------------
FUNCTION:          Get_Choice()
DESCRIPTION:       Displays menu with choice.
RETURNS:           Choice
NOTES:             
----------------------------------------------------------------------------- */
char Get_Choice()
{
	char choice;

	cout << "CALCULATOR PRACTICE PROGRAM" << endl << endl;
	cout << "Hello, and welcome to the Calculator Practice Program." << endl << endl;
	cout << "This program allows you to practice your math skills." << endl << endl;
	cout << "Choose what you want to practice in the menu shown below." << endl << endl;


	cout << "--------------------------------------------------------" << endl;
	cout << "			MAIN MENU" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "		a.     Addition			(X + Y)" << endl;
	cout << "		b.     Subtraction		(X - Y)" << endl;
	cout << "		c.     Multiplication		(X*Y)" << endl;
	cout << "		d.     Division			(X / Y)" << endl;
	cout << "		e.     Powers & Roots" << endl;
	cout << "		q.     Quit the program" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "		Enter your choice[a - e, q]:" << endl;
	cout << "--------------------------------------------------------" << endl;


	cout << "Please enter a choice between a-e or q to quite" << endl;
	
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

/* -----------------------------------------------------------------------------
FUNCTION:          Add_2_Numbers()
DESCRIPTION:       To add Two numbers of x and y
RETURNS:           Nothing (Void Function)
NOTES:             Put other information here ...
----------------------------------------------------------------------------- */

void Add_2_Numbers()
{
	//int x , y , sum;  
	double x, y, sum; 


	cout << "This program will add x and y... " << endl;
	cout << endl << endl;
	cout << "Please input x   ";

	cin >> x;
	cout << "Please input y   ";
	cin >> y;

	sum = x + y;

	cout << endl << endl;

	cout << "      x + y = " << x << "  +  " << y << "  =  " << sum << endl;

	cout << endl << endl;


	system("Pause");
	system("cls");
}

/* -----------------------------------------------------------------------------
FUNCTION:          Subtract_2_Numbers()
DESCRIPTION:       To subtract Two numbers of x and y
RETURNS:           Nothing (Void Function)
NOTES:             Put other information here ...
----------------------------------------------------------------------------- */
void Subtract_2_Numbers()
{
	//int x , y , sum;  
	double x, y, sum;  


	cout << "This program will add x and y... " << endl;
	cout << endl << endl;
	cout << "Please input x   ";
	cin >> x;
	cout << "Please input y   ";
	cin >> y;

	sum = x - y;

	cout << endl << endl;

	cout << "      x - y = " << x << "  -  " << y << "  =  " << sum << endl;

	cout << endl << endl;


	system("Pause");
	system("cls");
}

/* -----------------------------------------------------------------------------
FUNCTION:          Subtract_2_Numbers()
DESCRIPTION:       To subtract Two numbers of x and y
RETURNS:           Nothing (Void Function)
NOTES:             Put other information here ...
----------------------------------------------------------------------------- */
void Multiply_2_Numbers()
{
	//int x , y , sum;   // First try it with "int"
	double x, y, sum;  // Next try it with "float"


	cout << "This program will Multiply x and y... " << endl;
	cout << endl << endl;
	cout << "Please input x   ";
	cin >> x;
	cout << "Please input y   ";
	cin >> y;

	sum = x * y;

	cout << endl << endl;

	cout << "      x * y = " << x << "  *  " << y << "  =  " << sum << endl;

	cout << endl << endl;


	system("Pause");
	system("cls");
}

/* -----------------------------------------------------------------------------
FUNCTION:          Divide_2_Numbers()
DESCRIPTION:       To Divide Two numbers of x and y
RETURNS:           Nothing (Void Function)
NOTES:             Put other information here ...
----------------------------------------------------------------------------- */
void Divide_2_Numbers()
{
	//int x , y , sum;   // First try it with "int"
	double x, y, sum;  // Next try it with "float"


	cout << "This program will Divide x and y... " << endl;
	cout << endl << endl;
	cout << "Please input x   ";
	cin >> x;
	cout << "Please input y   ";
	cin >> y;

	if (y == 0)
	{
		damge_flash();
		cout << "NO NO NO! You can't do this... you won't do this."<< endl;
		system("PAUSE");
		system("cls");
		return Divide_2_Numbers();
	}

	sum = x / y;

	cout << endl << endl;

	cout << "      x / y = " << x << "  /  " << y << "  =  " << sum << endl;

	cout << endl << endl;


	system("Pause");
	system("cls");
}

/* -----------------------------------------------------------------------------
FUNCTION:          RS_Menu()
DESCRIPTION:       Displays menu with choice for squar and roots.
RETURNS:           Choice_2
NOTES:
----------------------------------------------------------------------------- */
char RS_Menu()
{
	//system("cls");
	char choice_m_2;

	cout << "Hello, and welcome to the Powers & Roots Menu." << endl << endl;
	cout << "This menu allows you to take powers and roots of a number." << endl << endl;

	cout << "----------------------------------------------------- -" << endl;
	cout << "		POWERS & ROOTS MENU" << endl;
	cout << "----------------------------------------------------- -" << endl;
	cout << "	a.	Square a number			(Xˆ2)" << endl;
	cout << "	b.	Cube a number			(Xˆ3)" << endl;
	cout << "	c.	Raise to any power		(XˆY)" << endl;
	cout << "	d.	Square root a number		(Xˆ1 / 2)" << endl;
	cout << "	e.	Cube root a number		(Xˆ1 / 3)" << endl;
	cout << "	f.	Take any root			(Xˆ1 / Y)" << endl;
	cout << "	m.	Return to Main Menu" << endl;
	cout << "	q.	Quit the program" << endl;
	cout << "----------------------------------------------------- -" << endl;
	cout << "	Enter your choice[a - f, m, q]:" << endl;
	cout << "----------------------------------------------------- -" << endl;


	cout << "Please enter a choice between a-f, m or q to quite" << endl;

	cin >> choice_m_2;

	choice_m_2 = tolower(choice_m_2);

	if (choice_m_2 >= 'a' && choice_m_2 <= 'f')
	{
		cout << "Procceding" << endl;
	}
	
	else
	{
		cout << "you did not enter 'a-f'" << endl;
		cout << "Now returning to main Menu" << endl;
		system("cls");
	}
	cout << endl;

	return choice_m_2;

}
/* -----------------------------------------------------------------------------
FUNCTION:          SR_Choice()
DESCRIPTION:       Displays menu with choice for squar and roots.
RETURNS:           Choice_2
NOTES:
----------------------------------------------------------------------------- */
void SR_Choice()
{

	while (choice_m_2)
	{
		char choice_m_2 = RS_Menu();
		switch (choice_m_2)
		{
		case 'a': R_Squar();
			break;
		case 'b': R_Cube();
			break;
		case 'c': RTAP();
			break;
		case 'd': SQRT();
			break;
		case 'e': SQRT_3();
			break;
		case 'f': Root();
			break;			
		case 'm': return;
			break;
		case 'q': exit (EXIT_FAILURE);
			break;
		}
	}

}

/* -----------------------------------------------------------------------------
FUNCTION:          R_Squar()
DESCRIPTION:       Squars a number
RETURNS:           Nothing (Void Function)
NOTES:             uses pow
----------------------------------------------------------------------------- */
void R_Squar()
{
	
	cout << "Enter the base you would like to use:" << endl;
	cin >> base;

	
	double Total = pow(base,ex);
	

	if (base > 0)
	{
		cout << base << "^" << ex << "   =    " << Total << endl;
		system("PAUSE");
	}

	
}
/* -----------------------------------------------------------------------------
FUNCTION:          R_Cube()
DESCRIPTION:       Cubes a number
RETURNS:           Nothing (Void Function)
NOTES:             uses pow
----------------------------------------------------------------------------- */
void R_Cube()
{
	
	cout << "Enter the base you would like to use:" << endl;
	cin >> base;

	
	double Total = pow(base,ex_3);
	


	cout << base << "^" << ex_3 << "   =    " << Total << endl;
	system("PAUSE");

	
}
/* -----------------------------------------------------------------------------
FUNCTION:          RTAP()
DESCRIPTION:       Power to any number
RETURNS:           Nothing (Void Function)
NOTES:             uses pow
----------------------------------------------------------------------------- */
void RTAP()
{
	
	cout << "Enter the base you would like to use:" << endl;
	cin >> base;
	cout << "Enter Exponent you like to use:" << endl;
	cin >> ex_4;
	
	double Total = pow(base,ex_4);
	
			if (base < 0)
	{
		cout << "Can not go Negative" << endl;
		cout << "Going back to Menu" << endl;
		system("Pause");
		system("cls");
	}
	if (base > 0)
	{
		cout << base << "^" << ex_4 << "   =   " << Total << endl;
		system("PAUSE");
	}

	
}
/* -----------------------------------------------------------------------------
FUNCTION:          SQRT()
DESCRIPTION:       Squar Roots a number
RETURNS:           Nothing (Void Function)
NOTES:             uses sqrt
----------------------------------------------------------------------------- */
void SQRT()
{
	cout << "Square root a number" << endl;
	cout << "Enter the base you would like to use:" << endl;
	cin >> base;
	
	double Total = sqrt(base);
	
			if (base < 0)
	{
		cout << "Can not go Negative" << endl;
		cout << "Going back to Menu" << endl;
		system("Pause");
		system("cls");
	}
	if (base > 0)
	{
		cout << base << "*" << "1/2"  << "    =    " << Total << endl;
		system("PAUSE");
	}

	
}
/* -----------------------------------------------------------------------------
FUNCTION:          SQRT_3()
DESCRIPTION:       Cube Roots a number
RETURNS:           Nothing (Void Function)
NOTES:             Uses cbrt
----------------------------------------------------------------------------- */
void SQRT_3()
{
	cout << "Cube root a number" << endl;
	cout << "Enter the base you would like to use:" << endl;
	cin >> base;
	
	double Total = cbrt(base);
	
		
		cout << base << "*" << "1/3"  << "    =    " << Total << endl;
		system("PAUSE");

	
}
/* -----------------------------------------------------------------------------
FUNCTION:          Root()
DESCRIPTION:       Roots any number
RETURNS:           Nothing (Void Function)
NOTES:             uses if statments to seperate when Root goes over 2
----------------------------------------------------------------------------- */
void Root()
{
	cout << "Root a number" << endl;
	cout << "Enter the base you would like to use:" << endl;
	cin >> base;
	cout << "Enter the Root" << endl;
	cin >> root;
		
			
if (root <= 2)
		{
			 sq_2 = sqrt(base);
			 
			 if (base > 0 && root < 2)
			 
		cout << base << "*" << "1/"  << root << "   =    " << sq_2 << endl;
		system("PAUSE");
		}
if (root >= 3)
	{	

	double f_total = 1/root * base;
	double Total = f_total/root;
	
		cout << base << "*" << "1/"  << root << "    =    " << Total << endl;
		system("PAUSE");
	}
	
if (base < 0 || root < 0 )
	{
		cout << "Can not go Negative" << endl;
		cout << "Going back to Menu" << endl;
		system("Pause");
		system("cls");
	}


}

/* -----------------------------------------------------------------------------
FUNCTION:          quick_flash()
DESCRIPTION:       Flashes screen
RETURNS:           Nothing (Void Function)
NOTES:             Uses a sleep timer
----------------------------------------------------------------------------- */
void quick_flash()
{
	system("color 13");
	Sleep(1000);
	system("color 02");
	Sleep(1000);
	system("color 13");
	Sleep(1000);
	system("color 02");
}
/* -----------------------------------------------------------------------------
FUNCTION:          damge_flash()
DESCRIPTION:       Flashes screen
RETURNS:           Nothing (Void Function)
NOTES:             Uses a sleep timer
----------------------------------------------------------------------------- */
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

