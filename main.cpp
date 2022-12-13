
#include <iostream>
#include <iterator>
#include <vector>
#include <forward_list>
using namespace std;
int main() {
    
//    PROBLEM 1
//    cout<<" Enter 2 numbers: ";
//    istream_iterator<int> inputInt{cin};
//    int number1{*inputInt};
//    ++inputInt;
//    int number2{*inputInt};
//
//    ostream_iterator<int> outputInt{cout};
//    cout<<"Product is: ";
//    *outputInt = number1 * number2;
//    cout<<endl;
    
//    PROBLEM 2
//    vector<double>vec = {1.44,2.1234,3.123};
//
//    for(auto i = vec.begin(); i < vec.end(); i++){
//        cout<< *i <<" ";
//    }
    
//    PROBLEM 3
    vector<double>vec{1.23,2.34,5.673};
    for(vector<double>::iterator itr = vec.begin(); itr != vec.end(); itr++){
        cout<<*itr<<" ";
    }
//
//    PROBLEM 4
    
//    vector<int>vec;
//    int num = 0;
//    for(int i = 0; i < 5; i++){
//        cin>>num;
//        vec.push_back(num);
//    }
//    cout<<vec.front()<<" "<<vec.back()<<endl;
//
//
//    PROBLEM 5
//    vector<int>vec = {1,2,3,4,5,6,7,8};
//    if(vec.empty()){
//        cout<<"Vector is empty";
//    }else{
//        vec.erase(vec.begin() + 4);
//        vec.erase(vec.begin() + 1, vec.begin() + 3);
//
//    }
//    for(auto i : vec){
//        cout<<i<<" ";
//    }
//    PROBLEM 6

//    forward_list <int>fList;
//    fList.assign(7,3);
//
//    for(auto i : fList){
//        cout<<i<<" ";
//    }
    
    return 0;
}
