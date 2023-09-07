#include <iostream>
using namespace std;
void showInfo();  
void showYear(int year); 
void showDate(int year,int month,int day); 
int getTotal(int start,int end);


void showInfo(){
    cout<<"XX公司"<<endl;
    cout<<"地址:YYYY"<<endl;
    cout<<"電話:0987654321"<<endl;
    cout<<"傳真:7654321"<<endl;
    cout<<"E-mail:abc@gmail.com"<<endl;
}

void showYear(int year){
    if(year>=1000 && year<=3000){
        cout<<"年份："<<year<<endl;
    }
} 
     
void showDate(int year,int month, int day){
    if(year<1000 || year>3000){
        return;
    }
    if(month<1 || month>12){
        return;
    }
    if(day<1){
        return;
    }
    if(day>31){
        return;
    }
    
    cout<<"日期："<<year<<"/"<<month<<"/"<<day<<endl;
}
// int getTotal(int start,int end){
//     int total=0;
//     for(int i=(start<end?start:end);i<=(start>end?start:end);i++){
//         total+=i;
//     } 
//     return total;
// }

int getTotal(int start,int end){
    if(start == end){
        return start;
    }
    int total=0;
    for(int i=start;i<=end;i++){
        total+=i;
    } 
    return total; 
}

