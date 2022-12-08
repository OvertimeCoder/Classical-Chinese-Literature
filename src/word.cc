/*
* word.cc | Word class
* 
* author Overtime Coder    22.12.08
*
*/

#include "word.hpp"

#include <iostream>

using std::cout;
using std::endl;

Word::Word(char w, int t) : word{w},type{t} {}

void parse(Word w[]) {
    int size = sizeof(*w);
    cout << "Size is " << size << endl;

    for (int i = 0; i < size; i++) {
        char add;

        

        add = w[i].getWord();
        w[i].setWord(add);
    }

    for (int i = 0; i < size; i++) {
        cout << w[i].getWord();
    }
}