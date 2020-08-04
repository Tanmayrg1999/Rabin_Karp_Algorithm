# Rabin_Karp_Algorithm
The Rabin-Karp algorithm is a string-searching algorithm or pattern matching that uses hashing to find patterns in strings. A string is an abstract data type that consists of a sequence of characters. Letters, words, sentences, and more can be represented as strings. This code works by calculating the hash value of the pattern and thus running the loop so as to calculate the ahsh value and matching it.The traditional hash value function works by simply adding the integer value of the string , for ex. if a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,i=9,j=10 and we are given a string "abcabefcd" and we have to check for the substring "abc" the traditional method will calculate the hash value for substring as 1+2+3=6 and will check in the input text so even if a substring like "daa" is found its hash value i.e. 4+1+1=6 will be same as our input substring. To  overcome this issue a better algorithm is developed i.e.which calculates the hash value as "abc" will produce the result a*(q^2)+b*(q^1)+c*(q^0) where q are the total number of charecters that may be present in the string , if we consider the ascii sequence there are total 128 ascii charecters so q here is 128. So here we would be working with the ascii values for ex "a" is 97.ASCII stands for American Standard Code for Information Interchange. Ascii values are the numeric representation of the charecter values.
