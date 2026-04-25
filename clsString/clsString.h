#ifndef CLSSTRING_H
#define CLSSTRING_H

#include <iostream>
#include <string>
#include<vector>

using namespace std;

struct stDate
{
    short year, month, day;
};


class clsString
{
private:
    string _Value;

public:

    clsString();
    clsString(string value);

    std::vector<string> vectorNames;

    void SetValue(string value);
    string GetValue();


    // 1
    static void PrintFirstLetterOfString(string s);
    void PrintFirstLetterOfString();

    // 2
    string UpperFirstLetterOfEachWord(string s);
    string UpperFirstLetterOfEachWord();

    // 3
    string LowerFirstLetterOfEachWord(string s);
    string LowerFirstLetterOfEachWord();

    //4
    string InvertedLetters(string s);
    string InvertedLetters();

    //5
    void CountLetters(string s);
    void CountLetters();

    //6
    int CountTargetInString(string s,char target);
    int CountTargetInString(char target);

    // 7 + 8
    bool checkVowel(char c);
    int CountVowelsChars(string s);
    int CountVowelsChars();

    //9
    void PrintVowels(string s);
    void PrintVowels();

    //10
    void CountEachWord(string s);
    void CountEachWord();

    //11
    void PrintEachWord(string s);
    void PrintEachWord();

    //12
    void printReversedString(string s);
    void printReversedString();

    //13
    void replaceWordInString(string s,string target,string newWord);

    //14
    string removeAllPunctuationsFromString(string s);
    string removeAllPunctuationsFromString();

    //15
    void joinVectorWords(vector <string> & vectorNames);

    //16
    string joinArrayWords(string names[], short size, string Delimiter = "");

    //17
    bool check_If_Leap_Year(short year);
    int Calc_Days_In_Month(short month, short year);
    bool Is_Valid_Date(stDate & date);
    static vector<string> Split_String(string s, string Delimiter = "/");
    static stDate Convert_String_To_Structure(string DateString);

    //18
    static string  Convert_Structure_To_String(stDate date);
};


#endif
