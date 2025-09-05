#include <iostream>
using namespace std;
int main()
{
     int a, b;
     cout << "enter the first value" << endl;
     cin >> a;
     cout << "enter the second value" << endl;
     cin >> b;
     cout << "The answer is: " << a % b;
     // important things : a % b = a if a < b
     // a % a = 0
     // a & (b-) = a % b
     // (-a) % b = -(a%b)
}