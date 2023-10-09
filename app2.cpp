#include<bits/stdc++.h>
#include<string.h>
#include"NodeandStack.h"
using namespace std;



int main(){
    string brackets;
    getline(cin, brackets);
    Stack<int> bracketsOrder;

    for(int i = 0; i < brackets.length(); i++){
        if(brackets[i] == '('){
            bracketsOrder.push( i + 1 );
        }
        else if(brackets[i] == ')'){
            if(bracketsOrder.isEmpty()){
                cout << "Chuoi ngoac sai !!!" << endl;
                return 0;
            }
            cout << bracketsOrder.top() << " " << i + 1 << endl;
            bracketsOrder.pop();
        }
    }
    system("pause");
    return 0;
}