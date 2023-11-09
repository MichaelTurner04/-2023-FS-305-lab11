//Michael Turner
//18229090
//11/8/2023
//header.h
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>
using namespace std;

struct studentDetails{
  string studentID;
  string firstName;
  string lastName;
  string course;
  int year;
  string major;
  double score;
};

struct courseStatistics {
  string courseName;
  string instructorName;
  double highScore;
  double lowScore;
  double avgScore;
  int numStudents;
};
//overload the operator to get student data
//pre: none
//collects and stores each student data
istream& operator >>(istream& is, studentDetails& student);

//Overload the operator to print the course statistics
//pre:none
//outputs course statistics
ostream& operator<<(ostream& os, const courseStatistics & course);

//overload the operator to get couse data
//pre: none
//collects course name and instructor name
istream& operator >>(istream & is, courseStatistics & course);
#endif