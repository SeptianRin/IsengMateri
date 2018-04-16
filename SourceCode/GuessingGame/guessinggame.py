array=[]
answer= ""

print("Guessing Game please take one number on 0-63 and")
print("i will guess it in 6 question that you answer Y for yes or N for no")
print("=======================================================")
answer = input("is your number >= 32? ")
if answer == "Y":
    array.append("1")
else:
    array.append("0")
    
answer = input("is it modulo 32 >=16? ")
if answer == "Y":
    array.append("1")
else:
    array.append("0")    

answer = input("is it modulo 16 >=8?  ")
if answer == "Y":
    array.append("1")
else:
    array.append("0")

answer = input("is it modulo 8 >=4?   ")
if answer == "Y":
    array.append("1")
else:
    array.append("0")

answer = input("is it modulo 4 >=2?   ")
if answer == "Y":
    array.append("1")
else:
    array.append("0")

answer = input("is it modulo 2=1?     ")
if answer == "Y":
    array.append("1")
else:
    array.append("0")

ranswer = "".join(array)
print()
print("Your number is")
print(int(ranswer, base=2))

