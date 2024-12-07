#include<iostream>
#include<string>
using namespace std;
class IO 
{
    private:
       string pass;
       string name;
    void check()
       {
           if(pass=="101"&&name=="Ram1")
           {
               cout<<"login Completed";
           }
           else 
           {
              cout<<"Login Error";
           }
       }
    public:

       void login(string p,string n)
       {
        pass=p;
        name=n;
        check();
       }
       
};
int main()
{
    IO us1;
    string pa;
    string user;
    cout<<"Enter your username:\n";
    cin>>user;
    cout<<"Enter your password:\n";
    cin>>pa;
    us1.login(pa,user);
}