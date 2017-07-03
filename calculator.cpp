#include <iostream>
using namespace std;

int main ()
{
    int year;
    cout << "Enter a birth year:\n"; //YYYY
    cin >> year;
    if (year >= 1997)
    {
        cout << "Generation Z\n";
    }
    else if (year < 1997 && year >= 1981)
    {
        cout << "Generation Y\n";
    }
    else if (year < 1981 && year >= 1965)
    {
        cout << "Generation X\n";
    }
    else if (year < 1965 && year >= 1946)
    {
        cout << "Baby Boomers\n";
    }
    else if (year < 1946 && year >= 1883)
    {
        cout << "Lost Generation\n";
    }
    else {cout << "Wow, you are old!\n";}
    return 0;
}
