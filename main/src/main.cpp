#include "StreetsDatabaseAPI.h"
#include "m1.h"
#include "m2.h"
#include "m3.h"
using namespace std;
void drawscreen(void);
int main() {
    while (1){
    cout<<"We got Toronto, New York, Cairo, Hamilton, Moscow and Saint Helena"<<endl;
    cout<<"Enter the city you wish to see, or 'exit' to quit: ";
    string name;
    getline(cin,name);
    if (name=="Toronto"){
        load_map("/cad2/ece297s/public/maps/toronto.streets.bin");
    }
    else if (name =="New York"){
        load_map("/cad2/ece297s/public/maps/newyork.streets.bin");
    }
    else if (name=="Cairo"){
        load_map("/cad2/ece297s/public/maps/cairo_egypt.streets.bin");
    }
    else if (name=="Hamilton"){
        load_map("/cad2/ece297s/public/maps/hamilton_canada.streets.bin");
    }
    else if (name=="Moscow"){
        load_map("/cad2/ece297s/public/maps/moscow.streets.bin");
    }
    else if (name=="Saint Helena"){
        load_map("/cad2/ece297s/public/maps/saint_helena.streets.bin");
    }else if (name=="exit"){
        cout<<"BYE BYE"<<endl;
        return 0;
    }else{
        cout<<endl<<"Please enter one of the cities listed above!!"<<endl<<endl;
        continue;
    }
    draw_map();
    // try out your m1.h functions here
    close_map();
    }
    return 0;
}
