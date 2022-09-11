#include <iostream>
using namespace std;
const int minutesinhour= 60;
const int hoursinday= 24;
constexpr int minutesinday = hoursinday * minutesinhour;
int main() {
 int minin,m, h,d =0;
 cin >>minin;
 d=minin /minutesinday;
 cout <<"days: "<< d << endl;
 minin=minin % minutesinday;
 /cout << "minutes of day:" << minin<< endl;/
 int m = minin/minutesinhour;
 cout<< "minutes"<<m;
 int h = minin/minutesinhour;
 cout<< "hours"<<h;
 return 0;
}
 
