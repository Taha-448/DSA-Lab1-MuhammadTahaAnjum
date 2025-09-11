#include<iostream>
#include<vector>
using namespace std;

// Main Code
vector<int> findIndex(int arr[],int key,int size){
    vector<int> final = {}; 

        // for empty array
    if(size == 0){


        cout<<"Array is empty."<< endl;

        return final;
    }

    for(int i=0 ; i<size ; i++){


        if(arr[i] == key){
            final.push_back(i);
        }

    }

    if(final.size() == 0){


        cout<<"The key is not present in the array."<< endl;
        return final;
    }

    return final;
}

int main(){

    //Test Case 1: Multiple Occurences

    cout<< "Test Case 1:" << endl;

    int array1[10] = {4,4,4,4,2,3,5,6};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int key1 = 4;

    vector<int> result1 = findIndex(array1,key1,size1);

    for(int num:result1){
        cout<<num<<',';
    }

    cout << endl;

    //Test Case 2: Key Not Present
    cout<< endl << "Test Case 2:" << endl;


    int array2[10] = {4,4,4,4,2,3,5,6};

    int size2 = sizeof(array2) / sizeof(array2[0]);
    int key2 = 1;

    vector<int> result2 = findIndex(array2,key2,size2);

    for(int num:result2){
        cout << num << ',';
    }

    cout << endl;

    //Test Case 3: empty Array
    cout<< endl << "Test Case 3:"<< endl;

    int array3[] = {};
    int size3 = 0;
    int key3 = 5;

    vector<int> result3 = findIndex(array3,key3,size3);

    for(int num:result3){
        cout << num<< ',';
    }
    
    
    return 0;
}
