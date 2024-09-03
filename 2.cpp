#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    int count = 0;
    
    for(char c : str){
        if(c == 'A' || c == 'a'){
            count += 1;
        }
    }
    
    cout << "Apareceram " << count << " vezes a letra (a/A)";
    
    
    return 0;
}