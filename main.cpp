#include <iostream>
#include <string>

int main(){
    std:: string firstLine;
    std:: string secondLine;
    std::cout << "Enter first : ";
    std::getline(std::cin ,firstLine);

    std:: cout << "Enter second : ";
    std::getline(std:: cin,secondLine);

    std::string res= firstLine +" "+secondLine;
    std:: cout << "Result : " <<res << std ::endl;
    return 0;
}
