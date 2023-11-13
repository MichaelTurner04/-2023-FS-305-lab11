//Michael Turner
//18229090
//11/8/2023
//main.cpp
#include <iostream>
#include <string>
#include "header.h"
using namespace std;

int main() {
  int numStudents =3;
  double totalScore = 0;
  studentDetails student[numStudents];
  courseStatistics course;
  course.lowScore = 100;
  course.highScore = 0;
  
  for(int i=0; i < numStudents; i++){ // run loop for each student
    cout << "\nEnter student " << i << " details: " << endl;
    cin >> student[i]; // operator overload/ get inputs for each student
    totalScore += student[i].score;
    if (student[i].score > course.highScore) {//getting max value
            course.highScore = student[i].score;

    }
    if (student[i].score < course.lowScore) {//getting min value
            course.lowScore = student[i].score;
    }

  }
  course.avgScore = totalScore / numStudents;
  course.numStudents = numStudents;
  cin >> course; // get course name and teacher name
  cout << course;// outputs all data about the course
  return 0;

}


// +2.5 for using for loop
// +2.5 asking for name and course
// 105