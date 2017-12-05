// Name: Carlos Albert
// Description: HW2 - Harverly's Room Calculator
// Calculates the area of the room depending on the shape of the room.


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int width, length, area, Choice, Quit;
	const double PI = 3.14;
	double radius;
	

	// Menu choices
	const int Square_Room = 1, Rectangular_Room = 2, Round_Room = 3, Quit_Choice = 4;

	// Menu Display.
	cout << "Haverly's Room Calculator : \n";
	cout << "************************\n";

		cout << endl;
		cout << "1. Square Room\n";
		cout << "2. Rectangular Room\n";
		cout << "3. Round Room\n";
		cout << "4. Quit\n";
		cout << endl << endl; // two spaces
		cout << "Please enter a menu item(1 - 4) > \n";


// Numeric output formatting
	cout << fixed << showpoint << setprecision (2);
 
	// Respond to selection.
	
	// User chooses square
	if (Choice == Square_Room)
 	
	{
			cout << "What is the width of the room?";
			cin >> width;
			area = width*4;
			cout << "The area of the Square Room is" << area << endl;
    }   
	// User chooses rectangular   
    	else if (Choice == Rectangular_Room)
		{				   	
	 		cout << "What is the length and width of the room?";
			cin >> length >> width;
			area= length * width;
			cout << "The area of the Rectangular Room is" << area << endl;	
	    }

	// User chooses round
		else if (Choice == Round_Room)
	   {
	   	cout << "What is the radius of the Round Room?";
		cin >> radius;
		area = PI * (radius, 2.0);
		cout << "The area of the Round Room is" << area << endl;
	   }  	 	
	// User chooses quit
 		else if (Choice == Quit)
 		{
 			cout << "Thank you for using Haverly's Room Calculator..." << endl;
		 }
 
 
	 //input validates
	 if (Choice > 4)
	 	cout << "Invalid menu item entered...Program Exiting..." << endl;
 
		return 0;
}