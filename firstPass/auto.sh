#!/bin/sh

rm output/symtab.txt
rm output/intermediate_code.txt 
rm ../secondPass/mips.s 

./parser < "
input/"$1
cd ../secondPass
./inter < ../firstPass/output/intermediate_code.txt
cd ../firstPass