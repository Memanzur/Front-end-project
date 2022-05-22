// your name:
// COP1334 - Spring 2019 - TR 8:50AM
// Due Date:
// Assignment Description: <The description can just be copied from the problem description.>

/*
Pseudo code starts below
salary = 39000
Calculate the pay period amount for twice monthly using the formula
        Payperperiod = Salary/24
    Display the twice monthly pay
    Calculate the pay period amount for bi-weekly using the formula
     Payperperiod = Salary/24
  Display the bi-weekly pay
Pseudo code ends
*/


#include <iostream>
using namespace std;
int main() 
{
double salary = 39000;
double twicemonthly = salary / 24;
double bi_weekly = salary / 26;

    cout << "\nThe twice monthly gross pay per period for an employee earning $" << salary
        << " is $" << twicemonthly << ".\n";
    cout << "\nThe bi-weekly gross pay per period for an emplyee earning $" << salary
        << " is $" << twicemonthly << ".\n";

        system("pause"); // use this command to hold the console 
        return 0; 

}
