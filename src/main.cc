/*
* main.cc | Entry point
* 
* author Overtime Coder    22.12.08
*
*/

#include <iostream>

#include "word.hpp"

using std::cout;
using std::endl;

int main() {
    std::vector<Word> words{
        Word('A',0),
        Word('B',0),
        Word('C',0),
        Word('D',0),
        Word('E',0),
        Word('F',0),
        Word('G',0),
        Word('H',0),
        Word('I',0),
        Word('J',0)
    };
    parse(words);
}