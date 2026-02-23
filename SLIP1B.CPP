
// Cylinder = πr2h 
// Cone = πr2h/3 
// Sphere = 4/3πr3 
 
#include<iostream.h> 
#include<conio.h> 
 
float volume(float r, float h)  
{ 
    return (3.14*r*2*h); 
} 
 
float coneVol(float r, float h) { 
    return (3.14*r*2*h/3); 
} 
 
float volume(float r) {

    return (4/3*3.14*r*r*r); 
} 
int main() { 
    float cy_h, cy_r, co_h, co_r, sp_r; 
    cout << "Enter dimensions" << endl; 
    cout << "1. Cylinder" << endl;
    cout << "Height: ";
    cin >> cy_h; 
    cout << "Radius: "; 
    cin >> cy_r; 
    cout << endl; 
    cout << "2. Cone" << endl; 
    cout << "Height: "; 
    cin >> co_h; 
    cout << "Radius: "; 
    cin >> co_r; 
    cout << endl; 
    cout << "3. Sphere" << endl; 
    cout << "Radius: "; 
    cin >> sp_r; 
    cout << endl; 
    cout << "The volume of Cylinder is: " << volume(cy_h, cy_r) << endl; 
    cout << "The volume of Cone is: " << coneVol(co_h, co_r) << endl;
    cout << "the volume of sphere is:"<< volume(sp_r)<<endl;
    getch();
    return 0;
    }



