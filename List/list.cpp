#include<iostream>
#include<list>

using namespace std;
void printList(list<int> ls){
    cout<<"\n";
    for (auto x: ls){
        cout<<x<<" ";
    }

}
int main()
{
    list<int> first_list;
    for(int i=0;i<10;i++){
        first_list.push_back(i*2);
    }
    printList(first_list);

    cout << "\n\nusing list.front() : " << first_list.front(); 
    cout << "\n\nusing list.back() : " << first_list.back(); 
  
    cout << "\n\nUsing list.pop_front() : "; 
    first_list.pop_front(); 
    printList(first_list); 
  
    cout << "\n\nUsing list.pop_back() : "; 
    first_list.pop_back(); 
    printList(first_list); 


    cout << "\n\nUsing list.reverse() : "; 
    first_list.reverse(); 
    printList(first_list); 
  
    cout << "\n\nUsing list.sort(): "; 
    first_list.sort(); 
    printList(first_list); 
    return 0;
}