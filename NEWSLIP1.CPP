#include <iostream>
#include <iomanip>
using namespace std;

// Virtual Base Class
class Student
{
protected:
    int rollNo;
    char name[30];

public:
    void acceptStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudent() const
    {
        cout << "\nRoll No : " << rollNo;
        cout << "\nName    : " << name;
    }
};

// Theory class
class Theory : virtual public Student
{
protected:
    int M1, M2, M3, M4;

public:
    void acceptTheory()
    {
        cout << "Enter Theory Marks (M1 M2 M3 M4): ";
        cin >> M1 >> M2 >> M3 >> M4;
    }
};

// Practical class
class Practical : virtual public Student
{
protected:
    int P1, P2;

public:
    void acceptPractical()
    {
        cout << "Enter Practical Marks (P1 P2): ";
        cin >> P1 >> P2;
    }
};

// Result class
class Result : public Theory, public Practical
{
protected:
    int total;
    float percentage;
    char grade;

public:
    void calculateResult()
    {
        total = M1 + M2 + M3 + M4 + P1 + P2;
        percentage = total / 6.0;

        if (percentage >= 75)
            grade = 'A';
        else if (percentage >= 60)
            grade = 'B';
        else if (percentage >= 50)
            grade = 'C';
        else if (percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void displayResult() const
    {
        displayStudent();
        cout << "\nTotal Marks : " << total;
        cout << "\nPercentage  : " << fixed << setprecision(2) << percentage;
        cout << "\nGrade       : " << grade << endl;
    }
};

int main()
{
    Result r;
    int choice;

    do
    {
        cout << "\n\n--- MENU ---";
        cout << "\n1. Accept Student Information";
        cout << "\n2. Display Student Information";
        cout << "\n3. Calculate Result";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            r.acceptStudent();
            r.acceptTheory();
            r.acceptPractical();
            break;

        case 2:
            r.displayResult();
            break;

        case 3:
            r.calculateResult();
            cout << "\nResult Calculated Successfully!";
            break;

        case 4:
            cout << "\nExiting Program...";
            break;

        default:
            cout << "\nInvalid Choice!";
        }
    } while (choice != 4);

    return 0;
}