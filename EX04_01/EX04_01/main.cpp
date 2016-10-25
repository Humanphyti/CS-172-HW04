//
//  main.cpp
//  EX04_01
//
//  Created by Eben Schumann on 10/25/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <iostream>
using namespace std;

int* alloc_array(int);

int main(int argc, const char * argv[]) {
    int size = 0, sum = 0, counter = 0;
    double ave = 0;
    cout << "How big of an array are you wanting to create: " << endl;
    cin >> size;
    int* array = alloc_array(size);
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    
    ave = sum / size;
    for (int i = 0; i < size; i++){
        if ( array[i] > ave)
            counter++;
    }
    cout << counter << "numbers are greater than the average of the array, which is" << ave;
    delete[] array;
}

int* alloc_array(int size){
    int* pintarray = new int[size];
    cout << "Enter the numbers you would like to have reside within the array." << endl;
    for (int i = 0; i < size; i++){
        cout << "Please enter your number: ";
        cin >> pintarray[i];
    }
    return pintarray;
}
