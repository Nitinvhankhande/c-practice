//
//Escape sequence character
//#include<stdio.h>
//int main()
//{
//    printf("\n> Student Name :- Nitin R. Vhankhande");
//    printf("\n> Diploma Marks :- 90.28%%\tB.tech Marks :- 60%%");
//    printf("\n> Favourit Subject :- \"Installation\"");
//    printf("\n> Which subject get High marks :- \'Control System\'");
//    printf("\n> dete is facts proprtise mesurments or charachters\r> data");
//    return 0;
//}
//
//-----------------------------------------------------------------------------------------------------------------------------
//
// wap to input and display the values
//#include<stdio.h>
//int main()
//{
//    int a,b;
//    char c,d;
//    float e,f;
//    double g,h;
//    printf("\n Enter the Two Character :- ");
//    scanf("%c %c",&c,&d);
//    printf("\n Enter the Two integer Number :- ");
//    scanf("%d %d",&a,&b);
//    printf("\n Enter the Two floating Value :- ");
//    scanf("%f %f",&e,&f);
//    printf("\n Enter the Two double Value :- ");
//    scanf("%lf %lf",&g,&h);
//    printf("\n> Two integer value is \'%d\'\t\'%d\'\n> Two character value is \'%c\'\t\'%c\'\n>Two Floating value is \'%f\'\t\'%f\'\n> Two Double value is \'%lf\'\t\'%lf\'",a,b,c,d,e,f,g,h);
//    return 0;
//}
//
//-----------------------------------------------------------------------------------------------------------------
//
//14-6-2024 wap to exchage enterd two value from keboard
//#include<stdio.h>
//int main()
//{
//    int a,b,tmp;
//    printf("\n Enter the value of A & B :- ");
//    scanf(" %d %d",&a,&b);
//    printf("\n Value before Exchange a is :- %d\t b is %d",a,b);
//    tmp=a;
//    a=b;
//    b=tmp;
//    printf("\n Value after Exchange a is :- %d\t b is %d",a,b);
//    return 0;
//}
//
//---------------------------------------------------------------------------------------------------------------------------
//15-6-2024 wap to display the values using (- ,-- ,++) operator

//#include<stdio.h>
//int main()
//{
//    int x=10,y=5,z;
//
//    z=--x + y++;
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z=x++ + y++;
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z=--x + --y;
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z= x++ + --y;
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z=--x + y++;
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    return 0;
//
//}
//---------------------------------------------------------------------------------------------------------------
//
////wap to display the values using (- ,-- ,++) operator
//
//#include<stdio.h>
//int main()
//{
//    int x=20,y=7,z;
//
//    z=--x + y++;//x=19 y=8 z=26
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z=x++ + y++;//x=20 y=9 z=27
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z=--x + --y;//x=19 y=8 z=27
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z= x++ + --y;//x=20 y=7 z=26
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z=--x + y++;//x=19 y=8 z=26
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    return 0;
//
//}
//----------------------------------------------------------------------------------------------------
//disply the value using (++ -- -) operrator
//#include<stdio.h>
//int main()
//{
//    int a,b,c;
//
//    printf("\n enter two number : ");
//    scanf("%d %d",&a,&b);
//
//    //condition
//    c= --a + b++;
//    printf("\n1)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c= --a + b--;
//    printf("\n2)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=--a + --b;
//    printf("\n3)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=--a + ++b;
//    printf("\n4)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c= a++ + b++;
//    printf("\n5)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a++ + b--;
//    printf("\n6)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a++ + --b;
//    printf("\n7)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a++ + ++b;
//    printf("\n8)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a-- + b++;
//    printf("\n9)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a-- + b--;
//    printf("\n10) a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a-- + --b;
//    printf("\n11) a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a-- + ++b;
//    printf("\n12) a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=++a + b++;
//    printf("\n13) a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=++a + b--;
//    printf("\n14) a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=++a + --b;
//    printf("\n15) a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=++a + ++b;
//    printf("\n16) a = %d\tb = %d\tc = %d",a,b,c);
//
//
//    return 0;
//}
//---------------------------------------------------------------------------------------------------------------
//wap for type castting

//#include<stdio.h>
//int main()
//{
//    int a,b;
//    double z;
//
//    printf("\n enter two number : ");
//    scanf("%d %d",&a,&b);
//
//    z=a/b;
//    printf("\n z= %0.3lf",z);
//
//    z=(float)a/b;
//    printf("\n z= %0.2lf",z);
//
//    z=a/(float)b;
//    printf("\n z= %0.4lf",z);
//
//    z=(float)a/(float)b;
//    printf("\n z= %.6lf",z);
//
//    return 0;
//}
//-------------------------------------------------------------------------------------------------------------------------
//wap by using sizeof check the size of int char double float
//
//#include<stdio.h>
//int main()
//{
//
//
//    printf("\n %d",sizeof(int));
//    printf("\n %d",sizeof(char));
//    printf("\n %d",sizeof(float));
//    printf("\n %d",sizeof(double));
//    return 0;
//}
//---------------------------------------------------------------------------------------------------------------------------
//wap check the size



// days

//#include<stdio.h>
//int main()
//{
//    int days=0,week,years;
//    printf("\n enter the days : ");
//    scanf("%d",&days);
//
//    week=days/7;
//    years = days/(365);
//
//    printf("\n weeks : %d\nyears : %d",week,days);
//    return 0;
//
//}

//---------------------------------------------------------------------
////power of any number
//
//#include<stdio.h>
//int main()
//{
//    int x,z;
//
//    printf("enter the any number : ");
//    scanf("%d",&x);
//
//    z=x*x;
//
//    printf("z : %d",z);
//    return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//    int days,week,years,months;
//
//    printf("\n enter the days : ");
//    scanf("%d",&days);
//
//    years=days/365;
//    days=days%365;
//    months=days/30;
//    days=days%30;
//    week=days/7;
//    days=days%7;
//
//    printf("\n %dyears%dmonths%dweeks%ddays",years,months,week,days);
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//
//    int hrs,min,sec;
//
//    printf("\n Enter the Second : ");
//    scanf("%d",&sec);
//
//    hrs=sec/3600;
//    sec=sec%3600;
//    min=sec/60;
//    sec=sec%60;
//
//    printf("\n%dhourse%dminute%dsecond",hrs,min,sec);
//    return 0;
//
//}

//---------------------------------------22-6-24------------------------------------------------------------------------------------
//Write a C program to find maximum between two numbers using conditional operator
/**
#include<stdio.h>
int main()
{
   int a,b;

   printf("\n Enter any two number : ");
   scanf("%d%d",&a,&b);

   (a>b)?printf("\n%d is Max",a):printf("\n%d is max",b);

   return 0;


}
*/
//------------------------------------------------------------------------------------------------
//Write a C program to find maximum between three numbers using conditional operator
/**
#include<stdio.h>
int main()
{
    int a,b,c;

   printf("\n Enter any Three Number : ");
    scanf("%d %d %d",&a,&b,&c);

    (a>b)?(a>c)?printf("\n %d is max",a):printf("\n %d is max",c):(b>c)?printf("\n %d is max",b):printf("\n %d is max",c);

    return 0;

}
*/
//---------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is even or odd using conditional operator.
/**
#include<stdio.h>
int main()
{

    int no;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    (no%2==0)?printf("\n %d is Even number",no):printf("\n %d is odd number",no);

    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------
//Write a C program to check whether year is leap year or not using conditional operator
/**
#include<stdio.h>
int main()
{
    int no;

    printf("\n Enter any year : ");
    scanf("%d",&no);

    (no%4==0)?printf("\n %d is leap Year",no):printf("\n %d is Not Leap year",no);

    return 0;

}
*/
//--------------------------------------------------------------------------------------------
//Write a C program to check whether character is an alphabet or not using a conditional operator
/**
#include<stdio.h>
int main()
{

    char ch;

    printf("\n Enter the character : ");
    scanf("%c",&ch);

    (ch>='A' && ch<='Z' || ch>='a' && ch<='z')?printf("\n %c is character",ch):printf("\n %c is not character",ch);

    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------
//Write a C program to find the maximum between two numbers by using if() else.
/**
#include<stdio.h>
int main()
{

    int a,b;

    printf("\n Enter any two number : ");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("\n %d is max Number",a);
    else
        printf("\n %d is max Number",b);

    return 0;

}
*/
//-------------------------------------------------------------------------------------------------------------
//Write a C program to find the maximum between three numbers by using if() else.
/**
#include<stdio.h>
int main()
{

    int a,b,c;

    printf("\n Enter any Three number : ");
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
        printf("\n %d is max Number",c);
    }
    return 0;

}
*/
//--------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is divisible by 5 and 11 or not using if() else
/**
#include<stdio.h>
int main()
{

    int no;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    if(no%5==0)
    {
        printf("\n %d is divisible by 5",no);
    }
    else
    {
        if(no%11==0)
        {
            printf("\n %d is divisible by 11",no);
        }
        else
        {
            printf("\n %d is NOT divisible by 5 and 11",no);
        }
    }

    return 0;

}
*/
//---------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is even or odd. using if()else.
/**
#include<stdio.h>
int main()
{
    int no;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    if(no%2==0)

        printf("\n %d is even Number",no);

    else

        printf("\n %d is odd Number",no);

    return 0;

}

*/
//----------------------------------------------------------------------------------------------------------
//Write a C program to check whether a year is a leap year or not using if()else
/**
#include<stdio.h>
int main()

{

    int no;

    printf("\n Enter any Year : ");
    scanf("%d",&no);

    if(no%4==0)

        printf("\n %d is a leap year",no);

    else

        printf("\n %d is a not leap year,no");

    return 0;

}
*/
//-------------------------------------------------------------------------------------------------
//Write a C program to check whether a character is an alphabet or not.using if()else
/**
#include<stdio.h>
int main()

{
    char ch;

    printf("\n enter any character : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
        printf("%c is character",ch);
    else
        printf("%c is not character",ch);

    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------
//Write a C program to input any alphabet and check whether it is a vowel or consonant using if else.
/**
#include<stdio.h>
int main()
{
    char ch;

    printf("\n Enter any alphabet : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' ||  ch=='u' || ch=='U')  //if(ch== 'a','A','e','E','i','I','o','O','u','U')
        {
             printf("\n %c is vowel",ch);

        }
        else
        printf("\n %c is consonant",ch);
    }
    else
        printf("\n %c is not alphabet",ch);


    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------
//menu driven program
/**
#include<stdio.h>
int main()
{
    int no,opt;
    printf("\n Enter any numbrer : ");
    scanf("%d",&no);
    printf("\n**********SELECT YOUR OPTION*********");
    printf("\n 1) zero positive negative\t2)even/odd\t3) divisible by 5 and 11 or notor both");
    printf("\nselect==> ");
    scanf("%d",&opt);

    if(opt==1)
    {
        if(no==0)
        {
            printf("\n number is zero");
        }
        else
        {
            if(no>0)
            {
                printf("\n %d is positive",no);
            }
            else
            {
                printf("\n %d is negative",no);
            }
        }
    }
    else
    {
        if(opt==2)
        {
           if(no%2==0)
           {
               printf("\n %d is even number",no);
           }
           else
            printf("\n %d is odd number",no);
        }
        else
            {
                if(opt==3)
                {
                    if(no%5==0)
                    {
                        if(no%11==0)
                        {
                            printf("\n %d is divisible by both 5 and 11",no);
                        }
                        else
                        {
                            printf("\n %d is divisible by 5",no);
                        }


                    }
                    else
                    {
                        if(no%11==0)
                        {
                            printf("\n %d is divisible by 11",no);
                        }
                        else
                            printf("\n %d is not divisible by both 5 and 11");
                    }
                }
                else
                printf("option is Incorect!!!!");
            }


    }
    printf("\n Thank you....Visit again");

    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------------

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
    else if((x>0 || x<0) && y==0)
    {
         printf("\n on X axis");
    }
    else if( x==0 && ((y>0 || y<0))
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
//-------------------------------------------------------------------------------------------------------------------------
/**Determine the grade of a student based on their score. If the score is above 90, it's an 'A'. If the score is between 80 and 90,
 check if it's above 85 for an 'A-' or else 'B+'. Below 80, if it's above 70, it's a 'C', otherwise, it's a 'D'.*/
//
// #include<stdio.h>
// int main()
// {
//     float mark;
//
//     printf("\nEnenter the score : ");
//     scanf("%f",&mark);
//
//     if(mark>=90)
//     {
//         printf("\n Grade = A");
//     }
//     else if (mark>=80)
//     {
//         if(mark>=85)
//         {
//             printf("\n Grade = A-");
//         }
//         else
//            printf("\n Grade = B");
//     }
//     else
//     {
//         if(mark>=70)
//            printf("\n Grade = C");
//         else
//            printf("\n Grade = D");
//     }
//
//
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------------
/** A store gives discounts based on membership status and the amount spent. Members spending over Rs.100 get a 10% discount,
 non-members spending over Rs.150 get a 5% discount, and all others get no discount.*/
/**
 #include<stdio.h>
 int main()
 {
     float amt

     return 0;
 }
 */
//--------------------------------------------------------------------------------------------------------------------------
//Write a C program to input any character and check whether it is alphabet, digit or special character.
//
//#include<stdio.h>
//int main()
//{
//    char ch;
//
//    printf("\n Enter any Character : ");
//    scanf("%c",&ch);
//
//    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
//    {
//        printf("\n character is alphabet");
//    }
//    else if(ch>='0' && ch<='9')
//    {
//        printf("\n character is digit");
//    }
//    else
//    {
//        printf("\n character is special character");
//    }
//
//    return 0;
//}
//-------------------------------------------------------------------------------------------------------
//Write a C program to check whether a character is uppercase or lowercase alphabet.
//#include<stdio.h>
//int main()
//{
//    char ch;
//
//    printf("\n Enter any character : ");
//    scanf("%c",&ch);
//
//    if(ch>='a' && ch<='z')
//    {
//        printf("\n character is lower case");
//
//    }
//    else
//    {
//        if(ch>='A' && ch<='Z')
//
//      {
//          printf("\n character is upper case");
//      }
//      else
//        printf("\n incoreect option");
//
//    }
//
//    return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------
//Write a C program to input week number and print week day.
//
//#include<stdio.h>
//int main()
//{
//    int no;
//    printf("\n enter the number between 1 to 7 : ");
//    scanf("%d",&no);
//
//         if(no==1)
//        printf("\n Monday");
//         else if(no==2)
//        printf("\n tuesday");
//         else if(no==3)
//        printf("\n wednesday");
//         else if(no==4)
//        printf("\n thursday");
//         else if(no==5)
//        printf("\n friday");
//         else if(no==6)
//        printf("\n saturday");
//         else if(no==7)
//        printf("\n sunday");
//        else
//        printf("\n incoreect option ");
//
//        return 0;
//}
//---------------------------------------------------------------------------------------------------------
//Write a C program to input month number and print number of days in that month.
//#include<stdio.h>
//int main()
//{
//    int no;
//
//    printf("\n Enter the month number : ");
//    scanf("%d",&no);
//
//    if(no==1 || no==3 || no==5 || no==7 || no==8 || no==10 || no==12)
//    {
//        printf("\n 31 Days");
//
//    }
//    else if(no==4 || no==6 || no==9 || no==11)
//    {
//        printf("\n 30 Days");
//    }
//    else if(no==2)
//    {
//        printf("\n 28 Days but in leap yaer 29 Days");
//    }
//    else
//    {
//        printf("\n incorrect optoin !!!");
//    }
//    return 0;
//}
//--------------------------------------------------------------------------------------------------------------
//Write a C program to count total number of notes in given amount.
//#include<stdio.h>
//int main()
//{
//    int amt=0,a=0,b=0,c=0;
//
//    printf("\n Enter amount : ");
//    scanf("%d",&amt);
//
//    if(amt>=2000)
//    {
//        a=amt/2000;
//        amt=amt%2000;
//    }
//    if(amt>=500)
//    {
//        b=amt/500;
//        amt=amt%500;
//    }
//    if(amt>=100)
//    {
//        c=amt/100;
//        amt=amt%100;
//    }
//
//    printf("\n(2000 notes)=%d\t(500 notes)=%d\t(100 notes)=%d \t%dRs",a,b,c,amt);
//
//    return 0;
//}
//--------------------------------------------------------------------------------------------------------

//#include<stdio.h>
//int main()
//{
//    int amt,a,b,c;
//
//     printf("\n A is : %d",a);
//      printf("\n B is : %d",b);
//       printf("\n C is : %d",c);
//    printf("\n Enter amount : ");
//    scanf("%d",&amt);
//
//    if(amt>=2000)
//    {
//        a=amt/2000;
//        amt=amt%2000;
//        printf("\n Amount is %d",amt);
//    }
//     if(amt>=500)
//     {
//        printf("\n B is : %d",b);
//        b=amt/500;
//        amt=amt%500;
//         printf("\n Amount is %d",amt);
//     }
//     if(amt>=100)
//     {
//         c=amt/100;
//         amt=amt%100;
//        printf("\n Amount is %d",amt);
//     }
//
//
//
//     printf("\n(2000 notes)=%d\t(500 notes)=%d\t(100 notes)=%d \t%dRs",a,b,c,amt);
//
//    return 0;
//
//
//
//}
//---------------------------------------------------------------------------------------------------------------
//Write a C program to input angles of a triangle and check whether triangle is valid or not.
//
//#include<stdio.h>
//int main()
//{
//
//    int ang1,ang2,ang3;
//
//    printf("\n enter three angle of triangle : ");
//    scanf("%d%d%d",&ang1,&ang2,&ang2);
//
//    if(180==ang1+ang2+ang3)
//        printf("\n Triangle is valid");
//    else
//        printf("\n trangle is not valid");
//
//    return 0;
//}
//-----------------------------------------------------------------------------------------------------------
//Write a C program to input all sides of a triangle and check whether triangle is valid or not.
//
//#include<stdio.h>
//int main()
//{
//    int s1,s2,s3;
//
//    printf("\n Enter three side of triangle : ");
//    scanf("%d%d%d",&s1,&s2,&s3);
//
//    if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
//         printf("\n Triangle is valid");
//    else
//        printf("\n trangle is not valid");
//
//    return 0;
//
//}
//------------------------------------------------------------------------------------------------------------
//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

/**In a scalene triangle, all the sides of a triangle are of different length. In an isosceles triangle,
two sides of a triangle are of the same measure. In an equilateral triangle, all the sides of a triangle are of equal length.*/
//
//#include<stdio.h>
//int main()
//{
//  int s1,s2,s3;
//
//  printf("\n enter three side of triangle : ");
//  scanf("%d%d%d",&s1,&s2,&s3);
//
//  if((s1==s2 && s1==s3))
//
//        printf("\n quilateral triangle");//all side are equal
//
//  else if(s1!=s2 && s1!=s3 && s2!=s3)
//
//        printf("\n scalene triangle");//all side are not equal
//
//  else             //else if((s1==s2 || s1==s3 || s2==s3))
//
//        printf("\n isosceles triangle");//two side are equal
//
//  return 0;
//
//}
//---------------------------------------------------------------------------------------------------------------------
//Write a C program to calculate profit or loss.
//
//#include<stdio.h>
//int main()
//{
//
//    float sel,cost;
//
//    printf("\n enter selling price : ");
//    scanf("%f",&sel);
//    printf("\n enter cost price : ");
//    scanf("%f",&cost);
//
//    if(sel==cost)
//
//        printf("\n no profit no loss ");
//
//    else if(sel>cost)
//
//        printf("\n profit");
//
//    else
//
//        printf("\n loss");
//
//    return 0;
//}
//---------------------------------------------------------------------------------------------------------------
/**Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to
following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F  */

//#include<stdio.h>
//int main()
//{
//    float ph,ch,bi,math,com,per;
//
//    printf("\n Enter mark of Five Subject");
//
//    printf("\n Physics : ");
//    scanf("%f",&ph);
//    printf("\n Chemistry : ");
//    scanf("%f",&ch);
//    printf("\n Biology : ");
//    scanf("%f",&bi);
//    printf("\n Mathematics : ");
//    scanf("%f",&math);
//    printf("\n Computer : ");
//    scanf("%f",&com);
//
//
//    per=((ph+ch+bi+math+com)/5);
//
//    if(per>=90)
//    {
//        printf("\n Grade = A");
//    }
//    else if(per>=80)
//    {
//        printf("\n Grade = B");
//    }
//    else if(per>=70)
//    {
//        printf("\n Grade = C");
//    }
//    else if(per>=60)
//    {
//        printf("\n Grade = D");
//    }
//    else if(per>=40)
//    {
//        printf("\n Grade = E");
//    }
//    else
//    {
//        printf("\n Grade = f");
//    }
//
//
//
//    return 0;
//
//}
//------------------------------------------------------------------------------------------------------------------------
/**Write a C program to input basic salary of an employee and calculate its Gross
salary according to the following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%      */

//#include<stdio.h>
//int main()
//{
//    float sal,hra,da;
//
//    printf("\n Enter Your Salary : ");
//    scanf("%f",&sal);
//
//    if(sal<=10000)
//    {
//        hra=sal*0.2;
//        da=sal*0.8;                         //Gross Salary=Basic Salary+Allowances
//        printf("\n1) Gross Salary = %0.2f",(sal+hra+da));
//    }
//    else if(sal<=20000)
//    {
//        hra=sal*0.25;
//        da=sal*0.9;
//        printf("\n2) Gross Salary = %0.2f",(sal+hra+da));
//    }
//    else
//    {
//        hra=sal*0.3;
//        da=sal*0.95;
//        printf("\n3) Gross Salary = %0.2f",(sal+hra+da));
//    }
//
//
//    return 0;
//}
//-------------------------------------------------------------------------------------------------------------------
/**Write a C program to input electricity unit charges and calculate total electricity bill
according to the given condition: For the first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill  */
//
//#include<stdio.h>
//int main()
//{
//
//    float un,tot;
//
//    printf("\n Enter electricity units to be used : ");
//    scanf("%f",&un);
//
//    if(un<50)
//    {
//        tot=(un*0.5)+(un*0.2);    // 0.2=surcharges or 0.5= unit charge
//        printf("\n1) Electricity Bill = %0.2f",tot);
//    }
//    else if(un<150)
//    {
//        tot=(un*0.75)+(un*0.2);
//        printf("\n2) Electricity Bill = %0.2f",tot);
//    }
//
//    else if(un<250)
//    {
//        tot=(un*1.20)+(un*0.2);
//        printf("\n3) Electricity Bill = %0.2f",tot);
//    }
//
//    else if(un>250)
//    {
//        tot=(un*1.50)+(un*0.2);
//        printf("\n4) Electricity Bill = %0.2f",tot);
//    }
//
//
//
//    return 0;
//}
//-------------------------------------------------------------------------------------------------------------------------
/**Write a C program to input electricity unit charges and calculate total electricity bill
according to the given condition:
 For the first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill  */

//
//#include<stdio.h>
//int main()
//{
//    float un,tot,ext;
//    printf("\n Enter electricity units to be used : ");
//    scanf("%f",&un);
//    if(un<=50)
//    {
//        tot=un*0.50;
//    }
//    else if(un<150)
//    {
//        ext=un-50;
//        tot=((ext*0.75)+(50*0.50));
//    }
//    else if(un<250)
//    {
//        ext=un-150;
//    }
//    else if(un>250)
//    {
//       ext=un-250;
//       tot=((ext*1.5)+(100*1.2)+(100*0.75)+(50*0.5));
//    }
//
//    printf("\n Elecricity bill = %0.2f",(tot*0.2));
//
//    return 0;
//
//}

//---------------------------------------------------------------------------------------------------------------------
//wap to enter any number and find repeting number by choising of user
//
//#include<stdio.h>
//int main()
//{
//
//    int no,rem,count=0,a,tmp;
//
//    printf("\n Enter any number : ");
//    scanf("%d",&no);
//    printf("\n choose repetation number : ");
//    scanf("%d",&a);
//    tmp=no;
//
//    for(;no!=0;no=no/10)
//    {
//        rem=no%10;
//        if(rem==a)
//        {
//            count++;
//        }
//
//    }
//    no=tmp;
//    printf("\n %d number  %d times %d repeting",no,count,a);
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------
//wap to find repetation of each digit from enterd number for eg 188311 (1repeted 3 times)
//
//#include<stdio.h>
//int main()
//{
//    int no,d,rem,tem,count;
//
//    printf("\n Enter any number : ");
//    scanf("%d",&no);
//
//    tem=no;
//    for(d=0;d<10;d++)
//    {
//        no=tem;
//        count=0;
//        while(no!=0)
//        {
//
//            rem=no%10;
//            if(rem==d)
//            {
//                count++;
//            }
//            no=no/10;
//
//
//        }
//        if(count>1)
//         printf("\n %d is repeting %d times",d,count);
//    }
//    return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------------
                                       /**         for loop
//---------------------------------------------------------------------------------------------------------------------------*/

//Write a C program to print all natural numbers from 1 to n.
//
//#include<stdio.h>
//int main()
//{
//    int no,i;
//
//    printf("\n Enter any Number : ");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i++)
//    {
//        printf("\t%d",i);
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------
//Write a C program to print all natural numbers in reverse (from n to 1)

//#include<stdio.h>
//int main()
//{
//    int no;
//
//    printf("\n Enter  any number : ");
//    scanf("%d",&no);
//
//
//
//    for(;no>=1;no--)
//    {
//        printf("%d\t",no);
//    }
//
//    return 0;
//
//}
//----------anthoer way---------
//
//#include<stdio.h>
//int main()
//{
//    int no,i;
//
//    printf("\n Enter  any number : ");
//    scanf("%d",&no);
//
//    for(i=no;i>=1;i--)
//    {
//        printf("%d\t",i);
//    }
//
//    return 0;
//}

//------------------------------------------------------------------------------------------------------------
//3) Write a C program to print all alphabets from a to z.
//
//#include<stdio.h>
//int main()
//{
//    char ch;
//
//    for(ch='a';ch<='z';ch++)
//    {
//        printf("%c\t",ch);
//    }
//    return 0;
//}

//---------------------------------------------------------------------------------------------------
//4) Write a C program to print all even numbers between 1 to 100.

//#include<stdio.h>
//int main()
//{
//    int i;
//    printf("Even no are :   ");
//    for(i=1;i<=100;i++)
//    {
//        if(i%2==0)
//        {
//            printf("%d\t",i);
//        }
//    }
//    return 0;
//}
//-----------------------Anthoer---------------------------------------------------------

//#include<stdio.h>
//int main()
//{
//    int i;
//    printf("Even no are :     ");
//    for(i=2;i<=100;i+=2)
//    {
//        printf("%d\t  ",i);
//    }
//    return 0;
//}
//--------------------------------------------------------------------------
//Write a C program to print all odd numbers between 1 to 100.

//#include<stdio.h>
//int main()
//{
//    int i;
//    printf("odd no are :      ");
//    for(i=1;i<=100;i+=2)
//    {
//        printf("%d\t  ",i);
//    }
//    return 0;
//}
//-------------anothe way-------------------------------------------------------------
//Write a C program to print all odd numbers between 1 to 100.
//
//#include<stdio.h>
//int main()
//{
//    int i;
//    printf("odd no are :      ");
//    for(i=1;i<=100;i++)
//    if(i%2!=0)
//    {
//        printf("%d\t  ",i);
//    }
//    return 0;
//}
//---------------------------------------------------------------------------------------------------------------
//Write a C program to print all odd numbers between 1 to 100.
//
//#include<stdio.h>
//int main()
//{
//    int i;
//    printf("odd no are :      ");
//    for(i=1;i<=100;i+=2)
//    {
//        printf("%d\t  ",i);
//    }
//    return 0;
//}
//--------------------------------------------------------------------------------------------------------------

// Write a C program to find the sum of all natural numbers between 1 to n.
//
//#include<stdio.h>
//int main()
//{
//    int no,i,ans=0;
//
//    printf("\n Enter last digit Number : ");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i++)
//    {
//        ans=ans+i;
//
//    }
//    printf("The sum is : %d",ans);
//    return 0;
//}
//------------------------------------------------------------------------------------------------------------------
//Write a C program to find the sum of all even numbers between 1 to n


//#include<stdio.h>
//int main()
//{
//    int no,i,ans=0;
//
//    printf("\n Enter last digit Number : ");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i++)
//    {
//        if(i%2==0)
//        {
//            ans=ans+i;
//        }
//
//    }
//
//    printf("Even no sum is : %d",ans);
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------
//Write a C program to find sum of all odd numbers between 1 to n.

//#include<stdio.h>
//int main()
//{
//    int no,i,ans=0;
//
//    printf("\n Enter last digit Number : ");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i++)
//    {
//        if(i%2!=0)
//        {
//            ans=ans+i;
//        }
//
//    }
//
//    printf("odd no sum is : %d",ans);
//    return 0;
//}
//--------------------------------------------------------------------------------------------------------
//Write a C program to print multiplication table of any number.
//
//#include<stdio.h>
//int main()
//{
//
//    int i,no;
//
//    printf("\n Enter any number : ");
//    scanf("%d",&no);
//
//    for(i=1;i<=10;i++)
//    {
//        printf("\n%d",i*no);
//    }
//    return 0;
//}

//-----------------------------------------------------------------------------------
//Write a C program to count number of digits in a number.
//
// #include<stdio.h>
// int main()
// {
//     int no,rem,count=0;
//
//     printf("\n Enter any number : ");
//     scanf("%d",&no);
//
//     for(;no!=0;no=no/10)
//     {
//        if(rem=no%10)
//        {
//            count++;
//        }
//
//     }
//     printf("\n Digit count : %d",count);
//     return 0;
//
// }
//
//--------------------------------------------------------------------------------------------------------------
//Wril a C program to find first and last digit of a number.
/**
 #include<stdio.h>
 int main()
 {
     int no,rem,count=0,tem,d,i,ans=1;

     printf("\n Enter any two digit number : ");
     scanf("%d",&no);
     tem=no;
     for(;no!=0;no=no/10)
     {
        if(rem=no%10)
        {
           count++;
        }

     }

     d=count-1;
     for(i=1;i<=d;i++)
     {
         if(i!=0)
         {
             ans=ans*10;

         }
     }
     no=tem;
    rem=no/ans;
    printf("\nfirst Number %d",rem);
    no=tem;
    rem=no%10;
    printf("\nlast Number %d",rem);


     return 0;

 }
 */
 //--------------------------anthoer way----------------------------------------------------------------------------------------------------
 /**
 #include<stdio.h>
int main()
{
    int no,i,rem,rev=0,tem,fd,ld;

    printf("\n Enter any number");
    scanf("%d",&no);

    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            ld=rev;

        }
        no=no/10;
        if(no==0)
        {
            fd=rem;
        }
    }
    printf("\n fd=%d \t ld=%d",fd,ld);
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------------------
//Write a C program to find sum of first and last digit of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0,tem,fd,ld,sum;

    printf("\n Enter any number :");
    scanf("%d",&no);
    tem=no;

    rem=no%10;
    ld=rem;
    printf("\n last Digit = %d",ld);
    no=tem;
    for(;no!=0;)
    {

        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
    fd=rev%10;
    printf("\n first Digit = %d",fd);
    printf("\n Addition of first and last Digit = %d",(fd+ld));
    return 0;

}
*/
//---------------------------------------------------------------------------------------------------------------
//Write a C program to swap first and last digits of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0,fd,ld;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            ld=rev;
        }
        no=no/10;
        if(no==0)
        {
            fd=rem;
        }
    }
    printf("\n first Digit : %d\n Last Digit : %d",fd,ld);
    fd=fd+ld;
    ld=fd-ld;
    fd=fd-ld;
    printf("\n ********SWAP*******\n first Digit : %d\n Last Digit : %d",fd,ld);

    return 0;
}

*/
//anathoer type
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
//-------------


//-----------------------------------------------------------------------------------------------------------
//Write a C program to calculate sum of digits of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,add=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(rem=0;no!=0;no=no/10)
    {
        rem=no%10;
        add=add+rem;
    }
    printf("\n Addition of All Digit are %d",add);
    return 0;
}

*/
//----------------------------------------------------------------------------------------------------------
//Write a C program to calculate product of digits of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,mul;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(mul=1;no!=0;no=no/10)
    {
        rem=no%10;
        mul=mul*rem;
    }
    printf("\n Product of Digit = %d",mul);
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------
//Write a C program to enter a number and print its reverse.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    for(rev=0;no!=0;no=no/10)
    {
        rem=no%10;
        rev=(rev*10)+rem;
    }
    printf("\n Reverse Number = %d",rev);
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is palindrome or not.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev,tem;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tem=no;
    for(rev=0;no!=0;no=no/10)
    {
        rem=no%10;
        rev=(rev*10)+rem;

    }
    no=tem;
    if(no==rev)
    {
        printf("\n Enter Number is Palindrome");
    }
    else
    {
       printf("\n Enter Number is Not Palindrome");
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------
//Write a C program to find frequency of each digit in a given integer.
/**
#include<stdio.h>
int main()
{
    int no,rem,d,tem,count;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tem=no;

    for(d=0;d<=9;d++)
    {
        no=tem;
        count=0;
        for(;no!=0;no=no/10)
        {
            rem=no%10;
            if(rem==d)
            {
                count++;
                //printf("\n %d repetead %d times",d,count);
            }


         }
         if(count>1)
            {
                printf("\n %d repetead %d times",d,count);
            }

    }
    return 0;

}
*/
//---------------------------------------------------------------------------------------------------------------
//Write a C program to enter a number and print it in words.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0;

    printf("\n enter any Number : ");
    scanf("%d",&no);

    for(;no!=0;no=no/10)
    {
        rem=no%10;
        rev=(rev*10)+rem;

    }
    for(;rev!=0;rev=rev/10)
    {

        rem=rev%10;

        if(rem==1)
        {
            printf(" one");
        }
       else if(rem==2)
        {
            printf(" two");
        }
        else if(rem==3)
        {
            printf(" three");
        }
        else if(rem==4)
        {
            printf(" four");
        }
        else if(rem==5)
        {
            printf(" five");
        }
        else if(rem==6)
        {
            printf(" six");
        }
        else if(rem==7)
        {
            printf(" seven");
        }
        else if(rem==8)
        {
            printf(" eight");
        }
        else if(rem==9)
        {
            printf(" nine");
        }
        else
        {
            printf(" zero");
        }


    }

    return 0;

}
*/

//--------------------------------------------------------------------------------
//Write a C program to print all ASCII character with their values.
/**
#include<stdio.h>
int main()
{
    int i=0;

    for(i>0;i<256;i++)
    {
       // if((i>=48 && i<=57)||(i>=65 && i<97)||(i>=97 && i<=122))
        {
            printf("\n\n %d===>%c",i,i);
        }
    }
    return 0;


}

*/
//----------------------------------------------------------------------------------------
//Write a C program to find power of a number using for loop.
/**
#include<stdio.h>
int main()
{
    int no,i,p,ans=1;

    printf("enter any numbre : ");
    scanf("%d",&no);
    printf("\n Enter the power : ");
    scanf("%d",&p);

    for(i=1;i<=p;i++)
    {
        ans=ans*no;

    }
    printf("\n power of %d  is %d",no,ans);
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------
//Write a C program to find all factors of a number.
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    printf("\n Factors of %d ==>",no);

    for(i=1;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            printf("\t%d",i);
        }
    }

    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//Write a C program to calculate factorial of a number.
/**
#include<stdio.h>
int main()
{
    int no,i,fact=1,tmp;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tmp=no;
    for(i=1;i<=no;i++)
    {
        fact=fact*i;
    }
    no=tmp;
    printf("\n factorial of %d is %d",no,fact);

    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------------
//Write a C program to find HCF (GCD) of two numbers.
/**
#include<stdio.h>
int main()
{
    int no1,no2,i,hcf;

    printf("\n Enter First Number : ");
    scanf("%d",&no1);
    printf("\n Enter Second Number : ");
    scanf("%d",&no2);


    for(i=1;i<=(no1/2) || i<=(no2/2);i++)
    {
        if(no1%i==0 && no2%i==0)
        {
            hcf=i;
        }
    }
    printf("\n HCF (GCD) of two numbers : %d ",hcf);

    return 0;

}
*/
//------------anathor way---------------------
/**
#include<stdio.h>
int main()
{
    int a,b,max=0,i,hcf;

    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    for(i=1;i<=(max/2);i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    printf("\n HCF : %d",hcf);

    return 0;
}
*/

//---------------------------------------------------------------------------------------------------------------------
//Write a C program to find LCM of two numbers.
/**
#include<stdio.h>
int main()
{
    int no1,no2,i,j,lcm1,lcm2;

    printf("\n Enter First Number : ");
    scanf("%d",&no1);
    printf("\n Enter Second Number : ");
    scanf("%d",&no2);

    for(i=1;i<=no2;i++)
    {

        lcm1=0;
        lcm1=no1*i;

       for(j=1;j<=no1;j++)
       {
           lcm2=0;
           lcm2=no2*j;
        if(lcm1==lcm2)
           {
               printf("\nLCM of %d and %d is \'%d\'",no1,no2,lcm1);
               break;
           }
       }

    }
    return 0;

}
*/
//--------anathor way-------------------

/**
#include<stdio.h>
int main()
{
    int a,b,max=0,i,hcf,lcm;

    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    for(i=1;i<=(max/2);i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }

     lcm=(a*b)/hcf;

     printf("\n LCM: %d",lcm);

    return 0;
}

*/
//---------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Prime number or not.
/**
#include<stdio.h>
int main()
{
    int no,i,flg=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(i=2;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            flg=1;
            break;
        }

    }
    if(flg==0 && no!=1)
    {
        printf("\n %d is prime number",no);
    }
    else
    {
        printf("\n %d is not prime number",no);
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------
//Write a C program to print all Prime numbers between 1 to n.
/**
#include<stdio.h>
int main()
{

    int no,i,j,flg;

    printf("\n enter any number : ");
    scanf("%d",&no);
    printf("\n Prime Numbers are : ");

    for(i=2;i<=no;i++)
    {
        flg=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }
        }
        if(flg==0)
        {
            printf("\t%d",i);
        }
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------
//Write a C program to find sum of all prime numbers between 1 to n.
/**
#include<stdio.h>
int main()
{

    int no,i,j,flg,add=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(i=2;i<=no;i++)
    {
        flg=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }
        }
        if(flg==0)
        {
            add=add+i;
            printf("\n Addition of prime number = %d",add);
        }

    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------
//Write a C program to find all prime factors of a number.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    for(i=2;i<=no;i++)
    {
        flg=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }
        }
        if(flg==0)
        {
            printf("\n %d factors =",i);
           for(j=1;j<=i;j++)
           {
               if(i%j==0)
               {
                   printf("  %d",j);
               }
           }

        }
    }
    return 0;
}

*/
//--------------------------------------------------------------------------------
//Write a C program to check whether a number is Armstrong number or not.
/**
#include<stdio.h>
int main()
{
    int no,d,rem,i,ans,sum=0,tmp;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tmp=no;

    for(d=0;no!=0;d++,no=no/10);

    no=tmp;
    for(;no!=0;no=no/10)
    {
        rem=no%10;
        ans=1;
        for(i=0;i<d;i++)
        {
            ans=ans*rem;
        }
        sum=sum+ans;
    }
    no=tmp;
    if(sum==no)
    {
        printf("\n %d is armstron Number ",no);
    }
    else
    {
        printf("\n %d is NOT armstron Number ",no);
    }

    return 0;

}
*/
//--------------------------------------------------------------------------------------------------
//Write a C program to print all Armstrong numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int n,no,d,rem,i,ans,sum=0,tmp;

    printf("\n Enter any number : ");
    scanf("%d",&n);


   for(no=0;no<=n;no++)
   {
        tmp=no;
        for(d=0;no!=0;d++,no=no/10);
       // printf("\n Cnt is %d",d);

        no=tmp;
        sum=0;
        for(;no!=0;no=no/10)
        {
            rem=no%10;
            ans=1;
            for(i=0;i<d;i++)
            {
                ans=ans*rem;
               // printf("\n Ans %d",ans);
            }
            sum=sum+ans;
            //printf("\n Sum %d",sum);
        }
        no=tmp;
        if(sum==no)
        {
            printf("\n %d ",no);
        }

    }


    return 0;

}
*/
//-----------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a addition of all digit number is divided by each digit.
/**
#include<stdio.h>
int main()
{
    int no,rem,tmp,add=0,flg=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tmp=no;

    for(;no!=0;no=no/10)
    {
        rem=no%10;
        add=add+rem;
    }
    no=tmp;
    for(;no!=0;no=no/10)
    {
        rem=no%10;
        if(add%rem!=0)
        {
            flg=1;
            break;
        }
    }
    no=tmp;
    if(flg==0)
    {
        printf("\n %d is divided each digit",no);
    }
    else
    {
        printf("\n %d is NOT divided each digit",no);
    }
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Perfect number or not.eg 28=1,2,4,7,14//1+2+4+7+14=28.
/**
#include<stdio.h>
int main()
{
    int no,i,add=0,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;
    printf("Factors = ");

    for(i=1;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            printf("%d ",i);
            add=add+i;
        }
    }
    no=tmp;
    if(no==add)
    {
        printf("\n %d is pefect Number ",no);
    }
    else
    {
        printf("\n %d is NOT pefect Number ",no);
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------
//Write a C program to print all Perfect numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int n,no,i,add,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&n);

   printf("perfect no 1 to %d = ",n);

    for(no=1;no<=n;no++)
    {
        add=0;
       tmp=no;
       for(i=1;i<=(no/2);i++)
       {
           if(no%i==0)
           {
               add=add+i;
           }
       }
       no=tmp;
       if(no==add)
       {
           printf("\n %d ",no);
       }

    }
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Strong number or not.
/**
#include<stdio.h>
int main()
{
    int no,i,ans,rem,tmp,d,sum=0;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    for(d=0;d<=9;d++)//dont use this loop without using this loop we can find stron number
    {
        no=tmp;
        for(;no!=0;no=no/10)
        {
            rem=no%10;
            if(rem==d)
            {
                ans=1;
                for(i=rem;i>=1;i--)
                {
                    ans=ans*i;

                }

                 sum=sum+ans;
            }

        }

    }
    no=tmp;
    if(no==sum)
    {
        printf("\n %d is strong Number",no);
    }
   else
    {
        printf("\n %d is NOT strong Number",no);
    }

    return 0;

}
*/
//----------------------Anthor way--------------------------------------------
/**
#include<stdio.h>
int main()
{
    int no,i,ans,rem,tmp,d,sum=0;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

        for(;no!=0;no=no/10)
        {
            rem=no%10;
            ans=1;
            for(i=rem;i>=1;i--)
            {
                ans=ans*i;

            }
                sum=sum+ans;
         }


    no=tmp;
    if(no==sum)
    {
        printf("\n %d is strong Number",no);
    }
   else
    {
        printf("\n %d is NOT strong Number",no);
    }

    return 0;

}
*/
//-------------------------------------------------------------------------------------------------
//Write a C program to print all Strong numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int n,no,i,ans,rem,tmp,d,sum=0;

    printf("\n Enter any Number : ");
    scanf("%d",&n);

    printf("\n Strong number are : ");

    for(no=1;no<=n;no++)
    {
        tmp=no;
        sum=0;
        for(;no!=0;no=no/10)
        {

            rem=no%10;
            ans=1;
            for(i=rem;i>=1;i--)
            {
                ans=ans*i;

            }
                sum=sum+ans;
        }
        no=tmp;
        if(no==sum)
        {
             printf("\n %d ",no);
        }

     }


    return 0;

}
*/
//------------------------------------------------------------------------------------------------------------------
//Write a C program to print Fibonacci series up to n terms.

/**------------------------------------------------------------------------------------------------------------------
                                            WHILE AND DO()WHILE LOOP
-------------------------------------------------------------------------------------------------------------------*/
//Write a C program to print all natural numbers from 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    printf("\n All natural number are :");
    i=1;
    while(i<=no)
    {
        printf("\t%d",i);
        i++;
    }
    return 0;

}
*/
//Write a C program to print all natural numbers from 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    printf("\n All natural number are :");
    i=1;
    do
    {
        printf("\t%d",i);
        i++;
    }while(i<=no);

    return 0;

}
*/
//------------------------------------------------------------------------------------------------------
//Write a C program to print all natural numbers in reverse (from n to 1).
/**
#include<stdio.h>
int main()
{
    int no;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    printf("\n All natural number are :");

    while(no>=1)
    {
        printf("\t%d",no);
        no--;
    }
    return 0;

}
*/
//Write a C program to print all natural numbers in reverse (from n to 1).
/**
#include<stdio.h>
int main()
{
    int no;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    printf("\n All natural number are :");

    do
    {
        printf("\t%d",no);
        no--;
    }while(no>=1);
    return 0;

}
*/
//--------------------------------------------------------------------------------------------------------
//Write a C program to print all alphabets from a to z.
/**
#include<stdio.h>
int main()
{
    char ch;

    ch='a';
    while(ch<='z')
    {
        printf("\t%c",ch);
        ch++;
    }
    return 0;

}
*/

//Write a C program to print all alphabets from a to z.
/**
#include<stdio.h>
int main()
{
    char ch;

    ch='a';
    do
    {
        printf("\t%c",ch);
        ch++;
    }while(ch<='z');
    return 0;

}
*/
//---------------------------------------------------------------------------------------------
//Write a C program to print all even numbers between 1 to 100
/**
#include<stdio.h>
int main()
{
    int no;

    no=2;
    while(no<=100)
    {
        printf("\t%d",no);
        no+=2;
    }
    return 0;
}
*/
//Write a C program to print all even numbers between 1 to 100
/**
#include<stdio.h>
int main()
{
    int no;

    no=2;
    do
    {
        printf("\t%d",no);
        no+=2;
    }while(no<=100);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------
//Write a C program to print all odd numbers between 1 to 100
/**
#include<stdio.h>
int main()
{
    int no;

    no=1;
    while(no<=100)
    {
        printf("\t%d",no);
        no+=2;
    }
    return 0;
}
*/
//Write a C program to print all odd numbers between 1 to 100
/**
#include<stdio.h>
int main()
{
    int no;

    no=1;
    do
    {
        printf("\t%d",no);
        no+=2;
    }while(no<=100);
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------
//Write a C program to find the sum of all natural numbers between 1 to n
/**
#include<stdio.h>
int main()
{
    int no,i,sum=0;

    printf("\n eneter any number : ");
    scanf("%d",&no);

    i=1;
    while(i<=no)
    {
        sum=sum+i;
        i++;
    }
    printf("\n all natural number sum = %d ",sum);
    return 0;
}
*/
//Write a C program to find the sum of all natural numbers between 1 to n
/**
#include<stdio.h>
int main()
{
    int no,i,sum=0;

    printf("\n eneter any number : ");
    scanf("%d",&no);

    i=1;
    do
    {
        sum=sum+i;
        i++;
    }while(i<=no);
    printf("\n all natural number sum = %d ",sum);
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------
//Write a C program to find the sum of all even numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,sum,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=2;
    while(i<=no)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }

    printf("\n sum of Even Number : %d",sum);


    return 0;

}
*/
//Write a C program to find the sum of all even numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,sum,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=2;
    do
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }while(i<=no);

    printf("\n sum of Even Number : %d",sum);


    return 0;

}

*/
//---------------------------------------------------------------------------------------------------------
//Write a C program to find sum of all odd numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,sum,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=1;
    while(i<=no)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        i++;
    }

    printf("\n sum of odd Number : %d",sum);


    return 0;

}
*/
//Write a C program to find sum of all odd numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,sum,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=1;
    do
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        i++;
    }while(i<=no);

    printf("\n sum of odd Number : %d",sum);


    return 0;

}
*/
//--------------------------------------------------------------------------------------------------
//Write a C program to print multiplication table of any number
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    i=1;
    do
    {
        printf("\n %d",(no*i));
        i++;
    }while(i<=10);

    return 0;

}

*/
//Write a C program to print multiplication table of any number
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    i=1;
    while(i<=10)
    {
        printf("\n %d",(no*i));
        i++;
    }

    return 0;

}
*/
//Write a C program to print multiplication table of any number
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    i=1;
    do
    {
        printf("\n %d",(no*i));
        i++;
    }while(i<=10);

    return 0;

}
*/
//----------------------------------------------------------------------------------------------------------------
//Write a C program to count number of digits in a number.
/**
#include<stdio.h>
int main()
{
    int no,d;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    d=0;
    while(no!=0)
    {
        no=no/10;
        d++;

    }

    printf("\n Digit Count = %d",d);

    return 0;

}
*/
//Write a C program to count number of digits in a number.
/**
#include<stdio.h>
int main()
{
    int no,d;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    d=0;
    do
    {
        d++;
        no=no/10;

    }while(no!=0);

    printf("\n Digit Count = %d",d);

    return 0;

}
*/

//---------------------------------------------------------------------------------------------------------------------------
//Write a C program to find first and last digit of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0,tmp,fd,ld;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            ld=rem;
        }
        no=no/10;

    }
    fd=rev%10;
    printf("\n First Digit : %d",fd);
    printf("\n Last Digit : %d",ld);

    return 0;

}
*/
//--------anathor way

//Write a C program to find first and last digit of a number.
/**
#include<stdio.h>
int main()
{
    int no,d,rem,fd,ld,tmp,i,ans=1;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    d=0;
    do
    {
        no=no/10;
        d++;
    }while(no!=0);

    no=tmp;

    i=1;
    do
    {
        ans=ans*10;
        i++;
    }while(i<d);

    fd=no/ans;
    ld=no%10;
    printf("\n First digit : %d",fd);
    printf("\n Last digit : %d",ld);


    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------
//Write a C program to find sum of first and last digit of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0,tmp,fd,ld;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            ld=rem;
        }
        no=no/10;

    }
    fd=rev%10;

    printf("\n Addition of First and Last Digit : %d",(fd+ld));

    return 0;

}
*/
//Write a C program to find sum of first and last digit of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0,tmp,fd,ld;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    do
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            ld=rem;
        }
        no=no/10;

    }while(no!=0);
    fd=rev%10;

    printf("\n Addition of First and Last Digit : %d",(fd+ld));

    return 0;

}
*/
//------------------------------------------------------------------------------------------------------------
//Write a C program to swap first and last digits of a number.

//----------------------------------------------------------------------------------------------------------------
//Write a C program to calculate sum of digits of a number.
//Write a C program to calculate product of digits of a number.
/**

#include<stdio.h>
int main()
{
    int no,sum=0,mul=1,rem;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    while(no!=0)
    {
        rem=no%10;
        sum=sum+rem;
        mul=mul*rem;
        no=no/10;
    }
    printf("\n Addition of digit : %d",sum);
    printf("\n product of digit : %d",mul);

    return 0;

}
*/
//Write a C program to calculate sum of digits of a number.
//Write a C program to calculate product of digits of a number.
/**

#include<stdio.h>
int main()
{
    int no,sum=0,mul=1,rem;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    do
    {
        rem=no%10;
        sum=sum+rem;
        mul=mul*rem;
        no=no/10;
    }while(no!=0);

    printf("\n Addition of digit : %d",sum);
    printf("\n product of digit : %d",mul);

    return 0;

}

*/
//-----------------------------------------------------------------------------------------------------
//Write a C program to enter a number and print its reverse.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
    printf("\n Reverse Number : %d",rev);

    return 0;
}
*/
//Write a C program to enter a number and print its reverse.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    do
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }while(no!=0);
    printf("\n Reverse Number : %d",rev);

    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is palindrome or not.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    do
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }while(no!=0);

    no=tmp;

    if(no==rev)
    {
       printf("\n %d is palindrome number",no);
    }
    else
    {
        printf("\n %d is NOT palindrome number",no);
    }



    return 0;
}
*/
//Write a C program to check whether a number is palindrome or not.
/**

#include<stdio.h>
int main()
{
    int no,rem,rev=0,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }

    no=tmp;

    if(no==rev)
    {
       printf("\n %d is palindrome number",no);
    }
    else
    {
        printf("\n %d is NOT palindrome number",no);
    }



    return 0;
}
*/
//------------------------------------------------------------------------------------------
//Write a C program to find frequency of each digit in a given integer.
/**
#include<stdio.h>
int main()
{
    int no,rem,count,d,tmp;

    printf("\n Enter any numbetr : ");
    scanf("%d",&no);
    tmp=no;

    d=0;
    while(d<=9)
    {
        no=tmp;
        count=0;
        while(no!=0)
        {
            rem=no%10;
            if(rem==d)
            {
                count++;
            }
            no=no/10;
        }
        if(count>1)
        printf("\n %d Number %d time Repeted",d,count);

        d++;
    }
    return 0;

}
*/
//Write a C program to find frequency of each digit in a given integer.
/**
#include<stdio.h>
int main()
{
    int no,rem,count,d,tmp;

    printf("\n Enter any numbetr : ");
    scanf("%d",&no);
    tmp=no;

    d=0;
    do
    {
       no=tmp;
       count=0;
       do
       {
          rem=no%10;
          if(rem==d)
          {
              count++;
          }
          no=no/10;

       }while(no!=0);

       if(count>1)
       {
          printf("\n %d Number %d time Repeted",d,count);
       }

       d++;

    }while(d<=9);

    return 0;

}

*/
//----------------------------------------------------------------------------------------------------------
//Write a C program to enter a number and print it in words.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0;

    printf("\n enter any Number : ");
    scanf("%d",&no);

    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
    while(rev!=0)
    {

        rem=rev%10;

        if(rem==1)
        {
            printf(" one");
        }
       else if(rem==2)
        {
            printf(" two");
        }
        else if(rem==3)
        {
            printf(" three");
        }
        else if(rem==4)
        {
            printf(" four");
        }
        else if(rem==5)
        {
            printf(" five");
        }
        else if(rem==6)
        {
            printf(" six");
        }
        else if(rem==7)
        {
            printf(" seven");
        }
        else if(rem==8)
        {
            printf(" eight");
        }
        else if(rem==9)
        {
            printf(" nine");
        }
        else
        {
            printf(" zero");
        }

        rev=rev/10;

    }

    return 0;

}

*/

//Write a C program to enter a number and print it in words.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0;

    printf("\n enter any Number : ");
    scanf("%d",&no);

    do
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }while(no!=0);

    do
    {

        rem=rev%10;

        if(rem==1)
        {
            printf(" one");
        }
       else if(rem==2)
        {
            printf(" two");
        }
        else if(rem==3)
        {
            printf(" three");
        }
        else if(rem==4)
        {
            printf(" four");
        }
        else if(rem==5)
        {
            printf(" five");
        }
        else if(rem==6)
        {
            printf(" six");
        }
        else if(rem==7)
        {
            printf(" seven");
        }
        else if(rem==8)
        {
            printf(" eight");
        }
        else if(rem==9)
        {
            printf(" nine");
        }
        else
        {
            printf(" zero");
        }

        rev=rev/10;

    }while(rev!=0);

    return 0;

}

*/
//-----------------------------------------------------------------------------------------------------------
//Write a C program to print all ASCII character with their values.
/**
#include<stdio.h>
int main()
{
    int i;

    i=0;
    do
    {
        printf("\n %d ==> %c",i,i);
       i++;
    }while(i<=256);

    return 0;
}
*/

//Write a C program to print all ASCII character with their values.
/**
#include<stdio.h>
int main()
{
    int i;

    i=0;
    while(i<=256)
    {
        printf("\n %d ==> %c",i,i);
       i++;
    }

    return 0;
}
*/

//-----------------------------------------------------------------------------------------------
//Write a C program to find power of a number using loop.
/**
#include<stdio.h>
int main()
{
    int no,p,ans=1,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    printf("\n Enter power : ");
    scanf("%d",&p);

    i=0;
    while(i<p)
    {
        ans=ans*no;
        i++;
    }
    printf("\n power of %d id %d",no,ans);

    return 0;
}
*/
//Write a C program to find power of a number using loop.
/**
#include<stdio.h>
int main()
{
    int no,p,ans=1,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    printf("\n Enter power : ");
    scanf("%d",&p);

    i=0;
    do
    {
        ans=ans*no;
        i++;
    }while(i<p);
    printf("\n power of %d id %d",no,ans);

    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------
//Write a C program to find all factors of a number.
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    printf("\n factors are : ");
    i=2;
    while(i<=(no/2))
    {
        if(no%i==0)
        {
            printf(" %d",i);
        }
        i++;
    }
    printf(" %d",no);
    return 0;


}

*/

//----------------------------------------------------------------------------------------------------------------
//Write a C program to calculate factorial of a number.
/**
#include<stdio.h>
int main()
{
    int no,fact=1,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=no;
    while(i>1)
    {
        fact=fact*i;
        i--;
    }
    printf("\n factorial of a number is : %d",fact);

    return 0;
}
*/
//Write a C program to calculate factorial of a number.
/**


#include<stdio.h>
int main()
{
    int no,fact=1,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=no;
    do
    {
        fact=fact*i;
        i--;
    }while(i>1);
    printf("\n factorial of a number is : %d",fact);

    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------------------------
//Write a C program to find HCF (GCD) of two numbers.
/**
#include<stdio.h>
int main()
{
    int a,b,max=0,i,hcf,lcm;

    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    i=1;
    while(i<=(max/2))
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
        i++;
    }

     printf("\n hcf : %d",hcf);

    return 0;
}
*/
//Write a C program to find HCF (GCD) of two numbers.
/**
#include<stdio.h>
int main()
{
    int a,b,max=0,i,hcf,lcm;

    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    i=1;
    do
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
        i++;
    }while(i<=(max/2));

     printf("\n hcf : %d",hcf);

    return 0;
}
*/

//-------------------------------------------------------------------------------------------------------------------------
//Write a C program to find LCM of two numbers.
/**
#include<stdio.h>
int main()
{
    int a,b,max=0,i,hcf,lcm;

    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    i=1;
    while(i<=(max/2))
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
        i++;
    }

     lcm=(a*b)/hcf;

     printf("\n LCM : %d",lcm);

    return 0;
}
*/

//Write a C program to find LCM of two numbers.
/**
#include<stdio.h>
int main()
{
    int a,b,max=0,i,hcf,lcm;

    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    i=1;
    do
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
        i++;
    }while(i<=(max/2));

     lcm=(a*b)/hcf;

     printf("\n LCM : %d",lcm);

    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Prime number or not.
/**
#include<stdio.h>
int main()
{
    int no,flg=0,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

   i=2;
   while(i<=(no/2))
    {
        if(no%i==0)
        {
            flg=1;
            break;
        }
       i++;
    }
    if(flg==0)
    {
        printf("\n %d is Prime Number ",no);
    }
    else
    {
        printf("\n %d is NOT Prime Number ",no);
    }

    return 0;

}
*/
//Write a C program to check whether a number is Prime number or not.
/**
#include<stdio.h>
int main()
{
    int no,flg=0,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=2;
    do
    {
        if(no%i==0)
        {
            flg=1;
            break;
        }
       i++;
    } while(i<=(no/2));
    if(flg==0)
    {
        printf("\n %d is Prime Number ",no);
    }
    else
    {
        printf("\n %d is NOT Prime Number ",no);
    }

    return 0;

}
*/
//-----------------------------------------------------------------------------------------------------------
//Write a C program to print all Prime numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg;

    printf("\n Enter any Last Number : ");
    scanf("%d",&no);

    i=2;
    while(i<=no)
    {
        j=2;
        flg=0;
        while(j<=(i/2))
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }

            j++;
        }
        if(flg==0)
        {
             printf("\n %d",i);
        }
        i++;
    }
    return 0;


}
*/
//Write a C program to print all Prime numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg;

    printf("\n Enter any Last Number : ");
    scanf("%d",&no);

    printf("\n 2");
    i=2;
    do
    {
        j=2;
        flg=0;
        do
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }

            j++;

        }while(j<=(i/2));

        if(flg==0)
        {
            printf("\n %d",i);
        }
        i++;

    }while(i<=no);

    return 0;

}
*/
//------------------------------------------------------------------
//Write a C program to find sum of all prime numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg,ans=0;

    printf("\n Enter any Last Number : ");
    scanf("%d",&no);

    i=2;
    while(i<=no)
    {
        j=2;
        flg=0;
        while(j<=(i/2))
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }

            j++;
        }
        if(flg==0)
        {
            printf("\n %d",i);
             ans=ans+i;
        }

        i++;
    }
     printf("\n Addition of all prime number : %d",ans);
    return 0;
}
*/
//Write a C program to find sum of all prime numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg,ans=0;

    printf("\n Enter any Last Number : ");
    scanf("%d",&no);

    i=2;
    do
    {
        j=2;
        flg=0;
        do
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }

            j++;
        }while(j<=(i/2));

        if(flg==0)
        {
            printf("\n %d",i);
             ans=ans+i;
        }

        i++;
    }while(i<=no);
    ans=ans+2;
     printf("\n Addition of all prime number : %d",ans);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------
//Write a C program to find all prime factors of a number.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg;

    printf("\n Enter any Last Number : ");
    scanf("%d",&no);

    i=2;
    while(i<=no)
    {
        j=2;
        flg=0;
        while(j<=(i/2))
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }

            j++;
        }
        if(flg==0 && no%i==0)
        {
             printf("\n %d",i);
        }
        i++;
    }
    return 0;


}

*/
//
//Write a C program to find all prime factors of a number.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg;

    printf("\n Enter any Last Number : ");
    scanf("%d",&no);

    i=2;
    do
    {
        j=2;
        flg=0;
        do
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }

            j++;
        }while(j<=(i/2));
        if(flg==0 && no%i==0)
        {
             printf("\n %d",i);
        }
        i++;
    } while(i<=no);
    return 0;


}
*/
//-------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Armstrong number or not.
/**
#include<stdio.h>
int main()
{
    int no,rem,d,i,ans,sum=0,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    d=0;
    while(no!=0)
    {
        d++;
        no=no/10;
    }
    no=tmp;

    while(no!=0)
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
        no=no/10;
    }
    no=tmp;
    if(sum==no)
    {
        printf("%d is Armstron Number",no);
    }
    else
    {
        printf("%d is NOT Armstron Number",no);
    }

}
*/
//-------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Armstrong number or not.
/**
#include<stdio.h>
int main()
{
    int no,rem,d,i,tmp,sum=0,ans;

    printf("\n Enter  Any Number : ");
    scanf("%d",&no);
    tmp=no;

    d=0;
    do
    {
        d++;
        no=no/10;
    }while(no!=0);
    no=tmp;

    do
    {
        rem=no%10;
        i=0;
        ans=1;
        do
        {
            ans=ans*rem;
            i++;
        }while(i<d);

        sum=sum+ans;

        no=no/10;
    }while(no!=0);

    no=tmp;

    if(no==sum)
    {
        printf("\n %d is Armstrong Number ",no);
    }
    else
    {
        printf("\n %d is NOT Armstrong Number ",no);
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------
//Write a C program to print all Armstrong numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,rem,d,i,j,tmp,sum,ans;

    printf("\n Enter  Any Number : ");
    scanf("%d",&no);

    i=1;
    while(i<=no)
    {

        sum=0;
        tmp=i;
        d=0;
        while(i!=0)
        {
           d++;
           i=i/10;
        }

        i=tmp;

        while(i!=0)
        {
            rem=i%10;
            ans=1;
            j=0;
            while(j<d)
            {
                ans=ans*rem;
                j++;

            }
            sum=sum+ans;


            i=i/10;
        }
        i=tmp;
        if(i==sum)
        {
            printf("\n %d",i);
        }
        i++;
    }
    return 0;
}
*/
//Write a C program to print all Armstrong numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,rem,d,i,j,tmp,sum,ans;

    printf("\n Enter  Any Number : ");
    scanf("%d",&no);

    i=1;
    do
    {

        sum=0;
        tmp=i;
        d=0;
        do
        {
           d++;
           i=i/10;
        } while(i!=0);

        i=tmp;

        do
        {
            rem=i%10;
            ans=1;
            j=0;
            do
            {
                ans=ans*rem;
                j++;

            }while(j<d);
            sum=sum+ans;


            i=i/10;
        }while(i!=0);
        i=tmp;
        if(i==sum)
        {
            printf("\n %d",i);
        }
        i++;
    }while(i<=no);
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Perfect number or not.
/**
#include<stdio.h>
int main()
{
    int no,i,add=0,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    i=1;
    while(i<=(no/2))
    {
        if(no%i==0)
        {
            add=add+i;
        }
        i++;
    }
    no=tmp;

   if(add==no)
   {
       printf("\n %d is perfect Number",no);
   }
   else
   {
       printf("\n %d is NOT perfect Number",no);
   }

   return 0;
}
*/
//Write a C program to check whether a number is Perfect number or not.
/**
#include<stdio.h>
int main()
{
    int no,i,add=0,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    i=1;
   do
    {
        if(no%i==0)
        {
            add=add+i;
        }
        i++;
    } while(i<=(no/2));
    no=tmp;

   if(add==no)
   {
       printf("\n %d is perfect Number",no);
   }
   else
   {
       printf("\n %d is NOT perfect Number",no);
   }

   return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------
//Write a C program to print all Perfect numbers between 1 to n.
/**
    #include<stdio.h>
    int main()
    {
        int nn,no,i,add=0,tmp;

        printf("\n Enter any Number : ");
        scanf("%d",&nn);

        no=1;
       while(no<=nn)
        {
           add=0;
           tmp=no;
           i=1;
          while(i<=(no/2))
           {
              if(no%i==0)
              {
                add=add+i;
              }
              i++;
            }
            no=tmp;

            if(add==no)
            {
               printf("\n %d ",no);
            }

            no++;
        }
       return 0;
    }

*/
//-------------------------------------------------------------------------------------------------------------
//Write a C program to print all Perfect numbers between 1 to n.
/**
    #include<stdio.h>
    int main()
    {
        int nn,no,i,add=0,tmp;

        printf("\n Enter any Number : ");
        scanf("%d",&nn);

        no=1;
        do
        {
           add=0;
           tmp=no;
           i=1;
           do
           {
              if(no%i==0)
              {
                add=add+i;
              }
              i++;
            }while(i<=(no/2));
            no=tmp;

            if(add==no)
            {
               printf("\n %d ",no);
            }

            no++;
        }while(no<=nn);

       return 0;
    }

*/
//---------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Strong number or not.
/**
#include<stdio.h>
int main()
{
    int no,rem,tmp,fact,add;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tmp=no;

    while(no!=0)
    {
        rem=no%10;
        fact=1;
        while(rem>1)
        {
            fact=fact*rem;
            rem--;
        }
        add=add+fact;
        no=no/10;
    }
    no=tmp;
    if(add==no)
    {
        printf("\n %d is Strong Number ",no);
    }
    else
    {
        printf("\n %d is NOT Strong Number ",no);
    }
}
*/
//Write a C program to check whether a number is Strong number or not.
/**
#include<stdio.h>
int main()
{
    int no,rem,tmp,fact,add;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tmp=no;

    do
    {
        rem=no%10;
        fact=1;
        do
        {
            fact=fact*rem;
            rem--;
        }while(rem>1);
        add=add+fact;
        no=no/10;
    } while(no!=0);
    no=tmp;
    if(add==no)
    {
        printf("\n %d is Strong Number ",no);
    }
    else
    {
        printf("\n %d is NOT Strong Number ",no);
    }
}

*/
//----------------------------------------------------------------------------------------------------
//Write a C program to print all Strong numbers between 1 to n.
/**

#include<stdio.h>
int main()
{
    int nn,no,rem,tmp,fact,add;

    printf("\n Enter any number : ");
    scanf("%d",&nn);

    no=1;
    while(no<=nn)
    {
      tmp=no;
      add=0;
      while(no!=0)
      {
         rem=no%10;
         fact=1;
         while(rem>1)
         {
            fact=fact*rem;
            rem--;
         }

         add=add+fact;
         no=no/10;
       }
       no=tmp;
       if(add==no)
       {
          printf("\n %d",no);
       }

       no++;
    }

}
*/
//Write a C program to print all Strong numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int nn,no,rem,tmp,fact,add;

    printf("\n Enter any number : ");
    scanf("%d",&nn);

    no=1;
    do
    {
      tmp=no;
      add=0;
      do
      {
         rem=no%10;
         fact=1;
         do
         {
            fact=fact*rem;
            rem--;
         }while(rem>1);

         add=add+fact;
         no=no/10;
       } while(no!=0);
       no=tmp;
       if(add==no)
       {
          printf("\n %d",no);
       }

       no++;
    }while(no<=nn);

}
*/
/**--------------------------------------------------------------------------------------------------------------------------------
                                                 Pattern
------------------------------------------------------------------------------------------------------------*/


/**
List of star pattern programming
exercises
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

//----------------------------------------------------------------------------------------------------------------------
/**

Square Star Pattern
*****
* *
* *
* *
*****

*/

/**
#include<Stdio.h>
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
            else if(j==0 || j==2)
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
//----------------------------------------------------------------------------------------------------
/**

Hollow Square Star Pattern
*****
** **
* * *
** **
*****

*/
/**
#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if((i==1 && j==2) || (i==2 && j==1) || (i==2 && j==3) || (i==3 && j==2))
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

//---------------------------------------------------------------------------------------------------------------------------------------

/**
Hollow Square Star Pattern with
Diagonal
    *****
   *****
  *****
 *****
*****

*/
/**
#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<(9-i);j++)
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
        printf("\n");
    }
    return 0;

}
*/
//------------------------------------------------------------------------------------------------------------------------------

/**

    *****
   *   *
  *   *
 *   *
*****

*/

/**
#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else if(i==0 || i==4)
            {
                printf("*");
            }
            else if(j<5-i)
            {
                printf("*   *");//DONT USE LIKE THAT
            }


        }
        printf("\n");
    }
    return 0;
}




*/


/**

    *****
   *   *
  *   *
 *   *
*****

*/

/**
#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else if(i==0 || i==4)
            {
                printf("*");
            }
            else if(j<5-i)
            {
                printf("*");
            }
            else if(j<(8-i))
            {
                printf(" ");
            }
            else if(j<9-i)
            {
                printf("*");
            }


        }
        printf("\n");
    }
    return 0;
}

*/

//---------------------------------------------------------------------------------------------------------------------------
/**
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
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5+i;j++)
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
//-----------------------------------------------------------------------------------------------------------------------
/**

*****
 *   *
  *   *
   *   *
    *****

*/

/**

#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5+i;j++)
        {
          if(j<i)
          {
              printf(" ");
          }
          else if( i==0 || i==4)
          {
              printf("*");
          }
          else if(j<=i)
          {
              printf("*");
          }
          else if(j<4+i)
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

//---------------------------------------------------------------------------------------------------------------------------
/**

*
**
***
****
*****


*/


//#include<stdio.h>
//int main()
//{
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<=i)
//            {
//                printf("*");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

//-----------------------------------------------------------------------------------------------------
/**

*
**
* *
*  *
*****

*/

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if((i==2 && j==1) || (i==3 && j==1) || (i==3 && j==2))
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

//------------------------------------------------------------------------------------------------------
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
            if(j<4-i)
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

//-----------------------------------------------------------------------------------------------------------------------------
/**

    *
   **
  * *
 *  *
*****

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
            if(j<4-i)
            {
                printf(" ");
            }
            else if ((i==2 && j==3) || (i==3 && j==2) || (i==3 && j==3))
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
//---------------------------------------------------------------------------------------------------------------------
//*****
//****
//***
//**
//*
//
//#include<stdio.h>
//int main()
//{
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5-i;j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//
//}

//--------------------------------------------------------------------------------------------------------------------------

/**
*****
*  *
* *
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
        for(j=0;j<5-i;j++)
        {
            if((i==1 && j==1) || (i==1 && j==2) || (i==2 && j==1))
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

//---------------------------------------------------------------------------------------------------------------------
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
//------------------------------------------------------------------------------------------------------------------
/**

*****
 *  *
  * *
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
            else if ((i==1 && j==2) || (i==1 && j==3) || (i==2 && j==3))
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

//---------------------------------------------------------------------------------------------------------------------------
/**

    *
   ***
  *****
 *******
*********

*/

/**

#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5+i;j++)
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

//-----------------------------------------------------------------------------------------------------------------
/**
    *
   * *
  *   *
 *     *
*********

*/

/**

#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5+i;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else if((j<5-i) || i==4)
            {
                printf("*");
            }
            else if((i==1 && j==5) || (i==2 && j==6) || (i==3 && j==7))
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
//--------------------anathor way------------------
/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5+i;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else if((j<5-i) || i==4)
            {
                printf("*");
            }
            else if(j<4+i)
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

//-----------------------------------------------------------------------------------------------------
/**

*********
 *******
  *****
   ***
    *

*/

/**

#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9-i;j++)
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

*********
 *     *
  *   *
   * *
    *

*/

/**
#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else if(j<=i || i==0)
            {
                printf("*");
            }
            else if((i==1 && j==7)||(i==2 && j==6)||(i==3 && j==5))
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
//------anathor way----------
/**

#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else if(j<=i || i==0)
            {
                printf("*");
            }
            else if(j<8-i)
            {
                printf(" ");
            }
            else if(j<9-i)//use only else
            {
                printf("*");
            }

        }
        printf("\n");

    }

}
*/

//------------------------------------------------------------------------------------------------------------------------------
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
#include<Stdio.h>
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

//-----------------------------------------------------------------------------------------------------------------------
/**

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *


*/

/**
#include<Stdio.h>
int main()
{

    int i,j;

    for(i=0;i<9;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i<5)
            {
                if(j<4-i)
                {
                    printf(" ");
                }
                else
                {
                    printf("* ");
                }
            }
            else
            {
                if((j+4)<i)
                {
                    printf(" ");
                }
                else
                {
                    printf("* ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}


*/

//-----------------------------------------------------------------------------------------------------------------------
/**

    *
   ***
  *****
 *******
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

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(i<5)
            {
                if(j<5+i)
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
            }
            else
            {
              if(j<13-i)//first time i=5 thats why 8+5=13
                {
                    if((j+4)<i)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}


*/

//------------------------------------------------------------------------------------------------------------------------
/**


**********
**** ****
***  ***
**   **
*    *
*    *
**   **
***  ***
**** ****
**********

*/


/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i<5)
            {
                if(j<5)
                {
                    if(j<5-i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                else
                {
                    if(j<10-i)
                    {
                        printf("*");
                    }
                }
            }
            else
            {
                if(j<5)
                {
                    if((j+5)<=i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                else
                {
                    if(j<=i)
                    {
                        printf("*");
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------------
/**

*****
 ****
  ***
   **
    *
    *
   **
  ***
 ****
*****

*/


/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i<5)
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
            else
            {
                if(j<(9-i))
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

//-----------------------------------------------------------------------------------------------------------------
/**

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********


*/



/**

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i<5)
            {
               if(j<5)
               {
                    if(j<(5-i))
                    {
                        printf("*");
                    }
                    else
                    {
                       printf(" ");
                    }
               }
               else
               {
                   if(j<(i+5))
                   {
                       printf(" ");
                   }
                   else
                   {
                       printf("*");
                   }
               }
            }
            else
            {
                if(j<5)
                {
                    if((j+5)<=i)
                    {
                       printf("*");
                    }
                    else
                    {
                    printf(" ");
                    }
                }
                else
                {
                    if(j<14-i)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                }

            }
        }
        printf("\n");
    }
}

*/

//--------------------------------------------------------------------------------------------------------------------------------------


#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<9;i++)
    {
       for(j=0;j<9;j++)
       {
          if(i<5)
          {
               if(j<4-i)
               {
                  printf(" ");
               }
               else if(j<9-(i+i))
               {
                  printf("*");
               }
          }
          else
          {
              if((j+5)<=i)
              {
                  printf(" ");
              }
              else if(j<8-i)
              {
                  printf("*");
              }

          }
       }
       printf("\n");
    }
    return 0;
}















































































































