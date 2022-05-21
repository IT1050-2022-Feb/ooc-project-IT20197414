#include<iostream>
#include<string>
#include<sstring>


//User class
class User{
	
	private:
		
		string name;
		int age;
		string password;
		string phoneno;
		string email;
		string UID;
		
		
	public:
	
			
		User();
		User(string name,int page,string pphoneno,string pemail);
		void setcredentials(string ppassword,string pUID);
		string getpassword();
		string getUID();
		void displaydetails();
	
};

//Staffmember class
class staffmember{
	
	private:
		
		string SID;
		string name;
		string password;
		string email;
		
		
	public:
		
		staffmember();
		staffmeber(string pname,string pemail);
		void setcredentials(string ppassword,string pSID);
		string getpassword();
		string getSID();
		void displaydetails();
			
	
};

//department class

class department{
	
	private:
		 string Dcode;
		 string name;
		 string headstaff;
		 
		 
	public:
	
		department();
		department(String pDcode,string pname,string pheadstaff);
		string getDcode();
		void printdetails();
			 
		
	
};


//Payment class
class Payment{
	
	private:
		
		string date;
		double amount;
		string description;
		string paymentId;
		string paymenttype;
		
		
	public:
	
		Payment();
		Payment(string pPaymentID,string pamount);
		void calremaining();
		void printdetails();
		
	
};


//Admin class

class Admin{
	
	private:
		
		string adminid;
		string name;
		string mobileno;
		string email;
		
		
	public:
	
		Admin();
		Admin(string padminid,string pname,string pmobileno, string pemail);
		void printdetails();	
	
};


//Main

int main(){
	
	//User class object
	User u1;
	
	//staffmember class object
	
	staffmember s1;
	
	//department object
	department d1;
	
	//payment object
	Payment p1;
	
	//admin pbject
	Admin a1;
	
	
	return 0;
}
