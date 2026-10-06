#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>



typedef struct {
	
	
	
	double amount = 500;
	//
	char username[100];
	//
	int choice;
	//
	const double pizza = 100;
	//
	const double burger = 50;
	//
	const double mini_burger = 50;
	//
	const double lahmacun = 50;
	//
	const double crisps = 10;
} Data;





void sound(void){
	
	
	
	
	Beep(600,500);
	Beep(500,500);
	Beep(400,500);
}




int main(void){
	
	srand(unsigned(time(NULL)));
	Data User;
	
	printf("Please enter your username:  ");
	scanf("%s", User.username);
	
	
	printf("Welcome to the Pizza disacount!");
	
	
	char List[5][100] = {"Pizza", "Lahmacun", "Burger", "Mini-Burger", "Crisps"};
	
	int random_index = rand() % 5;
	
	
	sound();
	
	printf("\n------- ALL MEALS --------\n");
	printf("1. Pizza\n");
	printf("2. Lahmacun\n");
	printf("3. Burger\n");
	printf("4. Mini-Burger\n");
	printf("5. Crisps\n");
	
	printf("Your amount is %lf", User.amount);
	
	
	printf("Please enter your choice:  ");
	scanf("%d", User.choice);
	
	
	
	switch(User.choice){
		
		
		
		case 1:
			
			//
			printf("You chose Pizza!\n");
			User.amount = User.amount - User.pizza;
			
			printf("Your balance is %lf", User.amount);
			
			
	    case 2:
	    	
	    	//
	    	printf("You chose Lahmacun!\n");
	    	
	    	
	    case 3:
	    	
	    	//
	   
	   
	    	printf("You chose Burger!\n");
	    	
	    case 4:
	    	
	    	
	    	//
	    	printf("You chose Mini-Burger!\n");
	    	
	    case 5:
	    	
	    	//
	    	printf("You chose Crisps!\n");
	}
	
}


