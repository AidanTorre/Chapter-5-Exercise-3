#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int speed;
    int hours;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    cout << "How many hours has it traveled? ";
    cin >> hours;

    cout << endl;
    cout << "Hour\tMiles Traveled" << endl;
    cout << "------------------------" << endl;

    for (int hour = 1; hour <= hours; hour++)
    {
        cout << hour << "\t" << speed * hour << endl;
    }

    return 0;
}