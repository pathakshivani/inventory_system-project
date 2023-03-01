#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const char alphanum[]="0123456789!@#$%^&*()_asdfghjklqwertyuiopzxcvbnmQWERTYUIOOOPASDFGHJKLZXCVBNM";
int string_length=sizeof(alphanum);
int main()
{

  int length=0;
  cout<<"Enter the password length:-"<<endl;
  cin>>length;
  srand(time(0));
  cout<<"Generated password:-"<<endl;
  for(int i=0;i<length;i++)
  {
    cout<< 12alphanum[rand() % string_length]<<endl;
  }
  
  return 0;  
}
