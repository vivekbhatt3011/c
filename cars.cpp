//Target to calculate the no of cars required for commuting the no of peple provided by the user as input .
//Given the constraint that a car can carry only 4 people in it at a time .
#include<bits/stdc++.h>
using namespace std;
int no_of_people;
int cars(int no_of_people)
{
    int a=no_of_people;
    if(a%4==0){
        return a/4;
    }
    else{
        return ((a/4)+1);
    }
}
int main()
{
    cout<<"enter the number";
    cin>>no_of_pepole;
    cout<<cars(no_of_people);
}