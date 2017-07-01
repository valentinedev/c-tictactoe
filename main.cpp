#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int exarray[3][3];

int main()
{
    memset(exarray,0,sizeof(exarray));
    cout<<"["<<exarray[0][0]<<"]"<<"["<<exarray[0][1]<<"]"<<"["<<exarray[0][2]<<"]\n"<<"["<<exarray[1][0]<<"]"<<"["<<exarray[1][1]<<"]"<<"["<<exarray[1][2]<<"]\n"<<"["<<exarray[2][0]<<"]"<<"["<<exarray[2][1]<<"]"<<"["<<exarray[2][2]<<"]\n";
    while(1)
    {
        int winval;
        winval = 0;
        while(1)
            {
            //Player 1
            char pmx[2];
            char pmy[2];
            int pmx2;
            int pmy2;
            cout<<"Player 1 X: ";
            while(1)
            {
                cin>>pmx;
                cin.ignore();
                if (strcmp(pmx,"0")==0||strcmp(pmx,"1")==0||strcmp(pmx,"2")==0)
                {
                    if(strcmp(pmx,"0")==0)
                    {
                        pmx2=0;
                    }
                    else if(strcmp(pmx,"1")==0)
                    {
                        pmx2=1;
                    }
                    else if(strcmp(pmx,"2")==0)
                    {
                        pmx2=2;
                    }
                    break;
                }
                cout<<"Invalid Input\nPlayer 1 X: ";
            }
            cout<<"Player 1 Y: ";
            while(1)
            {
                cin>>pmy;
                cin.ignore();
                if (strcmp(pmy,"0")==0||strcmp(pmy,"1")==0||strcmp(pmy,"2")==0)
                {
                    if(strcmp(pmy,"0")==0)
                    {
                        pmy2=0;
                    }
                    else if(strcmp(pmy,"1")==0)
                    {
                        pmy2=1;
                    }
                    else if(strcmp(pmy,"2")==0)
                    {
                        pmy2=2;
                    }
                    break;
                }
                cout<<"Invalid Input\nPlayer 1 Y: ";
            }
            if (exarray[pmy2][pmx2] == 1 || exarray[pmy2][pmx2] == 2)
            {
                cout<<"Invalid coordinate\n";
                continue;
            }
            cout<<"Placed a 1 at "<<pmx2<<","<<pmy2<<"\n";
            exarray[pmy2][pmx2] = 1;
            cout<<"["<<exarray[0][0]<<"]"<<"["<<exarray[0][1]<<"]"<<"["<<exarray[0][2]<<"]\n"<<"["<<exarray[1][0]<<"]"<<"["<<exarray[1][1]<<"]"<<"["<<exarray[1][2]<<"]\n"<<"["<<exarray[2][0]<<"]"<<"["<<exarray[2][1]<<"]"<<"["<<exarray[2][2]<<"]\n";
            if ((exarray[0][0]==1&&exarray[0][1]==1&&exarray[0][2]==1)||(exarray[1][0]==1&&exarray[1][1]==1&&exarray[1][2]==1)||(exarray[2][0]==1&&exarray[2][1]==1&&exarray[2][2]==1)||(exarray[0][0]==1&&exarray[1][0]==1&&exarray[2][0]==1)||(exarray[0][1]==1&&exarray[1][1]==1&&exarray[2][1]==1)||(exarray[0][2]==1&&exarray[1][2]==1&&exarray[2][2]==1)||(exarray[0][0]==1&&exarray[1][1]==1&&exarray[2][2]==1)||(exarray[2][0]==1&&exarray[1][1]==1&&exarray[0][2]==1))
            {
                winval = 1;
                cout<<"Player 1 Wins\n";
                break;
            }
            break;
        }
        if (exarray[0][0]!=0&&exarray[0][1]!=0&&exarray[0][2]!=0&&exarray[1][0]!=0&&exarray[1][1]!=0&&exarray[1][2]!=0&&exarray[2][0]!=0&&exarray[2][1]!=0&&exarray[2][2]!=0&&winval==0)
        {
            cout<<"It's a Tie\n";
            break;
        }
        if (winval==1)
        {
            break;
        }
        //Player 1
        while(1)
        {
            //Player 2
            char p2mx[2];
            char p2my[2];
            int p2mx2;
            int p2my2;
            cout<<"Player 2 X: ";
            while(1)
            {
                cin>>p2mx;
                cin.ignore();
                if (strcmp(p2mx,"0")==0||strcmp(p2mx,"1")==0||strcmp(p2mx,"2")==0)
                {
                    if(strcmp(p2mx,"0")==0)
                    {
                        p2mx2=0;
                    }
                    else if(strcmp(p2mx,"1")==0)
                    {
                        p2mx2=1;
                    }
                    else if(strcmp(p2mx,"2")==0)
                    {
                        p2mx2=2;
                    }
                    break;
                }
                cout<<"Invalid Input\nPlayer 2 X: ";
            }
            cout<<"Player 2 Y: ";
            while(1)
            {
                cin>>p2my;
                cin.ignore();
                if (strcmp(p2my,"0")==0||strcmp(p2my,"1")==0||strcmp(p2my,"2")==0)
                {
                    if(strcmp(p2my,"0")==0)
                    {
                        p2my2=0;
                    }
                    else if(strcmp(p2my,"1")==0)
                    {
                        p2my2=1;
                    }
                    else if(strcmp(p2my,"2")==0)
                    {
                             if (winval==1)
        {
            break;
        }   p2my2=2;
                    }
                    break;
                }
                cout<<"Invalid Input\nPlayer 2 Y: ";
            }
            if (exarray[p2my2][p2mx2] == 1 || exarray[p2my2][p2mx2] == 2)
            {
                cout<<"Invalid coordinate\n";
                continue;
            }
            cout<<"Placed a 2 at "<<p2mx2<<","<<p2my2<<"\n";
            exarray[p2my2][p2mx2] = 2;
            cout<<"["<<exarray[0][0]<<"]"<<"["<<exarray[0][1]<<"]"<<"["<<exarray[0][2]<<"]\n"<<"["<<exarray[1][0]<<"]"<<"["<<exarray[1][1]<<"]"<<"["<<exarray[1][2]<<"]\n"<<"["<<exarray[2][0]<<"]"<<"["<<exarray[2][1]<<"]"<<"["<<exarray[2][2]<<"]\n";
            if ((exarray[0][0]==2&&exarray[0][1]==2&&exarray[0][2]==2)||(exarray[1][0]==2&&exarray[1][1]==2&&exarray[1][2]==2)||(exarray[2][0]==2&&exarray[2][1]==2&&exarray[2][2]==2)||(exarray[0][0]==2&&exarray[1][0]==2&&exarray[2][0]==2)||(exarray[0][1]==2&&exarray[1][1]==2&&exarray[2][1]==2)||(exarray[0][2]==2&&exarray[1][2]==2&&exarray[2][2]==2)||(exarray[0][0]==2&&exarray[1][1]==2&&exarray[2][2]==2)||(exarray[2][0]==2&&exarray[1][1]==2&&exarray[0][2]==2))
            {
                winval = 2;
                cout<<"Player 2 Wins\n";
                break;
            }
            break;
        }
        if (exarray[0][0]!=0&&exarray[0][1]!=0&&exarray[0][2]!=0&&exarray[1][0]!=0&&exarray[1][1]!=0&&exarray[1][2]!=0&&exarray[2][0]!=0&&exarray[2][1]!=0&&exarray[2][2]!=0&&winval==0)
        {
            cout<<"It's a Tie\n";
            break;
        }
        if(winval == 2)
        {
            break;
        }
    }
    cin.get();
}
