#include <iostream>
using namespace std;

int main() {
  long long n=0;
  cout << "Dame un numero"<<endl;
  cin>>n;

  while(n!=1){
    if(n%2 ==0)
    {
      n=n/2;
      cout<<n<<endl;
      
    }
    else{
      n=(n*3)+1;
      cout<<n<<endl;
    }
  }

}