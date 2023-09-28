#include <iostream>
#include <string>

std::string hw02(std:: string input_str){
    std:: string res;
    for(char c : input_str ){
        if (res.find(c) == std::string::npos){
            res +=  c;
        }
    }
    return res;

}

int main() {
    std:: string input1= "hello";
    std::string input2= "AAABBCC";
    std :: string input3 = "!HHWW02COMPLLETEE!";

    std :: cout <<hw02 (input1)<<std :: endl;
    std :: cout <<hw02 (input2)<<std :: endl;
    std :: cout <<hw02 (input3)<<std :: endl;
    return 0;

}
