#include <iostream>

using namespace std;

int main()
{
    char grade;
    cout << "Enter String: ";
    cin >> grade;

    switch(grade)
    {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Good" << endl;
        break;
    case 'C':
        cout << "Average" << endl;
        break;
    case 'D':
        cout << "Below Average" << endl;
        break;
    case 'F':
        cout << "Failed" << endl;    
        break;              
    }
}
