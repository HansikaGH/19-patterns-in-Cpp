#include<iostream>
using namespace std;

void pat1(int n){
  //half pyramid
  int i,j;
for(i=1;i<=n;i++){
  for(j=1;j<=i;j++){
     cout << "*"; 
  }
   cout << endl;
}
}

void pat2(int n){
  //reverse half pyramid
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
      cout << "*";
    }
    cout << endl ;
  }
}

void pat3(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout << j << " ";
    }
    cout << endl ;
  }
}

void pat4(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout << i << " " ;
    }
    cout << endl ;
  }
}

void pat5(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
      cout << j << " " ;
    }
    cout << endl ;
  }
}

void pat6(int n){
  for(int i=0;i<n;i++){
    //space
    for(int j=0;j<n-i;j++){
      cout << " " ;
    }
    //star
    for(int j=0;j<2*i-1;j++){
      cout << "*";
    }
    //space
    for(int j=0;j<n-i;j++){
      cout << " " ;
    }
    cout << endl ;
  }
}

void pat7(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
      cout << " " ;
    }
    for(int j=1;j<=i;j++){
      cout << "*";
    }
    // for(int j=1;j<=n-i;j++){
    //   cout << " " ;
    // }
    cout << endl ;
  }
}

void pat8(int n){
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;j<i;j++){
      cout << " ";
    }
    for(j=0;j<=2*n-(2*i-1);j++){
      cout << "*";
    }
    for(j=0;j<i;j++){
      cout << " ";
      }

    cout << endl ;
  }
}

void pat9(int n){
for(int i=1;i<=n;i++){
  for(char c='A';c<'A'+i;c++){
    cout << c << " ";
  }
  cout << endl;
}

}

void pat10(int n){
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      cout << "*";
    }
    cout << endl;
  }
}

void pat11(int n){
  int i,j, start = 1;
  for(i=1;i<=n;i++){
    if(i%2==0){
      start = 1;
    }
    else{
      start = 0;
    }
    for(j=0;j<i;j++){
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}

void pat12(int n){
  int i,j,num = 1;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      cout << num << " ";
      num += 1;
    }
    cout << endl;
  }
}

void pat13(int n){
  int i;
  char ch;
  for(i=0;i<n;i++){
    for (ch='A';ch<='A'+(n-i-1);ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
    
  }
}

void pat14(int n){
  int i,j;
  char ch;
  for(i = 0;i < n; i++){
    ch = 'A'+i;
    for(j=0;j<=i;j++){
      cout << ch << " ";
    }
    cout << endl;
  }
}

void pat15(int n){
  int i,j,breakpoint;
  char ch;
  for(i = 1;i<=n;i++){
    for(j=1;j<=n-i-1;j++){
      cout << " ";
    }
    ch = 'A';
    breakpoint = (2*i + 1)/2;
    for(j=1;j<2*i+1;j++){
      cout << ch;
      if(j<=breakpoint){
        ch++;
      }
      else{
        ch--;
      }
       }
      for(j=0;j<n-i-1;j++){
        cout << " ";
      }
   
    cout << endl;
  }
}

void pat16(int n){
  int i,j;
  char ch;
  for(i=0;i<n;i++){
    for(ch=('A'+n-1)-i;ch <= ('A'+n-1);ch++)
  {
    cout << ch << " ";
  }
    cout << endl;
  }
}

void pat17(int n){
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(i==0 || j==0 || i==n-1 || j==n-1){
        cout << "*";
      }
      else{
        cout << " ";
      }
    }
    cout << endl;
  }
}

void pat18(int n){
  //Butterfly pattern
  int i,j,spaces;
  for(i=0;i<=n;i++){
    //print left side stars
    for(j=0;j<=i;j++){
      cout << "*";
    }
    //print spaces.
    spaces = 2*(n-i);
    for(j=0;j<spaces;j++){
      cout << " ";
    }
    //print right side stars.
    for(j=0;j<=i;j++){
      cout << "*";
    }
    cout << endl;
  }
    //printing bottom part
    for(i = n-1;i>=0;i--){
      //print left side spaces
      for(j=0;j<=i;j++){
        cout << "*";
      }
      //print spaces
      spaces = 2*(n-i);
      for(j = 0;j<spaces;j++){
        cout << " ";
      }
      //print right side stars
      for(j=0;j<=i;j++){
        cout << "*";
      }
      cout << endl;
    }
  }

void pat19(int n){
  //Pascal's triangle
  int i,j,spaces,coeff;
  //main logic
  for(i=0;i<n;i++){
    spaces = n - i;
    //for spaces
    for(j=0;j<spaces;j++){
      cout << " ";
    }
  //print values
  for(j=0;j<=i;j++){
    //update coefficient value
    if(j==0)
    {
      coeff = 1;
    }
    else{
      coeff = coeff * (i - j + 1)/j;
      }
      cout << coeff << " ";
    }
    cout << endl;
  }
  }

int main(){
  int n;
  cin >> n;
  pat1(n);
 
}