#include<iostream>
#include<string>
#include<math.h>
#include<conio.h>
#include<fstream>
#include<stdlib.h>

using namespace std;


class song{
	public:
		string songname[10];
		string artistname;
		int downloads;
		
			song(){
				cout<<"song constructor";
			}
};
class freesongs  : public song  //inheritance
{
	
	public:
		
		
		 int count1[10];   //use of static
		
		 string  songname1[10];
		
		freesongs()
		{
			cout<<"\nfreesongs constructor";
			for(int y=0;y<10;y++)
			{
				count1[y]=0;
			}
		}
		void add();
		/*void deletefs(string & hello)
		{
			string var=hello;
			for(int i=0;i<10;i++)
			{
				if(songname1[i]==var)
				{
					int m=i;
					break;	
				}	
			}			
			
			int q;
			
			for(q=m;q<10;q++)
			{
				int g=q+1;
				string temp;
				temp=songname1[q];
				songname1[q]=songname1[g];
				songname1[g]=temp;		
				
			}
			
			std::fstream fs("freesongs.txt", std::fstream::out | std::fstream::trunc);
			fs.close();
			
			ofstream f1("freesongs.txt");
			f1.open("freesongs.txt",ios::in,ios::app);
			for(i=0;i<10;i++)
			{
				f1<<songname[i]<<" ";				
			}
			
		}*/
		void freesongs_display()
		{


			try

			{
			ifstream f1; 
			f1.open("freesongs.txt");
		   while(!f1.eof())
		{
		   
		
		        for(int i = 0; i < 10; ++i)
		        {
		            f1 >> songname1[i];
		            	
		    }    }
		    
		    f1.close();
		}
		catch(std::exception& e)
		{
			cout<<"\n OOPS !!Exception Caught and Name Of Exception is--\n";
			cout<<e.what();
		}
		
		    for(int j=0;j<10;j++)
		    {
		    	cout<<"\n"<<j<<" "<<songname1[j];
			}
		}
		
		void freesongs_playlist(int &e)
		{
			string nayagaana;
			nayagaana=songname1[e];
			//ap->a->
		}
		
		void display(){
			for(int r=0;r<10;r++)
			{
				cout<<songname1[r]<<"\n";
			}
		}
};

 



class paytm
{
	float balance[10];
	int ppassword;
	public:
		
		void dis(){
			cout<<"hello world";
		}
		paytm(){
			cout<<"paytm constructor";
		}
		
		int paytm_check(  string & username,  string & password)   //pass by refrence 
		{


			try
			{
			ifstream f1("paytm_login.txt");
      		string fusername, fpassword;
		      while(f1)// to check file.eof
		    {
			      f1>>fusername;
			      f1>>fpassword;
			      if(fusername==username && fpassword==password)
				  { 
				  	f1.close() ;
				  	cout<<"successful\n";
				    return 1;
				  }
			} return 0;

		}

		catch(std::exception& e)
		{
			cout<<"\n OOPS !!Exception Caught and Name Of Exception is--\n";
			cout<<e.what();
		} 

			
		}
		
};

class transaction{
	paytm *pt;
	public:
		transaction(){
			pt->dis();
		}
};
class paidsongs : public song //inheritance
{
	
	public:
		static int count[10];
		transaction *tp;
		
		string songname[10];
		int songprice[10];
		paidsongs(){
			tp=new transaction;
		cout<<"\npaidsongs constructor";}
		void add1();
		
		void paidsongs_display(){


			try{

			ifstream f1; 
			ifstream f2;
			f1.open("paidsongs.txt");
		   	f2.open("songprice.txt");
		
		        for(int i = 0; i < 10; ++i)
		        {
		            f1 >> songname[i];
		            f2 >> songprice[i];	
		        }
		    
		    f1.close();
		}

		catch(std::exception& e)
		{
			cout<<"\n OOPS !!Exception Caught and Name Of Exception is--\n";
			cout<<e.what();
		}
		    for(int j=0;j<10;j++)
		    {
		    	cout<<"\n"<<j<<" "<<songname[j]<<"    "<<songprice[j];
		    	
			}
		}
		
		
		void display(){
			for(int r=0;r<10;r++)
			{
				cout<<songname[r]<<"\n";
			}
		}

};

int paidsongs::count[10]={0,0,0,0,0,0,0,0,0,0};
string only_username[10];
int balance[10];

int write()
{
	cout<<"\nSigning You as a new user.\n";


	try{
	fstream f1;
	fstream f2;
	
	f1.open("login.txt",ios_base::app);
	f2.open("only_username.txt",ios_base::app);
    string fusername,fpassword;

    cout<<"Enter Desired username\n";
    cin>>fusername;
    cout<<"Enter Desired Password\n";
    cin>>fpassword;

    f1<<fusername<<" ";
    f2<<fusername<<" ";
    f1<<fpassword<<" ";

    f1.close();
}
catch(std::exception& e)
		{
			cout<<"\n OOPS !!Exception Caught and Name Of Exception is--\n";
			cout<<e.what();
		}

    return 1;
}
class admin
{
	freesongs *free;
	paidsongs *paid;
	string username;
	int password;
	public:
		void freesong();
		void paidsong();

	
	
		void check()
		{
			string username1;
			int password1;

			try{
			ifstream in;
			
			cin>>username;
			in.open("one.txt");
		//in.open("C:\\Users\\Shashank\\Documents\\cpp\\two.txt");
		if(in==0)
			{
			cout<<"file cannot open";
			}	
			while(!in.eof())
			{
			//cout<<"hello";
			//getline(in,username1);
			//cout<<username1;
			in>>username1;
			in>>password1;
			if(username==username1)
			{
				cout<<"enter your password";
				cin>>password;
				in>>password1;
				if(password==password1)
				{
					cout<<"successfully logged in as admin";
				}
				
				
			}
			else
			{
				cout<<"wrong username or password";
				//goto loop;
			}
			
			
		}
		in.close();

	}

	catch(std::exception& e)
		{
			cout<<"\n OOPS !!Exception Caught and Name Of Exception is--\n";
			cout<<e.what();
		}
			
		}
	
};
void admin::freesong()
{
	int chadtc;
	cout<<"do you want to add or delete";
	cout<<endl;
	cout<<"press1 for free songs"<<endl;
	cout<<"press 2 for delete songs"<<endl;
	cin>>chadtc;
	if(chadtc==1)
	free->add();
	//else
//	free->deletet();
	
	
}
void admin::paidsong()
{
	//paid->add1;
}




void freesongs::add()
{
	string songname1;


	try{
	fstream a;
	//ofstream ax;
	//ax.open("freesongs.txt");
	a.open("freesongs.txt",ios_base::app);
	cout<<"enter the song which you want to enter"<<endl;
	//if(a!=0)
	//{cout<<"hi";
	//}
	cin>>songname1;
	a<<songname1;
	
	a.close();
}

catch(std::exception& e)
		{
			cout<<"\n OOPS !!Exception Caught and Name Of Exception is--\n";
			cout<<e.what();
		}
}
/*class paidsongs : public song  //inheritance
{
	float price;
	public:
		paidsongs();	
};*/
class playlist
{
		paidsongs *paid;  //association b/w playlist and paid song
	freesongs*free; //association b/w playlist and free song
//	friend purchases; //use of friend class
	string my_playlist[10];
	int freesongcount;
	int paidsongcount;
	int current;
	public:
		playlist()
		{
			cout<<"playlist constructor";
			current=0;
		}
		
		void aaya_gaana(int & w,freesongs * fs1)
		{
			my_playlist[current]=fs1->songname1[w];
			for(int i=0;i<=current;i++)
			{
				cout<<i<<" "<<my_playlist[i]<<"\n";
			}
			current++;
			++(fs1->count1[w]);
		}
};
/*class paytm
{
	float balance[10];
	int ppassword;
	public:
		paytm(){
			cout<<"paytm constructor";
		}
		
		int paytm_check(  string & username,  string & password)   //pass by refrence 
		{
			ifstream f1("paytm_login.txt");
      		string fusername, fpassword;
		      while(f1)// to check file.eof
		    {
			      f1>>fusername;
			      f1>>fpassword;
			      if(fusername==username && fpassword==password)
				  { 
				  	f1.close() ;
				  	cout<<"successful\n";
				    return 1;
				  }
			} return 0;
			
		}
		
};*/


class appaccount
{
	string aid;
	int apassword;
 //recommendations *recommmend;
	playlist play;  //composition b/w appaccount & playlist
	public:
		appaccount(){
			cout<<"appaccount constructor";
		}
		
		void appaccount_palylist(){
			//
		}
		
		void gaana_adding_to_playlist(int & w,freesongs * fs1)
		{
			play.aaya_gaana(w,fs1);
		}
};

class user
{
	string name;
	paytm*pay;
	appaccount account;
	public:
		user(){
			cout<<"user constroctor \n";
			pay= new paytm;
		}
		
		int check(  string & username,  string & password)   //pass by refrence 
			{

				try{
				ifstream f1("login.txt");
      			string fusername, fpassword;
			      while(f1)// to check file.eof
			      {
			      f1>>fusername;
			      f1>>fpassword;
			      if(fusername==username && fpassword==password)
				  {         f1.close() ;
				  cout<<"successful\n";
			      return 1;
			      }
			      } return 0;


			  }
			  catch(std::exception& e)
		{
			cout<<"\n OOPS !!Exception Caught and Name Of Exception is--\n";
			cout<<e.what();
		}
			
			}
				
		int access_paytm_check()
		{
			string paytm_user,paytm_pass; int paytm_flag;
			cout<<"Please enter your paytm id\n";
			cin>>paytm_user;
			cout<<"Please enter your paytm password\n";
			cin>>paytm_pass;
			paytm_flag=pay->paytm_check(paytm_user,paytm_pass);
			return paytm_flag;
		}
		
		void user_appaccount_playlist(){
			//
		}	
		
		void freesong_to_playlist(int & w,freesongs * fs1)
		{
			account.gaana_adding_to_playlist(w,fs1);	
		}
		

};


class trending
{
	private:
	string trend[10];
	freesongs *f;
	paidsongs *p;
	int current;
	public:	
	
	trending(){
		current=0;
	}
		void add_fs_object(freesongs fs1){
		f= &fs1;
	}
	
	void add_ps_object(paidsongs ps1){
		p = &ps1;
	}
	
	void fun(){
		for(int g=0;g<10;g++)
		{
			if((f->count1[g])>2)
			{
				trend[current]=f->songname1[g];
				++current;
			}
			if((p->count[g])>2)
			{
				trend[current]=p->songname[g];
				++current;
			}
		}
		
		for(int g=0;g<10;g++)
		{
			cout<<"\n"<<trend[g];
		}
	}
	
};



class app
{
	string appname;
	user *a;
	freesongs *fs;
	paidsongs *ps;
	trending *trend;
	public:
	app()
	{
		appname="BEATS";
		
	}
	void appdisplay()
	{
		cout<<appname<<"\n";
	}
	
	void add_user(){
		a=new user;
	}
	
	int access_user_check()
	{
		string user,pass; int flag;
		cout<<"Please enter your user id\n";
		cin>>user;
		cout<<"Please enter your user password\n";
		cin>>pass;
		flag=a->check(user,pass);
		return flag;
	}
	
	int tell_user_for_paytm_login()
	{
		int paytm_s_or_f;
		paytm_s_or_f=a->access_paytm_check();
		return paytm_s_or_f;
	}
	
	void app_user_appaccount_playlist(){
		//
	}
	
	void add_fs_object(freesongs fs1){
		fs= &fs1;
	}
	
	void add_ps_object(paidsongs ps1){
		ps = &ps1;
	}
	
	void app_fs_disp(){
		fs->freesongs_display();
	}
	
	void app_ps_disp(){
		ps->paidsongs_display();
	}
	
	void app_freesongs_playlist(int & d){
		int w;
		w=d;
	//	fs->
	}
	
	
	void d(freesongs fs1,paidsongs ps1)
	{
		trend->add_fs_object(fs1);
		trend->add_ps_object(ps1);
	}
	
	void add_fresong_to_the_playlist(int & d)
	{
		int w;
		w=d;
		a->freesong_to_playlist(w,fs);
		
	}
	
};


/*class transaction{
	appaccount *pappu1;
	paytm *pappu2;
	paidsongs *pappu3;
	
	public:
	transaction(){
	pappu1=new appaccount;
	pappu2=new paytm;
	pappu3=new paidsongs;
	
	cout<<"transaction cconstructor";		
	}	
	
	
	
};*/



template<class type1, class type2>

void display_playlist(type1 obj1 ,type2 obj2)
{
	
cout<<"\n Hello!! you have successfully added the following songs to your playlist";

obj1.display();
obj2.display();

}

int main(){

app ap;
admin ad;
int ch,chad,chadt;
cout<<"WELCOME TO ";
ap.appdisplay();
cout<<"Do you want to login as user or an admin. \n Input '1' for user and '2' for admin.\n";
cin>>ch;
if(ch==1)
{
	ap.add_user();
	int c;
	cout<<"If you are a new user you'll have to create a new account\n to create a new account press'1' else if you already have an account press'2'\n";
	cin>>c;
	if(c==1)
	{
		int d;
		d=write();
		if(d==1)
		{
			cout<<"success";
		}
		
		//now login
		
			int m;
		m=ap.access_user_check();
		if(m==1)
		{
			cout<<"Time for paytm login\n";
			if(ap.tell_user_for_paytm_login())
			{
				cout<<"You have successfully linked your app account and paytm account.\n";
				int cont;
				cout<<"Do you wish to continue or logout\n Enter '1' to continue and '2' to logout";
				cin>>cont;
				if(cont==1)
				{
					cout<<"\n \n \n";
					system("cls");     //used to clear screen
					
					//code for playlist display
					
					cout<<"\t\t\tWELCOME TO YOUR PERSONALISED PLAYLIST PAGE";
					freesongs fs1;
					paidsongs ps1;
					//	ap.d(fs1,ps1);
					cout<<fs1.songname1[0];
					ap.add_fs_object(fs1);
					ap.add_ps_object(ps1);
					
					cout<<"FREE SONGS";
					ap.app_fs_disp();
					cout<<"PAID SONGS";
					ap.app_ps_disp();						
					//ap.d(fs1,ps1);
					cout<<"\n\n\n Do you want to add songs to your playlist\n\nPress 1 for yes and -1 to logout";
					int g;
					cin>>g;
					while(g!=-1)
					{
						cout<<"\n\n\nTo include free songs to your playlist press 5  ";
						int t;
						cin>>t;
						if(t==5)
						{
							system("cls");
							cout<<"\nWhich song do you want to add. Each song has a code written to the left of it ;please enter the code accordingly";
							cout<<"FREE SONGS";
							ap.app_fs_disp();		
							
							int z;
							cin>>z;
							//idhar idhar
							
							ap.add_fresong_to_the_playlist(z);
							
							
							//cout<<"hkslkdshsdkadsjkjds\n\n\n";
									
						}
							cout<<"\n\n\n Do you want to add songs to your playlist\n\nPress 1 for yes and -1 to logout";
							cin>>g;
					}
					
				
				}
				
				if(cont==2){
					cout<<"bye bye";
				}
				
			}
		}
	
		else
		{
			cout<<"Wrong id and password...Please verify\n";
		}
		
		
		
	}
	
	if(c==2)
	{
		int m;
		m=ap.access_user_check();
		if(m==1)
		{
			cout<<"Time for paytm login\n";
			if(ap.tell_user_for_paytm_login())
			{
				cout<<"You have successfully linked your app account and paytm account.\n";
				int cont;
				cout<<"Do you wish to continue or logout\n Enter '1' to continue and '2' to logout";
				cin>>cont;
				if(cont==1)
				{
					  cout<<"\n \n \n";
					system("cls");     //used to clear screen
					
					//code for playlist display	
					
					cout<<"\t\t\tWELCOME TO YOUR PERSONALISED ACCOUNT PAGE\n\n\n";
					cout<<"*instructions:You'll have to use your paytm account to purchase paidsongs\n\n";
					
						freesongs fs1;
					paidsongs ps1;
					
					
					ap.add_fs_object(fs1);
					ap.add_ps_object(ps1);
					
					
					cout<<"FREE SONGS";
					ap.app_fs_disp();
					cout<<"PAID SONGS";
					ap.app_ps_disp();
					
					cout<<"\n\n\n Do you want to add songs to your playlist\n\nPress 1 for yes and -1 to logout";
					int g;
					cin>>g;
					while(g!=-1)
					{
						cout<<"\n\n\nTo include free songs to your playlist press 5  ";
						int t;
						cin>>t;
						if(t==5)
						{
							system("cls");
							cout<<"\nWhich song do you want to add. Each song has a code written to the left of it ;please enter the code accordingly";
							cout<<"FREE SONGS";
							ap.app_fs_disp();		
							
							int z;
							cin>>z;
							//idhar idhar
							
							ap.add_fresong_to_the_playlist(z);
							
							
							//cout<<"hkslkdshsdkadsjkjds\n\n\n";
									
						}
							cout<<"\n\n\n Do you want to add songs to your playlist\n\nPress 1 for yes and -1 to logout";
							cin>>g;
					}
					
				
					
				}
				
				if(cont==2){
					cout<<"bye bye";
				}
				
			}
		}
	
		else
		{
			cout<<"Wrong id and password...Please verify\n";
		}
		
	}
		
}

else
{
	
		
	cout<<"Please enter admin id\n";
	ad.check();
	cout<<endl;

	//cout<<"enter your choice "<<endl;;
	//cin>>chad;
	
	
		cout<<"you want to add or delete which type of songs "<<endl;
		
		cout<<"press 1 for free songs "<<endl;
		cout<<"press 2 for paid songs"<<endl;
		cin>>chadt;
		
		if(chadt==1)
		{
			
			ad.freesong();
			cout<<"hello";
		}
		else
		{
			ad.paidsong();
		}
		
	
	cout<<endl;
	
	cout<<"enter 1 for addition "<<endl <<"press 2 for deletion of songs";
	//cout<<"press 1 for paid song"<<endl<<"press 2 for paid song";
	}
return 0;
}




