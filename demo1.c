/**
#include<stdio.h>
int main()
{
   printf("\n1.Nitin R. Vhankhande");
   printf("\n2.Addres:\"Archae Home\",G/6\'flat no-12,pone\'");
   printf("\n3.Ssc marks:76%%\a\a\a\a\a\a\a\a\tDiploma Marks:90%%");
   printf("\n4.Height:5.8ft\tWeight:63Kg");
   printf("\n5.Gender:Male");
   printf("\n6.I am student of Archer Infotech \r6.am i");
   printf("\n7.My Favourite player in cricket is rohit sharma\f as well as virat kohli");
   return 0;
*/
/*
//-------------------------------------------------------------------------------------------------------
#include<stdio.h>
int main ()
{
   int i;

   for(i=1;i<=10;i++)
   {
       if(i%2!=0)
       {
           printf("\n%d",i);
       }

   }
   printf("\n End the progarm");
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------
//wap to initialize and display the program
/*
#include<stdio.h>
int main()
{
    int x=360;
    char ch='a';
    float ft=34.33625;
    double db=68.369878;
    printf("\n The value of integer is : %d",x);
    printf("\n int. valu is : %d\tchar. value is : %c\tfloting value is : %0.3f\tdouble value is : %lf",x,ch,ft,db);

return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------------------
//wap to initialize multiple decleration program
/*
#include<stdio.h>
int main()
{
    int a=10,b=20,c=30;
    char ch='A',ch1='B',ch2='C';
    float ft=34.136,ft1=33.678,ft2=64.3331;
    double db=13.11134,db1=63.11441,db2=43.617321;
    printf("\n value of intiger 'a' is : %d\tvalue of intiger 'b' is : %d\t value of intiger 'c' is : %d\n\n\nvalue of first char is : %c\tvalue of second char is : %c\tvalue of third char is : %c\n\n\nvalue of firt floting number is : %f\tvalue of second floting number is :  %f\t value of third floting number is : %f\n\n\nvalue of fitst double is : %lf\tvalue of second double is : %lf\tvalue of third double is : %lf",a,b,c,ch,ch1,ch2,ft,ft1,ft2,db,db1,db2);
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------
//wap to input and display the value
/*
#include<stdio.h>
int main()
{
    int x;
    char ch;
    float ft;
    double db;
    printf("\n Enter the value of charater,intiger,,floating,double\n");
    scanf("%c %d %f %lf",&ch,&x,&ft,&db);
    printf("\n intiger value is : %d",x);
    printf("\nch=%c\tft=%.2f\tdb=%0.3lf",ch,ft,db);
   return 0;
}
/*
//-------------------------------------------------------------------------------------------------
/*
//wap to interchange/exchange/swap the enterd two value thrugh keboard

#include<stdio.h>
int main()
{
    int x,y,tmp;
    printf("\n Enter the Number :- ");
    scanf("%d %d",&x,&y);
    printf("\n value before exchange is x= %d\ty=%d",x,y);
    tmp=x;
    x=y;
    y=tmp;
    printf("\n Value after the exchange is x=%d\ty=%d",x,y);
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------
/**
//wap to excahnge charchter eter two value through keyboard
#include<stdio.h>
int main()
{
    char A,B,C,D;

    printf("\n enter the three different char : ");
    scanf("%c %c %C",&A,&B,&C);

    printf("\n before exchange   %c \t  %c \t %c",A,B,C);

//    D=A;
//    A=B;
//    B=C;
//    C=D;
//    D=C;
//    C=B;
//    B=A;
//    A=D;
      C=A;
      A=B;
      B=C;

    printf("\n after  exchange %c \t  %c \t %c",A,B,C);
    return 0;

}
*/
//--------------------------------------------------------------------------------------------------
//wap to exchange three character valu
/**
#include<stdio.h>
int main()
{
    char A,B,C,TMP;

    printf("\n enter the three different char : ");
    scanf("%c %c %c",&A,&B,&C);

    printf("\n before exchange ch : %c \t ch1 : %c, ch2 : \tch3 : %c",A,B,C);

    TMP=A;
    A=B;
    B=C;
    C=TMP;

    printf("\n after  exchange ch : %c \t ch1 : %c, ch2 : \tch3 : %c",A,B,C);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------
/**

//wap to display the values of x and y using type cast operator

#include<stdio.h>
int main()
{
    int x=15,y=6;
    float z;
    // first type

    z=-x; //-15
    printf("\n z : %f",z);

    //second type

    z=x/y; // 2 (to get perfect value of z we have to convert /change at lest one type of variable
    printf("\n z : %f",z);

    //third type

    z=(float)x/y;// 2.5
    printf("\n z : %.1f",z);

   // fourth type

    z= x/(float)y;// 2.50
    printf("\n z : %.2f",z);

    //fifth type

    z=(float)x/(float)y;// 2.500
    printf("\n z : %.3f",z);
    return 0;


}
*/
//---------------------------------------------------------------------------------------------------

//wap to display the values using (- ,-- ,++) operator
/**
#include<stdio.h>
int main()
{
    int x=15,y=37,z;

    z=-x;
    printf("\n z : %d",z); //z=-15

    z=x++ + --y;
    printf("\n x = %d and y = %d or z %d",x,y,z);

    z=--x + ++y;
    printf("\n x = %d and y = %d or z %d",x,y,z);

    z=x++ + y++;
    printf("\n x = %d and y = %d or z %d",x,y,z);

    z=x-- + y++;
    printf("\n x = %d and y = %d or z %d",x,y,z);

    return 0;

}
*/
//------------------------------------------------------------------------------------------------------------------------------
/**
//wap to check size of int,char,float,double
#include<stdio.h>
int main()
{


    printf("\n size of intiger is : %d",sizeof(int));
    printf("\n size of character is : %d",sizeof(char));
    printf("\n size of float is : %d",sizeof(float));
    printf("\n size of double is : %d",sizeof(double));
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------
//Wap to perform i/o of all basic data types.
/**
#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;

    printf("\n enter character operent : ");
    scanf("%c",&b);

    printf("\n enter the intiger value : ");
    scanf("%d",&a);

    printf("\n enter floating value : ");
    scanf("%f",&c);

    printf("\n enter double value : ");
    scanf("%lf",&d);

    printf("\n1) Intiger value : %d\n2) character value : %c\n3) floating value : %f\n4) double value : %lf ",a,b,c,d);

    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------
/**
//wap Enter two number and find there sum
#include<stdio.h>
int main()
{
    int a,b,sum;

    printf("\n enter any two number : ");
    scanf("%d%d",&a,&b);

    sum=a+b;

    printf("The sum is %d",sum);

    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------
//wap to enter two number and perform all arithmatic operation
/**
#include<stdio.h>
int main()
{
    int a,b,add,min,mul,div,mod;


    printf("\n Enter two Nmber :");
    scanf("%d%d",&a,&b);

    add=a+b;
    min=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;

    printf("1) add= %d\n2) min= %d\n3) mul= %d\n4) div= %d\n5) mod= %d",add,min,mul,div,mod);
    return 0;


}
*/
//-----------------------------------------------------------------------------------------------
//Write a C program to enter length and breadth of a rectangle and find its perimeter.
/**
#include<stdio.h>
int main()
{
    int l,b,per;

    printf("\n Enter the value for Length and breadth of rectangle : ");
    scanf("%d %d",&l,&b);

    per=(l+b)*2;

    printf("\n Perimiter Of Rectangle : %d",per);
    return 0;
}
*/
//--------------------------------------------------------------------------------------
//Write a C program to enter length and breadth of a rectangle and find its area
/**
#include<stdio.h>
int main()
{
    int l,b,area;

    printf("\n Enter the value of length and breadth of rectangle : ");
    scanf("%d %d",&l,&b);

    area = l*b;

    printf("\n Area of rectangle : %d",area);

    return 0;

}
*/
//-----------------------------------------------------------------------------------------
//.Write a C program to enter radius of a circle and find its diameter, circumference
/**
#include<stdio.h>

int main()

{
    float r,dia,cir,area;

    printf("\n Enter the value of Radius : ");
    scanf("%f",&r);

    dia=r*r;
    cir=2*3.1415*r;
    area=3.1415*r*r;

    printf("Diameter = %f\nCircumferenc = %f\nArea = %f",dia,cir,area);

    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------
//Write a C program to enter length in centimeter and convert it into meter and kilomete.
/**
#include<stdio.h>
int main()

{
 float l,m,km;

    printf("\n Enter the Value of Length");
    scanf("%f",&l);

    m=l/100;
    km=l/10000;

    printf("\n meter : %fm\tkilometer : %fkm",m,km);

    return 0;
}
*/
//----------------------------------------------------------------------------------------------
//Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
/**
#include<stdio.h>
int main()

{
    float cel,far;

    printf("Enter the value of celcius :");
    scanf("%f",&cel);

    far=cel*9/5+32;
    printf("\n %0.1f celcius into fahrenheit is %0.2f",cel,far);
    return 0;
}
*/
//-------------------------------------------------------------------------------
//Write a C program to enter temperature in Fahrenheit and convert to Celsius
/**
#include<stdio.h>
int main()

{
    float cel,far;

    printf("Enter the value of fahrenheit :");
    scanf("%f",&far);

   cel=(far-32)*5/9;

    printf("\n %0.1f fahrenheit into celcius  is %0.2f",far,cel);
    return 0;

}
*/
//-----------------------------------------------------------------------------------
//Write a C program to convert days into years, weeks and days.
/**
#include<stdio.h>
int main()
{
    int days,week,year;

    printf("\n Enter the days :");
    scanf("%d",&days);

    year=days/365;
    days=days%365;
    week=days/7;
    days=days%7;

    printf("%dyear%dweek%ddays",year,week,days);

    return 0;

}
*/
//---------------------------------------------------------------------------------
//Write a C program to find power of any number x ^ y
/**
#include<stdio.h>
int main()
{
    int x,ans;

    printf("enter any number : ");
    scanf("%d",&x);

    ans=x*x;

    printf("\n power of %d is : %d",x,ans);
    return 0;
}
*/
//----------------------------------------------------------------------------------
//Write a C program to enter two angles of a triangle and find the third angle.
/**
#include<stdio.h>
int main()
{
    int ang1,ang2,ans;

    printf("Enter the two angle of trangle : ");
    scanf("%d%d",&ang1,&ang2);

    ans=180-(ang1+ang2);
    printf("\n Third angle : %d degree",ans);

    return 0;
}
*/
//-------------------------------------------------------------------------
//Write a C program to enter base and height of a triangle and find its area.
/**
#include<stdio.h>
int main()
{
    int b,h,a;

    printf("\n enter the base and height of the trangle : ");
    scanf("%d%d",&b,&h);

    a=0.5*b*h;

    printf("Area = %d",a);
    return 0;

}
*/
//-------------------------------------------------------------------------------
//Write a C program to calculate area of an equilateral triangle.
/**
#include<stdio.h>
int main()
{
    float area,side;

    printf("\n Enter the value of side : ");
    scanf("%f",&side);

    area=0.4330125*side*side; //(root 3/4)==0.4330125

    printf("\n Area of equilateral Trangle : %f",area);

    return 0;

}
*/
//-------------------------------------------------------------------------------------
//Write a C program to enter marks of five subjects and calculate total, average andpercentage
/**
#include<stdio.h>
int main()
{
    float marathi,sanskrit,english,maths,science,total,avr,per;

    printf("enter the mark of marathi,sanskrit,english,maths,science : ");
    scanf("%f%f%f%f%f",&marathi,&sanskrit,&english,&maths,&science);

    total=marathi+sanskrit+english+maths+science;

    avr=total/5;
    per=(total/500)*100;

    printf("\n Total = %0.2f\n Avarage = %0.2f\nPercentage = %0.2f%%",total,avr,per);

    return 0;

}
*/
//--------------------------------------------------------------------------------------------------------
/**
#include<stdio.h>
int main()
{
    float p,t,r,si;

    printf("\n Enter the value for p,t,r");
    scanf("%f%f%f",&p,&t,&r);

    si=p*r*t/100;

    printf("simple Interest :%f",si);

    return 0;


}
*/
//-------------------------------------------------------------------------
// wap to input the year consider wheter is leap year or not
/**
#include<stdio.h>
int main()
{
    int a,b;

    printf("enter any year : ");
    scanf("%d",&a);


    (a%4==0)?printf("\n%d is Leap Year",a):printf("\n%d is NOT Leap year",a);
    return 0;
}
*/
//------------------------------------------------------------------------------------------------
// wap to enter second to keyboard and conver ionto hourse,minute,and second.
/**
#include<stdio.h>
int main()
{
    int sec,min,hrs;

    printf("\n enter the seconds : ");
    scanf("%d",&sec);

    hrs=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;

    printf("\n %dhours%dminute%dsecond",hrs,min,sec);

    return 0;

}
*/
//----------------------------------------------------------------------------------
/**
///wap to add all digits from enterd no through keyboard

#include<stdio.h>
int main()
{
    int no,ans,rem;

    printf("enterd any three digit no : ");
    scanf("%d",no);



    return 0;
}
*/
/**--------------------------------------PAPER QUTION AND ANSWER(20-6-24)-----------------------------------------------------------------------------*/
//if the mark robet in three subjects are 78,45,62 Respectively (each out of 100),write a program to calculate his total marks and persentage marks
/**
#include<stdio.h>
int main()
{
    float sub1=78,sub2=45,sub3=62,total=0,per;

    total=sub1+sub2+sub3;
    per=(total/300)*100;//for int use formula per=(total/3);

    printf("\n Total Marks : %0.2f \t percentage : %0.2f%%",total,per);
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------
/**Enter any amount (int value) through keyboard and purchase platinum gold and silver sequentially and possible
max in grams (int value) and finally the quentityu of each in grams and cash in hand. (rates/gram-8k,4kand700Rs)*/
/**
#include<stdio.h>
int main()
{
   int no,p,g,s;
   printf("Enter any Number : ");
   scanf("%d",&no);

   p=no/8000;
   no=no%8000;

   g=no/4000;
   no=no%4000;

   s=no/700;
   no=no%700;

   printf("%dgram Platinum%d gram Gold%dgram silver%drs in hand",p,g,s,no);
   return 0;

}
*/
//=-------------------------------------------------=-0----------=----0=-----=0=-0=-0-0=-0=-0-=0=-=--=0-=0=-=--==-0
//wap to enter number through the keyboard,display the reverse number and also disply the addition of all digit of
//the reversed number input :486 Output : Reverse no : 684 Addition of reverse no is : 18.
/**
#include<stdio.h>
int main()
{

    int no,ans=0,add=0,rem=0,rem1=0,rev;

    printf(" Enter any three number");
    scanf("%d",&no);

    rem=no%10;
    ans=(ans*10)+rem;
    no=no/10;

    rem=no%10;
    ans=(ans*10)+rem;
    no=no/10;

    rem=no%10;
    ans=(ans*10)+rem;
    no=no/10;

    rev=ans;   //store ans. in rev.

    rem1=ans%10;
    add=add+rem1;
    ans=ans/10;

    rem1=ans%10;
    add=add+rem1;
    ans=ans/10;

    rem1=ans%10;
    add=add+rem1;
    ans=ans/10;

    printf("reverse no : %d\naddition : %d",rev,add);

    return 0;

}
*/
//--------------------------------------------------------------------------------------
/**
//WAp to find max from 3 number (nesting condition operator)
#include<stdio.h>
int main()

{

    int a,b,c;

    printf("\n enter any three number : ");
    scanf("%d %d %d",&a,&b,&c);

    (a>=b)?(a>=c)?printf("%d is max",a):printf("%d is max",c):(b>=c)?printf("%d is max",b):printf("%d is max",c);

    return 0;

}
*/
//--------------------------------------------------------------------------------------------------------------------------------
//wap to display entered number is divisible by 5 or not if yes then add 100 in it otherwise multiply by 10
/**
#include<stdio.h>
int main()
{
    int no;
    printf("enter any number : ");
    scanf("%d",&no);

    (no%5==0)?printf("answer : %d",(no+100)):printf("answer : %d",(no*10));
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------
/**
//wap om bitwse operater
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("\n enter number for a and b : ");
    scanf("%d%d",&a,&b);

    c=a*b;

    printf("\n%d",a&b);
    printf("\n%d",a|b);
    printf("\n%d",a^b);
    printf("\n%d",a>>b);
    printf("\n%d",a<<b);


    return 0;

}
*/
//----------------------------------------------------------------------------------------------------------------------
//wap to find even or odd by using only if()
/**
#include<stdio.h>
int main()
{

    int x;

    printf(" enter any number : ");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("%d is even number",x);

    }
    if(x%2!=0)
    {
        printf("%d is odd number",x);

    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------
//wap to find max between two number
/**
#include<stdio.h>
int main()
{

    int a,b;

    printf(" enter any 2 number : ");
    scanf("%d%d",&a,&b);

    if(a>b)

    {
        printf("%d is max number",a);
    }
    if(a<b)
    {
        printf("%d is max number",b);
    }
    return 0;

}
*/
//----------------------------------------------------------------------------------------------------------------
//wap to find max number between three number nesting if
/**
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter any 3 number : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {

        if(a>c)
        {
            printf("A=%d is max number",a);
        }


    }
    if(b>a)
    {
        if(b>c)
        {
            printf("B=%d is max number",b);
        }
    }

    if(c>a)
    {
        if(c>b)
        {
            printf("C=%d is max number",c);
        }
    }


    return 0;


}
*/
//-------------------------------------------------------------------------------------------------------------------
//wap enter price of three itoms and find total bill discount and payable amount (if total> 500 dicount 7% otherwise 3%)
/**
#include<stdio.h>
int main()
{

    float a,b,c,total=0,dis=0,pay=0;

    printf("Enter the price of three itom : ");
    scanf("%f %f %f",&a,&b,&c);

    total=a+b+c;

    if(total>500)
    {
        dis=total*0.07;
        pay=total-dis;

        printf("payble amount = %0.2f\nTotal bill = %0.2f\nDiscount(7%%) = %0.2f",pay,total,dis);

    }
    if(total<500)
    {
        dis=total*0.03;
        pay=total-dis;

        printf("payble amount = %0.2f\nTotal bill = %0.2f\nDiscount(3%%) = %0.2f",pay,total,dis);

    }
    return 0;
                                     /**OR*/
/**
     #include<stdio.h>
int main()
{

    float am1,am2,am3,tot=0,dis=0;

    printf("Enter the price of three itom : ");
    scanf("%f %f %f",&am1,&am2,&am3);

    tot=am1+am2+am3;

    if(tot>=500)
        dis=tot*0.07;
    if(tot<500)
        dis=tot*0.07;
    printf("\n Total amount = %0.2f",tot);
    printf("\n Discount = %0.2f",dis);
    printf("\n payble amount = %0.2f",(tot-dis));

   return 0;

}
*/
//----------------------------------------------------------------------------------------------------------------------
//WAP to enter price of 4 items and calculate total ,discount and payble amount using if() else
//( discount is 14% if amount exceeds more than 500 otherwise 3% )
/**
#include<stdio.h>
 int main()
 {
     float a,b,c,d,tot,dis,pay;

     printf("enter price of 4 itoms : ");
     scanf("%f%f%f%f",&a,&b,&c,&d);

     tot=a+b+c+d;
     printf("\n total price = %0.3f",tot);
     if(tot>500)
     {
         dis=tot*0.17;
     }
     else
     {
         dis=tot*0.3;
     }


     printf("\n Discount = %0.2f",dis);
     printf("\n Payble amount is %0.2f",(tot-dis));

     return 0;

 }
*/
//-----------------------------------------------------------------------------------------------------------------------------------
// WAP to find max between 3 nos using only if().
/**
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("\n Enter any value of a b c : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("\n A is max ");
    }
    if(b>c && b>a)
    {
        printf("\n B is max ");
    }
    if(c>b && c>a)
    {
        printf("\n C is max ");
    }

    return 0;

}
*/
//-----------------------------------***************************************************---------------------------------------
//Wap to find max between 3 nos using if() else
/**
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("\n Enter any three value : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("%d is MAX Number",a);
    }
    if(b>c && b>a)
    {
        printf("%d is MAX Number",b);
    }
    else
    {
        printf("%d is MAX Number",c);
    }
    return 0;// eg a=30,b=20,c=10 ==>output 30 is max10 is max (so we use nested if()else.
}
*/
//-----------------------------------------------------------------------------------------------
//WAP to Enter any no and display the entered  no is even or odd ( using if() else)
/**
int main()
{
    int no;

    printf("\n Enter any no : ");
    scanf("%d",&no);

    if(no%2==0)
    {
        printf("\n %d is Even ",no);
    }
    else
    {
        printf("\n %d is Odd",no);
    }

    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------
//WAp to enter any no check if it even or odd .if no is even then add 100 in it otherwise multiplyd by 10
/**
#include<stdio.h>
int main()
{
    int no,ans;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    if(no%2==0)
    {
        ans=no+100;
        printf("%d is even Number ",no);
    }
    else
    {
        ans=no*10;
        printf("%d is odd Number ",no);
    }
    printf("\nAnswer = %d",ans);

    return 0;
}
*/
//---------------------------------------------------------------------------------------------
// WAP to enter any no check no is divisible  by 3 or 5 or divisible by both or not by both
/**
#include<stdio.h>
int main()
{
    int no;

    printf(" Enter any number : ");
    scanf("%d",&no);

    if(no%3==0)
    {
        if(no%5==0)
        {
            printf("\n %d is divisible by both 3 and 5",no);
        }
        else
        {
            printf("\n %d is divisible by only 3",no);

        }
    }
    else
    {
        if(no%5==0)
        {
           printf("\n %d is divisible by only 5",no);
        }
        else
        {
            printf("\n %d is not divisible by 3 and 5",no);
        }
    }
    return 0;

}
*/
//-------------------------------------------------------*****************************************************************
// WAp to find max between 3 nos
/**
#include<stdio.h>
int main()

{
    int a,b,c;

    printf("\n Enter any number : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("\n %d is max Number",a);
        }

    }
    else
    {
        if(b>c)
        {
            printf("\n %d is max Number",b);
        }
        else
        {
            printf("\n %d is max number",c);
        }
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------------
//WAp to enter any character through keyboard check whether it is uppercase,lowcase ,digit or special symbol
/**
#include<stdio.h>
int main()
{
    char ch;

    printf("\n Enter any character : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("\n %c is Uppercase character ",ch);
    }
    else
    {
        if(ch>='a' && ch<='z')
        {
            printf("\n %c is lower case character",ch);
        }
        else
        {
            if(ch>='0' && ch<='9')
            {
                printf("\n %c is Digit",ch);
            }
            else
            {
                printf("\n %c is speical chararcter ",ch);
            }

        }
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------
// Write a menu driven program to check
/**
#include<stdio.h>
int main()
{
    int no,opt;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    printf("\n********SELECT YOUR OPITION*********");
    printf("\n 1) -,+,zero;\t2) even or odd");
    printf("\n Enter your opition : ");
    scanf("%d",&opt);

    if(opt==1)
    {
        if(no==0)
        {
            printf("\n %d is zero number",no);
        }
        else
        {
            if(no>0)
            {
                printf("\n %d is positive number",no);
            }
            else
            {
                printf("\n %d is Negative Number",no);
            }
        }
    }
    else
    {
        if(opt==2)
        {
           if(no%2==0)
           {
               printf("\n %d is Even Number",no);
           }
           else
           {
               printf("\n %d is Odd Number",no);
           }
        }
        else
        {
            printf("\n Incorrect option !!!!");
        }

    }
    printf("\n\n\nThank You.......visit again\n\n");
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------
//enter any number  and find it is +ve, -ve or zero by using else if ladder
/**
#include<stdio.h>
int main ()

{
    int no;

    printf("\n enter any number : ");
    scanf("%d",&no);

    if(no>0)
    {
        printf("\n number is +ve");
    }
    else if(no<0)
    {
        printf("\n number is +ve");
    }
    else
    {
        printf("\n number is zero");
    }
    return 0;

 */
//---------------------------------------------------------------------------------------------
//Enter the salry of person and display his poisition in company
/**salaary range
           | 1)  <2000 = worker           |
           | 2)  2000-5000 = trainee      |
           | 3)  5000-9000 = junior       |
           | 4)  9000-11000 = SENIOR      |
           | 5)  11000-15000 = director   |
           | 6)  >15000    =  CEO         |
           |_____________________________*/
/**
#include<stdio.h>
int main()
{
    int salary;

    printf("\n enter the salary of a person : ");
    scanf("%d",&salary);

    if(salary<2000)
    {
        printf("\n position : worker");
    }
    else if(salary<5000)
    {
      printf("\n position : trainee");
    }
    else if(salary<9000)
    {
      printf("\n position : junior");
    }
    else if(salary<11000)
    {
      printf("\n position : senior");
    }
    else if(salary<15000)
    {
      printf("\n position : Director");
    }
    else
    {
      printf("\n position : CEO");
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------
// Enter the co-ordinates of point in the 2D system, and find its exact location
 /**




                                 y axis

               II qd                ^               I qd
               (-,+)                |
                                    |           (+,+)
                                    |
                                    |
                                    |
-x axis                             |
     <------------------------------|---------------------------------> x axis
                                    |(0,0)
                                    |
                                    |
                                    |
                                    |
                                    |
            (-,-)                   |               (+,-)
            III qd                  |               IV qd
                                    |
                                    V
                                -y axis
------------                                                      */
 /**
#include<stdio.h>
int main()
{
    int x,y;

    printf("\n enter the x and y co- ordinates : ");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0)
    {
         printf("\n first qudrant");
    }
    else if(x<0 && y>0)
    {
         printf("\n second qudrant");
    }
    else if(x<0 && y<0)
    {
         printf("\n third qudrant ");
    }
    else if(x>0 && y<0)

    {
         printf("\n fourth qudrant");
    }
    else if(x>0 || ((x<0 && y==0))
    {
         printf("\n on X axis");
    }
    else if(( x==0 && y>0) || y<0)
    {
         printf("\n on Y axis");
    }
    else
    {
         printf("\n on origin ");
    }

    return 0;

}
*/
/********************************************************************************************************************************************/
                                                   /****LOOPS******/
/********************************************************************************************************************************************/
/**
#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}
*/
//---------------------------------
/**
#include<stdio.h>
int main()
{
    printf("\nHello World");
    printf("\nHello World");
    printf("\nHello World");
    printf("\nHello World");
    printf("\nHello World");

    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------------------
 /**                                            //FOR LOOP
#include<stdio.h>
int main()
{
    int i;

    for(i=0;i<5;i++)
    {
         printf("\nHello World");
    }

    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------
/**
#include<stdio.h>
int main()
{
    int i;

    for(i=0;i<10;i+=2)//i=i+2
    {
         printf("\nHello World");
    }

    return 0;
}
*/
//------------------------------------------
/**
#include<stdio.h>
int main()
{
    int i;

    for(i=50;i<75;i+=5)//i=i+2
    {
         printf("\n Hello World");
    }

    return 0;
}
*/
//---------------------------------
/**
#include<stdio.h>
int main()
{
    int i;

    for(i=70;i>=50;i-=5)
    {
        printf("\nHello World");
    }

    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------------------------
////WAP to display even nos from 1 to 100
/**
#include<stdio.h>
int main()
{
    int i;
    printf("\n even no from 1 to 100 are : ");
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("\t %d",i);
        }
    }
    return 0;

}
*/
//-------------------------------------------------------------------------------------------------------------------------------
//WAP to display even  and odd nos from 1 to 100
/**
#include<stdio.h>
int main()
{
    int i;
    printf("\n even no from 1 to 100 are : ");

    for(i=1;i<=100;i++)
    {
        if(i%2==0)
           {
               printf("\t %d",i);
           }
    }

    printf("\n odd no from 1 to 100 are : ");
    for(i=1;i<=100;i++)
    {
        if(i%2==1)//i%2!=0
            printf("\t%d",i);
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------
//Another way to display even and odd nos
/**
#include<stdio.h>
int main()
{
    int i;
    printf("\n even no from 1 to 100 are : ");
    for(i=2;i<=100;i+=2)
    {
        printf("\t%d",i);
    }

    printf("\n odd no from 1 to 100 are : ");
    for(i=1;i<=100;i+=2)
    {
        printf("\t%d",i);
    }


    return 0;


}
*/
//---------------------------------------------------------------------------------------------------------------------------------------
// WAP to display All natural nos from 1 to n ..
/**
#include<stdio.h>
int main()
{
    int i,n;

    printf("\n Enter last number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\t%d",i);
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------------------------------
// WAP to display All natural nos from N to N...
/**
#include<stdio.h>
int main()
{
    int i,start,end;
    printf("\n enter first no : ");
    scanf("%d",&start);
    printf("\n enter last no : ");
    scanf("%d",&end);

    for(i=start;i<=end;i++)
    {
        printf("\t%d",i);
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------
//WAP to display addition of 1 to 10 nos
/**
#include<stdio.h>
int main()
{
    int i,add=0;


    for(i=1;i<=10;i++)
    {
        add=add+i;
        printf("\n Add = %d",add);
    }
     printf("\n The addition of 1 to 10 no is : %d",add);

     return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------------
//wap to add 10 no enter through keyboard
/**
#include<stdio.h>
int main()
{
    int i,no,add=0;

    printf("\n enter 10 number through keboard : ");


    for(i=0;i<10;i++)
    {
        scanf("%d",&no);
        add=add+no;
        printf("%d next number =>  ",no);

    }
    printf("\n Addition of 10Number is %d ",add);
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------------------------------------------
// wap enter any number and add all digit in it (using loop)
/**
#include<stdio.h>
int main()
{
    int no,add,rem;
    printf("Enter any number : ");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;
        add=add+rem;
       // printf("\n  Add is %d ",add);//
        no=no/10;
    }
    printf("\n addition of all digit : %d",add);
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------------------------------
/*************************************anthor way******************/
/**
#include<stdio.h>
int main()
{
    int no,add,rem;
    printf("Enter any number : ");
    scanf("%d",&no);

    for(add=0;no!=0;no=no/10)
    {
        rem=no%10;
        add=add+rem;
    }
     printf("\n addition of all digit : %d",add);
    return 0;

}
*/
//---------------------------------------------------------------------------------------
//wap to enter any number and disply the reverse number
/**
#include<stdio.h>
int main()
{
    int no,rev,rem;
    printf("Enter any number : ");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
     printf("\n reverse number : %d",rev);
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------------
//WAP to enter any no and add even and odd digits  separately
/**
#include<stdio.h>
int main()
{
    int no,even,odd,rem;
    printf("even=%d ",even);
    printf("odd=%d ",odd);
    printf("rem=%d ",rem);


    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(odd=0;no!=0;)//odd=0(because=odd number garbage value is 16 so to clean that we us this odd=0.
    {
        rem=no%10;
        if(rem%2==0)
        {
            even=even+rem;
        }
        else
        {
            odd=odd+rem;
        }
        no=no/10;
    }
    printf("\n Even NO Addition : %d\n Odd Number Addition :  %d",even,odd);

    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------------------
//WAP to enter any no and count the digits in it.
/**
#include<stdio.h>
int main()
{
    int no,rem,count;
    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(count=0;no!=0;)
    {
        rem=no%10;
        count++;
        no=no/10;
    }

    printf("\n Digit Count : %d",count);

    return 0;


}

*/
//---------------------------------------------------------anthor way-----------------------------------------------------
/**
#include<stdio.h>
int main()
{
    int no,rem,count;
    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(count=0;no!=0;count++,no=no/10);


    printf("\n Digit Count : %d",count);

    return 0;


}
*/
//--------------------------------------------------------------------------------------------------------------
//WAP to enter any no and count even digit and odd digit from it .
/**
#include<stdio.h>
int main()
{
    int no,rem,evencount=0,oddcount=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;
        if(rem%2==0)
        {
            evencount++;
            printf("\n even %d",evencount);
        }
        else
        {
            oddcount++;
           printf("\nodd : %d",oddcount);

        }
        no=no/10;
    }
    printf("\n Even NO count : %d\n Odd NO count :  %d",evencount,oddcount);

    return 0;
}

*/
//-----------------------------------------------------------------------------------------------------------------------------
//Wa.p enter any any number an find max digit from it eg 38579=>max digit =9
/**
#include<stdio.h>
int main()
{
    int no,rem,max=0;
     printf("\n Enter any number : ");
     scanf("%d",&no);

     for(;no!=0;)
     {
         rem=no%10;
         if(rem>max)
         {
            max=rem;

         }
         no=no/10;
     }
     printf("\n max number : %d",max);
     return 0;
}

*/
//-------------------------------------------------------------------------------------------------
//wap to find min number in enterd number
/**
#include<stdio.h>
int main()
{
    int no,rem,min=9;
    printf("\n Enter any number : ");
     scanf("%d",&no);

     for(;no!=0;)
     {
         rem=no%10;
         if(rem<min)
         {
             min=rem;
         }
         no=no/10;
     }
     printf("\n Minimum Number is : %d",min);
     return 0;
}

*/
//-----------------------------------------------------------------------------------------------------------------------
//wap to display evenmax ,oddmax, evenmin, oddmin from enterd number.
/**
#include<stdio.h>
int main()
{
    int no,rem,com,evenmax=0,oddmax=0,evenmin=8,oddmin;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    for(;no!=0;no=no/10)
    {

        rem=no%10;
        if(rem%2==0)
        {
           if(rem>=evenmax)
           {
              evenmax=rem;

              if(rem<evenmin)
               {
                 evenmin=rem;
               }
           }
           else  if(rem<evenmin)
               {
                 evenmin=rem;
               }
        }
        else
        {
            if(rem>=oddmax)
            {
                oddmax=rem;
                if(rem<oddmin)
                {
                    oddmin=rem;
                }
            }
            else if(rem<oddmin)
                {
                    oddmin=rem;
                }
        }

    }
    printf("\n Even maximum number : %d\n Odd maximum Number : %d\nEven Minimum Number : %d\nOdd Minimum Number : %d",evenmax,oddmax,evenmin,oddmin);

    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------
//wap enter any no and add alternate digit from it
/**
#include<stdio.h>
int main()
{
    int no=0,rem,add=0,s1=0,s2=0,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(i=0;no!=0;i++)
    {
        rem=no%10;
        if(i%2==0)
        {
            s1=s1+rem;
        }
        else
        {
            s2=s2+rem;
        }
        no=no/10;
    }
    printf("\n s1= %d\n s2=%d",s1,s2);

    return 0;
}
--------------------------------------------Another Way------------------------------------------------------*/
//bu using flg
/**
#include<stdio.h>
int main()
{
    int no,rem,s1=0,s2=0,flg=0;
     printf("\n Enter any number : ");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;

        if(flg==0)
        {
            s1=s1+rem;
            flg=1;
        }
        else
        {
            s2=s2+rem;
            flg=0;
        }
        no=no/10;

    }
    printf("\n s1= %d\n s2=%d",s1,s2);

    return 0;



}
*/
//------------------------------------------------------------------------------------------------------------------
//WAP to find the max no from entered no  ex- 182943     max no - 984321
/**
#include<stdio.h>
int main()
{
    int no,rem,d=9,max=0,tmp;
    printf("\n Enter any number : ");
    scanf("%d",&no);

    tmp=no;
    for(d=9;d>=0;d--)
    {
        no=tmp;
        for(;no!=0;)
        {

            rem=no%10;
            if(rem==d)
            {
               max=(max*10)+rem;
            }
            no=no/10;
        }

    }
    printf("\n max no = %d",max);
    return 0;
}

*/
//--------------------------------------------------------------------------------------------------------------------------------
////WAP to find evenmax and oddmax from entered no
/**
#include<stdio.h>
int main()
{
    int no,d,evenmax=0,oddmax=0,rem,tem;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tem=no;


    for(d=9;d>=0;d--)
    {
        no=tem;
        while(no!=0)
        {
            rem=no%10;
            if(rem==d)
            {
                if(rem%2==0)
                {
                    evenmax=(evenmax*10)+rem;
                }
                else
                {
                    oddmax=(oddmax*10)+rem;
                }
            }

            no=no/10;
        }
    }
    printf("\n Maximum even no = %d\n Maximum Odd no = %d",evenmax,oddmax);
    return 0;


}
*/
















//-------------------------------------------------------------------------------------------------------
//wap count the digits in entered number and add every digit^count.//eg 123= 1^3+2^3+3^3=36
/**
#include<stdio.h>
int main()
{
    int no,d,rem,ans=1,i,tmp,sum=0;

    printf("\n ENter any no : ");
    scanf("%d",&no);
    tmp=no;

    for(d=0;no!=0;d++,no=no/10);
    no=tmp;

    for(;no!=0;no=no/10)
    {
        rem=no%10;

        i=0;
        ans=1;
        while(i<d)
        {
            ans=ans*rem;
            i++;

        }

        sum=sum+ans;

    }

    printf("Addition : %d",sum);
    return 0;

}
*/
//-------------------------------------------------------------------------------------------------------------------------
// wap to enter any number and chech whether it is armstrong number or not
/**
#include<stdio.h>
int main()
{
    int no,rem,d,i,sum=0,ans,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    for(d=0;no!=0;d++,no=no/10);

    no=tmp;

    for(;no!=0;no=no/10)
    {
        rem=no%10;
        i=0;
        ans=1;
        while(i<d)
        {
            ans=ans*rem;
            i++;
        }
        sum=sum+ans;
    }
    no=tmp;
    if(sum==no)
    {
        printf("\n %d is armstrong Number ",no);

    }
    else
    {
        printf("\n %d is not armstrong number",no);
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------
//wap to enter any number and check wheter it is palendrom or not eg 121 no==reverce no
/**
#include<stdio.h>
int main()
{

    int no,rem,rev=0,tmp;

    printf("\n enter any number : ");
    scanf("%d",&no);
    tmp=no;
    for(;no!=0;no=no/10)
    {
        rem=no%10;
        rev=(rev*10)+rem;

    }
    no=tmp;
    if(no==rev)
    {
        printf("\n %d number is palindrome number",no);

    }
    else
    {
        printf("\n %d number is NOT palindrome number",no);
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------
//wap enter no and find find the repitation onof digit 7
/**
#include<stdio.h>
int main()
{

    int no,rem,count=0;

    printf("\n Enter  number : ");
    scanf("%d",&no);


    for(;no!=0;no=no/10)
    {
        rem=no%10;
        if(rem==7)
        {
            count++;
        }

    }
    printf("\n in number 2712777 %d times 7 repeting",count);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------
//wap to find repetation of each digit from enterd number for eg 188311 (1repeted 3 times)
/**
#include<stdio.h>
int main()
{
    int no,rem,d,count,tmp;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tmp=no;

    for(d=0;d<10;d++)
    {
        no=tmp;

        count=0;
      while(no!=0)
      {
          rem=no%10;
          if(rem==d)
          {
             count++;//printf("\n count = %d",count);
          }
            no=no/10;
      }
      if(count>1)
          {
             printf("\n %d is %d time repeting",d,count);
          }

    }
    return 0;

}
*/
//-------------------------------------------------------------------------------------------
//wap to find missing digit of enterd number eg 3951=> 0,2,4,6,7,8
/**
#include<stdio.h>
int main()
{
    int no,rem,d,tem,flg;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tem=no;
    printf("\n Missing Digit : ");

    for(d=0;d<10;d++)
    {
        flg=0;
        no=tem;
        while(no!=0)
        {
            rem=no%10;
            if(rem==d)
            {
                flg=1;
                break;
            }

            no=no/10;

        }
        if(flg==0)
        {
            printf(" %d",d);
        }


    }
    return 0;

}
*/
//------------------------------------------------------------------------------------------------------
////WAP to display entered no is prime or not
/**
#include<stdio.h>
int main()
{
    int no,d=2,flg=0;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    while(d<=(no/2))
    {
        if(no%d==0)
        {
            flg=1;
            break;
        }
        d++;
    }
    if(flg==0 && no!=1)
    {
        printf("\n %d is prime number",no);
    }
    else
    {
        printf("\n %d is Not prime Number",no);
    }

    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------
/**
#include<stdio.h>
int main()

{
    int no,rem,tem,d,i,ans=1,nno;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tem=no;

    for(d=0;no!=0;d++,no=no/10);



    for(i=1;i<d;i++)
    {
        ans=(ans*10);
    }

    no=tem;
    rem=no%10;
    nno=rem*ans; // printf("Number=%d",nno);

    no=no%ans;
    no=no/10;
    no=no*10;
    tem=tem/ans;

    nno=(nno+no)+tem;

    printf("\New Number : %d",nno);


    return 0;

}

*/

/**--------------------------------------------------------------------------------------------------------------------------------
                                              PATERN
---------------------------------------------------------------------------------------------------------------------------------*/

                       /**   wap to display patern
                   *****
                   *****
                   *****
                   *****
                   *****
                   */
/**
 #include<stdio.h>
 int main()
 {
     int i;
     for(i=0;i<5;i++)
     {
         printf("*****");
         printf("\n");
     }
     return 0;
 }
 */
 //-------------anthoer way----------
/**
 #include<stdio.h>
 int main()
 {
     int i,j;

     for(i=0;i<5;i++)
     {
         for(j=0;j<5;j++)
         {
             printf("*");
         }
         printf("\n");
     }
     return 0;
 }
*/
//---------------------------------------------------------------------------------------------------------------------------
/**
*****
*   *
*   *
*   *
*****         */

/*

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0 || i==4)
            {
                printf("*");
            }
            else if(j==0 || j==4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------------
/**
*
**
***
****
*****
                                           */

/**)
#include<stdio.h>
int main()

{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}

*/
//--------------------------------------------------------------------------------------------------------------------
/**

*****
****
***
**
*                */

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<(5-i))
            {
                printf("*");
            }

        }
        printf("\n");
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------

/**

*****
 ****
  ***
   **
    *
                           */

 /**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else if(j>=i)//only using else program is run.
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------

/**

    *
   **
  ***
 ****
*****                    */

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<(4-i))//0<=5
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------------------
/**

    *
   * *
  * * *
 * * * *
* * * * *

                          */


 /**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------
/**

* * * * *
 * * * *
  * * *
   * *
    *
                  */

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------
/** odd number

    *
   ***
  *****
 *******
*********

                    */

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<(5+i);j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-----------------------anthoer way--------------------------
/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        for(j=0;j<4;j++)
        {
            if(j<i)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------------
/**

***********
 *********
  *******
   *****
    ***
     *
                           */

/**

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<6;i++)
    {
        for(j=0;j<(11-i);j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------------
/**

     *
    ***
   *****
  *******
 *********
***********

*/
/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<6;i++)
    {
        for(j=0;j<(6+i);j++)
        {
            if(j<(5-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------
/**

     *
    **
   ***
  ****
 *****
******
 *****
  ****
   ***
    **
     *

*/

/**

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(j<5-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            if(j<=i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-----------------anthoer way--------------
/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<11;i++)
    {

        for(j=0;j<6;j++)
        {

            if(i<6)
            {
                if(j<(5-i))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {

                if(6+j<=i)
                {

                    printf(" ");
                }
                else
                {

                    printf("*");
                }
            }

        }
        printf("\n");


    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------------
/**

*
**
***
****
*****
******
*****
****
***
**
*

*/

/**
 #include<stdio.h>
 int main()
 {
     int i,j;

     for(i=0;i<11;i++)
     {
         for(j=0;j<6;j++)
         {
             if(i<6)
             {
                 if(j<=i)
                 {
                     printf("*");
                 }

             }
             else
             {
                 if(j<(6+5)-i)
                 {
                     printf("*");
                 }
             }
         }
         printf("\n");
     }
     return 0;
 }

 */
 //---------------------------------------------------------------------------------------------------------------------






