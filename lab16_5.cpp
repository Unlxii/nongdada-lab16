#include <iostream> 
 #include <cstdlib> 
 #include <ctime> 
 using namespace std; 
  
 void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer  
  
 int main(){ 
         int a = 50, b = 100, c = 500, d = 1000; 
          
         srand(time(0));         
          
         for(int i = 0;i < 10;i++){ 
             shuffle(&a,&b,&c,&d); //Modify input arguments to pointer  
             cout << a << " " << b << " " << c << " " << d << "\n"; 
         } 
          
         return 0; 
 } 
  
 //Write definition of shuffle() using pointer here  
 void shuffle(int *a1,int *a2,int *a3,int *a4){ 
         int *x[4] = {a1, a2, a3, a4}; 
  
         for(int i = 0; i < 4; i++){ 
                 int rg = rand()%4; 
                 int a = *x[i]; 
                 *x[i]= *x[rg]; 
                 *x[rg]= a; 
         } 
          
         *a1 = *x[0]; *a2 = *x[1]; *a3 = *x[2]; *a4 = *x[3]; 
 }