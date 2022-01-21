#include <iostream> 
using namespace std;

int main() {
    int quartersAmount;
    int dimesAmount;
    int nickelsAmount;
    int penniesAmount;
    double quarter = 0.25;
    double dime = 0.1;
    double nickel =0.05;
    double penny =0.01;

    double total;
    cout<<"Please enter number of coins:"<<endl;
    cout<<"# of quarters: "<<endl;
    cin>> quartersAmount;
    cout<<"# of dimes: "<<endl;
    cin>> dimesAmount;
    cout<<"# of nickels: "<<endl;
    cin>> nickelsAmount;
    cout<<"# of pennies: "<<endl;
    cin >> penniesAmount;
    total = quarter*quartersAmount + dime*dimesAmount + nickel*nickelsAmount + penny*penniesAmount;
    int totalDollars = total/1;
    int totalCents = (total - totalDollars)*100;
    cout<<"The total is "<< totalDollars << " dollars and " << totalCents << " cents" << endl;
    return 0;


}