a= [
   [1,1,1,0,1,0,0],
   [0,1,1,1,0,1,0],
   [1,0,1,1,0,0,1]
   ]
b=[]

print("Z syndrom detector for hamming code (7,4) with all parity on position 5,6,7 of the encoded data\n")


for i in range(7):
    b.append(int(input()))

hasil=0
sementara=0
jawab=[0,0,0]
for i in range(3):
    for j in range(7):
        sementara = int(a[i][j] * b[j])
        jawab[i]= int(jawab[i] + sementara)

    jawab[i] = jawab[i]%2
    sementara = 0
    hasil+=(jawab[i]* (2**i))

print(hasil)

if(hasil==0):
    print('No syndrome')
    
    

