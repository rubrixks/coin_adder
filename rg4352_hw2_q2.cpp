#include <iostream> 
using namespace std;

int main() {
    // required variables
    int quartersAmount=0;
    int dimesAmount=0;
    int nickelsAmount=0;
    int penniesAmount=0;
    int quarter = 25;
    int dime = 10;
    int nickel =05;
    int penny =01;
    int dollarAmount;
    int centAmount;
    int total;
    //outputs
    cout<<"Please enter your amount in the format of dollars and cents separated by a space: " <<endl;
    cin>>dollarAmount>>centAmount;

    //variables for determining amount of coins needed
    
    int dollarAmountToHundreds= dollarAmount * 100;
    total = dollarAmountToHundreds + centAmount;

    int holder = total;
    //quarter calculator
    quartersAmount = (holder/quarter);
    holder = holder - quartersAmount*quarter;
    
    //dime calculator
    dimesAmount = (holder/dime);
    holder = holder - dimesAmount*dime;

    //nickel calculator
    nickelsAmount = (holder/nickel);
    holder = holder - nickelsAmount*nickel;
    //penny calculator
    
    penniesAmount = holder;
    
    //outputs
    cout<< dollarAmount << " dollars and " <<centAmount<< " cents are:"<<endl;
    cout<< quartersAmount << " quarters, " << dimesAmount  <<" dimes, " << nickelsAmount << " nickels and " << penniesAmount <<" pennies"<< endl;
    return 0;
}