#include<iostream.h> 
#include<conio.h> 
inline int maximum(int a, int b)  
{ 
   return ((a > b) ? a : b); 
} 
 
inline int minimum(int a, int b) 
 { 
    return ((a < b) ? a : b); 
} 
int main() 
 { 
    int a, b; 
    cout << "Enter 2 numbers" << endl; 
    cout << "Number 1: "; 
    cin >> a; 
    cout << "Number 2: "; 
    cin >> b; 
    cout << "The maximum number is: " << maximum(a, b) << endl; 
    cout << "The minimum number is: " << minimum(a, b) << endl; 
getch(); 
    return 0; 
} 	       