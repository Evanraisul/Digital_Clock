
/// Md. Raisul Islam Evan
/// MBSTU, CSE


#include<bits/stdc++.h>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

void Show_Digital_Clock()
{
    initwindow(700,400);

    time_t rawTime;
    struct tm * currentTime;
    char a[100];

    int a1,b1,c1;
    double x1,y1,z1;

    while(1)
    {

        rawTime = time(NULL);
        currentTime = localtime(&rawTime);
        strftime(a,100,"%I:%M:%S",currentTime);

        setcolor(7);
        settextstyle(3,HORIZ_DIR,10);
        outtextxy(120,100,a);
        strftime(a,100,"%p",currentTime);

        settextstyle(3,HORIZ_DIR,2);
        outtextxy(600,8,a);
        strftime(a,100,"%a,%d %b,%Y",currentTime);

        settextstyle(3,HORIZ_DIR,5);
        outtextxy(120,250,a);
        delay(1000);
    }

    closegraph() ;

    getch();
}

void Set_Stopwatch()
{

    int sh, sm, ss;

    int a4,b4,c4;
    double x4,y4,z4;

    cout<<"Enter Stop Hour : ";
    cin>>sh;
    cout<<"Enter Stop Minute : ";
    cin>>sm;
    cout<<"Enter Stop Second : ";
    cin>>ss;
    initwindow(700,400);

    time_t rawTime;
    struct tm * currentTime;

    while(1)
    {
        int i,j,k;

        for(int i=0; i<60; i++)
        {
            for(int j=0; j<60; j++)
            {
                for(int k=0; k<60; k++)
                {
                    int a6,b6,c6;
                    double x6,y6,z6;

                    char h[5];
                    char m[5];
                    char s[5];

                    char t[15] = "";

                    sprintf(h, "%d", i);
                    sprintf(m, "%d", j);
                    sprintf(s, "%d", k);

                    strcat(t, h);
                    strcat(t, " : ");

                    strcat(t, m);
                    strcat(t, " : ");

                    strcat(t, s);

                    setcolor(7);
                    settextstyle(3,HORIZ_DIR,10);

                    cleardevice();
                    outtextxy(150, 150, t);
                    delay(1000);

                    if(sh == i && sm == j && ss == k)
                    {
                        return;
                    }
                }
            }

        }
    }

    getch();

}

void Set_Alarm()
{
    int a7,b7,c7;
    double x7,y7,z7;

    time_t now;
    struct tm *right_now;

    int hour,minutes;

    printf("Enter Hour :");

    scanf("%d",&hour);

    printf("\nEnter Minutes :");

    scanf("%d",&minutes);

    system("cls");

    initwindow(700,400);

    time_t rawTime;
    struct tm * currentTime;
    char a[100];

    while(1)
    {
         int as,bs,cs;
         double xs,ys,zs;

        rawTime = time(NULL);
        currentTime = localtime(&rawTime);
        strftime(a,100,"%I:%M:%S",currentTime);

        setcolor(7);
        settextstyle(3,HORIZ_DIR,10);
        outtextxy(120,100,a);
        strftime(a,100,"%p",currentTime);

        settextstyle(3,HORIZ_DIR,2);
        outtextxy(600,8,a);
        strftime(a,100,"%a,%d %b,%Y",currentTime);

        settextstyle(3,HORIZ_DIR,5);
        outtextxy(120,250,a);
        delay(1000);

        time(&now);
        right_now=localtime(&now);

        if(hour==right_now->tm_hour & minutes==right_now->tm_min)
        {
            break;
        }
    }
    closegraph() ;

    while(1)
    {
         int ad,bd,cd;
         double xd,yd,zd;

        time(&now);

        right_now=localtime(&now);

        if(hour==right_now->tm_hour & minutes==right_now->tm_min)
        {

            cout<<"Alarming..."<<endl<<endl;

            Beep(700,1000);
            Beep(700,1000);
            Beep(700,1000);

            Beep(700,1000);
            Beep(700,1000);
            Beep(700,8000);

            Beep(700,1000);
            Beep(700,3000);
            Beep(700,1000);

            Beep(700,1000);
            Beep(700,1000);
            Beep(700,1000);

            Beep(700,1000);
            Beep(700,8000);
            Beep(700,1000);
            Beep(700,3000);

            cout<<"Complete"<<endl<<endl;

            break;
        }
        else
        {

            free(right_now);

        }
    }
}

int main()
{

lev1:

    int a,b,c;
    double x,y,z;

    cout<<"1 --> Press 1 to see The Digital Clock"<<endl;

    cout<<"2 --> Press 2 to set an Alarm"<<endl;

    cout<<"3 --> Press 3 to set stopwatch"<<endl;

    cout<<"4 --> Exit"<<endl;

    cin>>a;

    if(a==1)
    {

        Show_Digital_Clock();

    }
    else if(a==2)
    {

        Set_Alarm();

    }
    else if(a==3)
    {

        Set_Stopwatch();

    }
    else if(a==4)
    {
        return 0;
    }
    else
    {
        cout<<"Do not match with key "<<endl;

        goto lev1;
    }

    goto lev1;

    return 0;
}
