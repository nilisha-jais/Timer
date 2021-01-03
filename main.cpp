#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>
using namespace std;

int hr=0;
int mins=0;
int sec=0;

void display_clock(){
    system("cls");
    system("color 2");
cout<<setfill(' ')<<setw(57)<<"TIMER \n"<<endl;
cout<<setfill(' ')<<setw(65)<<"***************************"<<endl;
cout<<setfill(' ')<<setw(40)<<"| "<<hr<<" hr";
cout<<"|"<<setfill(' ')<<setw(5)<<mins<<" min";
cout<<"|"<<setfill(' ')<<setw(5)<<sec<<" sec"<<"|"<<endl;
cout<<setfill(' ')<<setw(65)<<"***************************"<<endl;
}

void timer(int time_h,int time_m,int time_s){
    while(true){
display_clock();
sleep(1);
sec++;
if(sec==61){
    mins++;
    sec=1;
}
if(mins==60){
    hr++;
    mins=0;
}
if(sec==time_s){
    if(mins==time_m){
        if(hr==time_h){
                system("cls");
            system("color 4");
            cout<<setfill(' ')<<setw(57)<<"STOP!!!! \n"<<endl;
            break;
        }
    }
}
}
}
int main()
{
    int time_h,time_m,time_s;
    cout<<"Input the data for the timer:"<<endl;
    cout<<"Enter the hours:";
    cin>>time_h;
    cout<<"Enter the minutes(0-59):";
    cin>>time_m;
    cout<<"Enter the seconds(0-59):";
    cin>>time_s;
    string ans;
    cout<<"Press Y to start the timer"<<endl;
    cin>>ans;


    if(ans=="Y"){
        timer(time_h,time_m,time_s);
    }
    else
        cout<<"Invalid Input!!";
    return 0;
}
