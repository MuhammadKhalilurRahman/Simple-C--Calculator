#include<iostream>
#include <string>
using namespace std;
int main() {
    int num1, num2;
 cout << "Enter A Number: ";
  cin >> num1;
  cin.clear();
  cin.ignore(1000, '\n');
   cout << "Enter A 2nd Number: ";
    cin >> num2;
     int sum = num1 + num2;
      cout << "The Sum Is: " << sum; 
}