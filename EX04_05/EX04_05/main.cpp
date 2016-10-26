//
//  main.cpp
//  EX04_05
//
//  Created by Eben Schumann on 10/25/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Course.hpp"

int main()
{
    //create course
    Course C1 ("math", 4);
    
    //add students
    C1.addStudent("Michael");
    C1.addStudent("Richie");
    C1.addStudent("Tyler");
    
    //drop students
    C1.dropStudent("Tyler");
    
    //get students
    string students = *C1.getStudents();
    int number = C1.getNumberOfStudents();
    
    cout << "--Students--" << endl;
    //show students
    for (int i = 0; i < number; i++)
    {
        cout << C1.students[i] << endl;
    }
    
    
    return 0;
}
