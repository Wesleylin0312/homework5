#include <iostream>
using namespace std;
int main(void){
    
    int h1, h2, m1, m2, s1, s2, time_1, time_2, time;
    
    cout << "Please enter first time : " << endl;
    cout << "Hours : " << endl;
    cin >> h1;
    cout << "Minutes : " << endl;
    cin >> m1;
    cout << "Seconds : " << endl;
    cin >> s1;
    
    cout << "Please enter senond time : " << endl;
    cout << "Hours : " << endl;
    cin >> h2;
    cout << "Minutes : " << endl;
    cin >> m2;
    cout << "Seconds : " << endl;
    cin >> s2;
    
    time_1 = h1*3600 + m1*60 + s1;  // the total seconds
    time_2 = h2*3600 + m2*60 + s2;  // the total seconds
    
    if(time_1 > time_2){
             time = time_1 - time_2;
    }else if(time_1 < time_2){
                time = time_2 - time_1;
    }else if(time_1 == time_2){
          cout << "兩個時間相差零秒。" << endl;
    }
    
    cout << "兩個時間相差" << endl;
    cout << time / 3600 << " : ";  // get hours
    time = time - ((time / 3600) * 3600);  // get second cut hours
    cout << time / 60 << " : ";  // get Minutes
    time = time - ((time / 60) * 60);  // get second cut Minutes
    cout << time;  // seconds
    
    system("pause");
    return 0;
    } 

