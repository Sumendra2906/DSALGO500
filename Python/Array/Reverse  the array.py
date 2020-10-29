#code
t=int(input())
while t>0:
    t-=1
    l=list(input())
    l=l[::-1]
    print("".join(l))