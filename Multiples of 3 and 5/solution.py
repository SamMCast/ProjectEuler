from math import *
import sys
def main():
    target = int(sys.argv[1])
    numOf3s = floor(target/3)
    numOf5s = floor(target/5)
    numof15s = floor(target/15)

    sum3s = 3*(numOf3s)*(numOf3s+1)/2
    sum5s = 5*(numOf5s)*(numOf5s+1)/2
    sum15s = 15* (numof15s) *(numof15s+1)/2
    sum = sum3s + sum5s - sum15s
    print(sum)
main()