#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>



typedef struct {
	
	
	
	double amount = 100;
	//
	char username[100];
	//
	int choice;
	//
	const double pizza = 10;
	//
	const double burger = 7;
	//
	const double mini_burger = 5;
	//
	const double lahmacun = 2;
	//
	const double crisps = 3;
} Data;





void sound(void){
	
	Beep(600,500);
	Beep(500,500);
	Beep(400,500);
}




int main(void){
	

	Data User;
	
	printf("Please enter your username:  ");
	scanf("%s", User.username);
	
	printf("\n");
	printf("Welcome %s to the MENU-SYSTEM!", User.username);
	
	
	char List[5][100] = {"Pizza", "Lahmacun", "Burger", "Mini-Burger", "Crisps"};
	
	
	
while(1){

	sound();
	
	printf("\n------- ALL MEALS --------\n");
	printf("1. Pizza = %.2f $\n", User.pizza);
	printf("2. Lahmacun = %.2f $\n", User.lahmacun);
	printf("3. Burger = %.2f $\n", User.burger);
	printf("4. Mini-Burger = %.2f $\n", User.mini_burger);
	printf("5. Crisps = %.2f $\n", User.crisps);
	printf("6. Exit\n");

	
	printf("\n");
	printf("\n");
	printf("\n");
	
	printf("Your balance is %.2f $\n", User.amount);
	
	printf("\n");
	printf("\n");
	printf("\n"); 
	
	printf("Please enter any option:  ");
	scanf("%d", &User.choice);
	
	
	
	switch(User.choice){
		
		
		
		case 1:
			
			//
			printf("\nYou chose Pizza!\n");
			User.amount = User.amount - User.pizza;
			
			printf("Please wait a bit...");
			Sleep(3000);
			printf("\nYour balance is %.2f $\n", User.amount);
			break;
			
			
	    case 2:
	    	
	    	//
	    	printf("\nYou chose Lahmacun!\n");
	    	
	    	User.amount = User.amount - User.lahmacun;
	    	
	    	
			printf("Please wait a bit...");
			Sleep(3000);
			printf("\nYour balance is %.2f $\n", User.amount);
	    	break;
	    	
	    	
	    case 3:
	    	
	    	//
	    	
	    	printf("\nYou chose Burger!\n");
	        User.amount = User.amount - User.burger;
	        
	        
			printf("Please wait a bit...");
			Sleep(3000);
			printf("\nYour balance is %.2f $\n", User.amount);
	   
	    	
	    	break;
	    	
	    case 4:
	    	
	    	
	    	//
	    	
	    	printf("\nYou chose Mini-Burger!\n");
	    	
	    	User.amount = User.amount - User.mini_burger;
			
			printf("Please wait a bit...");
			Sleep(3000);
			printf("\nYour balance is %.2f $\n", User.amount);
	    	break;
	    	
	    case 5:
	    	
	    	//
	    	printf("\nYou chose Crisps!\n");
	    	
	    	User.amount = User.amount - User.crisps;
			
			printf("Please wait a bit...");
			Sleep(3000);
			printf("\nYour balance is %.2f $\n", User.amount);
	    	break;
	    
		case 6:
			
			//
			printf("\nGoodbye %s, Thank you for choosing us!", User.username);
			return 0;
			
	    default:
	    	
	    	//
	    	
	    	printf("\nPlease enter a  valid number!\n");
	    	break;
	 }
   }
}


