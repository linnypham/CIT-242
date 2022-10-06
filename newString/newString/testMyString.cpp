//**********************************************************
// Author: D.S. Malik
//
// This program shows how to use the class newString.
//**********************************************************
  
#include <iostream>                                   //Line 1
#include "myString.h"                                 //Line 2

using namespace std;                                  //Line 3
 
int main()                                            //Line 4
{                                                     //Line 5
    newString str1 = "Sunny";  //initialize str1 using  
                   // the assignment operator.          Line 6
    const newString str2("Warm"); //initialize str2 
                //using the conversion constructor.     Line 7
    newString str3; //initialize str3 to the
                    //empty string.                     Line 8
    newString str4; //initialize str4 to the 
                    //empty string                      Line 9

    cout << "Line 10: " << str1 << "    " << str2 
         << "  ***" << str3 << "###." << endl;        //Line 10

    if (str1 <= str2)        //compare str1 and str2;   Line 11
        cout << "Line 12: " << str1 << " is less "
             << "than or equal to " << str2 << endl;  //Line 12
    else                                              //Line 13
        cout << "Line 14: " << str2 << " is less "
             << "than " << str1 << endl;              //Line 14

    cout << "Line 15: Enter a string with a length "
         << "of at least 7: ";                        //Line 15
    cin >> str1;        //input str1;                   Line 16
    cout << endl;                                     //Line 17

    cout << "Line 18: The new value of "
         << "str1 = " << str1 << endl;                //Line 18

    str4 = str3 = "Birth Day";                        //Line 19

    cout << "Line 20: str3 = " << str3 
         << ", str4 = " << str4 << endl;              //Line 20

    str3 = str1;                                      //Line 21
    cout << "Line 22: The new value of str3 = "
         << str3 << endl;                             //Line 22

    str1 = "Bright Sky";                              //Line 23

    str3[1] = str1[5];                                //Line 24
    cout << "Line 25: After replacing the second "
         << "character of str3 = " << str3 << endl;   //Line 25

    str3[2] = str2[0];                                //Line 26
    cout << "Line 27: After replacing the third "
         << "character of str3 = " << str3 << endl;   //Line 27

    str3[5] = 'g';                                    //Line 28
    cout << "Line 29: After replacing the sixth "
         << "character of str3 = " << str3 << endl;   //Line 29

    return 0;                                         //Line 30
}                                                     //Line 31