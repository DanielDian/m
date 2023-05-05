#include<iostream>
using namespace std;
const int n=4 , m=4;
void transpose(int a[][m]){
   for(int i=0; i<n ; i++)
      for(int j=0 ; j<i; j++)
      {
         int temp =  a[i][j];
           a[i][j] = a[j][i];
         a[j][i] = temp;
      }

}
void show(int a[][m]){
   for(int i = 0 ; i< n ; i++){
      cout<<"\n";
      for(int j=0 ; j<m ; j++)
         cout<< a[i][j]<<'\t';
   }
}

struct Matrix{
   int a[n][m];
  void transpose(){
   for(int i=0; i<n ; i++)
      for(int j=0 ; j<i; j++)
      {
         int temp =  a[i][j];
           a[i][j] = a[j][i];
         a[j][i] = temp;
      }
}
void show(){
   for(int i = 0 ; i< n ; i++){
      cout<<"\n";
      for(int j=0 ; j<m ; j++)
         cout<< a[i][j]<<'\t';
   }
   cout<<endl;
}
 void init(void){
 for(int i =0 ;i<n; i++)
  for(int j =0 ; j<m ; j++)
     a[i][j] = i*10 +j;
}
void input(void){
   cout<<"Enter data"<<endl;
   for(int i = 0 ; i < n; i++)
      for(int j=0 ; j<m ; j++){
          cout<<"Enter A["<<i<<"]["<<j<<"] : ";
          cin>>a[i][j];
    }
 }
};
int main(){
 int a[n][m];
 for(int i =0 ;i<n; i++)
  for(int j =0 ; j<m ; j++)
     a[i][j] = i*10 +j;
 show(a);
 transpose(a);
 cout << endl;
 show(a);
 int b[n][m];
 for(int i =0 ;i<n; i++)
  for(int j =0 ; j<m ; j++)
     b[i][j] = i*i +j;
  show(b);
  transpose(b);
  show(b);
  Matrix m1;
  m1.init(); // m1.input();
  m1.show();
  m1.transpose();
  m1.show();
  cout<<endl;
  Matrix m2;
  m2.init(); // m2.input();
  m2.show();
  m2.transpose();
  m2.show();
 return 0;
}