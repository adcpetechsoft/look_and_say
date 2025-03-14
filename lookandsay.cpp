/*
    look and say program
    As a submission for https://code.golf/look-and-say#cpp

    Created by: amd
*/


// ---------------------------------
// Preprocessor Declaration
#define TERM 20

#include <iostream>

// ---------------------------------
// Progran  Entry Point
int main(int argc, char *argv[])
{
    // ***********************
    // Variable Declaration
    using namespace std;

    string str01;
    string str02;

    int c;
    int s;
    int j;

    // ***********************
    // Actual Procedure

    // initial value and print
    str01="1";
    cout<<str01<<endl;

    // looping for suceeding process and print
    j=0;
    while(j<=TERM)
    {
        str02.clear();

        // scanning string loop
        c=1;
        s=1;
        while(s<=str01.length())
        {
            // test and record for dupplicate
            if(str01[s-1] == str01[s])
            {
                c++;
            }else
            {
                str02+=to_string(c);
                str02+=str01[s-1];
                c=1;
            };

            s++;
        };

        // printing the result
        str01=str02;
        cout<<str01<<endl;

        j++;

    };

    return 0;

};
