#include <iostream>

using namespace std;
int main() {
  int num=0;
  
  cout<<"Digite un número entre 0 y 999"<< endl;
  cin>>num;
  if (num>1 && num<999) {
    
    if (num>=900 && num<999){
      cout<<"novecientos ";
      num -=900;
    }
    if (num>=800 && num<899){
      cout<<"ochocientos ";
      num -=800;
    }
    if (num>=700 && num<799){
      cout<<"setecientos ";
      num -=700;
    }
    if (num>=600 && num<699){
      cout<<"seiscientos ";
      num -=600;
    }
    
    if (num>=500 && num<599){
      cout<<"quinicientos ";
      num -=500;
    }
    
    if (num>=400 && num<499){
      cout<<"cuatrocientos ";
      num -=400;
    }
  
    if (num>=300 && num<399){
      cout<<"trecientos ";
      num -=300;
    }
      
    if (num>=200 && num<299){
      cout<<"dosicientos ";
      num -=200;
    }  
    if (num>=100 && num<199){
      cout<<"ciento ";
      num -=100;
    }   
    else if (num>=90 && num<99){
      cout<<"noventa ";
      num -=90;
    }
    else if (num>=80 && num<89){
      cout<<"ochenta ";
      num -=80;
    }
    else if (num>=70 && num<79){
      cout<<"seteta ";
      num -=70;
    }
    else if (num>=60 && num<69){
      cout<<"seseta ";
      num -=60;
    }
    
    else if (num>50 && num<59){
      cout<<"cincuenta ";
      num -=50;
    }
    
    else if (num>40 && num<49){
      cout<<"cuarenta ";
      num -=40;
    }
  
    else if (num>30 && num<39){
      cout<<"treinta ";
      num -=30;
    }
      
    else if (num>20 && num<29){
      cout<<"veinte  ";
      num -=20;
    }  
    if (num>100 && num<199){
      cout<<"diez ";
      num -=10;
    }  
    cout<<num;

      }

    
   
  
  
}
