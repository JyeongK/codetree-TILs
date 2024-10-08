n = int(input())
cur_x=0; cur_y=0
for i in range(n):
    a, d = input().split(' ')
    d = int(d)

    if a == 'W':
        cur_x-=d
    elif a == 'S':
        cur_y-=d
    elif a == 'N':
        cur_y+=d
    elif a == 'E':
        cur_x+=d
print(cur_x, cur_y)