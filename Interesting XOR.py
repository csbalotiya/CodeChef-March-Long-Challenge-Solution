def solve(n):
    bitc = bin(n)[2:]
    a = b= ""
    if ((bitc[0]) == '1'):
        a += '1'
        b += '0'
    
    for i in range(1,len(bitc)):
        if bitc[i] == '0':
            a+= '1'
            b += '1'
        else:
            a += '0'
            b += '1'
    print(int(a,2)*int(b,2))
for i in range(int(input())):
    solve(int(input()))
    
