T = int(input().strip())
for _ in range(T):
    n = int(input().strip())
    a = list(map(int, input().strip().split())) # the list of chips
    first_chip = a.index(1)
    last_chip = n - 1 - a[::-1].index(1)
    print(a[first_chip:last_chip+1].count(0))