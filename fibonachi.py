#0 1 1 2 3 5 8 13 ..... Fibonachi 
n=int(input("Enter the range:"))
f_0=0 
f_1=1
list_fibonachi=[f_0,f_1]
for i in range(n):
    f_2=f_0+f_1
    list_fibonachi.append(f_2)
    if f_2>n:
        break
    f_0=f_1
    f_1=f_2
for i in list_fibonachi:
    print(i,end=" ")

