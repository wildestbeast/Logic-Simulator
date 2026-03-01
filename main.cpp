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
            cout<<"\nInvalid input. Input signal can not be any other than 0 & 1";
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
            cout<<"\nInvalid input. Input signal can not be any other than 0 & 1";
            inputA = 0;
            inputB = 0;
        }
    }

    int getOutput(){
        if(inputA || inputB) return 1;
        return 0;
    }
    
};

class NOT_Gate{
private:
    int inputA;
public:
    void getInput(int a){
        if (a == 0 || a == 1)
        {
            inputA = a;
        }
        else
        {
            cout<<"\nError. signals can only be 1 or 0";
            inputA = 0;
        }
    }
    int getOutput(){
        if(inputA == 0) return 1;
        return 0;
    }
};

class XOR_GATE{
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
            cout<<"\nInvalid input. Input signal can not be any other than 0 & 1";
            inputA = 0;
            inputB = 0;
        }
    }
    int getOutput(){
        if(inputA != inputB) return 1;
        return 0;
    }
};

int main(){

//-------------------------------------------------------------------------------------------
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
//-------------------------------------------------------------------------------------------
  /*  AND_GATE and_gate;
    and_gate.getInput(1, 0);
    cout<<"Result of AND Gate for inputs 1 and 0: "<<and_gate.getOutput();
    cout<<endl;

    OR_GATE or_gate;                                                                    PHASE 2 & 3
    or_gate.getInput(0, 0);
    cout<<"Result of OR Gate for inputs 0 and 0: "<<or_gate.getOutput()<<endl;

    NOT_Gate not_gate;
    not_gate.getInput(1);
    cout<<"Result of NOT Gate for input 1: "<<not_gate.getOutput();

    return 0;

    */
//--------------------------------------------------------------------------------------------
/*
OR_GATE myOrGate;
NOT_Gate myNotGate;
myOrGate.getInput(1, 0);
myNotGate.getInput(myOrGate.getOutput());                                              PHASE 4
cout<<"NOR OUTPUT FOR INPUTS 1 & 0: "<<myNotGate.getOutput();
return 0;
*/
//--------------------------------------------------------------------------------------------

XOR_GATE sum;
AND_GATE carry;

int bitA, bitB;

cout<<"--------- HALF ADDER ---------"<<endl;

cout<<"\nEnter the first bit: "; 
cin >> bitA ;
cout<<"Enter the second bit: ";
cin >> bitB;

sum.getInput(bitA, bitB);
carry.getInput(bitA, bitB);

cout<<"\nSum: "<<sum.getOutput()<<endl;
cout<<"Carry: "<<carry.getOutput()<<endl;

cout<<"\nBinary equivalent: "<<carry.getOutput()<<" "<<sum.getOutput()<<endl;
cout<<"\n--------- ---------- ---------"<<endl;

}