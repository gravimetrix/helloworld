using namespace std;
#include<iostream>
#include<iomanip>
//changes to master branch
int main()
{
    int n;
    cin>>n;
    int result,i;
    if(n>=2&&n<=20)
        for(i=1;i<11;i++)
        {
            result=n*i;
            cout<<n<<" x "<<i<<" = "<<result<<endl;
        }
        return 0;
}
