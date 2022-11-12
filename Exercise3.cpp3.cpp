#include <iostream>
using namespace std;
int main()
{
    char letter;
    cout<<"\n Enter a letter:";
    cin>>letter;
    switch(letter)
    {
        case 'A':
        case 'a':
        case 'B':
        case 'b':
        case 'C':
        case 'c':
            cout << "\n push number 2. ";
            break;
        case 'D':
        case 'd':
        case 'E':
        case 'e':
        case 'F':
        case 'f':
            cout << "\n push number 3.";
            break;
        case'G':
        case 'g':
        case 'H':
        case 'h':
        case'I':
        case'i':
            cout<<"\n Push number 4.";
            break;
        case'J':
        case 'j':
        case 'K':
        case'k':
        case'L':
        case'l':
            cout<<"\n push number 5.";
            break;
        case 'M':
        case 'm':
        case'N':
        case 'n':
        case'O':
        case 'o':
            cout <<"\n push number 6.";
            break;
        case 'P':
        case'p':
        case'Q':
        case'q':
        case'R':
        case'r':
        case 'S':
        case 's':
            cout<<"\n push number 7.";
            break;
        case 'T':
        case 't':
        case 'U':
        case 'u':
        case 'V':
        case 'v':
            cout<<"\n push number 8.";
            break;
        case 'W':
        case 'w':
        case 'X':
        case 'x':
        case 'Y':
        case 'y':
        case 'Z':
        case 'z':
            cout<<"\n push number 9.";
    }
    return 0;
}