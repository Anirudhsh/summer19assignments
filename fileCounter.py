#!/usr/bin/python3
import subprocess
filen=input("Enter File Name")
print(subprocess.getoutput('wc -lcw '+filen))
