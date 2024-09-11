//
//  main.cpp
//  sep10
//
//  Created by Sonia Lopchan on 9/11/24.

#include <iostream>
using namespace std;

int main()
{
    double income = 95000;
    double state_tax = 0.04 * income;
    double county_tax = 0.02 *  income;
    double total_tax = state_tax + county_tax;
    
    cout << "Income total: " << income << endl;
    cout << "State Tax: " << state_tax << endl;
    cout << "County Tax: " << county_tax << endl;
    cout << "Total Tax: " << total_tax << endl;
    
    
    return 0;
    
}
