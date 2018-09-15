//
//  main.cpp
//  Sep13
//
//  Created by Randy Ho on 9/13/18.
//  Copyright © 2018 Randy Ho. All rights reserved.
//

#include <iostream>

using std::cin, std::cout, std::endl;
int main(int argc, const char * argv[]);
double fact(int num);
double power(double x, int exp);
double exponential(int numN);
int first();
int second();
double third();

int main(int argc, const char * argv[]) {
    int numFunc;
    while (true) {
        cout << "Please enter the number of the function (0 to exit): ";
        cin >> numFunc;
        if(numFunc == 1){
            first();
        }else if (numFunc == 2){
            second();
        }else if (numFunc == 3){
            third();
        }else if(numFunc == 0){
            cout << "Thanks for playing around! Bye bye!" << endl;
            break;
        }else{
            cout << "Wrong Input!" << endl;
        }
    }
    
    return 0;
}

double fact(int num){
    /*    double factTotal = 1;
     while(num > 0){
     factTotal *= num--;
     }
     return factTotal;
     */
    if (num > 0) {
        return num * fact(--num);
    }else{
        return 1;
    }
    
}

double power(double x, int exp){
    if (exp > 1) {
        return x * power(x, --exp);
    }else if(exp == 1){
        return x;
    }else{
        return 1;
    }
}

double exponential(int numN){
    if (numN == 0 ) {
        return 1;
    }else{
        return (1/fact(numN)) + exponential(--numN);
    }
}

int first(){
    double miles, kms;
    cout << "Please input a number for miles: ";
    cin >> miles;
    kms = 1.609344 * miles;
    cout << miles << " miles is about " << (int) kms << " kms" << endl;
    
    return 0;
}

int second(){
    int numN;
    cout << "Please input a number for N (for !): ";
    cin >> numN;
    cout << "N! is: " << fact(numN) << endl;
    
    return 0;
}

double third(){
    int numX;
    cout << "Please input a number for X (for exp): ";
    cin >> numX;
    cout << "The result is: " << power(exponential(100),numX) <<endl;
    
    return 0;
}
