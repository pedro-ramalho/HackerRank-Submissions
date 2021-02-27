if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    aux = sorted(arr)
    maximum = max(aux)
    c = 0
    for i in range(0, len(aux)):
        if aux[i] == maximum:
            break
        c+=1
    result = aux[:c]
    print(max(result))
    
        
