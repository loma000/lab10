#include <iostream>
#include <iomanip>
#include<fstream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    	ifstream source;
 string score;
 double scorenum = 0,scoresd = 0;
 int i=0;
	source.open("score.txt");
 while(getline(source,score)){
     
     scorenum += stod(score);
     scoresd += pow(stod(score),2);
     
     i++;
     
     
 }
 
 
 
    cout << "Number of data = "<<i<<endl;
    cout << setprecision(3);
    cout << "Mean = "<< scorenum/i<<endl;
    cout << "Standard deviation = "<<sqrt( (scoresd  /i) -pow(scorenum/i,2) )<<endl;
}