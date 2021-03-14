//
//  main.cpp
//  practice program 1 pg 135
//
//  Created by Merna Abdelbadie on 9/12/20.
//  Copyright © 2020 Merna Abdelbadie. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int current_weight, current_weight_grms, new_weight,new_weight_grms, soda_can_num1, soda_can_num2;
    double grms_allowed1, grms_allowed2,soda_gram = 350;
    const double soda_can_sugar = 0.001 * soda_gram;
    
    cout << "press return after entering a number.\n";
    cout << "enter your current weight in pounds and the weight you want to reach in pounds:";
    cin >> current_weight >> new_weight;
    
    current_weight_grms = ( 45400 * current_weight) / 100;
    new_weight_grms = ( 45400 * new_weight) / 100;
    grms_allowed1 = (5 * current_weight_grms) / 35;
    grms_allowed2 = (5 * new_weight_grms) / 35;
    soda_can_num1 = grms_allowed1 / soda_can_sugar;
    soda_can_num2 = grms_allowed2 / soda_can_sugar;
    
    cout << "your current allowed number of soda cans are " << soda_can_num1 << endl;
    cout << "your new allowed number of soda cans are " << soda_can_num2 << endl;
    
    cout << "hello world" << endl;
    cout << "hi" << endl;
    return 0;
}
