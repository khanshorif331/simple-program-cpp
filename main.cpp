#include <iostream>
using namespace std;

int main()
{

    // ---------------get the average of the user inputs of age----------------------

    int age;
    int ageTotal = 0;
    int numberOfPeople = 0;

    cout << "Enter first persons age or -1 to quit: " << endl;

    cin >> age;

    while (age != -1)
    {
        ageTotal = ageTotal + age;
        numberOfPeople++;
        cout << "Enter next persons age or -1 to quit: " << endl;
        cin >> age;
    }
    cout << "The total is " << ageTotal << numberOfPeople << endl;

    // -----------------------program to take input frm user and get the sum--------------------------

    // int x = 1;
    // int number;
    // int total = 0;
    // while (x <= 5)
    // {
    //     cin >> number;
    //     total += number;
    //     x++;
    // }
    // cout << "The sum is " << total << endl;
    return 0;
}