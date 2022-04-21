#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
int arr[6]={5,3,4,2,1,2};
vector <int> A;
vector <int> B;
int size=6;
int sum1=0,sum2=0;
int temp=0;
int counter=0;

for (int i=0; i<size; i++)
{
    for (int j=i+1; j<size; j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
sum1=arr[0];
    do{
    sum1=0;
    sum2=0;
    for(int i=0;i<size-counter;i++)
    {
        sum1+=arr[i];
    }
    for(int j=0; j<counter;j++)
    {
        sum2+=arr[size-1-j];
    }
    counter++;
}
while(sum2<sum1);

for (int i=0; i<size-counter+1;i++){
    A.push_back(arr[i]);
}
for (int i=1; i<counter;i++){
    B.push_back(arr[size-counter+i]);
}

}

