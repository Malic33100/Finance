#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void work(){
string Incometype[5];
int total = 0;
vector <int> salary;

for(int i = 0; i < 5; i++){
Incometype[i] =  " ";
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

if(salary[0] != 0){
cin >> salary[0];
}
else if(salary[1] != 0){
    cin >> salary[1];
}
else if(salary[2] != 0){
    cin >> salary[2];
}
else if(salary[3] != 0){
    cin >> salary[3];
}
else if(salary[4] != 0){
    cin >> salary[4];
    cout <<" 5 Income streams fam! " << endl;
}

total = salary[0] + salary[1] + salary[2] + salary[3] + salary[4];

cout <<"Total monthly income is currently at :" << fixed << setprecision(2) << total << endl;
};

void bills(){
vector <int> rent;
string billtype[5];
int billtotal = 0;

for(int i = 0; i < 5; i++){
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
vector <int> saving;
string savetype[5];
int savetotal = 0;

for(int i = 0; i < 5; i++){
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

savetotal = saving[0] + saving[1] + saving[2] + saving[3] + saving[4];

cout << "Your monthy savings are currently set at :" << fixed << setprecision(2) << savetotal << endl;
};

void debt(){
    int credit;

cout << "Enter your FICO credit score :" << endl;
cin >> credit;

if(credit >= 760){
    cout << "You're in the top tier of credit scorers. Good work! " << endl;
}
else if(760 > credit >= 720){
    cout << "Your credit is in excellent shape! YOu can still improve too!" << endl;
}
else if(720 > credit >= 660){
    cout << "Your credit is in the average category. Looks like you've got room to grow! " << endl;
}
else if(660 > credit >= 560){
    cout << "Your credit isn't in the best shape, but that's a great setup for a comeback! " << endl;
}
else{
    cout << "This is the start of your credit journey. Lets begin! " << endl;
};


};

void house(){
int anincome;
int creditsco;
int interest;
int fifloan ;
int tirloan ;

cout <<" Welcome to the mortgage calculator! Please note that HOA fees, mortgage insurance, and property taxes." << endl;
cout <<"Please understand that these are estimates and are only meant for that purpose. " << endl;
cout <<" We calculate your mortgage payments for you. You give us your info and we do the math." << endl;

cout <<" To start off, enter your annual income :" << endl;
cin >> anincome;

cout <<"We also need your credit score :" << endl;
cin >> creditsco;

if(creditsco > 760){
interest = .0275;
}
else if(creditsco > 720){
interest = .0300;
}
else if(creditsco > 660){
interest = .035;
}
else if(creditsco > 660){
cout <<"Your credit isnt good enough to qualify for a loan. Time to start building!" << endl;
}

fifloan = anincome * 30 * interest;
tirloan = anincome * 15 * interest;

};

void pool(){
int curr;
int newmoney;
int homecurr;

cout <<"Please note we only support translations from USD. We automatically assume you are transferring " << endl;
cout <<"USD into another currency. Please select the desired currency: " << endl;
cout <<"1: CAD, Canadian dollars " << endl;
cout <<"2: P, Mexican pesos " << endl;
cout <<"3: EUR, European union euros " << endl;
cout <<"4: YEN, Japanese yen " << endl;
cin >> curr;

switch(curr){
    case '1': cout <<" How much USD do you have ?" << endl;
    cin >> homecurr;
    newmoney = homecurr * 1.29; 
    cout << "You have " << newmoney << " in CAD. " << endl;
    break;

    case '2':cout <<" How much USD do you have ?" << endl;
    cin >> homecurr;
    newmoney = homecurr * 20.84; 
    cout << "You have " << newmoney << " in P. " << endl;
    break;

    case '3':cout <<" How much USD do you have ?" << endl;
    cin >> homecurr;
    newmoney = homecurr * .89; 
    cout << "You have " << newmoney << " in EUR." << endl;
    break;

    case '4':cout <<" How much USD do you have ?" << endl;
    cin >> homecurr;
    newmoney = homecurr * 113.72; 
    cout << "You have " << newmoney << " in YEN. " << endl;
    break;

    }

};

void over(int billtotal , int total ){
cout <<"Your current income is :" << total << endl;

cout <<"Your current monthly epenses add up to :" << billtotal << endl;
};

void check(){
cout << "If you want to save your changes to an external enter Y/y" << endl;

}

int main(){
    int chin;

    cout << "Welcome to Shillings! What would you like to do today?" << endl;
    cout << "1: Input income " << endl;
    cout << "2: Input monthly bills " << endl;
    cout << "3: Input investments and savings " << endl;
    cout << "4: Input credit score " << endl;
    cout << "5: Calculate how much house you can afford " << endl;
    cout << "6: See how much your moneys worth in major foreign currencies " << endl;
    cout << "7: See an overview of your finances " << endl;
    cout << "8: Save overview to a file " << endl;
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