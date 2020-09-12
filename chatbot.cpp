#include <iostream>
#include <fstream>
#include <map>
#include <ctime>
using namespace std;

int main(){

    map<string, string> m;
    fstream tchat("script.txt");
    //show the time and date
    time_t result = time(NULL);
    m["What is the time?"] = asctime(localtime(&result));
    

    //read Q and a from file to put it to map to make prog faster
    if(tchat.is_open()){
        string q, a;
        while(getline(tchat, q) ){
            getline(tchat, a);

        }
    }
    cout<<"Hi there.\n";
    cout<<"How can i help you? \t";
     
    return 0;
}