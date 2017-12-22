#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;


void barguna1(char str[]);
void bhola1(char str[]);
void barisal1(char str[]);



int file1(char str[])
{
    int p;
    ifstream fp;
    fp.open("E:\\file\\school.txt");
    char ch[1000],c;
    while(1)
    {
        fp>>ch;
        if(strcmp(ch,str)==0)
        {
            while(1)
            {
                fp>>ch;
                if(strcmp(ch,"#")==0)
                    break;
                else if(strcmp(ch,".")!=0)
                    printf("%s ",ch);
                else
                {
                    printf("\n\n");
                    p=0;
                }
            }

        }
        if(p==0)
            break;
    }

    fp.close();
    return 0;
}
int file2(char str[])
{
    int p;
    ifstream fp;
    fp.open("E:\\file\\college.txt");
    char ch[1000],c;
    while(1)
    {
        fp>>ch;
        if(strcmp(ch,str)==0)
        {
            while(1)
            {
                fp>>ch;
                if(strcmp(ch,"#")==0)
                    break;
                else if(strcmp(ch,".")!=0)
                    printf("%s ",ch);
                else
                {
                    printf("\n\n");
                    p=0;
                }
            }

        }
        if(p==0)
            break;
    }
    fp.close();
    return 0;
}
int file3(char str[])
{
    int p;
    ifstream fp;
    fp.open("E:\\file\\upazila.txt");
    char ch[1000],c;
    while(1)
    {
        fp>>ch;
        if(strcmp(ch,str)==0)
        {
            while(1)
            {
                fp>>ch;
                if(strcmp(ch,"#")==0)
                    break;
                else if(strcmp(ch,".")!=0)
                    printf("%s ",ch);
                else
                {
                    printf("\n\n");
                    p=0;
                }
            }

        }
        if(p==0)
            break;
    }
    fp.close();
    return 0;
}
int file4(char str[])
{
    int p;
    ifstream fp;
    fp.open("E:\\file\\pop.txt");
    char ch[1000];
    while(1)
    {
        fp>>ch;
        if(strcmp(ch,str)==0)
        {
            while(1)
            {
                fp>>ch;
                if(strcmp(ch,"#")==0)
                    break;
                else if(strcmp(ch,".")!=0)
                    printf("%s ",ch);
                else
                {
                    printf("\n\n");
                    p=0;
                }
            }

        }
        if(p==0)
            break;
    }
    fp.close();
    return 0;
}
int file5(char str[])
{
    int p;
    ifstream fp;
    fp.open("E:\\file\\edu.txt");
    char ch[1000],c;
    while(1)
    {
        fp>>ch;
        if(strcmp(ch,str)==0)
        {
            while(1)
            {
                fp>>ch;
                if(strcmp(ch,"#")==0)
                    break;
                else if(strcmp(ch,".")!=0)
                    printf("%s ",ch);
                else
                {
                    printf("\n\n");
                    p=0;
                }
            }
        }
        if(p==0)
            break;
    }

    fp.close();
    return 0;
}
int file6(char str[])
{
    int p;
    ifstream fp;
    fp.open("E:\\file\\are.txt");
    char ch[1000],c;
    while(1)
    {
        fp>>ch;
        if(strcmp(ch,str)==0)
        {
            while(1)
            {
                fp>>ch;
                if(strcmp(ch,"#")==0)
                    break;
                else if(strcmp(ch,".")!=0)
                    printf("%s ",ch);
                else
                {
                    printf("\n\n");
                    p=0;
                }
            }
        }
        if(p==0)
            break;
    }
    fp.close();
    return 0;
}
int file7(char str[])
{
    int p;
    ifstream fp;
    fp.open("E:\\file\\district.txt");
    char ch[1000],c;
    while(1)
    {
        fp>>ch;
        if(strcmp(ch,str)==0)
        {
            while(1)
            {
                fp>>ch;
                if(strcmp(ch,"#")==0)
                    break;
                else if(strcmp(ch,".")!=0)
                    printf("%s ",ch);
                else
                {
                    printf("\n\n");
                    p=0;
                }
            }

        }
        if(p==0)
            break;
    }

    fp.close();
    return 0;
}
void barguna(char str[])
{
    char a[1000],ch[]="barguna";
    int i,j,p=1,k,n=1;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);

        }
        else if(strcmp("sohel",a)==0)
        {
            p=0;
            file7(ch);


        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0 && (n%2)!=0)
    {
        n++;
        barguna1(str);
    }
    else
        n++;
}

void bhola(char str[])
{
    char a[1000],ch[]="bhola";
    int i,j,p=1,k,n=1;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
      else if(strcmp("sohel",a)==0)
        {
            p=0;
            file6(ch);

            file3(ch);
            file4(ch);
            file5(ch);

            file1(ch);
            file2(ch);

        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0 && (n%2)!=0)
    {
        n++;
        bhola1(str);
    }
    else
        n++;
}

void barisal(char str[])
{
    char a[1000],ch[]="barisal";
    int i,j,p=1,k,n=1;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
         else if(strcmp("sohel",a)==0)
        {
            p=0;
            file6(ch);

            file3(ch);
            file4(ch);
            file5(ch);

            file1(ch);
            file2(ch);

        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0 && (n%2)!=0)
    {
        n++;
        barisal1(str);
    }
    else
        n++;
}
void jhalokati(char str[])
{
    char a[1000],ch[]="jhalokati";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void patuakhali(char str[])
{
    char a[1000], ch[]="patuakhali";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void pirojpur(char str[])
{
    char a[1000],ch[]="pirojpur";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void bandarban(char str[])
{
    char a[1000],ch[]="bandarban";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void brahmanbaria(char str[])
{
    char a[1000],ch[]="brahmanbaria";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void chandpur(char str[])
{
    char a[1000],ch[]="chandpur";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void chittagong(char str[])
{
    char a[1000],ch[]="chittagong";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void comilla(char str[])
{
    char a[1000],ch[]="comilla";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void coxsbazar(char str[])
{
    char a[1000],ch[]="cox'sbazar";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void feni(char str[])
{
    char a[1000],ch[]="feni";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void khagrachhari(char str[])
{
    char a[1000],ch[]="khagrachhari";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void lakshmipur(char str[])
{
    char a[1000],ch[]="lakshmipur";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void noakhali(char str[])
{
    char a[1000],ch[]="noakhali";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void rangamati(char str[])
{
    char a[1000],ch[]="rangamati";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void dhaka(char str[])
{
    char a[1000],ch[]="dhaka";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void faridpur(char str[])
{
    char a[1000],ch[]="faridpur";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void gazipur(char str[])
{
    char a[1000],ch[]="gazipur";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void gopalganj(char str[])
{
    char a[1000],ch[]="gopalganj";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void jamalpur(char str[])
{
    char a[1000],ch[]="jamalpur";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void kishoreganj(char str[])
{
    char a[1000],ch[]="kishoreganj";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void madaripur(char str[])
{
    char a[1000],ch[]="madaripur";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void manikganj(char str[])
{
    char a[1000],ch[]="manikganj";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void munshiganj(char str[])
{
    char a[1000],ch[]="munshiganj";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void mymensingh(char str[])
{
    char a[1000],ch[]="mymensingh";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void narayanganj(char str[])
{
    char a[1000],ch[]="narayanganj";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void narsingdi(char str[])
{
    char a[1000],ch[]="narsingdi";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void netrakona(char str[])
{
    char a[1000],ch[]="netrakona";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void rajbari(char str[])
{
    char a[1000],ch[]="rajbari";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void shariatpur(char str[])
{
    char a[1000],ch[]="shariatpur";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void sherpur(char str[])
{
    char a[1000],ch[]="sherpur";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void tangail(char str[])
{
    char a[1000],ch[]="tangail";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void bagerhat(char str[])
{
    char a[1000],ch[]="bagerhat";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void chuadanga(char str[])
{
    char a[1000],ch[]="chuadanga";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void jessore(char str[])
{
    char a[1000],ch[]="jessore";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void jhenaidah(char str[])
{
    char a[1000],ch[]="jhenaidah";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void kushtia(char str[])
{
    char a[1000],ch[]="kushtia";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void khulna(char str[])
{
    char a[1000],ch[]="khulna";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void magura(char str[])
{
    char a[1000],ch[]="magura";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void meherpur(char str[])
{
    char a[1000],ch[]="magura";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void narail(char str[])
{
    char a[1000],ch[]="narail";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void satkhira(char str[])
{
    char a[1000],ch[]="satkhira";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void bogra(char str[])
{
    char a[1000],ch[]="bogra";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void joypurhat(char str[])
{
    char a[1000],ch[]="joypurhat";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void naogaon(char str[])
{
    char a[1000],ch[]="naogaon";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void natore(char str[])
{
    char a[1000],ch[]="natore";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void chapainawabganj(char str[])
{
    char a[1000],ch[]="chapainawabganj";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void pabna(char str[])
{
    char a[1000],ch[]="pabna";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            printf("School\n");
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void rajshahi(char str[])
{
    char a[1000],ch[]="rajshahi";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void sirajganj(char str[])
{
    char a[1000],ch[]="sirajganj";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void dinajpur(char str[])
{
    char a[1000],ch[]="dinajpur";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void gaibandha(char str[])
{
    char a[1000],ch[]="gaibandha";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void kurigram(char str[])
{
    char a[1000],ch[]="kurigram";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void lalmonirhat(char str[])
{
    char a[1000],ch[]="lalmonirhat";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void nilphamari(char str[])
{
    char a[1000],ch[]="nilphamari";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void panchagarh(char str[])
{
    char a[1000],ch[]="panchagarh";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void rangpur(char str[])
{
    char a[1000],ch[]="rangpur";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void thakurgaon(char str[])
{
    char a[1000],ch[]="thakurgaon";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void habiganj(char str[])
{
    char a[1000],ch[]="habiganj";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void moulvibazar(char str[])
{
    char a[1000],ch[]="moulvibazar";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void sunamganj(char str[])
{
    char a[1000],ch[]="sunamganj";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}
void sylhet(char str[])
{
    char a[1000],ch[]="sylhet";
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp("population",a)==0)
        {
            p=0;
            file4(ch);
        }
        else if(strcmp("area",a)==0)
        {
            p=0;
            file6(ch);
        }
        else if(strcmp("education",a)==0)
        {
            p=0;
            file5(ch);
        }
        else if(strcmp("school",a)==0)
        {
            p=0;
            file1(ch);
        }
        else if(strcmp("college",a)==0)
        {
            p=0;
            file2(ch);
        }
        else if(strcmp("upazila",a)==0)
        {
            p=0;
            file3(ch);
        }
        if(p==0)
            break;

        i=j;
    }
    if(p!=0)
        printf("Not Found\n");
}

int search5(char str[])
{
    int i,j,p=0,k=0,m,l,n=1,x;
    char str1[]="barguna", str2[]="barisal", str3[]="bhola", str4[]="jhalokati", str5[]="patuakhali", str6[]="pirojpur";
    char str7[]="bandarban", str8[]="brahmanbaria", str9[]="chandpur", str10[]="chittagong", str11[]="comilla", str12[]="cox's";
    char str13[]="feni", str14[]="khagrachhari", str15[]="lakshmipur", str16[]="noakhali", str17[]="rangamati";
    char str18[]="dhaka", str19[]="faridpur", str20[]="gazipur", str21[]="gopalganj", str22[]="jamalpur", str23[]="kishoreganj";
    char str24[]="madaripur", str25[]="manikganj", str26[]="munshiganj", str27[]="mymensingh", str28[]="narayanganj", str29[]="narsingdi";
    char str30[]="netrakona", str31[]="rajbari", str32[]="shariatpur", str33[]="sherpur", str34[]="tangail";
    char str35[]="bagerhat", str36[]="chuadanga", str37[]="jessore", str38[]="jhenaidah", str39[]="kushtia", str40[]="khulna";
    char str41[]="magura", str42[]="meherpur", str43[]="narail", str44[]="satkhira", str52[]="sirajganj";
    char str45[]="bogra", str46[]="joypurhat", str47[]="naogaon", str48[]="natore", str49[]="chapainawabganj", str50[]="pabna", str51[]="rajshahi";
    char str53[]="dinajpur", str54[]="gaibandha", str55[]="kurigram", str56[]="lalmonirhat", str57[]="nilphamari", str58[]="panchagarh";
    char str59[]="rangpur", str60[]="thakurgaon", str61[]="habiganj", str62[]="moulvibazar", str63[]="sunamganj", str64[]="sylhet";

    for(n==1; n<=64; n++)
    {
        if(n==1)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str1[k]=='\0')
                        break;
                    else if(str1[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str1);
                m=(p*100)/l;
                if(m>=50)
                {
                    barguna(str);
                    break;
                }
                if(m>=50)
                    break;
            }
        }
        if(n==2)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str2[k]=='\0')
                        break;
                    else if(str2[k]==str[j] || str2[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str2);
                m=(p*100)/l;
                if(m>=70)
                {
                    barisal(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==3)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str3[k]=='\0')
                        break;
                    else if(str3[k]==str[j] || str3[k+1]==str[j] || str4[k-1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str3);
                m=(p*100)/l;
                if(m>=80)
                {
                    bhola(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }
        if(n==4)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str4[k]=='\0')
                        break;
                    else if(str4[k]==str[j]  || str4[k+1]==str[j] || str[k+2]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str4);
                m=(p*100)/l;
                if((m>=65))
                {
                    jhalokati(str);
                    break;
                }
                if(m>=65)
                    break;
            }
        }
        if(n==5)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str5[k]=='\0')
                        break;
                    else if(str5[k]==str[j] || str5[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str5);
                m=(p*100)/l;
                if(m>=70)
                {
                    patuakhali(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==6)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str6[k]=='\0')
                        break;
                    else if(str6[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str6);
                m=(p*100)/l;
                if(m>=60)
                {
                    pirojpur(str);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==7)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str7[k]=='\0')
                        break;
                    else if(str7[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str7);
                m=(p*100)/l;
                if(m>=60)
                {
                    bandarban(str);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==8)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str8[k]=='\0')
                        break;
                    else if(str8[k]==str[j]  || str8[k+1]==str[j] || str8[k+2]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str8);
                m=(p*100)/l;
                if(m>=80)
                {
                    brahmanbaria(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }

        if(n==9)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str9[k]=='\0')
                        break;
                    else if(str9[k]==str[j]  || str9[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str9);
                m=(p*100)/l;
                if(m>=70)
                {
                    chandpur(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }

        if(n==10)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str10[k]=='\0')
                        break;
                    else if(str10[k]==str[j]  || str10[k+1]==str[j] || str10[k+2]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str10);
                m=(p*100)/l;
                if(m>=80)
                {
                    chittagong(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }
        if(n==11)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str11[k]=='\0')
                        break;
                    else if(str11[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str11);
                m=(p*100)/l;
                if(m>=50)
                {
                    comilla(str);
                    break;
                }
                if(m>=50)
                    break;
            }
        }

        if(n==12)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str12[k]=='\0')
                        break;
                    else if(str12[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str12);
                m=(p*100)/l;
                if(m>=80)
                {
                    coxsbazar(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }

        if(n==13)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str13[k]=='\0')
                        break;
                    else if(str13[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str13);
                m=(p*100)/l;
                if(m>=75)
                {
                    feni(str);
                    break;
                }
                if(m>=75)
                    break;
            }
        }

        if(n==14)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str14[k]=='\0')
                        break;
                    else if(str14[k]==str[j]  || str14[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str14);
                m=(p*100)/l;
                if(m>=60)
                {
                    khagrachhari(str);
                    break;
                }
                if(m>=60)
                    break;
            }
        }

        if(n==15)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str15[k]=='\0')
                        break;
                    else if(str15[k]==str[j]  || str15[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str15);
                m=(p*100)/l;
                if(m>=70)
                {
                    lakshmipur(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }

        if(n==16)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str16[k]=='\0')
                        break;
                    else if(str16[k]==str[j] || str16[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str16);
                m=(p*100)/l;
                if(m>=80)
                {
                    noakhali(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }
        if(n==17)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str17[k]=='\0')
                        break;
                    else if(str17[k]==str[j] || str17[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str17);
                m=(p*100)/l;
                if(m>=80)
                {
                    rangamati(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }
        if(n==18)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str18[k]=='\0')
                        break;
                    else if(str18[k]==str[j] || str18[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str18);
                m=(p*100)/l;
                if(m>=70)
                {
                    dhaka(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==19)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str19[k]=='\0')
                        break;
                    else if(str19[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str19);
                m=(p*100)/l;
                if(m>60)
                {
                    faridpur(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }
        if(n==20)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str20[k]=='\0')
                        break;
                    else if(str20[k]==str[j] || str20[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str20);
                m=(p*100)/l;
                if(m>=70)
                {
                    gazipur(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==21)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str21[k]=='\0')
                        break;
                    else if(str21[k]==str[j]  || str21[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str21);
                m=(p*100)/l;
                if(m>=70)
                {
                    gopalganj(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==22)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str22[k]=='\0')
                        break;
                    else if(str22[k]==str[j] || str22[k+1]==str[j])
                        p++;
                    k++;
                }
                i=j;
                l=strlen(str22);
                m=(p*100)/l;
                if(m>=60)
                {
                    jamalpur(str);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==23)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str23[k]=='\0')
                        break;
                    else if(str23[k]==str[j]  || str23[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str23);
                m=(p*100)/l;
                if(m>=70)
                {
                    kishoreganj(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==24)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str24[k]=='\0')
                        break;
                    else if(str24[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str24);
                m=(p*100)/l;
                if(m>=50)
                {
                    madaripur(str);
                    break;
                }
                if(m>=50)
                    break;
            }
        }
        if(n==25)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str25[k]=='\0')
                        break;
                    else if(str25[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str25);
                m=(p*100)/l;
                if(m>=50)
                {
                    manikganj(str);
                    break;
                }
                if(m>=50)
                    break;
            }
        }
        if(n==26)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str26[k]=='\0')
                        break;
                    else if(str26[k]==str[j]  || str26[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str26);
                m=(p*100)/l;
                if(m>=70)
                {
                    munshiganj(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==27)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str27[k]=='\0')
                        break;
                    else if(str27[k]==str[j]  || str27[k+1]==str[j] || str27[k+2]==str[j]  || str27[k-1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str27);
                m=(p*100)/l;
                if(m>=70)
                {
                    mymensingh(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==28)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str28[k]=='\0')
                        break;
                    else if(str28[k]==str[j]  || str28[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str28);
                m=(p*100)/l;
                if(m>=70)
                {
                    narayanganj(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==29)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str17[k]=='\0')
                        break;
                    else if(str29[k]==str[j]  || str29[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str29);
                m=(p*100)/l;
                if(m>=55)
                {
                    narsingdi(str);
                    break;
                }
                if(m>=55)
                    break;
            }
        }
        if(n==30)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str30[k]=='\0')
                        break;
                    else if(str30[k]==str[j]  || str30[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str30);
                m=(p*100)/l;
                if(m>=70)
                {
                    netrakona(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==31)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str31[k]=='\0')
                        break;
                    else if(str31[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str31);
                m=(p*100)/l;
                if(m>=50)
                {
                    rajbari(str);
                    break;
                }
                if(m>=50)
                    break;
            }
        }
        if(n==32)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str32[k]=='\0')
                        break;
                    else if(str32[k]==str[j]  || str32[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str32);
                m=(p*100)/l;
                if(m>=70)
                {
                    shariatpur(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==33)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str33[k]=='\0')
                        break;
                    else if(str33[k]==str[j] || str33[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str33);
                m=(p*100)/l;
                if(m>=80)
                {
                    sherpur(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }

        if(n==34)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str34[k]=='\0')
                        break;
                    else if(str34[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str34);
                m=(p*100)/l;
                if(m>=50)
                {
                    tangail(str);
                    break;
                }
                if(m>=50)
                    break;
            }
        }

        if(n==35)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str35[k]=='\0')
                        break;
                    else if(str35[k]==str[j] || str35[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str35);
                m=(p*100)/l;
                if(m>=80)
                {
                    bagerhat(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }

        if(n==36)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str36[k]=='\0')
                        break;
                    else if(str36[k]==str[j]  || str36[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str36);
                m=(p*100)/l;
                if(m>=70)
                {
                    chuadanga(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }

        if(n==37)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str37[k]=='\0')
                        break;
                    else if(str37[k]==str[j]  || str37[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str37);
                m=(p*100)/l;
                if(m>=70)
                {
                    jessore(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==38)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str38[k]=='\0')
                        break;
                    else if(str38[k]==str[j]  || str38[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str38);
                m=(p*100)/l;
                if(m>=70)
                {
                    jhenaidah(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }

        if(n==39)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str39[k]=='\0')
                        break;
                    else if(str39[k]==str[j] || str39[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str39);
                m=(p*100)/l;
                if(m>=80)
                {
                    kushtia(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }

        if(n==40)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str40[k]=='\0')
                        break;
                    else if(str40[k]==str[j] || str40[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str40);
                m=(p*100)/l;
                if(m>=80)
                {
                    khulna(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }
        if(n==41)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str41[k]=='\0')
                        break;
                    else if(str41[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str41);
                m=(p*100)/l;
                if(m>=70)
                {
                    magura(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }

        if(n==42)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str42[k]=='\0')
                        break;
                    else if(str42[k]==str[j] || str42[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str42);
                m=(p*100)/l;
                printf("%d",m);
                if(m>=80)
                {
                    meherpur(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }
        if(n==43)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str43[k]=='\0')
                        break;
                    else if(str43[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str43);
                m=(p*100)/l;
                if(m>=80)
                {
                    narail(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }

        if(n==44)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str44[k]=='\0')
                        break;
                    else if(str44[k]==str[j] || str44[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str44);
                m=(p*100)/l;
                if(m>=80)
                {
                    satkhira(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }
        if(n==45)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str45[k]=='\0')
                        break;
                    else if(str45[k]==str[j]  || str45[k+1]==str[j] || str45[k-1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str45);
                m=(p*100)/l;
                if(m>=80)
                {
                    bogra(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }
        if(n==46)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str46[k]=='\0')
                        break;
                    else if(str46[k]==str[j] || str46[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str46);
                m=(p*100)/l;
                if(m>=80)
                {
                    joypurhat(str);
                    break;
                }
                if(m>=66)
                    break;
            }
        }
        if(n==66)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str47[k]=='\0')
                        break;
                    else if(str47[k]==str[j]  || str47[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str47);
                m=(p*100)/l;
                if(m>=70)
                {
                    naogaon(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==48)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str48[k]=='\0')
                        break;
                    else if(str48[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str48);
                m=(p*100)/l;
                if(m>=80)
                {
                    natore(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }
        if(n==49)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str49[k]=='\0')
                        break;
                    else if(str49[k]==str[j]  || str49[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str49);
                m=(p*100)/l;
                if(m>=70)
                {
                    chapainawabganj(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==50)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str50[k]=='\0')
                        break;
                    else if(str50[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str50);
                m=(p*100)/l;
                if(m>=80)
                {
                    pabna(str);
                    break;
                }
                if(m>=80)
                    break;
            }
        }
        if(n==51)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str51[k]=='\0')
                        break;
                    else if(str51[k]==str[j] || str51[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str51);
                m=(p*100)/l;
                if(m>=70)
                {
                    rajshahi(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==52)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str52[k]=='\0')
                        break;
                    else if(str52[k]==str[j] || str52[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str52);
                m=(p*100)/l;
                if(m>=70)
                {
                    sirajganj(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==53)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str53[k]=='\0')
                        break;
                    else if(str53[k]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str53);
                m=(p*100)/l;
                if(m>=50)
                {
                    dinajpur(str);
                    break;
                }
                if(m>=50)
                    break;
            }
        }
        if(n==54)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str54[k]=='\0')
                        break;
                    else if(str54[k]==str[j] || str55[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str54);
                m=(p*100)/l;
                if(m>=70)
                {
                    gaibandha(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==55)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str55[k]=='\0')
                        break;
                    else if(str55[k]==str[j] || str55[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str55);
                m=(p*100)/l;
                if(m>=70)
                {
                    kurigram(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==56)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str56[k]=='\0')
                        break;
                    else if(str56[k]==str[j] || str56[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str56);
                m=(p*100)/l;
                if(m>=70)
                {
                    lalmonirhat(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==57)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str57[k]=='\0')
                        break;
                    else if(str57[k]==str[j] || str57[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str57);
                m=(p*100)/l;
                if(m>=70)
                {
                    nilphamari(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==58)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str58[k]=='\0')
                        break;
                    else if(str58[k]==str[j]  || str58[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str58);
                m=(p*100)/l;
                if(m>=70)
                {
                    panchagarh(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==59)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str59[k]=='\0')
                        break;
                    else if(str59[k]==str[j] || str59[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str59);
                m=(p*100)/l;
                if(m>=70)
                {
                    rangpur(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==60)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str60[k]=='\0')
                        break;
                    else if(str60[k]==str[j]  || str60[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str60);
                m=(p*100)/l;
                if(m>=70)
                {
                    thakurgaon(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==61)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str61[k]=='\0')
                        break;
                    else if(str61[k]==str[j]  || str61[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str61);
                m=(p*100)/l;
                if(m>=60)
                {
                    habiganj(str);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==62)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str62[k]=='\0')
                        break;
                    else if(str62[k]==str[j]  || str62[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str62);
                m=(p*100)/l;
                if(m>=70)
                {
                    moulvibazar(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==63)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str63[k]=='\0')
                        break;
                    else if(str63[k]==str[j] || str63[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str63);
                m=(p*100)/l;
                if(m>=70)
                {
                    sunamganj(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }
        if(n==64)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str64[k]=='\0')
                        break;
                    else if(str64[k]==str[j]  || str64[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str64);
                m=(p*100)/l;
                if(m>=70)
                {
                    sylhet(str);
                    break;
                }
                if(m>=70)
                    break;
            }
        }

        if(m>=70)
            break;
    }
}
int Search1(char str[])
{
    char str1[1000]="barisal",a[1000];
    int i,j,p=1,k;
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        for(j=i; str[j]!=' '; j++)
        {
            a[k]=str[j];
            k++;
        }
        a[k]='\0';
        if(strcmp(str1,a)==0)
        {
            p=0;
            barisal(str);
            break;
        }
        else if(strcmp("barguna",a)==0)
        {
            p=0;
            barguna(str);
            break;
        }
        else if(strcmp("bhola",a)==0)
        {
            p=0;
            bhola(str);
            break;
        }
        else if(strcmp("jhalokati",a)==0)
        {
            p=0;
            jhalokati(str);
            break;
        }
        else if(strcmp("patuakhali",a)==0)
        {
            p=0;
            patuakhali(str);
            break;
        }
        else if(strcmp("pirojpur",a)==0)
        {
            p=0;
            pirojpur(str);
            break;
        }
        else if(strcmp("bandarban",a)==0)
        {
            p=0;
            bandarban(str);
            break;
        }
        else if(strcmp("brahmanbaria",a)==0)
        {
            p=0;
            brahmanbaria(str);
            break;
        }
        else if(strcmp("chandpur",a)==0)
        {
            p=0;
            chandpur(str);
            break;
        }
        else if(strcmp("chittagong",a)==0)
        {
            p=0;
            chittagong(str);
            break;
        }
        else if(strcmp("comilla",a)==0)
        {
            p=0;
            comilla(str);
            break;
        }
        else if(strcmp("cox'sbazar",a)==0)
        {
            p=0;
            coxsbazar(str);
            break;
        }
        else if(strcmp("feni",a)==0)
        {
            p=0;
            feni(str);
            break;
        }
        else if(strcmp("khagrachhari",a)==0)
        {
            p=0;
            khagrachhari(str);
            break;
        }
        else if(strcmp("lakshmipur",a)==0)
        {
            p=0;
            lakshmipur(str);
            break;
        }
        else if(strcmp("noakhali",a)==0)
        {
            p=0;
            noakhali(str);
            break;
        }
        else if(strcmp("rangamati",a)==0)
        {
            p=0;
            rangamati(str);
            break;
        }
        else if(strcmp("dhaka",a)==0)
        {
            p=0;
            dhaka(str);
            break;
        }
        else if(strcmp("faridpur",a)==0)
        {
            p=0;
            faridpur(str);
            break;
        }
        else if(strcmp("gazipur",a)==0)
        {
            p=0;
            gazipur(str);
            break;
        }
        else if(strcmp("gopalganj",a)==0)
        {
            p=0;
            gopalganj(str);
            break;
        }
        else if(strcmp("jamalpur",a)==0)
        {
            p=0;
            jamalpur(str);
            break;
        }
        else if(strcmp("kishoreganj",a)==0)
        {
            p=0;
            kishoreganj(str);
            break;
        }
        else if(strcmp("madaripur",a)==0)
        {
            p=0;
            madaripur(str);
            break;
        }
        else if(strcmp("manikganj",a)==0)
        {
            p=0;
            manikganj(str);
            break;
        }
        else if(strcmp("munshiganj",a)==0)
        {
            p=0;
            munshiganj(str);
            break;
        }
        else if(strcmp("mymensingh",a)==0)
        {
            p=0;
            mymensingh(str);
            break;
        }
        else if(strcmp("narayanganj",a)==0)
        {
            p=0;
            narayanganj(str);
            break;
        }
        else if(strcmp("narsingdi",a)==0)
        {
            p=0;
            narsingdi(str);
            break;
        }
        else if(strcmp("netrakona",a)==0)
        {
            p=0;
            netrakona(str);
            break;
        }
        else if(strcmp("rajbari",a)==0)
        {
            p=0;
            rajbari(str);
            break;
        }
        else if(strcmp("shariatpur",a)==0)
        {
            p=0;
            shariatpur(str);
            break;
        }
        else if(strcmp("sherpur",a)==0)
        {
            p=0;
            sherpur(str);
            break;
        }
        else if(strcmp("tangail",a)==0)
        {
            p=0;
            tangail(str);
            break;
        }
        else if(strcmp("bagerhat",a)==0)
        {
            p=0;
            bagerhat(str);
            break;
        }
        else if(strcmp("chuadanga",a)==0)
        {
            p=0;
            chuadanga(str);
            break;
        }
        else if(strcmp("jessore",a)==0)
        {
            p=0;
            jessore(str);
            break;
        }
        else if(strcmp("jhenaidah",a)==0)
        {
            p=0;
            jhenaidah(str);
            break;
        }
        else if(strcmp("kushtia",a)==0)
        {
            p=0;
            kushtia(str);
            break;
        }
        else if(strcmp("khulna",a)==0)
        {
            p=0;
            khulna(str);
            break;
        }
        else if(strcmp("magura",a)==0)
        {
            p=0;
            magura(str);
            break;
        }
        else if(strcmp("narail",a)==0)
        {
            p=0;
            narail(str);
            break;
        }
        else if(strcmp("satkhira",a)==0)
        {
            p=0;
            satkhira(str);
            break;
        }
        else if(strcmp("bogra",a)==0)
        {
            p=0;
            bogra(str);
            break;
        }
        else if(strcmp("joypurhat",a)==0)
        {
            p=0;
            joypurhat(str);
            break;
        }
        else if(strcmp("naogaon",a)==0)
        {
            p=0;
            naogaon(str);
            break;
        }
        else if(strcmp("natore",a)==0)
        {
            p=0;
            natore(str);
            break;
        }
        else if(strcmp("chapainawabganj",a)==0)
        {
            p=0;
            chapainawabganj(str);
            break;
        }
        else if(strcmp("pabna",a)==0)
        {
            p=0;
            pabna(str);
            break;
        }
        else if(strcmp("rajshahi",a)==0)
        {
            p=0;
            rajshahi(str);
            break;
        }
        else if(strcmp("sirajganj",a)==0)
        {
            p=0;
            sirajganj(str);
            break;
        }
        else if(strcmp("dinajpur",a)==0)
        {
            p=0;
            dinajpur(str);
            break;
        }
        else if(strcmp("gaibandha",a)==0)
        {
            p=0;
            gaibandha(str);
            break;
        }
        else if(strcmp("kurigram",a)==0)
        {
            p=0;
            kurigram(str);
            break;
        }
        else if(strcmp("lalmonirhat",a)==0)
        {
            p=0;
            lalmonirhat(str);
            break;
        }
        else if(strcmp("nilphamari",a)==0)
        {
            p=0;
            nilphamari(str);
            break;
        }
        else if(strcmp("panchagarh",a)==0)
        {
            p=0;
            panchagarh(str);
            break;
        }
        else if(strcmp("rangpur",a)==0)
        {
            p=0;
            rangpur(str);
            break;
        }
        else if(strcmp("thakurgaon",a)==0)
        {
            p=0;
            thakurgaon(str);
            break;
        }
        else if(strcmp("habiganj",a)==0)
        {
            p=0;
            habiganj(str);
            break;
        }
        else if(strcmp("moulvibazar",a)==0)
        {
            p=0;
            moulvibazar(str);
            break;
        }
        else if(strcmp("sunamganj",a)==0)
        {
            p=0;
            sunamganj(str);
            break;
        }
        else if(strcmp("sylhet",a)==0)
        {
            p=0;
            sylhet(str);
            break;
        }
        if(p==0)
            break;
        i=j;
    }
    if(p!=0)
        search5(str);
}
void strlwr(char s[])
{
    int c=0;
    while(s[c]!='\0')
    {
        if(s[c]>='A' && s[c]<='Z')
            s[c]=s[c]+32;
        c++;
    }

}
int main()
{
    char str[1000];
    while(1){
    system("color 6");
    cout<<"            Please Enter The Information Type What You Need???"<<endl<<endl<<endl<<"   SEARCH    :     ";
    gets(str);
    strlwr(str);
    Search1(str);
    }

    return 0;
}
void barguna1(char str[])
{
    int i, j, p=0, k=0, m, l, n=1;
    char str1[]="population", str2[]="area", str3[]="education", str4[]="school", str5[]="college", str6[]="upazila", str7[]="sohel";

    for(n==1; n<=7; n++)
    {
        if(n==1)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0, p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str1[k]=='\0')
                        break;
                    else if(str1[k]==str[j]  || str1[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str1);
                m=(p*100)/l;
                if(m>=60)
                {
                    barguna(str1);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==2)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str2[k]=='\0')
                        break;
                    else if(str2[k]==str[j] && str2[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str2);
                m=(p*100)/l;
                if(m>=60)
                {
                    barguna(str2);
                    break;
                }
                if(m>=0)
                    break;
            }
        }
        if(n==3)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str3[k]=='\0')
                        break;
                    else if(str3[k]==str[j] || str3[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str3);
                m=(p*100)/l;
                if(m>=60)
                {
                    barguna(str3);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==4)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str4[k]=='\0')
                        break;
                    else if(str4[k]==str[j]  || str4[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str4);
                m=(p*100)/l;
                if((m>=60))
                {
                    barguna(str4);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==5)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str5[k]=='\0')
                        break;
                    else if(str5[k]==str[j] || str5[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str5);
                m=(p*100)/l;
                if(m>=60 )
                {
                    barguna(str5);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==6)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str6[k]=='\0')
                        break;
                    else if(str6[k]==str[j] || str6[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str6);
                m=(p*100)/l;
                if(m>=60)
                {
                    barguna(str6);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
         if(m>=60)
            break;
        if(n==7)
            barguna(str7);
    }
}
void bhola1(char str[])
{
    int i, j, p=0, k=0, m, l, n=1;
    char str1[]="population", str2[]="area", str3[]="education", str4[]="school", str5[]="college", str6[]="upazila", str7[]="sohel";

    for(n==1; n<=7; n++)
    {
        if(n==1)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0, p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str1[k]=='\0')
                        break;
                    else if(str1[k]==str[j]  || str1[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str1);
                m=(p*100)/l;
                if(m>=60)
                {
                    bhola(str1);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==2)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str2[k]=='\0')
                        break;
                    else if(str2[k]==str[j] && str2[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str2);
                m=(p*100)/l;
                if(m>=60)
                {
                    bhola(str2);
                    break;
                }
                if(m>=0)
                    break;
            }
        }
        if(n==3)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str3[k]=='\0')
                        break;
                    else if(str3[k]==str[j] || str3[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str3);
                m=(p*100)/l;
                if(m>=60)
                {
                    bhola(str3);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==4)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str4[k]=='\0')
                        break;
                    else if(str4[k]==str[j]  || str4[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str4);
                m=(p*100)/l;
                if((m>=60))
                {
                    bhola(str4);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==5)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str5[k]=='\0')
                        break;
                    else if(str5[k]==str[j] || str5[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str5);
                m=(p*100)/l;
                if(m>=60 )
                {
                    bhola(str5);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==6)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str6[k]=='\0')
                        break;
                    else if(str6[k]==str[j] || str6[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str6);
                m=(p*100)/l;
                if(m>=60)
                {
                    bhola(str6);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
         if(m>=60)
            break;
        if(n==7)
            bhola(str7);
    }
}
void barisal1(char str[])
{
    int i, j, p=0, k=0, m, l, n=1;
    char str1[]="population", str2[]="area", str3[]="education", str4[]="school", str5[]="college", str6[]="upazila", str7[]="sohel";

    for(n==1; n<=7; n++)
    {
        if(n==1)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0, p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str1[k]=='\0')
                        break;
                    else if(str1[k]==str[j]  || str1[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str1);
                m=(p*100)/l;
                if(m>=60)
                {
                    barisal(str1);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==2)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str2[k]=='\0')
                        break;
                    else if(str2[k]==str[j] && str2[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str2);
                m=(p*100)/l;
                if(m>=60)
                {
                    barisal(str2);
                    break;
                }
                if(m>=0)
                    break;
            }
        }
        if(n==3)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str3[k]=='\0')
                        break;
                    else if(str3[k]==str[j] || str3[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str3);
                m=(p*100)/l;
                if(m>=60)
                {
                    barisal(str3);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==4)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str4[k]=='\0')
                        break;
                    else if(str4[k]==str[j]  || str4[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str4);
                m=(p*100)/l;
                if((m>=60))
                {
                    barisal(str4);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==5)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str5[k]=='\0')
                        break;
                    else if(str5[k]==str[j] || str5[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str5);
                m=(p*100)/l;
                if(m>=60 )
                {
                    barisal(str5);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(n==6)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                k=0,p=0;
                for(j=i; str[j]!=' '; j++)
                {
                    if(str6[k]=='\0')
                        break;
                    else if(str6[k]==str[j] || str6[k+1]==str[j])
                        p++;

                    k++;
                }
                i=j;
                l=strlen(str6);
                m=(p*100)/l;
                if(m>=60)
                {
                    barisal(str6);
                    break;
                }
                if(m>=60)
                    break;
            }
        }
        if(m>=60)
            break;
        if(n==7)
            barisal(str7);
    }
}
