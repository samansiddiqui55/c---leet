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
#include <bits/stdc++.h>
#include <iostream>
using namespace std ; 
int main(){
int n; 
cout <<" enter the size of n"<<endl; 
  cin>>n; 
  int arr[n] ,sum1=0,sum2=0; 
for (int i = 0 ; i <n; i++){
  cin>>arr[i]; 
}
  for (int i = 0 ; i <n ; i++){
    sum2 = sum2 +arr[i]; 
  }
  for(int i = 1 ; i <=n+1; i++){
    sum1= sum1+ i;
  }
  cout <<"missing number"<<sum1-sum2<<endl; 
}

\\ using hashing 

#include <bits/stdc++.h>
#include <iostream>
using namespace std ; 
int main(){
 int arr[4] = { 1,2,3,5}; 
  int hash[5] = {0}; 
  for (int i = 0 ;i < 5; i ++)
     hash[arr[i]]++; 


     for (int i = 0 ; i < 5 ; i ++){
    if (hash[i]== 0){
      cout <<i<<endl; 
      }
  }}
   
