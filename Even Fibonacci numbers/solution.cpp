#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 3;
    float golden_ratio = (sqrt(5) +1)/2;
    int sum = 0;
    int limit = 4e6;
    int F_n = 0;
    cout << limit << endl;
    while (F_n < limit){
        sum+=F_n;
        F_n = floor(pow(golden_ratio, n)/sqrt(5) + 0.5);
        n+=3;
        
    }
    cout << "nth term is : " << + F_n  << " cumulative sum is " << sum << endl;
}