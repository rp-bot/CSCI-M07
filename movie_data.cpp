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

struct MovieData
{
    string title;
    string genre;
    string director;
    int year;
    int runtime;
} input_data;

void outputdata()
{
    cout << endl
         << "_________________________________"
         << endl
         << "          Movie Data"
         << endl
         << endl;
    cout << "       Title: ";
    cout << setw(15) << input_data.title << endl;
    cout << "       Genre: ";
    cout << setw(15) << input_data.genre << endl;
    cout << "    Director: ";
    cout << setw(15) << input_data.director << endl;
    cout << "Release Year: ";
    cout << setw(15) << input_data.year << endl;
    cout << "     Runtime: ";
    cout << setw(15) << input_data.runtime << " Mins" << endl;
}

int main()
{
    cout << "Enter the title of the film: ";
    getline(cin, input_data.title);
    cout << endl
         << "Enter the genre: ";
    getline(cin, input_data.genre);
    cout << endl
         << "Enter the name of the Director of the film: ";
    getline(cin, input_data.director);
    cout << endl
         << "Enter the release year: ";
    cin >> input_data.year;
    cout << endl
         << "Enter the runtime (minutes): ";
    cin >> input_data.runtime;

    outputdata();

    cout << endl
         << endl;
    return 0;
}