#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
class lucky_number
{
    int  cor,j,lucky;
    public:
        void create()
        {
    cout<<"******************************************"<<endl;
    cout<<"                                         *"<<endl;
    cout<<"  ENTER YOUR LUCKY NUMBER TO WIN TODAY   *"<<endl;
    cout<<"         WELCOME TO THE  GAME            *"<<endl;
    cout<<"                                         *"<<endl;
    cout<<"******************************************"<<endl;


    srand(time(NULL));
    cor=rand()%10000;
    for(j=0;j<4;j++)
    {
        cout<<"%*%#%ENTER YOUR LUCKY NUMBER%#%*%*%"<<endl;
        cin>>lucky;
        if(lucky==cor)
        {
            cout<<"*******************************"<<endl;
            cout<<"                              +"<<endl;
            cout<<"    CONGRATULATIONS YOU WON   +"<<endl;
            cout<<"                              +"<<endl;
            cout<<"*******************************"<<endl;
        }
        else if(lucky<cor)
        {
             if(j==0)
    {
        cout<<"*******************************"<<endl;
        cout<<"                              %"<<endl;
        cout<<"   TRY A GREATER NUMBER       %"<<endl;
        cout<<"  you have three trials left  %"<<endl;
        cout<<"                              %"<<endl;
        cout<<"*******************************"<<endl;
    }
    else if(j==1)
    {
        cout<<"*******************************"<<endl;
        cout<<"                              #"<<endl;
        cout<<"      TRY A GREATER NUMBER    #"<<endl;
        cout<<"    you have two trial left   #"<<endl;
        cout<<"                              #"<<endl;
        cout<<"******************************#"<<endl;
    }
    else if(j==2)
    {
        cout<<"*******************************"<<endl;
        cout<<"                              *"<<endl;
        cout<<"        TRY A GREATER NUMBER  *"<<endl;
        cout<<"    you have one trial left   *"<<endl;
        cout<<"                              *"<<endl;
        cout<<"*******************************"<<endl;
    }
    else if(j==3)
    {
        cout<<"*******************************"<<endl;
        cout<<"                              *"<<endl;
        cout<<"  YOU LOST THE GAME TRY AGAIN *"<<endl;
        cout<<"                              *"<<endl;
        cout<<"*******************************"<<endl;
        exit(0);
    }
        }
        else if(lucky>cor)
        {

             if(j==0)
    {
        cout<<"*******************************"<<endl;
        cout<<"                              P"<<endl;
        cout<<"    TRY A LESSER NUMBER       p"<<endl;
        cout<<"  you have three trials left  p"<<endl;
        cout<<"                              p"<<endl;
        cout<<"******************************p"<<endl;
    }
    else if(j==1)
    {
        cout<<"*******************************"<<endl;
        cout<<"                               @"<<endl;
        cout<<"    TRY A LESSER NUMBER        @"<<endl;
        cout<<"    you have two trials left   @"<<endl;
        cout<<"                               @"<<endl;
        cout<<"*******************************"<<endl;
    }
    else if(j==2)
    {
        cout<<"*******************************"<<endl;
        cout<<"                              *"<<endl;
        cout<<"     TRY A LESSER NUMBER      *"<<endl;
        cout<<"   you have one trial left    *"<<endl;
        cout<<"                              *"<<endl;
        cout<<"*******************************"<<endl;
    }
    else if(j==3)
    {
        cout<<"********************************* "<<endl;
        cout<<"                                 ^"<<endl;
        cout<<"   YOU LOST THE GAME TRY AGAIN   ^"<<endl;
        cout<<"                                 ^"<<endl;
        cout<<"*********************************^"<<endl;
        exit(0);
    }
        }
    }
        }

};

int main()
{
    lucky_number l;
    l.create();



    return 0;
}
