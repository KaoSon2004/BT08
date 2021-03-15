#include <iostream>
using namespace std;
int Length(char a[])
{
    int i = 0;
    while (*(a+i) != NULL)
        i++;
    return i ;
}

char *DaoNguoc(char str[])
{
    int length = Length(str);
    char *temp = new char[length +1];
    for (int i = 0; i < length; i++)
    {
        *(temp+i)=*(str+length-i-1);
    }
    *(temp+length)=NULL;
    return temp;
}
int main()
{
    char a[100];

    cin >>a;

    char *ans = DaoNguoc(a);
    cout <<ans;

    return 0;
}
