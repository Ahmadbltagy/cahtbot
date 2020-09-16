#include <iostream>
#include <fstream>
#include <map>
#include <ctime>
using namespace std;

map<string, string> m;

void answer(string q){
    //this order must run on windows 10 that have bingweather app
    if(m[q] == "I'll open Weather...")
        if( !( system("start bingweather:") ) )
            cout<< m[q] <<endl;
        else
            cout<<"You should have  windows os and download bing weather app\n";
    else if(m[q]!= "")
        cout<< m[q] <<endl;
    else
        cout<< "Sorry, I can't help with that.\n";
}

void autoCorrect(string q){
    int count = 0;
}

int main(){

    fstream tchat("script.txt");
    //show the time and date
    time_t result = time(NULL);
    m["What is the time?"] = asctime(localtime(&result));
    string question;

    //read Q and a from file and put it to map to make prog faster
    if(tchat.is_open()){
        string q, a;
        while(getline(tchat, q) ){
            getline(tchat, a);
            m[q] = a;
        }
    }
    
    cout<<"Hi there.";
    start:
    cout<<"\nAsk me\n\n";
    getline(cin, question);
    answer(question);
    goto start;
    return 0;
}