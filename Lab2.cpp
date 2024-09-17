//Owen Zhao
//Lab-2
//9/17/24

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Creating variables to hold values for the prompt
    string CerealName;
    int Calories;
    int Ounces;
    int CalorieLimit;

    //Code to input the name of the cereal
    cout << "Enter the name of the cereal you wish to consume: ";
    cin >> CerealName;
    cout << endl;

    //Code to input the amount of calories per serving
    cout << "Enter the amount of calories per serving: ";
    cin >> Calories;
    cout << endl;

    //Code to input the amount of calories per serving
    cout << "Enter the amount of ounces per serving: ";
    cin >> Ounces;
    cout << endl;

    //Code to input the amount of calories of cereal the user is willing to eat today
    cout << "Enter the amount of calories you are willing to eat today: ";
    cin >> CalorieLimit;
    cout << endl;

    //Code to output all the inputs previously put
    cout << "One serving of " << CerealName;
    cout << " is " << Ounces;
    cout << " ounces and has " << Calories;
    cout << " calories per ounce." << endl << endl;

    //Code to calculate how many ounces of cereal the user can eat and stay within their calorie limit
    double Calc1 = CalorieLimit / Calories;
    double Calc2 = Calc1 * Ounces;

    //Code to output how many ounces of cereal the user can eat and stay within their calorie limit
    cout << "You can eat " << Calc2;
    cout << " ounces of cereal before you go over your calorie limit.";

    return 0;
}

/*Output:
Enter the name of the cereal you wish to consume: O's

Enter the amount of calories per serving: 5

Enter the amount of ounces per serving: 1

Enter the amount of calories you are willing to eat today: 20

One serving of O's is 1 ounces and has 5 calories per ounce.

You can eat 4 ounces of cereal before you go over your calorie limit.*/