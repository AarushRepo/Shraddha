#include<iostream>
#include<stdlib.h>
using namespace std;
#define VALUE 10
//this is new comment here
int main(int argc,char **argv,char **envp)
{
 cout << "commnad line argument count :" << " "<< argc <<endl;
 cout << "commnad line argument:" <<endl;
 for (int i=0; i<argc; i++)
 {
  cout << "argv[i]:" << argv[i] <<" "<< (unsigned int)argv[i] <<endl;   //unsigned int(%u) address print
 }
 cout<< "hi"<<endl;
 char **x=envp;
 int count=0;
 while(**x != 0)
 {
  cout<<"Learning"<<endl;
  count++;
  *x++;
  cout<<"Linux:" <<endl;
 }
 cout<<"you want to learn:"<<endl;
 cout<< "count: " << count <<endl;
 char *user=getenv("USER");
 if(user)
 {
   cout<< "\nusername" <<user <<endl;
 }
 cout << VALUE <<endl;
 return 0;
}
