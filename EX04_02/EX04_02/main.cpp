//
//  main.cpp
//  EX04_02
//
//  Created by Eben Schumann on 10/25/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size);

int main(int argc, const char * argv[]) {
    int iniArray[9];
    int size = 9;
    for (int i = 0; i < size; i ++){
        iniArray[i] = 1 + 1;
    }
    const int* pIniArray = iniArray;
    
    cout << "The array initializes with values: ";
    for (int i = 0; i < size; i++){
        cout << pIniArray[i] << endl;
    }
    int* pNewArray = doubleCapacity(pIniArray, size);
    size += size;
    cout << "The array now contatins:" << endl;
    for (int i = 0; i < size; i++){
        cout << pNewArray[i] << endl;
    }
    
}


int* doubleCapacity(const int* list, int size){
    int* temp  = new int[2*size];
    for (int i = 0; i < size; i++){
        temp[i] = list[i];
    }
    
    for (int i = 0; i < 2 * size; i++){
        temp[i] = i+1;
    }
    return temp;
}
