#include <iostream>
using namespace std;
int main()
{
    int hours,hours1,rate,grossrevenue,grossrevenuewithovertime;
    cout<<"\n Enter hours:";
    cin>>hours;
    hours1=hours-40;
    cout<<"\n overtime hours:"<<hours1;
    cout<<"\n Enter the rate in toman:";
    cin>>rate;
    grossrevenue=40*rate;
    grossrevenuewithovertime=hours1*rate*1.5;
              //gross revenue
        if(hours>40) {
            cout << "\n Your gross revenue is:" << grossrevenuewithovertime+grossrevenue;
        }
        else {
            cout << "\n Your gross revenue is:" << hours*rate;
        }
              //net salary
        if(grossrevenuewithovertime+grossrevenue>10000000)
              //gross revenue more than 10 millions:
		 {
            cout << "\n Your net salary is:" << grossrevenuewithovertime+grossrevenue - 1500000;
        }
        else   
             //gross revenue less than 10 millions:
		 {
            cout << "\n Your net salary is:" << grossrevenuewithovertime+grossrevenue;
        }
        return 0;
}