//
//  Course.h
//  EX04_05
//
//  Created by Eben Schumann on 10/25/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#ifndef Course_h
#define Course_h
#include <string>
using namespace std;

class Course
{
public:
    Course(const string& courseName, int capacity);
    ~Course();
    string getCourseName() const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string* getStudents() const;
    int getNumberOfStudents();
    int increaseCapacity() const;
    void clear();
private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
};

#endif /* Course_h */
