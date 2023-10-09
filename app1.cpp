#include <bits/stdc++.h>
#include "NodeandStack.h"
using namespace std;


int main(){

    Stack<int> s;

    while(true){
        int choice;
        cin >> choice;
        switch(choice){
            case 1:
                int data;
                cin >> data;
                s.push(data);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                cout << s.top() << endl;
                break;
            default:
                cout << "Invalid choice";
                break;
        }
    }

    return 0;
}