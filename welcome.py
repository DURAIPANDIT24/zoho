str=input("enter your string")
for i in range(len(str)):
    for j in range(len(str)-1-i):
        print(" ",end='')
    for k in range(i+1):
        print(str[(k+int(len(str)//2))%(len(str))],end='')
    print("\n")

