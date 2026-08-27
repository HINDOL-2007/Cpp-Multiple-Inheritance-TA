#include <iostream>
using namespace std;
class Student
{
protected:
    int studentID;

public:
    void setStudentID(int id)
    {
        studentID = id;
    }
};
class Employee
{
protected:
    int employeeID;

public:
    void setEmployeeID(int id)
    {
        employeeID = id;
    }
};
class TeachingAssistant : public Student, public Employee
{
    string courseName;

public:
    void setCourse(string course)
    {
        courseName = course;
    }
    void displayRole()
    {
        cout << "Student ID :- " << studentID << "\nEmployee ID :- " << employeeID << "\nCourse Name :- " << courseName << endl;
    }
};
int main()
{
    TeachingAssistant ta1;
    ta1.setStudentID(5502);
    ta1.setEmployeeID(88991);
    ta1.setCourse("Data Structures and Algorithms");
    ta1.displayRole();
    return 0;
}
