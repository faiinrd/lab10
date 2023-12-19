#include<iostream>
#include<fstream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int count=0;
    double sum=0,mean,sd,x;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum+=stof(textline);
        x+=pow(stof(textline),2);
        count++;
    }
    mean = sum/count;
    sd = sqrt((x/count)-pow(mean,2));

    cout << "Number of data = " << count <<endl;
    cout << setprecision(3);
    cout << "Mean = " << mean <<endl;
    cout << "Standard deviation = " << sd;
    source.close();
    return 0;
}