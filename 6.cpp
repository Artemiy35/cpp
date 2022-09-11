#include <iostream>
using namespace std;
int calculator (int a,int b);

int main() {
 int a,b =0;
 cout << "input a:"<<endl;
 cin >> a;
 cout << "iinput b:" <<endl;
 cin >> b;
 calculator (a, b);
 return 0;
}

int calculator (int a,int b){
	cout << "sum=" << a+b <<endl;
	cout << "razn="<< a-b;
	return 0;
}
