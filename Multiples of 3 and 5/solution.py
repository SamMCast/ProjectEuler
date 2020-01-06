def main():
    value = 1000
    sum = 0
    for i in range(0, value, 3  ):
        sum +=i
    
    for k in range(0, value, 5):
        sum+=k

    for j in range(0, value, 15):
        sum-=j

    print(sum)

main()