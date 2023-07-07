#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main() {
double price;
cout << "Enter meal price\n";
cin >> price;
cout << "Your meal price after tax is: $" << price * 1.08 << endl;
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

cout << "Your final price is: $" << price << endl;
string answer;
cout << "Would you like to round up for the homie tax?\n";
cin >> answer;
if (answer == "yes") {
    cout << "Zelle $" << ceil(price) << endl;
}
else if (answer == "no") {
cout << "I don't think you understood the question. Would you like to round up for the homie tax? (bro just paid for everyones food)" << endl;
}

cin >> answer;



if (answer == "yes") {
cout << "Zelle $" << ceil(price);

}

else if (answer == "no") {
cout << "Is everything okay at home? Like really bro cmon. Lets do the right thing here. \n Would you like to round up for the homie tax." << endl;
cin >> answer;

while (answer == "no") {

  cout << "Try again: ";
  cin >> answer;
}

}
cin >> answer;

if (answer == "yes") {
cout << "Zelle $" << ceil(price);

}

while (answer == "no") {
cout << "Try again: " << endl;
cin >> answer;

  
}
if (answer == yes) {
cout << "Zelle $" << answer << endl;

}




return 0;
}
