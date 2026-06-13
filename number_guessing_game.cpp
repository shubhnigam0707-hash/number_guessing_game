#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
int choice;
srand(time(0));

    do{
        cout<<"1) Play the guessing game."<<endl;
        cout<<"2) exit."<<endl;
        cout<<"choose:  ";
        cin>>choice;

switch(choice){
    case 1:{
int guess=0;
int secret=rand()%100+1;
int count=0;
cout<<"the number is between 1-100"<<endl;
cout<<"guess the number: "<<endl;
while(guess!=secret){
    cout<<"guess "<<count+1<<": ";
    cin>>guess;
    if(guess<1 || guess>100){
        cout<<"guess out of bounds"<<endl;
        continue;
    }
        count++;
if(guess<secret){
        cout<<"higher!"<<endl;
    }else if(guess>secret){
        cout<<"lower!"<<endl;
    }else{
        cout<<guess<<" is the correct number!"<<endl;
        cout<<"it took you "<<count<<" guesses to get it right"<<endl;
    }
}
break;
    }
case 2:{
cout<<"game exited successfully"<<endl;
break;
}
default:{
cout<<"invalid choice"<<endl;
}
}
    }while(choice!=2);
    return 0;
}