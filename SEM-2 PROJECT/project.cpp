#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	int ch,ch8,n=1,m=1,ch1,z,i,flag=0,flag2=0;
	string inp1="",inp2="",qc="",cpp=".cpp",exe=".exe",s1="sam1.txt",s2="sam2.txt",i1="in1.txt",i2="in2.txt",f1="",f2="",j1="",j2="",l1="sam1.exe",l2="sam2.exe",op="<";
	string qc1="",str="",dir1="",str1="",str2="",k1="",k2="",dir2="",b1="",b="",c1="",c2="",b2="",a1="",a2="",p1="",p2="",sign="",login="",a3="",p3="",p31="";

	ifstream infile;
	ofstream outfile;
	system("color 4e");
		cout<<"\t\t\t\t\t\t\t\t\t\t\tWELCOME TO CODER-EARTH\n";
	while(n!=0)
	{
	cout<<"PRESS 1 TO ENTER AS ADMIN\n";
	cout<<"PRESS 2 TO ENTER AS USER\n";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			cout<<"YOU WANT TO MAKE A TEST\n";
			cout<<"ENTER USERNAME AND PASSWORD\n";
			cout<<"USERNAME\n";
			cin>>a1;
			cout<<"PASSWORD\n";
			cin>>p1;
			//if(((a1.strcmp("HK")==0 && (p1.strcmp("KAUSHIK")==0)))||((a1.strcmp("GURUSHARANSINGH")==0 && (p1.strcmp("PUNJAB")==0))))
			if(((a1=="HK")&&(p1=="KAUSHIK"))||((a1=="GURUSHARANSINGH")&&(p1=="PUNJAB")))
			{
			cout<<"ENTER QUESTION CODE\n";
			cin>>b;
			cout<<"GO AHEAD AND WRITE QUESTION ONCE YOU ARE DONE ENTER // \n";
			 outfile.open("questions.txt",ios::app);
	            while(str1!="//")
				{
					getline(cin,str1);
					outfile<<str1<<endl;
				}
						str1=" ";
	          	outfile.close();
				outfile.clear();
				b1=b+s1;
				cout<<"WRITE FUNCTION FOR TEST CASE 1 ONCE DONE ENTER // \n";
				
				outfile.open(b1.c_str(),ios::app);
	            while(str1!="//")
				{
					getline(cin,str1);
					outfile<<str1<<endl;
					
				}
					str1=" ";	
	          	outfile.close();
				outfile.clear();
				
				b2=b+s2;
			
				cout<<"WRITE FUNCTION FOR TEST CASE 2 ONCE DONE ENTER // \n";
				
				outfile.open(b2.c_str(),ios::app);
	            while(str1!="//")
				{
					getline(cin,str1);
					outfile<<str1<<endl;
				}
						str1=" ";
	          	outfile.close();
				outfile.clear();	
				
				c1=b+i1;
				c2=b+i2;
					cout<<"HOW MANY INPUTS ARE REQUIRED FOR PROGRAM \n";
					cin>>z;
					
					cout<<"GIVE INPUT FOR 1ST TEST CASE \n";
												
				outfile.open(c1.c_str(),ios::app);
	            for(i=0;i<z;i++)
				{
					cin>>str1;
					outfile<<str1<<endl;
					str1=" ";
				}
				
	          	outfile.close();
				outfile.clear();
				
			cout<<"GIVE INPUT FOR 2ST TEST CASE \n";
				
				outfile.open(c2.c_str(),ios::app);
	            for(i=0;i<z;i++)
				{
					cin>>str1;
					outfile<<str1<<endl;
					str1=" ";
				}
						
	          	outfile.close();
				outfile.clear();
				cout<<"WE ARE DONE\n"<<endl;
		}
		else
		{
			cout<<"YOU ARE NOT THE ADMIN\n";
		}
			break;
			case 2:
				
				cout<<"PRESS 1 FOR LOGIN \n";
				cout<<"PRESS 2 FOR SIGNUP \n";
				cin>>ch8;
				if(ch8==1)
				{
			cout<<"ENTER USERNAME AND PASSWORD\n";
			cout<<"USERNAME\n";
			cin>>a2;
			cout<<"PASSWORD\n";
			cin>>p2;
			login=a2+p2;
			
			    infile.open("users.txt",ios::in);
				
				while(getline(infile,str1))
				{
					if(str1==login)
					{
						flag=1;
					}
				}
				infile.close();
				infile.clear();
				if(flag==1)
				{
					
				cout<<"\n";
				cout<<"LOGIN SUCCESSFUL\n";
			       cout<<"\n";
				cout<<"HERE YOU GO WITH YOUR QUESTIONS\n";
				
				infile.open("questions.txt");
				while(getline(infile,str))
				{
					cout<<str<<endl;
				}
				infile.close();
				infile.clear();	
				
			cout<<"ENTER THE QUESTION CODE\n";
	         cin>>qc;
	            //qc1=qc+cpp;
	            infile.open("base.cpp",ios::app);
				infile.close();				
				infile.clear();
	           // dir1=dir+"base.cpp";
	          while(m!=0)
	          {
			    system("base.cpp");
	           	cout<<"IF YOU HAVE MADE THE PROGRAM PRESS 1 FOR TESTING\n";
	            cin>>ch1;
	            
	            outfile.open("sam1.cpp",ios::app);
	            infile.open("base.cpp",ios::in);
				
				while(getline(infile,str1))
				{
					outfile<<str1<<endl;
				}
				infile.close();
				infile.clear();
				j1=qc+s1;
				
	          infile.open(j1.c_str(),ios::in);
				
				while(getline(infile,str1))
				{
					outfile<<str1<<endl;
				}
				infile.close();
				infile.clear();
				outfile.close();
				outfile.clear();
				
				
				 outfile.open("sam2.cpp",ios::app);
	            infile.open("base.cpp",ios::in);
				
				while(getline(infile,str2))
				{
					outfile<<str2<<endl;
				}
				infile.close();
				infile.clear();
				j2=qc+s2;
				
	          infile.open(j2.c_str(),ios::in);
				
				while(getline(infile,str2))
				{
					outfile<<str2<<endl;
				}
				infile.close();
				infile.clear();
				outfile.close();
				outfile.clear();
	            
	            
	           system("g++ -o sam1.exe sam1.cpp");
	           system("g++ -o sam2.exe sam2.cpp");
	            f1=qc+i1;
	            f2=qc+i2;
	            k1=(l1+op+f1);
	            k2=l2+op+f2;
	              
				system(k1.c_str());
				system(k2.c_str());
				dir1=" ";
				dir2=" ";
				k1=" ";
				k2=" ";
			remove("sam1.exe");remove("sam1.cpp");remove("sam2.exe");remove("sam2.cpp");
		
		cout<<"PRESS 1 IF YOU WANT TO RECTIFY CODE FOR ANY ERRORS\n";
	    cout<<"PRESS 0 FOR EXIT\n";
				cin>>m;
			}
			remove("base.cpp");
		}
		else
		{
			cout<<"INVALID ATTEMPT\n";
			cout<<"SIGNUP FIRST\n";
		}
		
	}
	
	else
	if(ch8==2)
	{
			cout<<"ENTER USERNAME AND PASSWORD\n";
			cout<<"USERNAME\n";
			cin>>a3;
			
			infile.open("usersname.txt",ios::in);
				
				while(getline(infile,str1))
				{
					if(str1==a3)
					flag2=1;
				}
				infile.close();
				infile.clear();
						
			if(flag2==0)
			{
			            			
			cout<<"PASSWORD\n";
			cin>>p3;
			cout<<"CONFIRM PASSWORD\n";
			cin>>p31;
			
			if(p3==p31)
			{
				sign=a3+p3;
				 outfile.open("users.txt",ios::app);
	            outfile<<sign<<endl;
				outfile.close();
				outfile.clear();
				cout<<"\n";
				cout<<"SIGNUP SUCCESSFUL\n";
						outfile.open("usersname.txt",ios::app);
	            outfile<<a3<<endl;
				outfile.close();
				outfile.clear();
			cout<<"\n";
			}
			else
			{
			cout<<"INVALID ATTEMPT\n";
		
			}
		}
		else
		{
			cout<<"\n";
			cout<<"USERNAME ALREADY EXISTS GO AND TRY AGAIN\n";
			cout<<"\n";
		}
			
		
	}
	else
	{
		cout<<"INVALID CHOICE\n";
			
	}
	
				break;
				default :
					cout<<"INVALID CHOICE\n";
	
	}
	 	cout<<"PRESS 1 FOR GOING TO MENU AGAIN\n";
	    cout<<"PRESS 0 FOR EXIT\n";
	    cin>>n;
	
}
}
