//Michael Turner
//18229090
//11/8/2023
//student.cpp
#include "header.h"
#include <iostream>
using namespace std;

istream& operator >>(istream& is, studentDetails & student){
  cout << "studentID: " ;
  is >> student.studentID;
  cout << "First Name: " ;
  is >> student.firstName;
  cout << "Last Name: " ;
  is >> student.lastName;
  cout << "Course: " ;
  is >> student.course;
  cout << "Year: " ;
  is >> student.year;
  cout << "Major: " ;
  is >> student.major;
  cout << "Score: " ;
  is >> student.score;
  return is;
}
ostream& operator<<(ostream& os, const courseStatistics & course){
  os << "Highest Score: "<< course.highScore << endl;
  os << "Lowest Score: " << course.lowScore << endl;
  os << "Average Score: " << course.avgScore << endl;
  os << "Number of Students:"<< course.numStudents << endl;
  return os;
}
istream& operator >>(istream & is, courseStatistics & course){
  cout<< "\nCourse Statistics: "<< endl;
  cout << "Course Name:";
  getline(is, course.courseName);
  is >> course.courseName;
  cout << "Instructor Name: ";
  getline(is, course.instructorName);
  is >> course.instructorName;
  
  return is;
}