#include <bits/stdc++.h>
using namespace std;

void color(char c)
{
    if(c=='0'){
        cout<<"  Black"<<endl;
        return;
    }
    if(c=='1'){
        cout<<"  Brown"<<endl;
        return;
    }
    if(c=='2'){
        cout<<"  Red"<<endl;
        return;
    }
    if(c=='3'){
        cout<<"  Orange"<<endl;
        return;
    }
    if(c=='4'){
        cout<<"  Yellow"<<endl;
        return;
    }
    if(c=='5'){
        cout<<"  Green"<<endl;
        return;
    }
    if(c=='6'){
        cout<<"  Blue"<<endl;
        return;
    }
    if(c=='7'){
        cout<<"  Violet"<<endl;
        return;
    }
    if(c=='8'){
        cout<<"  Grey"<<endl;
        return;
    }
    if(c=='9'){
        cout<<"  White"<<endl;
        return;
    }
}
int main(int i=1)
{
    if(!i){
        return 0;
    }

int n;
    cout<<"*********~~~~~From Sanjeev Tiwari~~~~~~********** "<<endl;
    cout<<"*******  This code will give resistor value for given color and vice versa *******"<<endl;

    cout<<"\n\n  If you have color code then\n  to get resistor value Enter '1'\n\n  Else if you want color code value then enter '0'\n  ";
    cin>>n;
    if(n==1){
            int a,b,c;
    cout<<"0 = black"<<endl;
    cout<<"1 = brown"<<endl;
    cout<<"2 = red"<<endl;
    cout<<"3 = orange"<<endl;
    cout<<"4 = yellow"<<endl;
    cout<<"5 = green"<<endl;
    cout<<"6 = blue"<<endl;
    cout<<"7 = violet"<<endl;
    cout<<"8 = grey"<<endl;
    cout<<"9 = white" <<endl<<endl;
    cout<<"  Using the above table"<<endl;
    cout<<"\n  enter the value for 1st band :-";
    cin>>a;
    a=a*10;
    cout<<"\n  enter the value for 2nd band :-";
    cin>>b;
    b=a+b;
    cout<<"\n  enter the value for 3rd band :-";
    cin>>c;
    c=pow(10,c);
    cout<<"\n\n  The resistor value for given combination is '"<<b*c<<"' ohms";
    }
    else if(n==0){
            string x;
        cout<<"\n\n  Enter the value of resistor in 'Ohms':- ";
        cin>>x;cout<<"\n  For the Given value colors of 1st three bands will be:-\n";
        color(x[0]);
        color(x[1]);
        int a=x.size()-2;
        char c='0'+a;
        color(c);
    }
    cout << "\n\n  Enter 0 to exit, 1 to continue ";
    cin >> i;
    cout<<endl;
    main(i);
}
