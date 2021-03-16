#include <iostream>
using namespace std;

int main()  {
   char **s=new char *;// cấp phát vùng nhớ cho con trỏ
   char foo[] = "Hello World";
   *s = foo;
   printf("s is %s\n",*s);//sửa s[0] thành *s[0]
   *s[0] = foo;
   printf("s[0] is %s\n",s[0]);
   return(0);
}
