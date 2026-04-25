#include <iostream>
#include <vector>
#include "clsString/clsString.h"

using namespace std;

int main()
{

    clsString s1("Aubai, Mahmoud Web Developer!");

    cout << "Original String: " << s1.GetValue() << endl;
    cout << "-----------------------------------------\n";


    cout << "1. First Letters of string:\n";
    s1.PrintFirstLetterOfString();


    cout << "\n2. Case Transformations:\n";
    cout << "Upper First: " << s1.UpperFirstLetterOfEachWord() << endl;
    cout << "Lower First: " << s1.LowerFirstLetterOfEachWord() << endl;
    cout << "Inverted   : " << s1.InvertedLetters() << endl;


    cout << "\n3. Statistics:\n";
    s1.CountLetters();
    cout << "Vowels Count: " << s1.CountVowelsChars() << endl;
    cout << "Target 'a' Count: " << s1.CountTargetInString('a') << endl;


    s1.PrintVowels();
    cout << endl;


    cout << "\n4. Word Operations:\n";
    s1.CountEachWord();
    cout << "Printing Each Word:\n";
    s1.PrintEachWord();
    s1.printReversedString();


    cout << "\n5. Cleaning:\n";
    cout << "Without Punctuations: " << s1.removeAllPunctuationsFromString() << endl;


    cout << "\n6. Joining Operations:\n";
    vector<string> vNames = {"C++", "Java", "Python"};
    s1.joinVectorWords(vNames);

    string arrNames[] = {"Aubai", "Mahmoud"};
    cout << "Array Joining: " << s1.joinArrayWords(arrNames, 2, "/") << endl;

    cout << "\n7. Date Operations:\n";

    stDate date = clsString::Convert_String_To_Structure("15/10/2025");
    cout << "Converted Date -> Day: " << date.day << ", Month: " << date.month << ", Year: " << date.year << endl;

    cout << "Structure To String: " << clsString::Convert_Structure_To_String(date) << endl;


    if (s1.check_If_Leap_Year(2024))
        cout << "\n2024 is a Leap Year." << endl;

    cout << "Days in Month 2/2024: " << s1.Calc_Days_In_Month(2, 2024) << endl;

    cout << "-----------------------------------------\n";
    cout << "End of Library Test.\n";

    return 0;
}
