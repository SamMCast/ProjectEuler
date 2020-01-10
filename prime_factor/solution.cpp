#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;
unordered_map<long, bool> primes({{2, true}, {3, true}, {5, true}, {7, true}, {11, true}, {13, true}, {17, true}, {19, true}, {23, true}});

bool isPrime(long factor){
    bool Found = primes.find(factor) != primes.end();

    if(!Found){
        long sqrt_num = floor(sqrt(factor));
        isPrime(sqrt_num);
        for(long num =sqrt_num ; num >=2; --num){
            if(factor % num == 0){
                return false;
            }
        }
        primes[factor] = true;
        return true;
    

    }

    return true;

}
int main(){
    long long composite = 600851475143;
    long long sqrt_factor = floor(sqrt(composite));
    long result =2;
    for (long num = sqrt_factor; num>=2; --num){
        // check if num is a factor of the 600,851,475,143
        if(composite % num == 0){
            // find the other factor
            long factor = composite/num;
            // is either one of them primes
            if(isPrime(num) || isPrime(factor)){
                if(isPrime(factor)){
                    result = factor;
                    
                }
                else{
                    result = num;
                }
                break;
            }
        }
        
    }
    cout <<"largest prime factor of 600,851,475,143 " <<result << "\n";


}