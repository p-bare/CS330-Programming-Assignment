What is this program?


   This program is meant to simulate a security system by using the concepts of state machines and finite automata. There is a locking and unlocking code, and only when you enter those codes, the program will change its status from locked to unlocked and vice versa.


   In order to build an executable, first download the version GNU C Compiler compatible with your operating system. Then, using the terminal, create a directory and clone the git repo into it. CD into that directory and run the following command in the terminal:


g++ project.cpp -o [FILE NAME].exe 


   This will generate an executable file. You can then run the program by either double-clicking the exe file or typing “[FILE NAME].exe” into the terminal.


Unlock Code: 236211
Lock Code: 236214


Testing Security:


   Since the unlock code is 6 digits, and there are 10 possible numbers for each digit, that means there are 1 million possible 6 digit numbers (10^6). This means that on average, if you only typed in integers and if it took you 1 second to verify that the program unlocked, it would take you 1 million seconds. This is equivalent to about 11.6 straight days of inputting numbers 


   To back this up, I ran a program that input random digits into the security device, and counted how many digits it had to generate before it unlocked. These were the results:


With 100 trials:
On average, 844,838 digits were generated
The most digits generated was 3,972,522
The least digits generated was 1,411


With 1000 trials:
On average, 974,045 digits were generated
The most digits generated was 7,646,982
The least digits generated was 5,435


I will include the excel file for these tests in the repo