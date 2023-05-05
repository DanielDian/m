#include<iostream>
using namespace std;
struct ComplexCls{
   double re, img;
   void input(void){
      cout<<"Enter real part of complex number: ";
      cin>>re;
      cout<<"Enter imaginary part of complex number: ";
      cin>>img;
   }
   void display(void){
      cout<<re<<" + i "<<img<<endl;
   }
   void init(double real, double imaginary){
      re = real;
      img= imaginary;
   }
   void Negation(void){
      re = - re ;
      img= - img;
   }
   ComplexCls Add(ComplexCls a){
      ComplexCls b;
      b.re = a.re + re ;
      b.img= a.img+ img;
      return b;
   }
};
int main(){
   ComplexCls x,y,z;
   x.input();
   x.display();
   y.input();
   y.display();
   z=x.Add(y);
   z.display();
   return 0;
}//yoosofan cpp project