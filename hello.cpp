#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main() {
double price;

cout << "Enter meal price:";
cin >> price >> endl;
cout << "Your meal price after tax is: $" << price * 1.08 << endl << endl;


double tip;
double number;
cout << "How much would you like to tip? (enter number only): \n10%, 15%, 20%:";
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


cout << endl;
cout << "Your final price is: $" << price << endl << endl;
string answer;

cout << "Would you like to round up for the homie tax? ";
cin >> answer;

if (answer == "yes") {
    cout << "Zelle $" << ceil(price) << endl << endl;
}

else if (answer == "no") {
cout << "I don't think you understood the question. Would you like to round up for the homie tax? (bro just paid for everyones food)" << endl << endl;
}

else {
  cout << "Invalid entry. Try again" << endl << endl;
}

cin >> answer;
if (answer == "yes") {
cout << "Zelle: $" << ceil(price) << endl << endl;
}

while (answer == "no") {
cout << "try again" << endl << endl;
cin >> answer;
}

if (answer == "yes") {
cout << "Zelle: $" << ceil(price) << endl << endl;
}

return 0;
}
