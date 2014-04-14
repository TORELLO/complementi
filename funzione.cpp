
#inclue<iostream>
#include<math.h>
using namespace std; 
void fun(int A, int B,int C,float &X1, float &X2); 
main(){ 
int a,b,c; 
float x1=0, x2=0; 
cout << "a:";cin >> a; 
cout << "b:";cin >> b; 
cout << "c:";cin >> c; 
fun(a,b,c,x1,x2); 
cout << x1<< " " << x2; 
system("pause");
return 0;
}
void fun(int A, int B,int C,float &X1, float &X2){ 
int D; 
D=B*B-4*A*C; 
if(D>=0){ 
     X1=(float)(-B+sqrt(D))/(2*A); 
     X2=(float)(-B-sqrt(D))/(2*A); 
}else cout<<"impossibile"; 
}
