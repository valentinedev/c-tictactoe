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
            char pm[2];
            int pmx2;
            int pmy2;
            cout<<"Player 1: ";
            while(1)
            {
                cin>>pm;
                cin.ignore();
                if (strcmp(pm,"1")==0||strcmp(pm,"2")==0||strcmp(pm,"3")==0||strcmp(pm,"4")==0||strcmp(pm,"5")==0||strcmp(pm,"6")==0||strcmp(pm,"7")==0||strcmp(pm,"8")==0||strcmp(pm,"9")==0)
                {
                    if(strcmp(pm,"1")==0)
                    {
                        pmx2=0;
                        pmy2=0;
                    }
                    else if(strcmp(pm,"2")==0)
                    {
                        pmx2=1;
                        pmy2=0;
                    }
                    else if(strcmp(pm,"3")==0)
                    {
                        pmx2=2;
                        pmy2=0;
                    }
                    else if(strcmp(pm,"4")==0)
                    {
                        pmx2=0;
                        pmy2=1;

                    }
                    else if(strcmp(pm,"5")==0)
                    {
                        pmx2=1;
                        pmy2=1;
                    }
                    else if(strcmp(pm,"6")==0)
                    {
                        pmx2=2;
                        pmy2=1;
                    }
                    else if(strcmp(pm,"7")==0)
                    {
                        pmx2=0;
                        pmy2=2;
                    }
                    else if(strcmp(pm,"8")==0)
                    {
                        pmx2=1;
                        pmy2=2;
                    }
                    else if(strcmp(pm,"9")==0)
                    {
                        pmx2=2;
                        pmy2=2;
                    }
                    break;
                }
                cout<<"Invalid Input\nPlayer 1: ";
            }
            if (exarray[pmy2][pmx2] == 1 || exarray[pmy2][pmx2] == 2)
            {
                cout<<"Invalid coordinate\n";
                continue;
            }
            exarray[pmy2][pmx2] = 1;
            system("CLS");
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
            char p2m[2];
            int p2mx2;
            int p2my2;
            cout<<"Player 2: ";
            while(1)
            {
                cin>>p2m;
                cin.ignore();
                if (strcmp(p2m,"1")==0||strcmp(p2m,"2")==0||strcmp(p2m,"3")==0||strcmp(p2m,"4")==0||strcmp(p2m,"5")==0||strcmp(p2m,"6")==0||strcmp(p2m,"7")==0||strcmp(p2m,"8")==0||strcmp(p2m,"9")==0)
                {
                    if(strcmp(p2m,"1")==0)
                    {
                        p2mx2=0;
                        p2my2=0;
                    }
                    else if(strcmp(p2m,"2")==0)
                    {
                        p2mx2=1;
                        p2my2=0;
                    }
                    else if(strcmp(p2m,"3")==0)
                    {
                        p2mx2=2;
                        p2my2=0;
                    }
                    else if(strcmp(p2m,"4")==0)
                    {
                        p2mx2=0;
                        p2my2=1;

                    }
                    else if(strcmp(p2m,"5")==0)
                    {
                        p2mx2=1;
                        p2my2=1;
                    }
                    else if(strcmp(p2m,"6")==0)
                    {
                        p2mx2=2;
                        p2my2=1;
                    }
                    else if(strcmp(p2m,"7")==0)
                    {
                        p2mx2=0;
                        p2my2=2;
                    }
                    else if(strcmp(p2m,"8")==0)
                    {
                        p2mx2=1;
                        p2my2=2;
                    }
                    else if(strcmp(p2m,"9")==0)
                    {
                        p2mx2=2;
                        p2my2=2;
                    }
                    break;
                }
                cout<<"Invalid Input\nPlayer 2: ";
            }
            if (exarray[p2my2][p2mx2] == 1 || exarray[p2my2][p2mx2] == 2)
            {
                cout<<"Invalid coordinate\n";
                continue;
            }
            exarray[p2my2][p2mx2] = 2;
            system("CLS");
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
