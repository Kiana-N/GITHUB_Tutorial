#include <iostream>
using namespace std;
int main()
{
    int day,month,year;
    cout<<"\n Enter the date:";
    cin>>day;
    cout<<"\n Enter the month:";
    cin>>month;
    cout<<"\n Enter the year:";
    cin>>year;
    switch(month)
    {
        case 1:
            cout << "\n The days last:" << day;
            break;
        case 2:
            cout << "\n The days last:" << 31 + day;
            break;
        case 3:
            cout << "\n The days last:" << 31 + 29 + day;
            break;
        case 4:
            cout << "\n The days last:" << (2 * 31) + 29 + day;
            break;
        case 5:
            cout << "\n The days last:" << (2 * 31) + 29 + 30 + day;
            break;
        case 6:
            cout << "\n The days last:" << (3 * 31) + 29 + 30 + day;
            break;
        case 7:
            cout << "\n The days last:" << (3 * 31) + (2 * 30) + 29 + day;
            break;
        case 8:
            cout << "\n The days last:" << (4 * 31) + (2 * 30) + 29 + day;
            break;
        case 9:
            cout << "\n The days last:" << (5 * 31) + (2 * 30) + 20 + day;
            break;
        case 10:
            cout << "\n the days last:" << (5 * 31) + (3 * 30) + 29 + day;
            break;
        case 11:
            cout << "\n The days last:" << (6 * 31) + (3 * 30) + 29 + day;
            break;
        case 12:
            cout << "\n The days last:" << (6 * 31) + (4 * 30) + 29 + day;
            break;
    }
    if(year%4==0)
    {
        cout <<"\n It is a leap year:True.";
    }
    else
    {
        cout<<"\n It is a leap year:False.";
    }
    return 0;

}