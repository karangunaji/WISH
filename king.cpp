# include<iostream>
# include<windows.h>

using namespace std;

int main(){
cout<<"ENTER BIRTHADAY PERSONE NAME :"<<endl;
string a ;
getline(cin,a );
cout<<"HOW MANY TIME YOU WANT TO BIRTHADAY WISH:"<<endl;
int n ;
cin>>n;
for(int i=0; i<=n ; i++)
{
    cout<<"\n\n\n\n\n";
    system("color 04");
    cout<<"\t\t\t\t\t\t\t\t   HAPPY BIRTHADAY TO "<<a<<endl;
    cout<<"\t\t\t\t\t\t\t\t   HAPPY          ...       HAPPY\n";
    cout<<"\t\t\t\t\t\t\t\t   BIRTHADAY      |||       BIRTHADAY\n";
    cout<<"\t\t\t\t\t\t\t\t   DAY         {======}     DAY\n";    
    cout<<"\t\t\t\t\t\t\t\t             {==========}   \n";
    cout<<"\t\t\t\t\t\t\t\t          {================}\n";

   
   
};
cout<<endl;
 Sleep(1000);




    return 0;
}