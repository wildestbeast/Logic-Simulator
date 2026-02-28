#include<bits/stdc++.h>
using namespace std;
/*  int AND_Gate(int A, int B){
    if(A && B){
        return 1;
    }
    else{
        return 0;
    }
}

int OR_Gate(int A, int B){
    if (A || B)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int NOT_Gate(int A){
    if (A==0)
    {
        return 1;
    }else
    {
        return 0;
    }
    
}  */
class AND_GATE
{
private:
    int inputA;
    int inputB;
public:
    void getInput(int a, int b){
        if((a == 0 || a == 1) && (b == 0 || b == 1)){
            inputA = a;
            inputB = b;
        }
        else{
            cout<<"Invalid input. Input signal can not be any other than 0 & 1";
            inputA = 0;
            inputB = 0;
        }
    }

    int getOutput(){
        if(inputA && inputB) return 1;
        return 0;
    }
    
};

class OR_GATE
{
private:
    int inputA;
    int inputB;
public:
    void getInput(int a, int b){
        if((a == 0 || a == 1) && (b == 0 || b == 1)){
            inputA = a;
            inputB = b;
        }
        else{
            cout<<"Invalid input. Input signal can not be any other than 0 & 1";
            inputA = 0;
            inputB = 0;
        }
    }

    int getOutput(){
        if(inputA || inputB) return 1;
        return 0;
    }
    
};



int main(){


    /* cout<<"--- AND GATE ---"<<endl;
    cout<<"A    B    Out"<<endl;
    cout<<"0"<<"    0"<<"    "<<AND_Gate(0, 0)<<endl;
    cout<<"0"<<"    1"<<"    "<<AND_Gate(0, 1)<<endl;
    cout<<"1"<<"    0"<<"    "<<AND_Gate(1, 0)<<endl;
    cout<<"1"<<"    1"<<"    "<<AND_Gate(1, 1)<<endl;
    cout<<"----------------"<<endl;
    
    cout<<"--- OR GATE ---"<<endl;
    cout<<"A    B    Out"<<endl;
    cout<<"0"<<"    0"<<"    "<<OR_Gate(0, 0)<<endl;
    cout<<"0"<<"    1"<<"    "<<OR_Gate(0, 1)<<endl;
    cout<<"1"<<"    0"<<"    "<<OR_Gate(1, 0)<<endl;
    cout<<"1"<<"    1"<<"    "<<OR_Gate(1, 1)<<endl;
    cout<<"----------------"<<endl;

    cout<<"--- NOT GATE ---"<<endl;
    cout<<"A    Out"<<endl;
    cout<<"0"<<"    "<<NOT_Gate(0)<<endl;
    cout<<"1"<<"    "<<NOT_Gate(1)<<endl;
    cout<<"----------------"<<endl;  */

    AND_GATE and_gate;
    and_gate.getInput(1, 0);
    cout<<"Result of AND Gate for inputs 1 and 0: "<<and_gate.getOutput();
    cout<<endl;

    OR_GATE or_gate;
    or_gate.getInput(0, 0);
    cout<<"Result of OR Gate for inputs 0 and 0: "<<or_gate.getOutput()<<endl;;

    return 0;
}