#!/usr/bin/python3


filepath=input("Enter File Path\n")
myfile=open(filepath,"r")
line=word=charac=0
while True:
	x=myfile.read(1)
	if x:	
		if x=='\n':
			line+=1
			word+=1
		elif x==' ':
			word+=1
		charac+=1
			
	else:
		print("File End")
		break
print("lines: ")
print(line)
print(" word: ")
print(word-1)
print("characters: ")
print(charac)
myfile.close()


