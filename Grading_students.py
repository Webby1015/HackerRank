n=int(input())


def grade(a):
    if a>=0 and a<=100:
        b=a
        a=a+5
        if a%5<3:
            print(b)
        if a%5>=3:
            print(a-a%5)
for i in range(0,n):
    a=int(input())
    if a<38:
        print(a)
    elif a>=38:
        grade(a)
