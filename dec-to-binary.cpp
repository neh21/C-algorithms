#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    string answer;
    void decToBinary(int n)
    {
        while(n)
        {
            if(n&1) 
                answer = "1" + answer;
            else 
                answer = "0" + answer;
            n>>=1;
        }
    }
};