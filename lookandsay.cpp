#define TERM 20

#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;

    string str01;
    string str02;
    char reg01;

    int c;
    int s;
    int j;

    str01="1";
    cout<<str01<<endl;

    j=0;
    while(j<=TERM)
    {
        str02.clear();

        c=1;
        s=1;
        while(s<=str01.length())
        {
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

        str01=str02;
        cout<<str01<<endl;

        j++;

    };

    return 0;

};
