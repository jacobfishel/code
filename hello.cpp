#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main() {
double price;
cout << "Enter meal price\n";
cin >> price;
cout << "Your meal price after tax is: " << price * 1.08 << endl;
double tip;
double number;
cout << "How much would you like to tip? (enter number only) \n10%, 15%, 20%\n";
cin >> tip;
if (tip == 10) {
  price *= 1.10;
}
else if (tip == 15) {
price *= 1.15;

}
else if (tip == 20) {
price *= 1.2;
}

cout << "Your final price is: " << price << endl;
string answer;
cout << "Would you like to round up for the homie tax?\n";
cin >> answer;
if (answer == "yes") {
    cout << ceil(price) << endl;
}
else if (answer == "no") {
cout << price << endl;

}



return 0;
}
