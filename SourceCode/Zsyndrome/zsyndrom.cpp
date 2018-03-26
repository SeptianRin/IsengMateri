#include <iostream>
#include <stdio.h>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{

    cout << "Z syndrom detector for hamming code (7,4) with all parity on position 5,6,7 of the encoded data" <<endl;
    cout << "======================================================== " << endl;
    cout << "== Z | 000  | 001 | 010 | 011 | 100 | 101 | 110 | 111 == " << endl;
    cout << "== U | none | R7  | R6  | R4  | R5  | R1  | R2  | R3  == " << endl;
    cout << "======================================================== " << endl;
    cout << "U = Unflip bit in this position " << endl;
    cout << "Insert your Hamming code(7,4) [separate every bit with space] : " <<endl;
    int P[3][7]={
                {1,1,1,0,1,0,0},
                {0,1,1,1,0,1,0},
                {1,0,1,1,0,0,1}
                };
    int itiga [7];
    int jawab [3] = {0,0,0};
    int sementara= 0;
    int hasil = 0 ;

    for(int i =0 ; i<7;i++)
    {

    cin >>itiga[i];

    }
    cout << endl;
    cout << "Z Syndrom code : ";
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<7;j++)
        {
        //cout << P[i][j] <<" ";
        sementara = P[i][j] * itiga[j];
        jawab[i]+=sementara;
        }
        //jawab[j] =

        //if((i+1)%7==0)
        //{
            jawab[i] = jawab[i]%2;
            sementara = 0;
            hasil= hasil + (jawab[i]*pow(2,i));
        //}
        cout << jawab[i] << " ";
    }
    cout << endl;
    if(hasil==0)
    {
        cout << "tidak ada sindrom";
    }
    if(hasil==1)
    {
        cout << "Parity posisi ke 7 tertukar kemungkinan ada 2 error";
        if (itiga[6]==1)
        {
            itiga[6]=0;
        }
        else
        {
            itiga[6]=1;
        }
    }
    if(hasil==2)
    {
        cout << "Parity posisi ke 6 tertukar kemungkinan ada 2 error";
        if (itiga[5]==1)
        {
            itiga[5]=0;
        }
        else
        {
            itiga[5]=1;
        }
    }
    if(hasil==3)
    {
        cout << "Data posisi ke 4 terbalik";
        if (itiga[3]==1)
        {
            itiga[3]=0;
        }
        else
        {
            itiga[3]=1;
        }
    }
    if(hasil==4)
    {
        cout << "Parity posisi ke 5 tertukar kemungkinan ada 2 error";
        if (itiga[4]==1)
        {
            itiga[4]=0;
        }
        else
        {
            itiga[4]=1;
        }
    }
    if(hasil==5)
    {
        cout << "Data posisi ke 3 terbalik";
        if (itiga[2]==1)
        {
            itiga[2]=0;
        }
        else
        {
            itiga[2]=1;
        }
    }
    if(hasil==6)
    {
        cout << "Data posisi ke 2 terbalik";
        if (itiga[1]==1)
        {
            itiga[1]=0;
        }
        else
        {
            itiga[1]=1;
        }
    }
    if(hasil==7)
    {
        cout << "Data posisi ke 1 terbalik";
        if (itiga[0]==1)
        {
            itiga[0]=0;
        }
        else
        {
            itiga[0]=1;
        }
    }

    cout << endl << endl << "Data s hat (setelah diproses decoder) : ";
    for (int i=0;i<7;i++)
    {
        cout << itiga[i] << " ";
    }
    cout << endl<<endl;
    Sleep(10000);
}
