#include<iostream>
#include<string>
using namespace std;

int naiveAlgorithm(string text, string pattern){

    //for empty string
    if(pattern == "" ) {
        cout<< "Pattern is empty." << endl;

        return -1;

    }
    if( text == ""){
        cout<<"Text is empty."<<endl;

        return -1;

    }

    // nested loops for iteration over  both strings
    for(int i=0 ; i < text.length() ; i++){

        int j; 

        for(j=0; j < pattern.length() ; j++){

            // break for when strings stop matching
            if(text[i+j] != pattern[j]) {
                break;
            }
        }
        if(j == pattern.length() ) {
            return i;
        }
    }

    return -1;
}

int main(){

    // Test Case 1:
    cout << "Test Case 1: Pattern at the Beginning" << endl;

    string text1 = "tahaAnjum";
    string pattern1= "taha";

    int location1 = naiveAlgorithm(text1,pattern1);

    cout << location1 << endl << endl;

    // Test Case 2:
    cout << "Test Case 2: Pattern at the End"<< endl;

    string text2 = "tahaAnjum";
    string pattern2= "Anjum";

    int location2 = naiveAlgorithm(text2,pattern2);
    cout << location2 << endl << endl;

    // Test Case 3:
    cout<<"Test Case 3: Pattern not present"<<endl;
    string text3 = "tahaAnjum";
    string pattern3= "MuhammadTaha";
    int location3 = naiveAlgorithm(text3,pattern3);
    cout << location3 << endl << endl;

    // Test Case 4:
    cout<<"Test Case 4: Empty Pattern"<<endl;

    string text4 = "tahaAnjum";
    string pattern4= "";

    int location4 = naiveAlgorithm(text4,pattern4);
    cout << location4 << endl << endl;
    return 0;
}
