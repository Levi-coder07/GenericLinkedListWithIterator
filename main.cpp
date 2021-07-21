#include <iostream>
using namespace std;
#include "linkedList.h"
#include "Node.h"
#include "iterator.h"
int main(){
    LinkedList<int> C;
    C.push_front1(3);
    C.push_front1(5);
    C.push_front1(10);
    C.push_front1(10);
    C.push_back(2);
    C.push_back(2);
    cout<<C<<endl;
    C.insert(2,2);
    cout<<C<<endl;
    LinkedList<string> F;
    F.push_front1("gol");
    F.push_front1("hola");
    F.push_front1("hola");
    F.push_front1("hola");
    F.push_back("hola");
    cout<<F<<endl;
    F.insert("lucia",4);
    cout<<F<<endl;
    Iterator1<string> it(F.begin());
    int f;
    for (it=F.begin();it!=F.end();++it){
        it+="2"; 
        cout<<it<<endl;
        f++;
    }
    cout<<f<<endl;
    cout<<F<<endl;
    LinkedList<int> C3 = C;
    cout<<C3<<endl;
    C3.remove(1);
    cout<<C3<<endl;
    LinkedList<int> C1 ; 
    C1 = C;
    cout<<C1<<endl;
    C1.remove(2);
    cout<<C1<<endl;
    LinkedList<int> C4 = std::move(C);
    cout<<C4<<endl;
    C4.remove(3);
    cout<<C4<<endl;
    LinkedList<int> C5 ;
    C5 = std::move(C4);
    cout<<C5<<endl;
    C5.remove(0);
    cout<<C5<<endl;
    cout<<C4<<endl;
    cout<<C;
    return 0;
}
