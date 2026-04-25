#include "clsString.h"

clsString::clsString()
{
    _Value = "";
}

clsString::clsString(string value)
{
    _Value = value;
}

void clsString::SetValue(string value)
{
    _Value = value;
}

string clsString::GetValue()
{
    return _Value;
}


void clsString::PrintFirstLetterOfString(string s)
{
    bool isFirstLetter = true;
    cout << "First letter in this string:\n";
    for (short i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ' && isFirstLetter)
                {
                    cout << s[i] << endl;
                }
            isFirstLetter = (s[i] == ' ' ? true : false);
        }
}

void clsString::PrintFirstLetterOfString()
{
    PrintFirstLetterOfString(_Value);
}

string clsString::UpperFirstLetterOfEachWord(string s)
{
    bool isFirstLetter = true;
    for(short i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ' && isFirstLetter)
                {
                    s[i] = toupper(s[i]);
                }
            isFirstLetter = (s[i] == ' ' ? true : false);
        }
    return s;
}

string clsString::UpperFirstLetterOfEachWord()
{
    return UpperFirstLetterOfEachWord(_Value);
}

string clsString::LowerFirstLetterOfEachWord(string s)
{
    bool isFirstLetter = true;
    for(short i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ' && isFirstLetter)
                {
                    s[i] = tolower(s[i]);
                }
            isFirstLetter = (s[i] == ' ' ? true : false);
        }
    return s;
}

string clsString::LowerFirstLetterOfEachWord()
{
    return LowerFirstLetterOfEachWord(_Value);
}

string clsString::InvertedLetters(string s)
{
    for (int i = 0 ; i< s.length(); i++)
        {
            if(islower(s[i]))
                s[i] = toupper(s[i]);
            else if(isupper(s[i]))
                s[i] = tolower(s[i]);
        }

    return s;
}

string clsString::InvertedLetters()
{
    return InvertedLetters(_Value);
}

void clsString::CountLetters(string s)
{
    int capital = 0;
    int small = 0;
    for (int i = 0 ; i < s.length(); i++)
        {
            if(isupper(s[i]))
                capital++;
            else if(islower(s[i]))
                small++;
        }
    cout<<"Capital letter counter: "<< capital<<endl;
    cout<<"Small letter counter:   "<< small<<endl;
}

void clsString::CountLetters()
{
    CountLetters(_Value);
}

int clsString::CountTargetInString(string s,char target)
{

    int counter =0;
    for(int i = 0; i < s.length(); i++)
        {
            if(s[i]== target)
                {
                    counter++;
                }
        }
    return counter;
}

int clsString::CountTargetInString(char target)
{
    return CountTargetInString(_Value, target);
}


bool clsString::checkVowel(char c)
{
    c = tolower(c);
    return ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'));
}

int clsString::CountVowelsChars(string s)
{
    int counter = 0;
    for(int i = 0 ; i < s.length(); i++)
        {
            if(checkVowel(s[i]))
                counter++;
        }
    return counter;
}

int clsString::CountVowelsChars()
{
    return CountVowelsChars(_Value);
}


void clsString::PrintVowels(string s)
{
    cout << "\nVowels in string are: ";
    for (short i = 0; i < s.length(); i++)
        {
            if (clsString::checkVowel(s[i]))
                cout << s[i] << " ";
        }
}
void clsString::PrintVowels()
{
    PrintVowels(_Value);
}

void clsString::CountEachWord(string s)
{
    int counter = 0;
    string word = "";

    for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
                {
                    if (word != "")
                        {
                            counter++;
                            word = "";
                        }
                }
            else
                {
                    word += s[i];
                }
        }


    if (word != "")
        {
            counter++;
        }
    cout<<"The number of words in your string is: "<<counter<<endl;
}


void clsString::CountEachWord()
{
    CountEachWord(_Value);
}


void clsString::PrintEachWord(string s)
{
    string word = "";

    for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
                {
                    if (word != "")
                        {
                            cout << word << endl;
                            word = "";
                        }
                }
            else
                {
                    word += s[i];
                }
        }


    if (word != "")
        {
            cout << word << endl;
        }
}

void clsString::PrintEachWord()
{
    PrintEachWord(_Value);
}


void clsString::printReversedString(string s)
{
    string word = "";
    cout << "\nReversed String by Words:\n";

    for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
                {

                    word = s[i] + word;
                }
            else
                {
                    if (word != "")
                        {
                            cout << word << " ";
                            word = "";
                        }
                }
        }


    if (word != "")
        {
            cout << word;
        }
    cout << endl;
}


void clsString::printReversedString()
{
    printReversedString(_Value);
}

void clsString::replaceWordInString(string orString, string target, string newWord)
{
    cout << "Original string:\n";
    cout << orString << endl;

    int pos = orString.find(target);

    while (pos != string::npos)
        {
            orString.replace(pos, target.length(), newWord);
            pos = orString.find(target,pos + newWord.length());
        }

    cout << "\nString after replacing:\n";
    cout << orString << endl;
}

string clsString::removeAllPunctuationsFromString(string s)
{
    string result = "";
    for(int i = 0; i < s.length(); i++)
        {
            if(!ispunct(s[i]))
                {
                    result += s[i];
                }
        }
    return result;
}

string clsString::removeAllPunctuationsFromString()
{
    return removeAllPunctuationsFromString(_Value);
}


void clsString::joinVectorWords(vector<string> & vectorNames)
{
    string FullName = "";
    string sep = " ";
    for(int i = 0; i< vectorNames.size(); i++)
        {
            FullName += vectorNames[i];
            if(i != vectorNames.size() -1)
                {
                    FullName += sep;
                }
        }
    cout<<"Vector joining: "<<FullName<<endl;
}


string clsString::joinArrayWords(string names[], short size, string sep) {
    string FullName = "";
    for (int i = 0; i < size; i++) {
        FullName += names[i] + (i == size - 1 ? "" : sep);
    }
    return FullName;
}


bool clsString::check_If_Leap_Year(short year)
{
    return  (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int clsString::Calc_Days_In_Month(short month, short year)
{
    static short NumberOfDays[12]= {31,28,31,30,31,30,31,31,30,31,30,31};

    short index = month - 1;

    return (month == 2 && check_If_Leap_Year(year)) ?  29 :  NumberOfDays[index];
}

bool clsString::Is_Valid_Date(stDate & date)
{
    if( date.month < 1 || date.month > 12 )
        {
            return false;
        }
    if(date.day < 1 || date.day > Calc_Days_In_Month(date.month, date.year))
        {
            return false;
        }
    if(date.year <= 0)
        return false;
    return true;
}

vector<string> clsString::Split_String(string s, string Delim)
{
    vector<string> vString;
    short pos = 0;
    string word;
    while ((pos = s.find(Delim)) != std::string::npos)
        {
            word = s.substr(0, pos);
            if (word != "") vString.push_back(word);
            s.erase(0, pos + Delim.length());
        }
    if (s != "") vString.push_back(s);
    return vString;
}


stDate clsString::Convert_String_To_Structure(string DateString)
{
    stDate date;
    vector<string> vDateData = Split_String(DateString, "/");

    if (vDateData.size() >= 3)
        {
            date.day = stoi(vDateData[0]);
            date.month = stoi(vDateData[1]);
            date.year = stoi(vDateData[2]);
        }
    return date;

}


string  clsString::Convert_Structure_To_String(stDate date)
{
    string Delim = "/";

    string StringDate = "";
    StringDate += to_string(date.day) + Delim;
    StringDate += to_string(date.month) + Delim;
    StringDate += to_string(date.year);

    cout<<"\nDate of year:(String) ";
    return StringDate;
}




