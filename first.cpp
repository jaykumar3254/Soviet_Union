//cpp2020
/*
//first program
#include <iostream>


int main() {
    int a=10;
    int b=20;
    std::cout << "Values before swap : "<<std::endl;
    std::cout << a <<std::endl;
    std::cout << b <<std::endl;
    a=a+b;
    b=a-b;
    a=a-b;
    std:: cout << "Values after swap : "<<std::endl;
    std:: cout << a<<std::endl;
    std:: cout << b<<std::endl;
}
*/
/*
//constants 
#include <iostream>

int main()
{
    const int i=9;
    std::cout<< i;
}
*/
/*
//naming conventions 
#include <iostream>

int main()
{
    std::cout<< "naming conventions ! "<<std::endl;
    std::cout<<"snake case : file_size"<<std::endl;
    std::cout<<"pascal case : FileSize "<<std::endl;
    std::cout<<"camel case : fileSize "<<std::endl;
    std::cout<<"hungarian notation : iFileSize"<<std::endl;
}
*/

//mathamatical calculations and oprations  
/*
#include <iostream>

int main()
{
 int x = 10;
 std::cout<<x<<std::endl;
 //x++;
 //x=x+2;
 //x--;
 std::cout<<x<<std::endl;   
}*/
/*
//let i try loop 
# include <iostream>

int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        std::cout<<"hello world "<<std::endl;
    }
}*/
/*
#include<iostream>

int main()
{
    double x=10;
    double y=5;
    double z;
    z=(x+10)/(3*y);
    std::cout<<z;
    return 0;
}*/
/*
//first for input 
#include<iostream>

int main()
{
    int a ;
    std::cout<<"Enter your first value : "<<std::endl;
    std::cin>>a ;
    std::cout<<a;
}*/
/*
//concatination of string 
#include <iostream>

int main()
{
    int a =10;
    std::cout<<"the value of a : "<<a;
    return 0;
}*/
/*
//idea of using namespace std 
#include<iostream>

using namespace std;

int main()
{
    cout<<"Hello World !";
    return 0;
}*/

//taxation for the sales 
#include<iostream>

using namespace std ;

int main()
{
    double sales=95000;
    double stateTax,countyTax,totalTax;
    const double countytaxRate=0.04;
    const double statetaxRate=0.02;

    stateTax=(sales/100)*4;
    countyTax=(sales/100)*2;

    stateTax=sales*statetaxRate;
    countyTax=sales*countytaxRate;

    totalTax=stateTax+countyTax;

    cout<<stateTax<<endl;
    cout<<countyTax<<endl;
    cout<<totalTax<<endl;

    return 0;
}