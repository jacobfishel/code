#include <iostream>
#include <cmath>
#include <string>
#include "functions.hpp"
using namespace std;


int main() {
double price;

cout << "Enter meal price:";
cin >> price;
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
    cout << "Who is paying? " << endl << endl;
    cin >> name;
    if (name == Dario) {
cout << "Zelle: " << price << " to 7608924566"<< endl

    }
}

else if (answer == "no") {
cout << "You must really need the extra 10 cents. Would you like to round up for the homie tax?" << endl << endl;
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

std::string name;
cout << "Who is paying? ";
cin >> name;

if(name == "Dario"){
std::cout << "7608924566";

}




return 0;
}
