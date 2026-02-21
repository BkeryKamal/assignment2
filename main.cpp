#include<iostream>
#include"lib_inhe.h"


int main(){
    car byd(4,4,"5th Generation DM-i (DM5.0)","BYD s7",300); //int num_d,float trunk,string eng_mod,string car_ty,float 
    truck vivo(15.5,2,"7.3L Godzilla gas engine.",120);//float carg,int axles,string eng_mod,float S
    bike RX6(3,"V-Twin",350);//int wheel,string eng_mod,float 
    byd.set_color("red");
    vivo.set_color("white");
    RX6.set_color("green");
    cout<<"color is "<<byd.get_color()<<endl;
    cout<<"color is "<<vivo.get_color()<<endl;
    cout<<"color is "<<RX6.get_color()<<endl;
    byd.display_info();
    vivo.display_info();
    RX6.display_info();
    return 0;
}
