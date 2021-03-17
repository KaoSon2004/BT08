#include <iostream>
using namespace std;

int main()  {
   char **s=new char *;// cấp phát vùng nhớ cho con trỏ
   char foo[] = "Hello World";
   *s = foo; //*s truy nhập vùng nhớ không xác định
   printf("s is %s\n",s);
   s[0] = foo;// lỗi s chưa khởi tạo
   printf("s[0] is %s\n",s[0]);
   return(0);
}
