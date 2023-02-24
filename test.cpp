#include<iostream>
#include<string>
using namespace std;
const int MAX_ITEMS=10;
struct update
{
int number;
string name;
};
int main()
{
  cout<<"Welcome to our grocery shop"<<endl;
  update inventory[MAX_ITEMS]={{"apple",30},{"milk",10},{"bread"=20},{"butter"=15},{"eggs"=17}};
  int enter
  {
    do{
      cout<<"Current list"<<endl;
      for(int i=0;i<MAX_ITEMS;i++)
      {
        cout<<inventory[i].name<<";"<<inventory[i].number<<endl;
      }
      cout<<"\n is any iten running low in stock?"<<endl;
      for(int i=0;i<MAX_ITEMS;i++)
      {
        if(inventory[i].number<10)
        {
          cout<<inventory[i].name<<endl;
        }
      }
      cout<<"\nEnter the item u wanna update or enter 0 to exit:-"<<endl;
      int new_item;
      cin>>new_item;
      if(new_quant=="0")
      {
        cout<<"thanks for using the inventory system!!"<<endl;
      }
      else
      {
        cout<<"PLEASE ENTER THE QUANTITY TO BE ADDED:-"<<endl;
        int number;
        cin>>number;
        for(int i=0;i<=MAX_ITEMS-1;i++)
        {
          if(inventory[i].name==new_item)
          (
           inventory[i].quant=inventory[i].number+quant;
           break;
          )
        }
      }


    }
    while(true);
  
  }
  return 0;
}
