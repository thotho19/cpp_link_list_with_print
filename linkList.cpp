#include<iostream>
#include<stdlib.h>
#define null 0;
struct node{
    int info;
    struct node *next;
    };
typedef struct node *nodeptr;
using namespace std;

int main(){
    int i;
    nodeptr plist,h,p;
    plist = new node;
    cin>>plist->info;
    plist->next=0;
    h=plist;
    
    for(i=2 ; i<=5 ; i++){
        p =new node;
        cin>>p->info;
        p->next = 0;
        h->next = p;
        h=p;
        }
        
        h = plist; 
        while(h!=0){
            cout<<h->info;
            h = h->next;
            }
    return 0;
    }
