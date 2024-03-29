#include<iostream>
using namespace std;

int knapsack(int value[],int wt[],int n, int W){

    if(n==0 || W==0){
        return 0;
    }

    if(wt[n-1]>W){
        return knapsack(value,wt,n-1,W);
    }
    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1], knapsack(value,wt,n-1,W));

}

int main(){

    cout<<"Max weight of Knapsack is 50kg!\n";
    int W=50;
    int wt[]={10,20,30};              //weight of products
    int value[]={100,50,150};         //value in cash of items
    cout<<"Maximun value to be fetched is: "<<knapsack(value,wt,3,W)<<endl;
    return 0;
}
