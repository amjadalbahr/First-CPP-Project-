#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{

	string name[2]; // for first name and seccond name
	string password[3]; // for password1 and password2 and chack the password when show information [31]-[33]-[82]
	string email; // for Email
	char sing; // getch when singin line-[45]
	char ret; // getch for chack if you want see information or enter the program line [75]-[76]-[148]
	char bac;
	char ching; 
	string singin[2];
	int a=1,b,c;
	string edit[5];
	char sh;
	// don't delet
	int x,y;
	char op;
	cout<<"Enter Your First Name: ";
	cin>>name[0];
	cout<<"Enter Your Last Name: ";
	cin>>name[1];

	cout<<"Enter Your Email: ";
	cin>>email;
	
	cout<<"Enter a Strong Password: ";
	cin>>password[0];
	again: cout<<"Confirm The Password: ";
	cin>>password [1];
	
	if(password[1]!=password[0]){
	cout<<"Erorr,The Password is Defrent"<<endl;
	goto again;}
	else
	system("cls");
	cout<<"Congralization You Sing up"<<endl;
	cout<<"Click On (F) to Singin ";
	////////////////////////////////////////////////
	while(1){  // close in[68] - it's the first while 
	int i=1; // this is for i check the password
	sing= getch(); 
	if(sing=='F' || sing=='f')
	{	system("cls");    //  ({) it is for if(sing=='F' || sing=='f') and  it close in[68]
	agr: cout<<"Entar Your Email: ";
	cin>>singin[0];
	
	cout<<"Enter Your Password: ";
	cin>>singin[1];
	
	
	i++; // +1 if password wrong to do line [60]
	
	if(singin[0]!=email || singin[1]!=password[0])
	 
	 {system("cls");
	 if(i<=5){
	 cout<<"There is Erorr in Email or Password"<<endl;
	goto agr;} // go to [48] back if password wrong 
	else
	cout<<"TO MANY TRING TRY ANOTHER TIME!";	
	}
	else {system("cls");	cout<<"You Sing in Sucssfuly"<<endl;
	break;}
	}} // if[47] - while(1)-[43]
	
	bck: cout<<"Click on (W) To show Your Information or Click on (I) To Enter The Program"<<endl;
	
	
	while(1){ // this while for all of program and it close in[329] 
	
	ret =getch();

      // part one show information
      
	if(ret=='w' || ret=='W')
	 {system("cls");  // this ({) for all part one of program and it close in[148]
	   cout<<"Sorry But You Have To Enter The Password : "<<endl;
 	   cin>>password[2]; 
 	      if(password[2]==password[0]) // this password[2] check to show information 
 	      
			{{    //  this first ({)if password true show else go to (else if) in line[127]-3 
	show: system("cls"); cout<<"Name is: "<<name[0]<<" "<<name[1]<<endl;
		cout<<"Email is: "<<email<<endl;
		cout<<"Password is: "<<password[0]<<endl;
		cout<<"_________________"<<endl;
		cout<<"Click (R) to Back"<<endl;
		cout<<"Click (C) to Change The Password or Email ";}
		////////////////////////////////////
		while(1){ // second while it close in line[127]-2 
		ching =getch();
		if(ching == 'R' || ching == 'r')
		  {system("cls");
		  goto bck;}
		  
		  //////////
		 else if(ching == 'C' || ching == 'c')  // this for update 
		  { system("cls"); // it close in line[127]-1
		  	
			    cout<<"Update The Email: ";
				cin>>email;
				cout<<"____________________"<<endl;
					
				
					cout<<"Change The Password: ";
					cin>>password[0];
					cout<<"____________________"<<endl;
				    
					ed: cout<<"Confirm The Password: ";
					cin>>password [1];
					cout<<"____________________"<<endl;
					if(password[1]!=password[0]){
					cout<<"Erorr,The Password is Defrent"<<endl;
					goto ed;} // go to line[112] if password defrent 
			system("cls");		cout<<"You Updated The Information Sucssfully. "<<endl;
					cout<<"Click (M) To See The Iformation ";
					while(1){ // this while just for back 
					sh =getch();
					if(sh=='M' || sh== 'm')
					{system("cls");
					goto show;}} // goto line[86] 
					
					
	   	}}}
		else  // this is if password defrent when user want to show information
		{system("cls");
		cout<<"I'am Sorry The Password is Wrong Try again :"<<endl;
		cin>>password[2];
			if(password[2]==password[0])
			{system("cls");
			goto show;} // if password true goto line[86]
		
			else 
			{system("cls");
			cout<<"I'am so Sorry but The Password is also Wrong maby you are Thift but no\nProblem you can Try again :"<<endl;
		cin>>password[2];
				if(password[2]==password[0])
			{system("cls");
			goto show;} // if password true goto line[86]
				else{
				 system("cls");
				cout<<"Stop Brother I Think You are Thift I can't Help You\nTo steal This Account so You Have To Go Away\nAnd don't repete it\n     Good Luck  "<<endl;}
			}}  // 1(}) for line[137]- 2(}) for line[129]
			
		} // this is for all of part one if chose (W) it closed line[80]	
		  
		  
		   // Part two (The program)
			
	else if(ret=='I' || ret=='i') // this is part two if user chosed (I) he will go to program
	{ pq: system("cls");
	cout<<"Click The Letter Next you Want "<<endl;
	cout<<"_________________________________"<<endl;
	cout<<"1) Calculator : (Q)"<<endl;
	cout<<"2) Multiplication Table : (V)"<<endl;
	cout<<"3) Calcularor The Area of Geometricb Shapes : (N)"<<endl;
	cout<<"Click (/) to back"<<endl;

		while(1){   //this while for all programs  // very important all programs outed from it 
			char prog;
			 prog=getch();
		if(prog == 'q' || prog=='Q'){ // see line[155]
		system("cls");
	ui: cin>>x>>op>>y;
	system("cls");
	
	switch(op){
	case'+': cout<<x<<"+"<<y<<"="<<x+y; break;
	case'-': cout<<x<<"-"<<y<<"="<<x-y; break;
	case'*': cout<<x<<"*"<<y<<"="<<x*y; break;
	case'/': cout<<x<<"/"<<y<<"="<<x/y; break;
	case'%': cout<<x<<"%"<<y<<"="<<x%y; break;
	case'^': cout<<x<<"^"<<y<<"="<<pow(x,y); break;
	default: cout<<"Erorr";
	}
	cout<<"\n\n\nckick (]) to delet\nor Click (/) to back";
	char br; 
	while(1){
		br=getch();
		{if( br ==']')
		{system("cls");
		goto ui;}  // this is for if to clean the screen goto line[168]
		else if(br=='/');
		goto pq; // out of this program goto line[154]
		}}  // second(}) for while line[182]
		
	
		} // this is close program1 (calculator)
		else if (prog == 'v' || prog=='V'){    // this is second program will open if user click (V)
		system("cls");
		for(int i=1;i<=10;i++)
	{cout<<endl;
	for(int j=1;j<=5;j++){
	 cout<<j<<" * "<<i<<" = "<<j*i<<"\t";}
	}
	cout<<"\n\n";
	for(int i=1;i<=10;i++)
	{cout<<endl;
	for(int j=6;j<=10;j++){
	 cout<<j<<" * "<<i<<" = "<<j*i<<"\t";}
	}
	cout<<"Ckick (]) to back ";
char brt; 
	while(1){
		brt=getch();
		{if( brt ==']')
		{system("cls");
		goto pq;}}}} // 4(}) if else program2 (Multiplication Table)   
	
		
		
		else if (prog == 'N' || prog=='n'){   // this is the third program if user click (N)
			system("cls");
			ssd: cout<<" Chose :                             click (/) to back"<<endl;
cout<<"_____________"<<endl;
cout<<" Square : (S)"<<endl;
cout<<" Rectangle : (R) "<<endl;
cout<<" Triangle : (T) "<<endl;
cout<<" Circle : (C) "<<endl;

char area;float ar[6];
char bbc;
while(1){area =getch();
	if(area=='s' || area=='S'){
	srS:	system("cls");
		cout<<"Enter Length: "<<endl;
		cin>>ar[0];
		cout<<"_________________________"<<endl;
		cout<<"Area= "<<ar[0]*ar[0]<<endl;
		cout<<"preimeter= "<<ar[0]*4<<endl;
		cout<<"Click (]) to delet or Click (/) to back"<<endl;
		while(1){
		bbc =getch();
		if(bbc == '/')
		  {system("cls");
		  goto ssd;}
		  else if(bbc==']')
		  goto srS;}}
		
	else if(area=='R' || area=='r'){
	srR:	system("cls");
		cout<<"Enter Length: "<<endl;
		cin>>ar[0];
		cout<<"Enter Width: "<<endl;
		cin>>ar[1];
		cout<<"_________________________"<<endl;
		cout<<"Area= "<<ar[0]*ar[1]<<endl;
		cout<<"preimeter= "<<2*(ar[0]+ar[1])<<endl;
		cout<<"Click (]) to delet or Click (/) to back"<<endl;
		while(1){
		bbc =getch();
		if(bbc == '/')
		  {system("cls");
		  goto ssd;}
		  else if(bbc==']')
		  goto srR;}}
		
	else if(area=='T' || area=='t'){
	srT:	system("cls");
		cout<<"Enter First Side: "<<endl;
		cin>>ar[0];
		cout<<"Enter Second Side: "<<endl;
		cin>>ar[1];
		cout<<"Enter Third Side: "<<endl;
		cin>>ar[2];
		ar[3]=ar[0]+ar[1]+ar[2];
		ar[4]=ar[3]/2;
		cout<<"_________________________"<<endl;
		cout<<"Preimeter= "<<ar[3]<<endl;
		ar[5]=ar[4]*(ar[4]-ar[0])*(ar[4]-ar[1])*(ar[4]-ar[2]); 
		cout<<"Area= "<<sqrt(ar[5])<<endl;
		cout<<"Click (]) to delet or Click (/) to back"<<endl;
		while(1){
		bbc =getch();
		if(bbc == '/')
		  {system("cls");
		  goto ssd;}
		  else if(bbc==']')
		  goto srT;}}

	else if(area=='c' || area=='C'){
	srC:	system("cls");
		cout<<"Enter Radius: "<<endl;
		cin>>ar[0];
		cout<<"_________________________"<<endl;
		cout<<"Area= "<<3.14*(ar[0]*ar[0])<<endl;
		cout<<"Preimeter= "<<2*3.14*ar[0];
		cout<<"Click (]) to delet or Click (/) to back"<<endl;
		while(1){
		bbc =getch();
		if(bbc == '/')
		  {system("cls");
		  goto ssd;}
		  else if(bbc==']')
		  goto srC;}}
	else if(area=='/'){
	 goto pq; 	}	  
		  }}//حق ال else ifالثالث
		    
			else if(prog == '/'){
	        system("cls"); 	goto bck;}}
		  	
		
		  	
		  
		} // for while if else all programs outed from it 		
} // for if else (program)	مهم جداً جداً
 // Click on (W) To show Your Information or Click on (I) To Enter The Program
	return 0;}









