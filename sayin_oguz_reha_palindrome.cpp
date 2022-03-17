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

/*
In this function, we are checking if the given sentence is a palindrome. To do that we create two variables the check both from the start and the end.
After we create these two variables, a while loop is created to do the checking. In this while loop, there are two while loops that check if there are
non-alphabetical characters. After those characters are skipped, then the two characters are compared to each other. If one single difference is seen,
the function returns false. If not, the function returns true.
*/
