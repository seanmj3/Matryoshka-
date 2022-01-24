#include <iostream>   // for cin and cout
#include <iomanip>    // for setw. The number in setw(...) is the total of blank spaces including the printed item.

using namespace std; // so that we don't need to preface every cin and cout with std::

int main()
{
    // Display the menu and get the user choice
    int menuOption = 0;
    cout << "Program 1: Matryoshka Dolls            \n"
        << "Choose from among the following options:  \n"
        << "   1. Display original graphic  \n"
        << "   2. Display Matryoshka Dolls         \n"
        << "   3. Exit the program          \n"
        << "Your choice -> ";
    cin >> menuOption;

    // Handle menu option of 3 to exit
    if (menuOption == 3) {
        exit(0);
    }
    // Handle menu option of 1 to display custom ASCII graphics
    else if (menuOption == 1) {
        // My own graphic.  You must create your own.
        cout << setw(8) << " ";
        // Display a line across the top
        for (int i = 0; i < 42; i++) {
            cout << "-";
        }
        cout << endl;
        // Display ASCII graphics for "2022".  Yours must be different!
        cout << setw(8) << " " << "     Hello!  My Name Is:\n"
            << setw(8) << " " << "  _________                           ____.                             \n"
            << setw(8) << " " << " /   _____/ ____ _____    ____       |    |____    _____   ____   ______\n"
            << setw(8) << " " << " \\_____  \\_/ __ \\__  \\  /    \\      |    \\__  \\  /     \\_/ __ \\ /  ___/\n"
            << setw(8) << " " << " /        \\  ___/ / __ \\|   |  \\ /\\__|    |/ __ \\|  Y Y  \\  ___/ \\___ \\ \n"
            << setw(8) << " " << "/_______  /\\___  >____  /___|  / \\________(____  /__|_|  /\\___  >____  >\n"
            << setw(8) << " " << "        \\/     \\/     \\/     \\/                \\/      \\/     \\/     \\/ \n"
            << endl;
        cout << setw(8) << " ";
        // Display a line across the bottom
        for (int i = 0; i < 42; i++) {
            cout << "-";
        }
        cout << endl;
    } //end if( menuOption == 1)  // menu option to display custom graphic

    else if (menuOption == 2) {
        // Prompt for and get the number of dolls.
        int iterator = 1; 
        int numberOfDolls;
        cout << "Number of dolls -> ";
        cin >> numberOfDolls;

        // Place your code starting here
        // ...
        while (iterator < numberOfDolls + 1) {
            int width = numberOfDolls; 
            for (int i = 1; i < ((2 * width) + 2); i++) {
                if (i == 1) {
                    cout << setw(width); 
                    cout << "( )" << endl; 
                }
                if (i == (2 * i) + (2 - 1)) {
                    cout << setw(width) << "-" << endl; 
                }
                if (i == 2 && (iterator + 1) % 2 == 0) {
                    cout << setw(width + 1) << "/ : \\" << endl;  
                } else if (i == 2 && (iterator + 1) % 2 != 0) {
                    cout << setw(width + 1) << "/ - \\" << endl;
                } 
                if (i > 2 && i <= (((2 * iterator + 1) + 2) / 2)) {
                     cout << setw(width - i) << "/" << setw(5 + i) << "\\" << endl;
                } 
            }
            iterator++;
        }
             
        
       

    } //end if( menuOption == 2) // menu option to display dolls

    cout << "Exiting" << endl;
    return 0;
}