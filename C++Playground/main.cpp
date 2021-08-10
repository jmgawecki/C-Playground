//
//  main.cpp
//  C++Playground
//
//  Created by Jakub Gawecki on 06/08/2021.
//

#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cctype>

// C++ is an OPP language
// C++ does not rely on the event - C++ is all executed at compiler at runtime

// using namespace x - giving a prefix to functions, so that can be diffrianted later if names repeat somewhere else.
using namespace std;

// We can declare global constant variables like this:
// Good naming convention for those is all caps with the snake case
const int MAX_VALUE = 100;
const float TAX_RATE = 0.4;
const bool AM_I_COOL = true;
const int MAX_CHIPS = 100;
const float MAX_TURN = 0.5;

// MARK: - Function Prototypes
// Function implementation is to be made below. However, Code is being executed from the top to the bottom, so the main function does not know about htese before its run. That is why we also place its signature above. The signature, here in objective-C is called Function Prototype
void print(string statement);
void input(string stringPlaceholder);
void typeDeclarationFunction();
void switchFunction();
void switchFunctionOver(int parameter);
void forInLoopFunction();
void doWhileFunctionOver(int m);
// This is how passing a refernce looks like in the function (&)
void printReceipt(string, float& );
int return5();

int main() {
    char usersChoice = 'a';
    
    do {
        cout << "Do you wish to continue? Press Y/y" << endl;
        cin >> usersChoice;
        usersChoice = toupper(usersChoice);
    } while (usersChoice!= 'Y');
    
    
    
    string name;
    print("Please enter your name");
    input(name);
    
    // like an NSLog or Print
    cout << "Hello, World!\n";
    cout << "Hello " << name << endl;
    

    
    
    // Will always cut to the lower
    float x = 5.5;
    int y = x * 3;
    
    cout << "3 " << "times " << "5 " << "is equal to " << y << endl;
    
    // DECLARATION OF VARIABLES
    // C++ does not clear out the data for the previously declared variables
    // That been said, always initialise variables with the value of 0 and a string to be empty, cause it may be initialised with the previously assigned value to that name
    int age = 0;
    string mySecondName = "";
    
    // DATA STORAGE
    
    // Casting
    int numberOfEggs = 3;
    cout << static_cast<int>(numberOfEggs * 3.3) << endl;
    
    // Rounding UP and DOWN
    // As of C++11, ceil and floor are being declared in cmath header
    int taxRate = ceil (4.5545); // 5
    int taxRate2 = floor(4.9999); // 4
    
    // Modulo
    int remainder = 6 % 2;
    
    
    // Random number (iostream)
    // It seems that just rand() will generate a value from the wide pool
    // Adding %number will generate the numer from the range 0 ..< number
    // rand() will always return from the same set of numbers
    int randomNumber = rand()%5;
    cout << randomNumber << endl;
    
    // we can seed our random number somewhere where we want to, to guarantee a different result always, then we have to use rand() generator again
    srand(time(0));
    
    int anotherRandomNumer = rand()%5;
    cout << anotherRandomNumer << endl;
    
    
    // SETTING PRECISION FOR FLOAT
    // In C++, we can set formatting rules like this:
    
    // fixed - allow data to be shown in NOT 'e' notation
    cout.setf(ios::fixed);
    // showpoint - will make decimal points to be shown even if its not necessary. Not sure what that is
    cout.setf(ios::showpoint);
    
    double result = 99.9023223;
    
    cout << "Your result is: " << setprecision(2) << result << "%. Congratulation!" << endl;
    
    
    // ARRAYS
    // We create an array by declaring its type, name, and a number of spaces in the brackets
    int numbers[4];
    
    // you can populate the array at the declaration time
    int threeNumbers[3] = { 1, 2, 3 };
    
    // or later on
    numbers[0] = 1;
    
    cout << "Give me some number: ";
    cin >> numbers[1];
    
    // You can declare multi-dimensionals arrays.
    int board2D[3][3];
    
    
    int chipsInPile = (rand() % MAX_CHIPS) + 1;
    int maxChipsAtOnce = MAX_TURN * chipsInPile;
    
    cout << "Maximum amount of chips you can take is " << maxChipsAtOnce << endl;
    
    
    // IF STATEMENT
    
    if (maxChipsAtOnce > 10)
    {
        cout << "The number of chips is greater than 10, just so you know" << endl;
    } else if (maxChipsAtOnce < 5 || maxChipsAtOnce < -1000)
    {
        cout << "The number of chips is smaller than 5, not too many my man" << endl;
    } else
    {
        cout << "Number of your chips is somewhere between 5 and 10" << endl;
    }
    
    int number5 = 0;
    number5 = return5();
    cout << return5();
    cout << endl;
    
    
    return 0;
}

// Function declaration is to be made below. However, Code is being executed from the top to the bottom, so the main function does not know about htese before its run. That is why we also place its signature above.
void print(string statement)
{
    cout << statement << endl;
}

void input(string stringPlaceholder)
{
    cin >> stringPlaceholder;
}

void typeDeclarationFunction()
{
    // DATA TYPES
    // Integer
    int number = 19;
    // String
    string myName = "Kuba";
    // Float, holds up to 4 bytes
    float decimalNumber = 23.23;
    // Double, holds up to 8 bytes
    double decumalNuber = 23.232323;
    // Char literal
    char letter = 'a';
    // Char type pointer
    char const *letter2 = "A";
    // Boolean
    bool amICool = true;
}

void switchFunctionOver(int parameter)
{
    switch (parameter)
    {
        case 1:
            cout << "Number is equal to 1!" << endl;
            // IMPORTANT: if break; is not included, will execute each case not checking condition again up until it finds break;
            break;
        case 2:
            cout << "Number is equal to 2!" << endl;
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Number is within the 3-10 range" << endl;
            break;
        default:
            cout << "Number is not equal to 1, nor to 2.." << endl;
            break;
    }
}

void forInLoopFunction()
{
    for (int h = 0; h < 24; h++)
    {
        for (int m = 0; m < 60; m++)
        {
            for (int s = 0; s < 60; s++)
            {
                cout << h << ":" << m << ":" << s << endl;
            }
        }
    }
}

void doWhileFunctionOver(int m)
{
    while (m > 0)
    {
        cout << "blabla" << endl;
        m--;
    }
    
    do {
        cout << "blabla" << endl;
        m--;
    } while (m > 0);
    
}

void printReceipt(string companyName, float& total)
{
    cout << "Thanks, " << companyName << "!" << endl;
    total ++;
}

int return5()
{
    return 5;
}
