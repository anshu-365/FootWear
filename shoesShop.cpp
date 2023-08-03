//footwear shop


#include<iostream>
#include<string>
#include<fstream>
using namespace std; 
//#include<conio>
class details
{
   public:
   char name[50],add[40],email[30];
   string gender;
   int pin;
   char mo_n[20];
   void input()
{
   cout<<"Please enter your name:"<<endl;
   cin>>name;
   cout<<"Please enter email id:"<<endl;
   cin>>email;
   cout<<"Please enter Mobile number:"<<endl;
   cin>>mo_n;
   cout<<"Please enter Address:"<<endl;
   cin>>add;
   cout<<"Please enter your pin code:"<<endl;
   cin>>pin;
   
   
}
  void get()
{
   cout<<"Please enter your gender:"<<endl;
   cin>>gender;
   if(gender=="male")
   {
       cout<<"----------------------------------"<<endl;
       cout<<"These footwear are available here for male:"<<endl;
       cout<<"1.Shoes"<<endl;
       cout<<"2.Sandals"<<endl;
       cout<<"3.Slippers"<<endl;
  }
  else
{
   cout<<"These footwear are available here for female:"<<endl;
   cout<<"1.Ladies Shoes"<<endl;
   cout<<"2.Ladies Sandals"<<endl;
   cout<<"3.Ladies Slippers"<<endl;
}
}
};

class info:public details 
{
    int weare,mode;
    string brand;
    	string choice;
    	int qty;
   float total;
    public:
    
    void show()
    {
       cout<<"======================="<<endl;
       cout<<"          ------>>>>Please choose your brand<<<<------:   "<<endl;
      
       cout<<"1.Nike"<<endl;
       cout<<"2.Adidas"<<endl;
       cin>>weare;
       if(weare==1)
   {
   	cout<<"                             WELCOME IN NIKE WORLD!!!                               "<<endl;
      cout<<"---------------------------------------------------------"<<endl;
      cout<<"----->>Thease colour shoes are available here in this brand<<-----"<<endl;
      cout<<"                                           "<<endl;
      cout<<"Black"<<endl;
      cout<<"White"<<endl;
      cout<<"Red"<<endl;
      cout<<"============================================================"<<endl;
      
      cout<<"*********Sandals colour in this brand*********"<<endl;
      cout<<"                                           "<<endl;
      cout<<"Blue"<<endl;
      cout<<"Black"<<endl;
      cout<<"white"<<endl; 
      cout<<"============================================================"<<endl; 
      cout<<"*********Sleeper colour in this brand********"<<endl;
      cout<<"                                           "<<endl;
      cout<<"Blue"<<endl;
      cout<<"Black"<<endl;
      cout<<"white"<<endl; 

      cout<<"                                         "<<endl;
      
    
    
     cout<<"      ----->Which type of footweare you want to buy<-----         "<<endl;
     cout<<"============================================"<<endl;
     cout<<"1.shoes in black colour"<<" NIKE AIR ZOOM ELITE "<<"  Price = 1000"<<endl;
     cout<<"2.shoes in blue colour"<<" NIKE FLYKNIT "<<"   Price = 800"<<endl;
     cout<<"3.shoes in White colour"<<" ON CLOUD "<<"  Price = 1100"<<endl;
     cout<<"============================================"<<endl;
     cout<<"4.Sandal in black colour"<<" NIKE OWAYSIS "<<" Price = 9000"<<endl;
     cout<<"5.Sandal in blue colour"<<" NIKE FLOTER "<<"  Price = 700"<<endl;
     cout<<"6.Sandal in White colour"<<" NIKE SNEAKER  "<<" Price = 600"<<endl;
     cout<<"============================================"<<endl;
     cout<<"7.Sleeper in black colour"<<" NIKE CHROMA "<<"Price = 300"<<endl;
     cout<<"8.Sleeper in blue colour"<<" NIKE FLIP FLOP "<<" Price = 400"<<endl;
     cout<<"9.Sleeper in White colour"<<" NIKE FLIP "<<"Price = 500"<<endl;
    
     cout<<"       ========>>Please Enter Name To Select your choice<<=======            "<<endl;
     cin>>choice;
     cout<<endl;
     if(choice=="NIKE_AIR_ZOOM_ELITE")
     {
         cout<<"       =======>>>>>>welcome IN NIKE WORLD!!<<<<<<=======      "<<endl;
        cout<<"----->>Please enter the quantity<<-----"<<endl;
        cin>>qty;
        total=qty*1000;
        cout<<"           ------>>>>YOUR TOTAL AMOUNT IS:        "<<total<<endl;

     }
     else if(choice=="NIKE_FLYKNIT") 
     {
        cout<<"               ********Please enter the quantity*********";
        cin>>qty;
        total=qty*800;
        cout<<"Your total amount is:"<<total<<endl; 
     }
      else if(choice=="ON_CLOUD") 
     {
        cout<<"--------->>Please enter the quantity<<---------";
        cin>>qty;
        total=qty*1100;
        cout<<"========>>>Your total amount is:"<<total<<endl; 
     }
      else if(choice=="NIKE_OWAYSIS") 
     {
        cout<<"----->>Please enter the quantity:<<-------";
        cin>>qty;
        total=qty*900;
        cout<<"========>>Your total amount is:"<<total<<endl; 
     }
      else if(choice=="NIKE_FLOTER") 
     {
        cout<<"        ------>Please enter the quantity<--------";
        cin>>qty;
        total=qty*700;
        cout<<"=======>>Your total amount is:"<<total<<endl;
     }
     else if(choice=="NIKE_SNEAKER") 
     {
        cout<<"                   ------>>Please enter the quantity<<------";
        cin>>qty;
        total=qty*600;
        cout<<"=======>>Your total amount is:"<<total<<endl;
     }
     else if(choice=="NIKE_CHROMA") 
     {
        cout<<"------>>Please enter the quantity<<--------";
        cin>>qty;
        total=qty*300;
        cout<<"=========>>Your total amount is:"<<total<<endl; 
     }
     else if(choice=="NIKE_FLIP_FLOP") 
     {
        cout<<"========>>Please enter the quantity<<=========";
        cin>>qty;
        total=qty*400;
        cout<<"========>>Your total amount is: "<<total<<endl; 
     }
     else if(choice=="NIKE_FLIP") 
     {
        cout<<"------->>Please enter the quantity<<---------";
        cin>>qty;
        total=qty*500;
        cout<<"=======>>Your total amount is:"<<total<<endl; 
     }
     else {
     	cout<<"this product is not available"<<endl;
     	exit(0);
	 }
   }
  else if(weare==2)
  {
   cout<<"                           WELCOME IN ADIDAS WORLD!!                                     "<<endl;
      cout<<"---------------------------------------------------------"<<endl;
      cout<<"Thease colour shoes are available here in this brand"<<endl;
      cout<<"                                           "<<endl;
      cout<<"Black"<<endl;
      cout<<"White"<<endl;
      cout<<"Red"<<endl;
      cout<<"============================================================"<<endl;
      
      cout<<"Sandals colour in this brand"<<endl;
      cout<<"                                           "<<endl;
      cout<<"Blue"<<endl;
      cout<<"Black"<<endl;
      cout<<"white"<<endl; 
      cout<<"============================================================"<<endl; 
      cout<<"Sleeper colour in this brand"<<endl;
      cout<<"                                           "<<endl;
      cout<<"Blue"<<endl;
      cout<<"Black"<<endl;
      cout<<"white"<<endl; 

      cout<<"                                         "<<endl;
      
      
      cout<<"Shoes colour in this brand"<<endl;
      cout<<"                                           "<<endl;
      cout<<"Blue"<<endl;
      cout<<"Black"<<endl;
      cout<<"white"<<endl; 

      cout<<"                                         "<<endl;
      
      
   
    
     cout<<"Which type of footweare you want to buy"<<endl;
     cout<<"============================================"<<endl;
     cout<<"1.shoes in black colour"<<" SUPER STAR "<<"  Price = 1000"<<endl;
     cout<<"2.shoes in blue colour"<<" STAN SMITH "<<"   Price = 800"<<endl;
     cout<<"3.shoes in White colour"<<" ADIDAS ORIGINAL "<<"  Price = 1100"<<endl;
     cout<<"============================================"<<endl;
     cout<<"4.Sandal in black colour"<<" ADIDAS FASAR "<<" Price = 9000"<<endl;
     cout<<"5.Sandal in blue colour"<<" ADIDAS HOPKAR "<<"  Price = 700"<<endl;
     cout<<"6.Sandal in White colour"<<" ADIDAS FLOPPER "<<" Price = 600"<<endl;
     cout<<"============================================"<<endl;
     cout<<"7.Sleeper in black colour"<<" ADIDAS FLIP FLOP "<<"Price = 300"<<endl;
     cout<<"8.Sleeper in blue colour"<<" ADIDAS UNIX SLIDE "<<" Price = 400"<<endl;
     cout<<"9.Sleeper in White colour"<<" ADIDAS SWIM "<<"Price = 500"<<endl;
    
     cout<<"---------->>Please Select your product<<-------------"<<endl;
     cin>>choice;
     
	 
     if(choice=="SUPER_STAR")
     {
     	
        cout<<"-------->>Please enter the quantity:<<---------"<<endl;
        cin>>qty;
        total=qty*1000;
        cout<<"=======>>Your total amount is:"<<total<<endl;

     }
     else if(choice=="STAN_SMITH") 
     {
        cout<<"Please enter the quantity:";
        cin>>qty;
        total=qty*800;
        cout<<"=======>>>Your total amount is:"<<total<<endl; 
     }
      else if(choice=="ADIDAS_ORIGINAL") 
     {
        cout<<"Please enter the quantity:";
        cin>>qty;
        total=qty*1100;
        cout<<"=======>>>Your total amount is:"<<total<<endl; 
     }
      else if(choice=="ADIDAS_FASAR") 
     {
        cout<<"------->>>Please enter the quantity:";
        cin>>qty;
        total=qty*900;
        cout<<"=======>>>Your total amount is:"<<total<<endl; 
     }
      else if(choice=="ADIDAS_HOPKAR") 
     {
        cout<<"--------->>>Please enter the quantity:";
        cin>>qty;
        total=qty*700;
        cout<<"=======>>>Your total amount is:"<<total<<endl;
     }
     else if(choice=="ADIDAS_FLOPPER") 
     {
        cout<<"----------->>Please enter the quantity:";
        cin>>qty;
        total=qty*600;
        cout<<"=======>>>Your total amount is:"<<total<<endl;
     }
     else if(choice=="ADIDAS_FLIP FLOP") 
     {
        cout<<"=======>>>Please enter the quantity:";
        cin>>qty;
        total=qty*300;
        cout<<"=======>>>Your total amount is:"<<total<<endl; 
     }
     else if(choice=="ADIDAS_UNIX_SLIDE") 
     {
        cout<<"-------->>Please enter the quantity:";
        cin>>qty;
        total=qty*400;
        cout<<"=======>>>Your total amount is:"<<total<<endl; 
     }
     else if(choice=="ADIDAS_SWIM") 
     {
        cout<<"--------->>>Please enter the quantity:"<<endl;
        cin>>qty;
        total=qty*500;
        cout<<"=======>>>Your total amount is:"<<total<<endl; 
     }
//     else if(choice!="SUPER_STAR" or choice!="SUPER_STAR" or choice!="ADIDAS_ORIGINAL" or choice!="ADIDAS_FASAR" or choice!="ADIDAS_HOPKAR" choice!="ADIDAS_FLIP FLOP")
      else  {//CHECK IF PRODUCT IS NOT AVAILABLE
     	cout<<"this product is not available"<<endl;
     exit(0);
	 }

   
}
int mode;
     ofstream s;
     s.open("invoice.txt");
 
     cout<<"======================================"<<endl;
     cout<<"                                           "<<endl;

     cout<<"==========>>>>Please select payment mode<<<<============="<<endl;
     cout<<"                                           "<<endl;
     cout<<"1.Online payment"<<endl;
     cout<<"2.Cash on delivery"<<endl;
      cin>>mode;
      cout<<endl;
      if(mode==1)
      {
      	
      	//ONLINE MMODE
      	
      	int card_no,mobile_no,bank_no,tm_year,otp,choice,digit;
ofstream w;
w.open("transection_sleep.txt");
cout<<"        ===========>>>ONLINE TRANSECTION MODE<<<==========="<<endl;
      	char card_holder_name[20];
      	cout<<"1:credit/debit card"<<endl<<"2:netBanking"<<endl<<"3:UPI"<<endl<<"4:Gpay"<<endl<<"5:Patym"<<endl<<"6:amazonpay"<<endl;
      	cout<<"enter the choice for online mode"<<endl;
      	cin>>choice;

if(choice==1)
{
	cout<<"        ========>>Please enter the deatil for credit/debit card<<========"<<endl;
	cout<<"Please enter the card holder name:"<<endl;
	cin>>card_holder_name;
	cout<<"Please enter the card number:"<<endl;
	cin>>card_no;
	cout<<"Please enter the three digit:"<<endl;
	cin>>digit;
	cout<<"Please enter the otp number:"<<endl;
	cin>>otp;
	w<<"----------------------------------------------debit/credit card----------------------------------------------------"<<endl<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	w<<"CardHolder Name:"<<card_holder_name<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	w<<"Debited from SBI bank :XXXX432"<<"          "<<"Transaction ID"<<endl<<"302129382922"<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	w<<"Amount"<<endl<<"?"<<total<<endl<<endl;
	w<<"                                                                                "<<endl<<endl;
	w<<"thankyou for using us"<<endl;
	
		cout<<"information inserted succsefully"<<endl;
	w.close();
	
}
else if(choice==2)
{
	int account_no,ifsc_code;
	char bank_holder_name[20];
		cout<<"========>>Please enter the deatil for NetBanking<<========"<<endl;
		cout<<"Please enter the BankHolder Name:"<<endl;
	cin>>bank_holder_name;
	
		cout<<"Please enter the account number:"<<endl;
	cin>> account_no;
	cout<<"Please enter the ifsc number:"<<endl;
	cin>>ifsc_code;
	cout<<"Please enter the otp number"<<endl;
	cin>>otp;
   	w<<"------------------------------------------------NetBanking---------------------------------------------------------"<<endl<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	w<<"Account Holder Name:"<<bank_holder_name<<endl<<"payment done by NetBanking"<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	w<<"Debited from SBI bank "<<"                     "<<"Transaction ID"<<endl<<"XXXX432"<<"                                     "<<"302129382922"<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	w<<"Amount"<<endl<<"?"<<total<<endl;
		w<<"                                                                                "<<endl<<endl;
	w<<"thankyou for choosing us"<<endl;
    	cout<<"information inserted succsefully"<<endl;
	w.close();
		
}
else if(choice==3)
{

char user_name[20];//for both number and string
string name2;

	cout<<"========>>Please enter the deatil for upi <<========"<<endl;
	
	cout<<"Please enter the upi number or userid"<<endl;
	cin>>user_name;
		w<<"--------------------------------------------------UPI-------------------------------------------------------"<<endl<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	w<<"Username/mobile number:"<<user_name<<endl<<"payment done by UPI"<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	w<<"Debited from SBI bank "<<"                     "<<"Transaction ID"<<endl<<"XXXX432"<<"                                  "<<"302129382922"<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	w<<"Amount"<<endl<<"?"<<total<<endl;
		w<<"                                                                                "<<endl<<endl;
	w<<"thankyou for choosing us"<<endl;
		cout<<"information inserted succsefully"<<endl;
	w.close();
}
else if(choice==4)
{
	
char user_name[20];

	cout<<"========>>Please enter the deatil for Gpay <<========"<<endl;
	cout<<"Please enter the Gpay number or userid"<<endl;
	cin>>user_name;
	w<<"---------------------------------------------------Gpay-----------------------------------------------------------"<<endl<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	w<<"Username/mobile number:"<<user_name<<endl<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	w<<"Debited from SBI bank "<<"                     "<<"Transaction ID"<<endl<<"XXXX432"<<"                                  "<<"302129382922"<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	w<<"Amount"<<endl<<"?"<<total<<endl;
		w<<"                                                                                "<<endl<<endl;
	w<<"thankyou for choosing us"<<endl;
			cout<<"information inserted succsefully"<<endl;
	w.close();
}
else if(choice==5)
{
	
char user_name[20];

	cout<<"========>>Please enter the deatil for Patym <<========"<<endl;
	cout<<"Please enter the Patym number or userid"<<endl;
	cin>>user_name;
		w<<"----------------------------------------------Paytm----------------------------------------------------"<<endl<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	w<<"Username/mobile number:"<<user_name<<endl<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	w<<"Debited from SBI bank "<<"                     "<<"Transaction ID"<<endl<<"XXXX432"<<"                                  "<<"302129382922"<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	w<<"Amount"<<endl<<"?"<<total<<endl;
		w<<"                                                                                "<<endl<<endl;
	w<<"thankyou for choosing us"<<endl;
		cout<<"information inserted succsefully"<<endl;
	w.close();
}
else if(choice==6)
{
	
char user_name[20];

	cout<<"========>>Please enter the deatil for amazon pay <<========"<<endl;
	cout<<"Please enter the amazonpay number or userid"<<endl;
	cin>>user_name;
		w<<"----------------------------------------------amazon pay----------------------------------------------------"<<endl<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	w<<"Username/mobile number:"<<user_name<<endl<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
w<<"Debited from SBI bank "<<"                     "<<"Transaction ID"<<endl<<"XXXX432"<<"                                  "<<"302129382922"<<endl;
	w<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	w<<"Amount"<<endl<<"?"<<total<<endl;
		w<<"                                                                                "<<endl<<endl;
	w<<"thankyou for choosing us"<<endl;
			cout<<"information inserted succsefully"<<endl;
	w.close();
}


      	
      	//ONLINE MODE
      	
      	
     cout<<"====-----=====>>>Your Payment Bill<<<=====------"<<endl; 
     cout<<"                                           "<<endl;
     cout<<"Name:"<<     name<<endl;
     cout<<"Email:"<<endl;
     cout<<"Mobile Numbeer:"<<mo_n<<endl; 
     cout<<"Address:"<<  add<<endl;
     cout<<"Pin code:"<< pin<<endl;
     
     cout<<"-------->>>Payment mode - Online payment<<<<----------"<<endl;
     
     s<<"**********************************************************************************************************************************************"<<endl;
     s<<"---------------------personal detail-------------------------"<<endl;
     s<<"Name:"<<name<<endl;
     s<<"Email:"<<email<<endl;
      s<<"Mobile Number:"<<mo_n<<endl;
     s<<"Address:"<<add<<endl;
     s<<"Pin Code:"<<pin<<endl<<endl<<endl;
     s<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl<<endl;
     s<<"----------------------------product information----------------------------------"<<endl<<endl;
	 s<<"-----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
     s<<"Product"<<"      "<<"Quantity"<<"      "<<"Gross amount"<<"      "<<"IGST"<<"      "<<"TOTAL PRICE"<<endl;
     s<<"-----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
     s<<choice<<"            "<<qty<<"                "<<"static amt"<<"           "<<"60.26"<<"          "<<total<<endl;
     
     
     s<<"===========================================================payment mode:online============================================================="<<endl;
     s<<endl<<endl<<endl;
	 s<<"thanks You Please Visit Again";
     
     
	 /*w<<"personal details"<<endl<<"Name:"<<name<<endl<<"Address"<<add<<endl<<"Pin Code:"<<pin<<endl<<"Mobile no:"<<mo_n<<endl;
     w<<"=========>>payment sleep<<========="<<endl<<"product name:"<<choice<<endl;
     w<<"======payment mode:online====="<<endl;
     w<<"thanks You Please Visit Again";*/
     cout<<"detail is inserted successfully"<<endl;
     s.close();
    }
    else
    {
      cout<<"--------Your Payment Bill------"<<endl; 
      cout<<"                                           "<<endl;
      cout<<"Name:"<<name<<endl;
      cout<<"Address:"<<add<<endl;
      cout<<"Pin code:"<<pin<<endl;
      cout<<"Mobile Numbeer"<<mo_n<<endl; 
      cout<<"Payment mode - cash on delivery"<<endl;
     s<<"**********************************************************************************************************************************************"<<endl;
     s<<"---------------------personal detail-------------------------"<<endl;
     s<<"Name:"<<name<<endl;
     s<<"Email:"<<email<<endl;
      s<<"Mobile Number:"<<mo_n<<endl;
     s<<"Address:"<<add<<endl;
     s<<"Pin Code:"<<pin<<endl<<endl<<endl;
     s<<"===========================================================payment mode:offline============================================================="<<endl;
     s<<endl<<endl<<endl;
	 s<<"thanks You Please Visit Again";
    cout<<"detail is inserted successfully"<<endl;
      s.close();
    } 
     cout<<"                                           "<<endl;
     cout<<"            ========>>>>>>>>THANK YOU!!<<<<<<<=========         "<<endl<<endl;
   }
    
   
  
 };
   int main()
  {
 cout<<"            ===========>Welcome to indian no.1 footwear center<============           "    <<endl;
 int op;
 while(1)
 {
 
    info d;
    d.input();
    d.get();
    d.show();
    cout<<"do u want continue your shopping or exit \n press 1 for continue: \n 2. for exit:"<<endl;
    cin>>op;
    if(op==1)
    {
    
    d.input();
    d.get();
    d.show();
	}
	else if(op==2)
	{
		cout<<"thank you please visit again";
		break;
	}
}
    return 0;
    
  }
