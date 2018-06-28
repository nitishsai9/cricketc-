#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
    int user,cpu,wicket=0,scoreu=0,scorec=0,ball=1;
    cout<<"Welcome to C++ cricket!\n\n";
    cout<<"by your dev k NITISH SAI"<<endl;
	cout<<"Rules:\nYou are batting and chasing the given target. you can score runs by entering either 0,1,2,3,4,5,6. if your entered value matches with the value of cpu, then you are out! Else you score that many runs. You have 10 wickets in hand and the match will be of 5 overs only.\n\n\n";
	  srand(time(NULL));
    scorec=rand()%60 + 40;
    cout<<"Target:", scorec;
    for(;;)
    {
        cout<<"ball "<<ball<<endl;
        cout<<"Your turn: "<<endl;
        cin>>user;
        if(user>6 || user<0)
        {
            cout<<"invalid input. Try again"<<endl;
            continue;
        }
        srand(time(NULL));
        cpu=rand()%6;
        if(user==6 || user==5)
        {
            cpu=rand()%2 + 5;
        }
        if(user==4 || user==3)
        {
            cpu=rand()%3 + 3;
        }
        if(user==2)
        {
            cpu=rand()%4;
        }
        if(user==cpu)
        {
            cout<<"You are out!"<<endl;
            wicket++;
        }
        if(user!=cpu)
        {
            if(user==4)
                cout<<"Its a four!"<<endl;
            if(user==6)
                cout<<"Its a six!"<<endl;
            scoreu=scoreu+user;
        }
        if(wicket==10)
        {
            cout<<"You are all out!"<<endl;
            cout<<"Your score: "<<scoreu<<wicket;
            if(scoreu<scorec)
                cout<<"you ! lose"<<endl;
            if(scoreu==scorec)
                cout<<"Its a draw!\n";
            break;
        }
        cout<<"User:\n"<<scoreu<<wicket;
        ball++;
        if(ball==31)
        {
            cout<<"Innings over!\nYour score : "<<scoreu<<wicket;
            if(scoreu<scorec)
                cout<<"You lose!\n";
            if(scoreu==scorec)
                cout<<"Its a draw!\n";
            break;
        }
        if(scoreu>scorec)
        {
            cout<<"You win!\n";
            break;
        }
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    }
    return 0;
}
