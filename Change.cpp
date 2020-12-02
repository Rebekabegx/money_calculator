#include <iostream>
#include <cmath>
using namespace std;

int main() { 
    int costDollars;
    int costCents;
    double totalPrice;
    cout << "Enter true cost. \n" << "Give the Dollars: "; // User will enter dollar amount 
    cin >> costDollars;
    cout << "Now give the cents: " ;
    cin >> costCents; // user enters cent
    cout << "In cash the item costs: $";
    totalPrice = costDollars + (costCents * .01); // by multiplying it with .01, the number will turn into decimal
    cout << totalPrice ;
    
    int tooniesAmount;
    int LooniesAmount;
    double fiftyCents;
    double quarterAmount;
    double dimesAmount;
    double nickelsAmount;
    double totalValue;
    
    cout << "\nEnter the payment details. \n" << "Number of Toonies: ";
    cin >> tooniesAmount;
    cout << "Number of Loonies: ";
    cin >> LooniesAmount;
    cout << "Number of Fifty Cent peices: ";
    cin >> fiftyCents;
    cout << "Number of Quarters:  ";
    cin >> quarterAmount;
    cout << "Number of Dimes: ";
    cin >> dimesAmount;
    cout << "Number of Nickels: ";
    cin >> nickelsAmount;
    
    totalValue = (tooniesAmount * 2) + (LooniesAmount * 1) + (fiftyCents * .50) + (quarterAmount *.25) + (dimesAmount * .10) + (nickelsAmount * .05);
    cout << "You paid: $" << totalValue; 
    cout << "\nYour change is: $" << totalValue - totalPrice; // The program subtracts the users payment from the item price 

    return 0;
}
