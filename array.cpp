#include <iostream>

using namespace std;

#define MAXSIZE 50

int arr[MAXSIZE];
int size=0;
void insertAtPosition(int pos,int val)
{
    for(int i=size-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    size++;
    cout<<"inserted"<<val<<"at position"<<pos;
}
void deleteFromPosition(int pos)
{
    int del=arr[pos];
    for(int i=pos;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"deleted"<<del<<"at position"<<pos;
}

void display(){
    if(size==0)
        cout<<"list is empty";
    for(int i=0;i<size;i++)
        cout<<arr[i];
}


int main()
{
    cout<<"ARRAY IMPLEMENTATION"<<endl;
    int choice,val,pos;
    while(1)
    {
        cout<<"1:insert at end";
        cout<<"2:insert specific position";
        cout<<"3:delete the number";
        cout<<"4:read the number";
        cout<<"5:exit";
        cout<<"enter choice";
        cin>>choice;
        switch(choice)
        {
            case 1: 
                    if(size==MAXSIZE)
                    {
                        cout<<"fullu paa thambi";
                    }
                    cout<<"enter number";
                    cin>>val;
                    arr[size++]=val;
                    break;
            case 2: 
                    if(size==MAXSIZE)
                    {
                        cout<<"fullu paa thambi";
                    }
                    cin>>pos;
                    if(pos<0 || pos>size)
                    {
                        cout<<"invalid position";
                        break;
                    }
                    cout<<"enter position and number";
                    cin>>val;
                    insertAtPosition(pos,val);
                    break;
            case 3: if(size==0)
                    {
                        cout<<"no elements are there";
                        break;
                    }
                    cout<<"enter position";
                    cin>>pos;
                    if(pos<0 || pos>size)
                    {
                        cout<<"invalid position";
                        break;
                    }
                    deleteFromPosition(pos);
                    break;
            case 4: display();
                    break;
            case 5: exit(0);
            
            default:
                    cout<<"enter valid choice";
                    break;
                    
                    
                    
            
            
        }
    }
    return 0;
}
