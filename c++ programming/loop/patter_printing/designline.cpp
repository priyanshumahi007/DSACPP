/* OUTPUT
#######
#
#
#
#
#
#
*/

#include<iostream>
using namespace std;
int main(){
    int num=7;
    for (int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            if(i==0||j==0)
            cout<<"#";
        }
        cout<<endl;
    }

return 0;
}