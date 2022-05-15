#include<iostream>
using namespace std;

class heap{
    public:
        int arr[100];
        int size=0;
        heap(){
            arr[0]=-1;
        }

    void insert(int value){              
        size=size+1;
        int i=size;
        arr[i]=value;

        while(i>1){
            int parent=i/2;

            if(arr[parent]<arr[i]){
                swap(arr[parent],arr[i]);
                    i=parent;
            }
            else
                return;
           }
    }

    void deletion(int pos){

        if(size==0)
            return;

        arr[pos]=arr[size];   //changing places of removing ele with the last element in array
        size--;

        while(pos<size){
            int lc=2*pos;      //left child
            int rc=2*pos+1;    //right child

            if(lc<size && arr[pos]<arr[lc]){
                swap(arr[pos],arr[lc]);
                pos=lc;
            }
            else if(rc<size && arr[pos]<arr[rc]){
                swap(arr[pos],arr[rc]);
                pos=rc;
            }
            else
                return;
        }
    }



        void print(){
            for(int i=1;i<=size;i++)
                cout<<arr[i]<<" ";
        }



};


int main(){

    heap a;
    a.insert(50);
    a.insert(30);
    a.insert(40);
    a.insert(10);
    a.insert(5);
    a.insert(20);
    a.insert(30);
    a.insert(60);

    a.print();
    cout<<endl;

    a.deletion(2);


    a.print();
    return 0;
}
