#include <iostream>
#include <string>
using namespace std;

int main() {
    int totalMarks, obtainMarks;
    float percent, gpa;
    string grade;

    cout << "Enter your Total Marks" << endl;
    cin >> totalMarks;
    cout << "Enter your Obtained Marks" << endl;
    cin >> obtainMarks;

    if (obtainMarks <= totalMarks) {
        percent = (float(obtainMarks) / float(totalMarks)) * 100;
    } else {
        cout << "Incorrect data entered.";
    }

    if (percent > 0) {
        if (percent >= 90) {
            gpa = 4.00;
            grade = "A";
        } else if ((percent >= 80) && (percent <= 89)) {
            gpa = 3.00;
            grade = "B";
        } else if ((percent >= 70) && (percent <= 79)) {
            gpa = 2.00;
            grade = "C";
        }  else if ((percent >= 60) && (percent <= 69)) {
            gpa = 1.00;
            grade = "D";
        }  else {
            gpa = 0.00;
            grade = "F";
        }
    }

    cout << "Your Result:-" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Percentage: " << percent << endl;
    cout << "GPA: " << gpa << endl;
    return 0;
}
