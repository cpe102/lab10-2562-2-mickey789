// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(){

    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int i = rand()%9;
    string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    if(i == 0){
        cout << "You will get " << grade[i] <<" in this 261102.";
    }else if(i == 1){
        cout << "You will get " << grade[i] <<" in this 261102.";
    }else if(i == 2){
        cout << "You will get " << grade[i] <<" in this 261102.";
    }else if(i == 3){
        cout << "You will get " << grade[i] <<" in this 261102.";
    }else if(i == 4){
        cout << "You will get " << grade[i] <<" in this 261102.";
    }else if(i == 5){
        cout << "You will get " << grade[i] <<" in this 261102.";
    }else if(i == 6){
        cout << "You will get " << grade[i] <<" in this 261102.";
    }else if(i == 7){
        cout << "You will get " << grade[i] <<" in this 261102.";
    }else{
        cout << "You will get " << grade[i] <<" in this 261102.";
    }

    return 0;
}