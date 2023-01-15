#include<iostream>
#include<stack>
#include<string>
#include<sstream>

using namespace std;

class Calculator{
    private:
       stack<double> result;
       double total;
    public:
       void add(double a, double b){
          total = a + b;
          cout << "Sum:"<< total << endl;
          result.push(total);
       }
       void sub(double a, double b){
          total = a - b;
          cout << "Difference:"<< total << endl;
          result.push(total);
       }
       void mul(double a, double b){
          total = a * b;
          cout << "Product:"<< total << endl;
          result.push(total);
       }
       void div(double a, double b){
          if ( b != 0){
             total = a / b;
             cout << "Quotient:"<< total << endl;
             result.push(total);
          }
          else {
             cout << "Error:Divison by 0\n";
          }
       }
       double getTotal(){
          return total;
       }  
      
       
    
};

int main(){

     Calculator cal;
     string line;
     while(true){
         cout << "Enter an expression or exit to end: ";
         getline(cin,line);
         if (line == "EXIT" || "exit" )
            break;
        
         else {
            double a,b;
            char c;
            stringstream ss(line);
            ss >> a >> c >> b;
            if (c == '+')
               cal.add(a,b);
            if (c == '-')
               cal.sub(a,b);
            if (c == '*')
               cal.mul(a,b);
            if (c == '/')
               cal.div(a,b);
         }

           

     }}
