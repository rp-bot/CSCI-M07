/*******************************************************************************
*  Program name: movie_data.cpp
*  Author: ...
*  Date last updated: 10/02/2021
*  Purpose: takes movie data and uses a structure and a method to out put the 
            data.
*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Name
{
     string first_name, last_name, middleinitial;
} input_name;

struct Student
{
     // string name = input_name.first_name + " " +
     //   input_name.middleinitial + " " + input_name.last_name;
     int id;
     string email;
     int ssn;
     string programs[8] = {"CSCI", "DBMS", "INFM", "SDEV"};
} student_info;

int main()
{
     cout << "Enter first name: ";
     getline(cin, input_name.first_name);
     cout << endl
          << "Enter middle initial: ";
     getline(cin, input_name.middleinitial);
     cout << endl
          << "Enter last name: ";
     getline(cin, input_name.last_name);
     cout << endl
          << "Enter student ID number [6 digits]: ";
     cin >> student_info.id;
     cout << endl
          << "Enter student email: ";
     cin >> student_info.email;
     cout << endl
          << "Enter student SSN number [last 4 digits]: ";
     cin >> student_info.ssn;
     cout << endl
          << "Enter the programs for this semester [ex. CSCI, INFM]: ";
     for (int i = 0; i < 4; i++)
     {
          cout << endl
               << "Enter the program " << i + 1 << ": ";
          cin >> student_info.programs[i];
     }

     cout << endl
          << "________________________________"
          << endl
          << "         Student Info"
          << endl
          << "      Name: " << setw(20) << input_name.first_name << " "
          << input_name.middleinitial << " " << input_name.last_name
          << endl
          << "Student ID: " << setw(20) << student_info.id
          << endl
          << "     email: " << setw(20) << student_info.email
          << endl
          << "       SSN: " << setw(20) << student_info.ssn
          << endl
          << endl
          << "  Programs: "
          << endl;

     for (int i = 0; i <= 4; i++)
     {
          cout << "\t " << setw(20) << student_info.programs[i] << endl;
     }

     cout << endl
          << endl;
}
