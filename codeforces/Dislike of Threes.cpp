#include<bits/stdc++.h>


int main(){
    int t;
    int out;
    int casos;
    std::cin>> casos;
    int vector[casos];
    
for (int i=1; i<= casos;i++) {
   
   std::cin>> t;
   out=0;
   for (int k=1;k <= t;k++) {
       
       out=out+1;
       if(out%3==0 || out%10==3){
          out=out+1; 
       }
       if(out%3==0 || out%10==3){
          out=out+1; 
       }
  
       vector[i]=out;
   }
   std::cout << vector[i] << std::endl;
 }
}