#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void work(){
int income[5];
string Incometype[5];
int total = 0;

for(int i = 0; Incometype[i] < 5; i++){
Incometype[i] = " ";
}

cout << "Type the name of the income type :" << endl;
if(Incometype[0] != " "){
    getline(cin,Incometype[1]);
}
else if(Incometype[1] != " "){
    getline(cin,Incometype[2]);
}
else if(Incometype[2] != " "){
    getline(cin,Incometype[3]);
}
else if(Incometype[3] != " "){
    getline(cin,Incometype[4]);
}
else{
    getline(cin,Incometype[0]);
};

cout <<"How much does this bring in monthly ?" << endl;
if(income[0] != 0){
cin >> income[0];
}
else if(income[1] != 0){
    cin >> income[1];
}
else if(income[2] != 0){
    cin >> income[2];
}
else if(income[3] != 0){
    cin >> income[3];
}
else if(income[4] != 0){
    cin >> income[4];
    cout <<"5 streams man! Great Job!" << endl;
}

total = income[0] + income[1] + income[2] + income[3] + income[4];

cout <<"Total monthly income is currently at :" << fixed << setprecision(2) << total << endl;
};

void bills(){
int rent[5];
string billtype[5];
int billtotal = 0;

for(int i = 0; billtype[i] < 5; i++){
billtype[i] = " ";
};

cout<<"Type the name of the monthly expense :" << endl;
if(billtype[0] != " "){
    getline(cin,billtype[1]);
}
else if(billtype[1] != " "){
    getline(cin,billtype[2]);
}
else if(billtype[2] != " "){
    getline(cin,billtype[3]);
}
else if(billtype[3] != " "){
    getline(cin,billtype[4]);
}
else{
    getline(cin,billtype[0]);
};


cout<<"How much does this cost monthly ?" << endl;
if(rent[0] != 0){
cin >> rent[0];
}
else if(rent[1] != 0){
    cin >> rent[1];
}
else if(rent[2] != 0){
    cin >> rent[2];
}
else if(rent[3] != 0){
    cin >> rent[3];
}
else if(rent[4] != 0){
    cin >> rent[4];
    cout <<"5 reasons to drink a cold one!" << endl;
}

billtotal = rent[0] + rent[1] + rent[2] + rent[3] + rent[4] ;

cout<<"Your monthy expenses are currently set at :" << fixed << setprecision(2) << billtotal << endl;

};

void future(){
int saving[5];
string savetype[5];
int savetotal = 0;

for(int i = 0; savetype[i] < 5; i++){
savetype[i] = " ";
};

cout<<"Type the name of the monthly expense :" << endl;
if(savetype[0] != " "){
    getline(cin,savetype[1]);
}
else if(savetype[1] != " "){
    getline(cin,savetype[2]);
}
else if(savetype[2] != " "){
    getline(cin,savetype[3]);
}
else if(savetype[3] != " "){
    getline(cin,savetype[4]);
}
else{
    getline(cin,savetype[0]);
};


cout<<"How much are you saving of this monthly ?" << endl;
if(saving[0] != 0){
cin >> saving[0];
}
else if(saving[1] != 0){
    cin >> saving[1];
}
else if(saving[2] != 0){
    cin >> saving[2];
}
else if(saving[3] != 0){
    cin >> saving[3];
}
else if(saving[4] != 0){
    cin >> saving[4];
    cout <<"Keep it up and you might retire early!" << endl;
}

savetotal = saving[0] + saving[1] + saving[2] + saving[3] + saving[4] ;

cout<<"Your monthy savings are currently set at :" << fixed << setprecision(2) << savetotal << endl;
};

void debt(){

};

void house(){

};

void pool(){

};

void over(){
cout <<"Your current income is :" << total.income << endl;

cout <<"Your current monthly epenses add up to :" << bills.billtotal << endl;
};

int main(){
    int chin;

    cout <<"Welcome to Shillings! What would you like to do today?" << endl;
    cout <<"1: Input income " << endl;
    cout <<"2: Input monthly bills " << endl;
    cout <<"3: Input investments and savings " << endl;
    cout <<"4: Input credit info " << endl;
    cout <<"5: Calculate how much house you can afford " << endl;
    cout <<"6: Calculate your investment pools " << endl;
    cout <<"7: See an overview of your finances " << endl;
    cout <<"8: Save overview to a file " << endl;
    cin >> chin;

    switch (chin){
        case '1': 
        void work();
        break;
        case '2': 
        void bills();
        break;
        case '3':
         void future();
        break;
        case '4':
         void debt();
        break;
        case '5': 
        void house();
        break;
        case '6': 
        void pool();
        break;
        case '7': 
        void over();
        break;
    }

return 0;
}