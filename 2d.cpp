#include<iostream>
using namespace std;
int main(){

int r,c;
cin>>r>>c;
int arr[r][c];

for(int i=0;i<r;i++){
    for(int j=0; j<c; j++){

        cin>>arr[i][j];
    }
}

for(int i=0;i<r;i++){
    for(int j=0; j<c; j++){

        cout<<arr[i][j]<<"          ";
    }
    cout<<endl;
}
cout<<endl;
for(int j=0 ; j<c;j++){
    if(j%2==0){
        for(int i=r-1; i>=0;i--){
            cout<<arr[i][j]<<"          ";
        }
    }else{
     for(int i=0; i<r;i++){
            cout<<arr[i][j]<<"          ";
        }
    }
cout<<endl;

}

}
/*

1 2 3 4 5
8 8 9 7 8
4 5 9 8 7
2 4 5 6 3
1 7 9 5 4

1 2 3 4 5 8 7 3 4 5 9 7 1 2 4 8 8 9 7  8 6 5 4 5 9
*/
























