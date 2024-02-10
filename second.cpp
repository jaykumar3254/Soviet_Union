//arrays 
//accepting from usser 
/*
#include <iostream>

using namespace std;

int main()
{
    int value;
    cout<<"enter Value :";
    cin>>value;
    cout<<value;
    return 0;
}

#include<iostream>

using namespace std;

int main()
{
    double far;
    cout<<"Enter temprature in fahrenheit = ";
    cin>>far;
    double cels=( far - 32 ) /1.8 ;
    cout<<"the celsius temprature is =  "<<cels;
}*/
/*
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    //double result = floor(1.7);  //this function makes the value roundup and print the int number 
    double result = pow(3,5);     //this function says 5 is he power of 3 
    cout<<result;
}*/
/*
//area of circle 
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double radius,area;
    const double pi=3.14;

    cout<<"Enter the radius for the circle :";
    cin>>radius;
    area = pi*pow(radius,2);
    cout<<"Area of circle :"<<area;
}*/
/*
//fandamental data types 

#include<iostream>

using namespace std;

int main()
{
    double price = 99.99;
    float intrestrate = 7.62f;
    long filesize = 789000l;
    char letter = 'j';
    bool isvalid = true;//auto keyword is also used for initalizing veriable with the last extention like f,l;
    //brace initaization 
    int price1 {100};
    cout<<price1;
    return 0;
}*/
/*
//cstdlib- for an random outputs of number 
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std ;

int main()
{
    srand(time(0));
    int random = rand() % 5;
    cout<<random;
    return 0;
}
*/

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std ;

int main()
{
    srand(time(0));
    short die1 = (rand() % (6 - 1 + 1)) + 1;
    cout<<die1;
    return 0;
}
