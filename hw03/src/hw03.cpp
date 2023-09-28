#include <iostream>
#include <cstring>
void hw03(char* str, const char* pattern) {

    if (str == nullptr || pattern == nullptr) {
        return;
    }
    size_t str_len = strlen(str);
    size_t pattern_len = strlen(pattern);
    if (pattern_len == 0) {
        return;
    }
    char *match = strstr(str, pattern);
    if (match != nullptr) {
        size_t pos = match - str;
        size_t remain_len = str_len - pos - pattern_len;
        memmove(match, match + pattern_len, remain_len + 1);
    }
}
int main (){
    char str1[]= "hello world";
    const char pattern1[]= "world";
    hw03(str1,pattern1);
    std:: cout<< str1 <<std:: endl;

    char str2[]= "START_TEXT_END";
    const char pattern2[]= "TEXT";
    hw03(str2,pattern2);
    std:: cout<< str2 <<std:: endl;

    char str3[]= "START_TEXT_END";
    const char pattern3[]= "BEGIN";
    hw03(str3,pattern3);
    std:: cout<< str3 <<std:: endl;

    char str4[]= "";
    const char pattern4[]= "aabbcc";
    hw03(str4,pattern4);
    std:: cout<< str4 <<std:: endl;

    char str5[]= "A";
    const char pattern5[]= "A";
    hw03(str5,pattern5);
    std:: cout<< str5 <<std:: endl;
    return 0 ;
}