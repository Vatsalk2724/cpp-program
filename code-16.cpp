#include<iostream>
using namespace std;

int main(){
for(int row = 1; row<=4 ; row++){
for(int col = 1; col<=6 ; col++){
cout<<" "<<"*";

for(int space = 6; space <= 1; space--){
cout<<" ";
}

}
cout<<endl;
}
return 0;
}
