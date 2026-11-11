 #include <iostream>
 using namespace std;

//  int main() {
//    int x;
//    cout<<"Enter a value for x: ";
//    cin>>x;
//    cout<<"the value of x is: "<<x<<endl;
//    return 0;
//  }

//function are the set of code which are used to perform a specific task.
//function are used to modularize the code and make it reusable and make it readable and maintainable.
//void => it does not return any value
//return
//parameterised
//non-parameterised

// void printname(string name){
//   cout<<"hey "<<name<<endl;
// }

// int main(){
//   string name;
//   cout<<"Enter your name: ";
//   cin>>name;
//   printname(name);
//   return 0;
// }

int maxx(int a,int b){
if(a>=b){
  return a;
}
else{
  return b;
}

}


int main(){
  int a,b;
  cout<<"Enter the value of a and b: ";
  cin>>a>>b;
  int maximum = maxx(a,b);
  cout<<"The maximum value is: "<<maximum<<endl;
}