class Solution {
public:
    int getSum(int a, int b) {
       while(b!=0){
           unsigned  int tmp=(a&b);
           a=a^b;
           b=tmp<<1;
       } 
       return a;
       
    }
};