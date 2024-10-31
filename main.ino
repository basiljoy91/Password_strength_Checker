#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string password;
 bool upper_case_present=false, lower_case_present=false, digit_present=false, special_char_present=false;
    cout << "Enter passowrds to be evaluated: " << endl;
    getline(cin, password);


//checking for Upper case
    for (int i=0; i < password.length();i++)
        if(isupper((char)password[i])) 
            upper_case_present=true;

//checking for lower case            
    for(auto i :password)
        if(std::islower(i))
            lower_case_present=true;

//checking for digit
    for (int i=0; i < password.length();i++)
        if(isdigit((int)password[i]))
             digit_present=true;
    
//checking for special char    
    string special_chr="~!@#$%^&*()_+`{}|[]\':,./<>?";
    for(auto i: password)
        if(special_chr.find(i) != string::npos)
            special_char_present=true;
    
    int score=0;

 if(upper_case_present)
        score++;
 if(lower_case_present)
        score++;
 if(digit_present)
        score++;
 if(special_char_present)
        score++;
 if(password.length()>=8) 
        score++;

    string strength;
    switch(score)
    {
        case 5:
            strength="very strong";
            break;
        case 4:
            strength="strong";
            break;
        case 3:
            strength="moderate";
            break;
        case 2:
            strength="weak";
            break;
        default:
            strength="very weak";
    }

    cout << "Strength of the passowrd is: " << strength << endl;
    
    return 0;
}
