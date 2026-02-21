#ifndef lib_inhe_h
#define lib_inhe_h
#include<iostream>
#include<string>

using namespace std;


class  vechicl{

    private:
    string color;
    string model;
    int years;
    float speed;
    float fule_leve;

    public:
  void set_color(string c){
        color = c;
    }


    string get_color(){
        return color;
    }
    string get_model(){
        return model;
    }
     int get_years(){
        return years;
     }
    float get_speed(){
        return speed;
    }
    float get_fule_leve(){
        return fule_leve;
    }
    void start(){

    cout<<"is start..."<<endl;
    }
    void stop(){

    cout<<"is stop..."<<endl;
    }
    void _break(){

    cout<<"break.."<<endl;
    }
    void acc(){

    cout<<"is moving..."<<endl;
    }

};

class car: public vechicl{
    private:
    int num_door;
    float trunk_size;
    string enging_type;
    string model_type;
    float max_speed;

public:

car(int num_d,float trunk,string eng_mod,string car_ty,float S){
num_door = num_d;
trunk_size=trunk;
 enging_type = eng_mod;
 model_type=car_ty;
 max_speed = S;
}

void set_doors(int f){
 num_door = f;
}
void set_trunk(float f){
 trunk_size = f;
}
void set_eng_mod(string s){
 enging_type = s;
}
void set_car_mod(string s){
 model_type = s;
}
void set_speed(float S){
 max_speed = S;
}




void display_info(){
    cout<<"CAR: "<<num_door<<" doors"<<", trunk_size "<<trunk_size<<"mm "<<", enging_model "<<enging_type<<", max_speed "<<max_speed<<"kmh"<<endl;
}
void getcolor(){
    cout<<"color.."<<get_color()<<endl;
}
void getmodel(){
    cout<<"model.."<<model_type<<endl;
}
void getyears(){
    cout<<"years."<<get_years()<<endl;
}
void engine_sound(){
    cout<<"moster..."<<endl;
}

};

class bike: public vechicl{

    private:
    int num_wheels;
    string enging_type;
    float max_speed;
public:

bike(int wheel,string eng_mod,float S){
num_wheels = wheel;
 enging_type = eng_mod;
 max_speed = S;
}

void set_wheel(float f){
 num_wheels = f;
}
void set_eng_mod(string s){
 enging_type = s;
}
void set_speed(float S){
 max_speed = S;
}




void display_info(){
    cout<<"BIKE: "<<num_wheels<<" wheels,"<<" enging_model "<<enging_type<<", max_speed "<<max_speed<<"kmh"<<endl;
}
void getcolor(){
    cout<<"color.."<<get_color()<<endl;
}
// void getmodel(){
//     cout<<"model.."<<model_type<<endl;
// }
void getyears(){
    cout<<"years."<<get_years()<<endl;
}
void engine_sound(){
    cout<<"speedy..."<<endl;
}
};



class truck: public vechicl{

    private:
    float cargo_aapacity;
    int num_axles;
    string enging_type;
    float max_speed;
public:

truck(float carg,int axles,string eng_mod,float S){
cargo_aapacity = carg;
 num_axles = axles;
 enging_type = eng_mod;
 max_speed = S;
}

void set_cargo(float f){
 cargo_aapacity = f;
}
void set_axles(int n){
 num_axles = n;
}
void set_eng_mod(string s){
 enging_type = s;
}
void set_speed(float S){
 max_speed = S;
}



void display_info(){
    cout<<"TRUCK: "<<num_axles<<" axles,"<<" cargo_capcity "<<cargo_aapacity<<"ton "<<", enging_model "<<enging_type<<", max_speed "<<max_speed<<"kmh"<<endl;
}
void getcolor(){
    cout<<"color.."<<get_color()<<endl;
}
// void getmodel(){
//     cout<<"model.."<<model_type<<endl;
// }
void getyears(){
    cout<<"years."<<get_years()<<endl;
}
void engine_sound(){
    cout<<"speedy..."<<endl;
}
};

#endif
