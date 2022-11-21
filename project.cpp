#include <iostream>
#include <cctype>
#include <string>
#include <cstdlib>
#include <time.h>

const int s0 = 0;
const int A = 1;
const int B = 2;
const int C = 3;
const int D = 4;
const int Bingo = 5;

//236211: Unlock
//236214: Lock

//               0   1   2  3   4   5   6   7   8   9
int s0_ns[10] = {s0, s0, A, s0, s0, s0, s0, s0, s0, s0};
int A_ns[10] = {s0, s0, A, B, s0, s0, s0, s0, s0, s0};
int B_ns[10] = {s0, s0, A, s0, s0, s0, C, s0, s0, s0};
int C_ns[10] = {s0, s0, D, s0 ,s0 ,s0 ,s0, s0, s0, s0};
int D_ns[10] = {s0, Bingo, A, B, s0, s0, s0, s0, s0, s0};
int Bingo_ns[10] = {s0, s0, s0, s0, s0, s0, s0, s0, s0, s0};

int* state_Transition[] = {s0_ns, A_ns, B_ns, C_ns, D_ns, Bingo_ns};
// Next state = state Transition[current state][input]

int state = 0;

bool locked = true;

std::string InputUnprocessed;
char Input;


int main()
{

    std::cout << "Welcome, please enter password one character at a time:\n";
    std::cout << "Status: Locked\n";

    do {

        std::cin >> InputUnprocessed;

        while(InputUnprocessed.length() > 1) {
            std::cout << "Only enter one character at a time. Try again:\n";
            std::cin >> InputUnprocessed;
        }

        Input = InputUnprocessed[0];

        if(isdigit(Input)) {

            //So you can't lock it again if it's already locked or unlock again if unlocked
            if(state == Bingo && Input == '1' && locked) {
                locked = 0;
                std::cout << "Status: Unlocked\n";
            }

            if(state == Bingo && Input == '4' && !locked) {
                locked = 1;
                std::cout << "Status: Locked\n";
            }

            state = state_Transition[state][Input - '0'];

        }

        else{
            state = s0;
        }

    } while(1);
}
