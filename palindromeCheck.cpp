#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string&s)
{
    string newstr = s;                                 //The same string is given to the variable "newstr" to prevent errors from const setting of the variable
    unsigned int j = s.length();                       //This variable is for checking the characters from the ending
    unsigned int i = 0;                                //This variable is for checking the characters from the beginning

    while (i < j) {
        while (isalpha(newstr[i]) == 0) {
            i++;
        }
                                                       //While loops created here to skip the non-alphabetic characters
        while (isalpha(newstr[j]) == 0) {
            j--;
        }

        if (tolower(newstr[i]) != tolower(newstr[j])){
            return false;                              //If a single unequality is encountered, the function returns false
        }
        i++;
        j--;
    }
    return true;                                       //If no unequalities encountered, the function returns true
}

int main() {
    string s = "Hello sir, how are you doing today?";
    cout << isPalindrome(s);

    cout << endl << true;
}
