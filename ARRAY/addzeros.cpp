#include <iostream>
#include <vector>
using namespace std;

int main() {
   int a[5] = {1, 2, 4 ,5}; 
   int sum1 = 0,sum2= 0 ; 
   for (int i = 0; i <4 ; i ++){
    sum1 = sum1+a[i];
   }
   sum2 = (5*(5+1))/2; 
   cout <<(sum2-sum1); 
}