// Project On C Language
#include<stdio.h>
#include<string.h>
void signup();
void login();
void process();
void main()

{ 
	printf("****Welcome to OLA Rides**** \n\n");
	int a;
	printf("Enter '1' for 'SIGNUP' or Press any number  for 'LOGIN': ");
	scanf("%d",&a);
	if(a==1)
	{
		signup();
	}
	else
	{
		login();
	}

	
	
	
}
void signup()
{
	printf("SignUp Into OLA Account \n");
	char name[10];
	char lastname[10];
	int phnum[10];
	int otp;
	char otp1[10],otp2[10];
	printf("Enter your name:  ");
	scanf("%s",&name);
	printf("Enter Last name:  ");
	scanf("%s",&lastname);
	printf("Enter phone number: ");
	scanf("%d",&phnum[10]);
	printf("Enter last digit of your Phone number: ");
	scanf("%d",&otp);
	
	
	if(otp==0)
	{
		printf("Your OTP is CASHBACKMILEGA \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
	    	process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" SignUp Again..!");
		}
	}
	else if(otp==1)
	{
		
		printf("Your OTP is JARA \n");
		printf("Enter OTP : ");
		scanf("%s",&otp1);
		printf("Your OTP is %s", &otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
		    process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" SignUp Again..!");
		}
	}
	else if(otp==2)
	{
		printf("Your OTP is NHIJARA \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();
		
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" SignUp Again..!");
		}
	}
	else if(otp==3)
	{
		printf("Your OTP is BILKULJARA \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();
		
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" SignUp Again..!");
		}
	}
	else if(otp==4)
	{
		printf("Your OTP is LECHALO \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();
	
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" SignUp Again..!");
		}
	}
	else if(otp==5)
	{
		printf("Your OTP is JALDICHALO \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();

		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" SignUp Again..!");
		}
	}
	else if(otp==6)
	{
		printf("Your OTP is KITNATIMELAGEGA \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" SignUp Again..!");
		}
	}
	else if(otp==7)
	{
		printf("Your OTP is MENHIAARA \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" SignUp Again..!");
		}
	}
	else if(otp==8)
	{
		printf("Your OTP is CHALOBHAIYA \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" SignUp Again..!");
		}
	}
	else if(otp==9)
	{
		printf("Your OTP is POHCHADE \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" SignUp Again..!");
		}
	}
}


void login()
{
	int num[10],a;
	char otp1[20],otp2[20];
	printf("LogIn into Ola account \n");
	printf("Enter Mobile number: ");
	scanf("%d",&num[10]);
	printf("Enter Last number of your Mobile number: ");
	scanf("%d",&a);


	if(a==0)
	{
		printf("Your OTP is JARA");
		printf("Enter OTP:  ");
		scanf("%s",otp1);
		printf("Re-Enter OTP: ");
		scanf("%s",otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please Select Vehicle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" LogIn Again..!");
		}
	}
	else if(a==1)
	{
		printf("Your OTP is NHI_JARA \n");
		printf("Enter OTP:  ");
		scanf("%s",otp1);
		printf("Re-Enter OTP: ");
		scanf("%s",otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please Select Vehicle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" LogIn Again..!");
		}
	}
	else if(a==2)
	{
		printf("Your OTP is BILKUL_JARA \n");
		printf("Enter OTP:  ");
		scanf("%s",otp1);
		printf("Re-Enter OTP: ");
		scanf("%s",otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please Select Vehicle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" LogIn Again..!");
		}
	}
	else if(a==3)
	{
		printf("Your OTP is JALDI_CHALO \n");
		printf("Enter OTP:  ");
		scanf("%s",otp1);
		printf("Re-Enter OTP: ");
		scanf("%s",otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please Select Vehicle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" LogIn Again..!");
		}
	}
	else if(a==4)
	{
		printf("Your OTP is KITNA_TIME_HAI \n");
		printf("Enter OTP:  ");
		scanf("%s",otp1);
		printf("Re-Enter OTP: ");
		scanf("%s",otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please Select Vehicle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" LogIn Again..!");
		}
	}
	else if(a==5)
	{
		printf("Your OTP is ME_NHI_AARA \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" LogIn Again..!");
		}
	}
	else if(a==6)
	{
		printf("Your OTP is TIME_LAGEGA \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" LogIn Again..!");
		}
	}
		else if(a==7)
	{
		printf("Your OTP is JALDI_POHCHADO \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf( " LogIn Again..!");
		}
	}
		else if(a==7)
	{
		printf("Your OTP is GHAR_POHCHADO \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" LogIn Again..!");
		}
	}
		else if(a==8)
	{
		printf("Your OTP is LONDONWAN \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf("LogIn Again..!");
		}
	}
		else if(a==9)
	{
		printf("Your OTP is POHCHADO \n");
		printf("OTP : ");
		scanf("%s",&otp1);
		printf("ReEnter OTP: ");
		scanf("%s",&otp2);
		if(strcmp(otp1,otp2)==0)
		{
			printf("Please select vehichle \n");
			process();
		}
		else
		{
			printf("Incorrect OTP,  ");
			printf(" LogIn Again..!");
	}
}
}


void process()
{
	printf("\n");
	printf("    *************\n");
	printf("    * OLA RIDES *\n");
	printf("    *************\n");
	char loc[15],des[15];
	int number;
	printf("Enter your location: ");
	scanf("%s",&loc);
	printf("Enter your Destination: ");
	scanf("%s",&des);
	printf("Total KiloMetre = %dKm \n",strlen(des));
	printf("Choose a Vehichle according to which the number alloted to them: \n10) Luxury \n20) SUV \n30) Sedan \n40) Mini \n50) Sharing Car \n60) Auto \n70) Bike \n");
	printf("Enter Alloted Vehicle Number : ");
	scanf("%d",&number);
		if(number==10)
	{
		printf("You have selected Luxury Car \n");
		printf("Total fair: %d",100 * strlen(des));
	}
	else if(number==20)
	{
		printf("You have selected SUV Car \n");
		printf("Total fair: %d",70 * strlen(des));
	}	else if(number==30)
	{
		printf("You have selected Sedan Car \n");
		printf("Total fair: %d",50 * strlen(des));
	}
	else if(number==40)
	{
		printf("You have selected Mini car \n");
		printf("Total fair: %d",35 * strlen(des));
	}
	else if(number==50)	{
		printf("You have selected Sharing car \n");
		printf("Total fair: %d",25 * strlen(des));
	}
	else if(number==60)
	{
		printf("You have selected Auto \n");
		printf("Total fair: %d",15 * strlen(des));
	}
	else if(number==70)
	{
		printf("You have selected Bike \n");
		printf("Total fair: %d",10 * strlen(des));
	}
	else
	{
		printf("Vehicle not found!!");
	}
	printf(" \nThank Your for Travelling with OLA Rides");
}


