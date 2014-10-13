#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<process.h>
#include<iomanip>
#include<windows.h>
using namespace std;
int i,j,top=-1; short s; time_t t; char c; HANDLE h;
class p
{
 char g_2[50],g_3[50],g_4[50],g_s[50],g_r[50],name[20],brand[20],
      bod_d[50],bod_w[5],
      di_t[50],di_s[50],di_m[50],
      s_a[50],s_l[50],
      m_c[50],m_i[50],
      da_g[50],da_e[50],da_w[100],da_b[50],da_u[50],
      c_p[50],c_f[10][50],c_v[50],c_s[50],
      f_o[100],f_cpu[100],f_gpu[50],f_s[10][50],f_m[100],f_b[50],f_r[50], f_gps[50],f_col[5][50],f_misc[20][50],
      bat_b[50],bat_s[50],bat_t[50],bat_m[50];
float price; int f_x,c_x,f_cc,f_f;
public:
void in(); void d(); static void comp();  static void pr(); static void b(); static void n(); static void ca();
}ob,temp[5];
void p::in()
{cin.ignore();
 cout<<"\nName: "; gets(name); cout<<"Brand: "; gets(brand); cout<<"\nGeneral:\n2G: "; gets(g_2); cout<<"3g: "; gets(g_3); cout<<"4g: "; gets(g_4); cout<<"Sim: "; gets(g_s); cout<<"released: "; gets(g_r);
 cout<<"\nBody:\nDimensions: "; gets(bod_d); cout<<"Weight "; gets(bod_w); cout<<"\nDisplay:\nDisp type: ";gets(di_t); cout<<"Size: "; gets(di_s); cout<<"Multitouch: "; gets(di_m); 
 cout<<"\nSound:\nalert: "; gets(s_a); cout<<"Loudspeaker: "; gets(s_l); cout<<"\nMemory:\nCard slot: "; gets(m_c); cout<<"internal: "; gets(m_i); cout<<"\ndata:\ngprs: "; gets(da_g); cout<<"edge: "; gets(da_e); 
 cout<<"wlan: "; gets(da_w); cout<<"bluetooth: "; gets(da_b); cout<<"usb:"; gets(da_u);
 cout<<"\nCamera:\nPrimary: "; gets(c_p); cout<<" enter the no of cam features: ";  cin>>c_x; cin.ignore();
 if(c_x>0) cout<<"Enter "<<c_x<<" features:\n";
 for(i=0;i<c_x;i++) gets(c_f[i]);
 cout<<"Video: "; gets(c_v); cout<<"secondary:"; gets(c_s); cout<<"\nFeatures:\nos: "; gets(f_o); cout<<"cpu:"; gets(f_cpu); cout<<"gpu "; gets(f_gpu); cout<<"sensors:\nenter the no of sensors: ";  cin>>f_x; cin.ignore();
 if(f_x>0) cout<<"Enter "<<f_x<<" sensors:\n";
 for(i=0;i<f_x;i++) gets(f_s[i]);
 cout<<"messg: "; gets(f_m); cout<<"Browser: "; gets(f_b); cout<<"Radio: "; gets(f_r); cout<<"GPS:"; gets(f_gps); cout<<"Enter the no of colours:"; cin>>f_cc; cin.ignore();
 if(f_cc>0) cout<<"Enter "<<f_cc<<" colours:\n";
 for(i=0;i<f_cc;i++) gets(f_col[i]);
 cout<<"Enter the no of misc: "; cin>>f_f; cin.ignore();
 if(f_f) cout<<"Enter "<<f_f<<" misc features:\n"; 
 for(i=0;i<f_f;i++) gets(f_misc[i]);
 cout<<"\nBattery:\nType: "; gets(bat_b); cout<<"stand by: "; gets(bat_s); cout<<"Talk time: "; gets(bat_t); cout<<"music play "; gets(bat_m); cout<<"Price: "; cin>>price; price*=80;
 cout<<"Input completed succesfully!\n"; getch();
}
void p::d()
 { cout<<"\n Name: "<<name<<"\n Brand: "<<brand<<"\n\n\tGeneral:\n\n 2G: "<<g_2<<"\n 3G: "<<g_3<<"\n 4G: "<<g_4<<"\n Sim: "<<g_s<<"\n Released: "<<g_r<<"\n\n\tBody:\n\n Dimensions: "<<bod_d<<"\n Weight: "<<bod_w<<"\n\n\tDisplay:\n\n Type: "<<di_t;
 cout<<"\n Size: "<<di_s<<"\n Multitouch: "<<di_m<<"\n\n\tSound:\n\n Alert: "<<s_a<<"\n Loudspeaker: "<<s_l<<"\n\n\tMemory:\n\n Card slot: "<<m_c<<"\n Internal: "<<m_i<<"\n\n\tData:\n\n GPRS: "<<da_g<<"\n EDGE: "<<da_e<<"\n WLAN: "<<da_w<<"\n Bluetooth: "<<da_b; 
  cout<<"\n USB: "<<da_u<<"\n\n\tCamera:\n\n Primary: "<<c_p; 
  if(c_x>0) for(i=0;i<c_x;i++) cout<<c_f[i]<<endl; 
  cout<<"\n Video: "<<c_v<<"\n Secondary:"<<c_s<<"\n\n\tFeatures:\n OS: "<<f_o<<"\n CPU:"<<f_cpu<<"\n GPU: "<<f_gpu<<"\n\n\tSensors:\n\n"; 
  if(f_x>0) for(i=0;i<f_x;i++) cout<<f_s[i]<<endl;
  cout<<"\n Messaging: "<<f_m<<"\n Browser: "<<f_b<<"\n Radio: "<<f_r<<"\n GPS:"<<f_gps<<endl;
  if(f_cc>0) cout<<"\n\tColours:\n\n"; for(i=0;i<f_cc;i++) cout<<f_col[i]<<endl;  
cout<<"\n\tMiscellaneous:\n\n"; if(f_f>0) for(i=0;i<f_f;i++) cout<<f_misc[i]<<endl; cout<<"\n\tBattery:\n\n"; cout<<" Type: "<<bat_b<<"\n Stand by: "<<bat_s<<"\n Talk time: "<<bat_t<<"\n Music play: "<<bat_m<<"\n Price: "; if(!price) cout<<"NA"; else cout<<"Rs "<<price; cout<<endl; 
}
void fi()
{system("cls"); ofstream f("data.dat",ios::app); int n; 
 cout<<"\nEnter the no of objects:"; cin>>n;
 if(n>0) cout<<"Enter "<<n<<" objects:";
 for(i=0;i<n;i++) { ob.in(); f.write((char*)&ob,sizeof(ob)); } 
 f.close();
}
void p::comp()
{system("cls"); short f1=0,f2=0; p a,b; ifstream f("data.dat"); char n1[20],n2[20];
 SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY); cout<<"Enter the name of the first phone:"; s: gets(n1); f.seekg(0,ios::beg);
 while(f.read((char*)&a,sizeof(a)))
 if(strstr(a.name,n1))  { cout<<"\nNo such phone was found, please try again...."; goto s;  }
 else break;
 cout<<"Enter the name of the second phone:"; g: gets(n2); f.seekg(0,ios::beg);
 while(f.read((char*)&b,sizeof(b)))
 if(strstr(b.name,n2)) { cout<<"\nNo such phone was found, please try again...."; goto g;  } 
 else break;
 cout<<"\nDisplaying comparison:\n\n\n Name:  "<<a.name<<"\t\t\t"<<b.name<<"\n\n Brand: "<<a.brand<<"\t\t\t\t"<<b.brand<<"\n\nGeneral: 2G: "<<a.g_2<<"\t\t\t"<<b.g_2<<"\n\t 3G: "<<a.g_3<<"\t\t\t\t\t"<<b.g_3<<"\n\t 4G: "<<a.g_4<<"\t\t\t\t\t"<<b.g_4;
 cout<<"\n Sim:\t"<<a.g_s<<"\t\t\t\t\t"<<b.g_s<<"\nReleased: "<<a.g_r<<"\t\t\t\t\t"<<b.g_r<<"\n\nBody:\nDimensions: "<<a.bod_d<<"\t\t\t"<<b.bod_d<<"\n Weight: "<<a.bod_w<<"\t\t\t"<<b.bod_w;
 cout<<"\n\nDisplay:\n\n\tType: "<<a.di_t<<"\t\t\t"<<b.di_t<<"\n Size:\t"<<a.di_s<<"\t\t\t\t"<<b.di_s<<"\n Multitouch:\t"<<a.di_m<<"\t\t\t\t\t"<<b.di_m<<"\n\nSound:\n\n Alert: "<<a.s_a<<"\t\t\t"<<b.s_a;
 cout<<"\n Loudspeaker: "<<a.s_l<<"\t\t\t\t\t"<<b.s_l<<"\n\n\tMemory:\n\n Card slot: \t"<<a.m_c<<"\t\t\t\t\t"<<b.m_c<<"\n Internal:\t"<<a.m_i<<"\t\t\t\t\t"<<b.m_i<<"\n\nData:\n\n GPRS: \t"<<a.da_g<<"\t\t\t\t\t"<<b.da_g;
 cout<<"\n EDGE: \t"<<a.da_e<<"\t\t\t\t\t"<<b.da_e<<"\n WLAN: \t"<<a.da_w<<"\t\t\t\t\t"<<b.da_w<<"\n Bluetooth: \t"<<a.da_b<<"\t\t\t\t\t"<<b.da_b<<"\n USB: \t"<<a.da_u<<"\t\t\t\t\t"<<b.da_u<<"\n\nCamera:\n\n Primary:\t"<<a.c_p<<"\t\t\t\t\t"<<b.c_p;
 if(a.c_x>0) for(i=0;i<a.c_x;i++) cout<<a.c_f[i]<<"\t\t\t\t"<<b.c_f[i]<<endl; 
 cout<<"\n Video: \t"<<a.c_v<<"\t\t\t\t\t"<<b.c_v<<"\n Secondary:\t"<<a.c_s<<"\t\t\t\t\t"<<b.c_s<<"\n\nFeatures:\n OS: "<<a.f_o<<"\t\t\t\t\t"<<b.f_o<<"\n CPU: \t"<<a.f_cpu<<"\t\t\t\t\t"<<b.f_cpu<<"\n GPU: \t"<<a.f_gpu<<"\t\t\t\t\t"<<b.f_gpu;
 cout<<"\n\nSensors:\n\n"; 
 if(a.f_x>0) for(i=0;i<a.f_x;i++) cout<<a.f_s[i]<<endl;
 cout<<"\n Messaging: "<<a.f_m<<"\t\t\t\t"<<b.f_m<<"\n Browser: "<<a.f_b<<"\t\t\t\t\t"<<b.f_b<<"\n Radio: "<<a.f_r<<"\t\t\t\t"<<b.f_r<<"\n GPS:"<<a.f_gps<<"\t\t\t\t\t"<<b.f_gps<<endl;
 if(a.f_cc>0) cout<<"\n\tColours:\n\n"; for(i=0;i<a.f_cc;i++) cout<<a.f_col[i]<<"\t\t\t\t"<<b.f_col[i]<<endl;  
 cout<<"\nMiscellaneous:\n\n"; 
 if(a.f_f>0) for(i=0;i<a.f_f;i++)
 cout<<a.f_misc[i]<<"\t\t\t\t"<<b.f_misc[i]<<"\n\nBattery:\n\n"; cout<<" Type: "<<a.bat_b<<"\t\t\t\t"<<b.bat_b<<"\n Stand by: "<<a.bat_s<<"\t\t\t\t"<<b.bat_s<<"\n Talk time: "<<a.bat_t<<"\t\t\t\t\t"<<b.bat_t<<"\n Music play: "<<a.bat_m<<"\t\t\t\t\t"<<b.bat_m;
 cout<<"\n Price: "; if(!a.price) cout<<"NA"; else cout<<"Rs "<<a.price<<"\t\t\t\t"<<b.price; cout<<endl;  
 getch();
}
void st()
{char str[300];  ifstream f("data.dat"); f.seekg(0,ios::end); ifstream fil("DP.cpp"); short l=0; while(fil.getline(str,300)) l++; fil.close(); system("cls"); SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); 
 c=15; for(s=0;s<79;s++) cout<<c; cout<<endl; ifstream a("DP.exe",ios::binary); a.seekg(0,ios::end); ifstream t("source.txt"); t.seekg(0,ios::end); 
 SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY); cout<<"\n\t\t\t\t  STATS"; SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY); 
 cout<<"\n\n\t\t\t  Previous reset: Never\n"<<setw(60)<<"\n\t\t\t  Database size: "<<f.tellg()/sizeof(ob)<<"\n\n\t\tPrevious compile: "<<__TIME__<<", "<<__DATE__;
 cout<<"\n\n\t\t\tNumber of lines in code: "<<l<<"\n\n\t\t\t  File size: "<<(float)f.tellg()/1024<<" KB\n\n\t\t\t Record size: "<<(float)sizeof(ob)/1024<<" KB\n\n\t\t\tSource Code size: "<<(float)t.tellg()/1024<<" KB\n\n";
 cout<<"\tApplication location: "<<__FILE__<<"\n\n"<<"\t\t\tApplication size: "<<(float)a.tellg()/(1024*1024)<<" MB\n\n"; SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); for(s=0;s<79;s++) cout<<c; 
 SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);  cout<<"\nPress any key to continue......\n"; getch(); 
 f.close(); a.close(); t.close();
}
void cr()
{system("cls"); c=21; SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); for(s=0;s<79;s++) cout<<c; SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
 cout<<"\n\n\n\n\n\n"<<setw(45)<<"CREDITS\n\n"; SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY); 
 cout<<setw(50)<<"Kunal Deb 12BCE0018\n\n"<<setw(52)<<"Kunal Nagpal 12BCE0398\n\n"<<setw(54)<<"Vikramraj Sitpal 12BCE0307\n\n"<<setw(54)<<"\tNamratha Prattipati 12BCE0050\n\n\n\n\n\n\n"; 
 SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); 
 for(s=0;s<79;s++) cout<<c; SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY); cout<<"\n\nPress any key to continue.....\n"; getch();
}
void d()
{system("cls"); c='#'; SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); for(s=0;s<79;s++) cout<<c; SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
 cout<<"\n\n\n\n\n\t\t\t\t    DISCLAIMER"; SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY); 
cout<<"\n\n\n\t\t\tThe makers of this application are\n\n\t\t\tin no way responsible for the accuracy\n\n\t\t\tof the information contained herein.\n\n\t\t\t\tAll rights reserved.\n\n\n\n\n\n"; 
SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);
 for(s=0;s<79;s++) cout<<c; SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY); cout<<"\n\nPress any key to continue...\n"; getch();
}
void fu()
{SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); c=176; for(s=0;s<79;s++) cout<<c; SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
cout<<"\n\t\tApplication started at "<<ctime(&t); SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE);  
for(s=0;s<79;s++) cout<<c; SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY); cout<<"\n\n\t\t\t    Online phone search"; SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY); 
cout<<"\n\n\t\t\t\t1.Enter\n\n\t\t\t\t2.Display\n\n\t\t\t\t3.Search\n\n\t\t\t\t4.Compare\n\n\t\t\t\t5.Statistics\n\n\t\t\t\t6.Credits\n\n\t\t\t\t7.Disclaimer";
cout<<"\n\n\t\t\t\tEsc.Exit\n\n"; SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); 
 for(s=0;s<79;s++) cout<<c; SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);  cout<<"\nEnter choice:"; SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
}
void p::pr()
{system("cls"); float u,l; cout<<"Enter the price range (u,l):"; cin>>u>>l; 
 cout<<"Displaying records:\n"; ifstream fp("data.dat"); fp.seekg(0,ios::beg); 
 while(fp.read((char*)&ob,sizeof(ob)))
 if((ob.price<=l)&&(ob.price>=u)) 
 { ob.d(); if(top>=4) p::ca(); else temp[++top]=ob;  break; } 
fp.close(); getch();
}
void p::ca()
{ for(i=0;i<4;i++)  temp[i]=temp[i+1];
  temp[4]=ob;
}
void p::b()
{char b[10]; system("cls"); ifstream fb("data.dat"); fb.seekg(0,ios::beg); 
 cout<<"Enter brand: "; cin>>b; cout<<"Displaying:\n";
 while(fb.read((char*)&ob,sizeof(ob)))
 if(!strcmpi(ob.brand,b)) {ob.d(); getch(); if(top>=4) p::ca(); else temp[++top]=ob; break;} 
 fb.close(); getch();
}
void p::n()
{system("cls"); char n[20]; ifstream fn("data.dat"); fn.seekg(0,ios::beg);  
 cout<<"Enter model name: "; gets(n); 
 while(fn.read((char*)&ob,sizeof(ob)))
 if(!strcmpi(ob.name,n)) { ob.d(); getch(); if(top>=4) p::ca(); else temp[++top]=ob; break; } 
 fn.close(); getch();
}
void se()
{ 
do { SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); system("cls"); c=30; for(s=0;s<79;s++) cout<<c; SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY); cout<<"\n\n\n\n\n\n\n\t\t\t\tSearch Menu:"; 
SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
cout<<"\n\n\n\t\t\t\t  1.Price\n\n\t\t\t\t  2.Brand\n\n\t\t\t\t  3.Name\n\n\t\t\t\t  Esc.Exit\n\n\n\n\n"; c=31; SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); for(s=0;s<79;s++) cout<<c; 
 SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY); cout<<"\n\nEnter choice:"; c=getch();  SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
  switch(c)
  { case '1': p::pr(); break;
    case '2': p::b(); break;
    case '3': p::n(); break;
    case 27: break;
  }
 } while(c!=27);
}
void dm()
{system("cls"); i=top;
  if(i==-1) { SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY); cout<<"The buffer stack is empty!"; getch(); }
else do{SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY); c=232; for(s=0;s<79;s++) cout<<c; SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY); cout<<"\n\n\n\n\n\t\t\t\tDisplay Menu"; 
SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY); cout<<"\n\n\n\n\t\t\t\t1.Previous\n\n\t\t\t\t2.Next\n\n\t\t\t\tEsc.Exit\n\n\n\n\n\n\n\n"; 
SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE); for(s=0;s<79;s++) cout<<c;  SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
  cout<<"\n\nEnter choice: "; c=getch(); SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
  switch(c)
  {case '1': system("cls"); if(i<0) cout<<"Maximum history size exceeded!"; else temp[i--].d(); getch(); break;
   case '2': system("cls"); if(i==top) cout<<"No requests were sent after the last operation."; else if(i<=top) temp[++i].d(); getch(); break;
   case 27: break;
  }
system("cls");  
}while(c!=27);
}
main()
{ h = GetStdHandle (STD_OUTPUT_HANDLE);
time(&t); 
  do {   fu();
    switch(getch())
    { case 49: fi(); break;
      case 50: dm(); break;
	  case 51: se(); break;
      case 52: p::comp(); break;
      case 53: st(); break;
      case 54: cr(); break; 
      case 55: d(); break;
      case 27: SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY); system("cls"); exit(0);  
    }
 system("cls");  
}while(1);
}
