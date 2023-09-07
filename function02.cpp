#include <iostream>
using namespace std;

#include "MyHeader.h"

int main(){
    
    showInfo();
    showYear(2019); 
    
    showDate(2019,5,16);
    
   int total=getTotal(1000,1000);
//    for(int i=1;i<=100;i++){
//        total+=i;
//    }
   cout<<total<<endl;

    return 0;
}
