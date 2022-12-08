/*
* word.hpp | Word class
* 
* author Overtime Coder    22.12.08
*
*/

/*
* 0 = 無し | 1 = 一点 | 2 = 二点 | 3 = レ点
*/

class Word {
private:
    char word;
    int type;
public:
    Word(char w,int t);

    char getWord() {return word;}
    int getType() {return type;}

    void setWord(char w) {word=w;}
};

void parse(Word w[]);