person = int(input())
arr = list(map(int, input().split()))

ispair = [0]*person
rec =[]
cnt = 0

for i in range(person):
    if ispair[i] == 1:
        continue
    dst = i + arr[i]
    if 0 <= dst < len(arr) and dst!=i:
        if i == dst + arr[dst]:
            cnt+=1
            ispair[i] = 1
            ispair[dst] = 1
            print(i,dst)

print(cnt)

