#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    
    string file;
    cout<<"Enter your Input File name \n";
    cin>>file;

    ifstream File;
    File.open(file);
    string line;
    int count=0;
    while (getline(File, line))
        count++;
    File.close();
    
    File.open(file);
    double arr[count][2];
    int a=0,b=0;
    while(File>>arr[a][b])
    {
        if(b==1)
        {
            a++;b=0;
        }
        else 
            b++;
    }
    File.close();
    
    vector< pair <double,double> > vector;
    for (int p = 0; p < count; p++){
        vector.push_back(make_pair(sqrt(((arr[p][0]*arr[p][0])+(arr[p][1]*arr[p][1]))),p));
    }
    sort(vector.begin(),vector.end());
   
    cout<<endl;
    cout<<"Enter Output File Path"<<endl;
    string store;
    cin>>store;
     cout<< "Data stored Successfully";
    
    ofstream OpFile(store);
    for (int a=0; a<count; a++){
        for (int b=0; b<2; b++){
            OpFile << arr[(int)vector[a].second][b] << " ";
        }
        OpFile<<"\t \t"<<vector[a].first;
        OpFile<<endl;
    }
    return 0;
}