#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    ifstream data ("score.txt");
    int i=0;
    float sum=0 ,sumsqr=0;
    string n;
    while(getline(data,n)){
        sum+=stof(n);
        sumsqr+=stof(n)*stof(n);
        i++;

    }
    cout << "Number of data = "<< i<<"\n";
    cout << setprecision(3);
    float mean=sum/i;
    cout << "Mean = "<< mean<<"\n";
    cout << "Standard deviation = " << sqrt(sumsqr/i-pow(mean,2));
}