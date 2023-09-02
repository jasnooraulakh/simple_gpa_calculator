#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


void intro();
void printResult();

int main() {
    int totalMarks = 0, obtainMarks = 0;
    double percent = 0.00, gpa = 0.00;
    string grade;

    intro();

    cout << "Enter your Total Marks:" << endl;
    cin >> totalMarks;
    cout << "Enter your Obtained Marks:" << endl;
    cin >> obtainMarks;

    if (obtainMarks <= totalMarks) {
        percent = (double(obtainMarks) / double(totalMarks)) * 100;
    } else {
        cout << "Incorrect data entered.";
    }

    if (percent > 0) {
        if (percent >= 90.00) {
            gpa = 4.00;
            grade = "A";
        } else if ((percent >= 80.00) && (percent <= 89.00)) {
            gpa = 3.00;
            grade = "B";
        } else if ((percent >= 70.00) && (percent <= 79.00)) {
            gpa = 2.00;
            grade = "C";
        }  else if ((percent >= 60.00) && (percent <= 69.00)) {
            gpa = 1.00;
            grade = "D";
        }  else {
            gpa = 0.00;
            grade = "F";
        }
    } else {
        cout << "Error" << endl;
    }

    cout << "Your Result:-" << endl;
    cout << "Grade: " << grade << endl;
    cout << fixed << setprecision(2) << "Percentage: " << percent << endl;
    cout << fixed << setprecision(2) << "GPA: " << gpa << endl;
    return 0;
}

void intro() {
    cout << "-------------------------------" << endl;
    cout << "---Welcome to GPA Calculator---" << endl;
    cout << "-------------------------------" << endl;
}

void printResult() {

}
