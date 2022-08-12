#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void help();

int main(){
	// Variables
    int counter,r;
    char choice;

	// mainhome = main menu
    mainhome:
    	system("cls");
     	printf("\n\t\t________________________________________");
		printf("\n\t\t\t         WELCOME ");
		printf("\n\t\t\t           to ");
		printf("\n\t\t\t     THE QUIZ GAME ");
		printf("\n\t\t________________________________________");
		printf("\n\t\t > Press S to start the game");
		printf("\n\t\t > press H for help            ");
		printf("\n\t\t > press Q to quit             ");
		printf("\n\t\t________________________________________\n\n");

		// Get the keyboard input from the user and convert it to upper case
    choice = toupper(getch());
    if(choice=='H'){
		// call help function
		help();
		getch();
		goto mainhome;
	}else if (choice=='Q'){
		// Exit the game
		exit(1);	
	}else if(choice=='S'){
		// Start the game
		system("cls");
		goto game;

	// Main game
	game:
		counter=0; // connter is the money which increases as you give right answer 
		for(int i=1;i<=10;i++){
			/*
				Run the for loop to ask question with the help of the case.
				There are total 10 question.
				If the user gives wrong answer the game will end and the score will be displayed else the game will continue
			*/
			system("cls");
			r=i; // r is the variable used in switch..case, this n=is set equal to i (Loop variable)

			switch(r){
				// every question's code is almost same
				case 1:
				printf("\n\nThe world famous monument Pyramid is located in?");
				printf("\n\nA.Egypt\t\tB.Russia\n\nC.Greece\tD.England");
				if(toupper(getch())=='A'){ // Run if the asnwer is correct, it is done by taking the value of the key press and converting it to uppercase and running it through a if..else condition
					printf("\n\nCorrect!!!");
					counter++; // increase the money
					getch(); // wait after each question for the user input to continue
					break;
				}else{ // Run if the asnwer is not correct
					printf("\n\nWrong!!! The correct answer is A.Egypt");
					getch();
					goto score; // go to the score code to display the score
					break;
				}

				case 2:
				printf("\n\nWhat is the full form of AI?");
				printf("\n\nA.Artificial Ingenius\t\tB.Artificial Intellactual\n\nC.Artificial Intelligence\tD.None of the above");
				if(toupper(getch())=='C'){
					printf("\n\nCorrect!!!");
					counter++;
					getch(); 
					break;
				}else{
					printf("\n\nWrong!!! The correct answer is C.Artificial Intelligence");
					getch();
					goto score;
					break;
				}

				case 3:
				printf("\n\nWhich among the following is also popular as Earths Twin?");
				printf("\n\nA.Mercury\t\tB.Venus\n\nC.Mars\t\t\tD.Neptune");
				if(toupper(getch())=='B'){
					printf("\n\nCorrect!!!");
					counter++;
					getch(); 
					break;
				}else{
					printf("\n\nWrong!!! The correct answer is B.Venus");
					getch();
					goto score;
					break;
				}

				case 4:
				printf("\n\nWhite House is located at?");
				printf("\n\nA.United States\t\tB.Italy\n\nC.England\t\tD.Canada");
				if(toupper(getch())=='A'){
					printf("\n\nCorrect!!!");
					counter++;
					getch(); 
					break;
				}else{
					printf("\n\nWrong!!! The correct answer is A.United States");
					getch();
					goto score;
					break;
				}

				case 5:
				printf("\n\nMost advance rover of Mars is?");
				printf("\n\nA.Opportunity\t\tB.Perseverance\n\nC.Curiosity\t\tD.Spirit");
				if(toupper(getch())=='B'){
					printf("\n\nCorrect!!!");
					counter++;
					getch(); 
					break;
				}else{
					printf("\n\nWrong!!! The correct answer is B.Perseverance");
					getch();
					goto score;
					break;
				}

				case 6:
				printf("\n\nPyton is a..");
				printf("\n\nA.Snake\t\tB.Language\n\nC.A Game\tD.Progrmming Language");
				if(toupper(getch())=='D'){
					printf("\n\nCorrect!!!");
					counter++;
					getch(); 
					break;
				}else{
					printf("\n\nWrong!!! The correct answer is D.Progrmming Language");
					getch();
					goto score;
					break;
				}

				case 7:
				printf("\n\nInventor of C is..");
				printf("\n\nA.Dennis Ritchie\t\tB.Dennis Richie\n\nC.Dannis Ritchie\t\tD.Denis Ritchie");
				if(toupper(getch())=='A'){
					printf("\n\nCorrect!!!");
					counter++;
					getch(); 
					break;
				}else{
					printf("\n\nWrong!!! The correct answer is A.Dennis Ritchie");
					getch();
					goto score;
					break;
				}

				case 8:
				printf("\n\nWhich is not a programming paradigm?");
				printf("\n\nA.Functional\t\tB.Object Oriented\n\nC.Procedural\t\tD.Steps Oriented");
				if(toupper(getch())=='D'){
					printf("\n\nCorrect!!!");
					counter++;
					getch(); 
					break;
				}else{
					printf("\n\nWrong!!! The correct answer is D.Steps Oriented");
					getch();
					goto score;
					break;
				}

				case 9:
				printf("\n\nWhich is not a Mechanicals Switch?");
				printf("\n\nA.Blue Switches\t\tB.Skyblue Switched\n\nC.Red Switched\t\tD.Black Switches");
				if(toupper(getch())=='B'){
					printf("\n\nCorrect!!!");
					counter++;
					getch(); 
					break;
				}else{
					printf("\n\nWrong!!! The correct answer is B.Skyblue Switched");
					getch();
					goto score;
					break;
				}

				case 10:
				printf("\n\nWhich is the furthest away man-made object from earth?");
				printf("\n\nA.Cessini\t\tB.New Horizons\n\nC.Voyager\t\tD.Pioneer 10");
				if(toupper(getch())=='C'){
					printf("\n\nCorrect!!!");
					counter++;
					getch(); 
					break;
				}else{
					printf("\n\nWrong!!! The correct answer is C.Voyager ");
					getch();
					goto score;
					break;
				}
			}
		}

	score:
		system("cls");
		if(counter>0 && counter<10){ // run if the score is less than million
			printf("\n\n\t\t**************** CONGRATULATION *****************");
			printf("\n\t\t       You answered %d/10 queston correctly",counter);
			goto go_to_main_menu;
		}else if(counter==10){ // run if the score is million
			printf("\n\n\n \t\t**************** CONGRATULATION ****************");
			printf("\n\t\t\t YOU ANSWERED ALL 10 QUESTIONS RIGHT!!!");
			printf("\n\t\t\t Thank You for Playing!!");
		}else{ // run if you failed
			printf("\n\n\t******** Sorry your answers were wrong ********");
			printf("\n\t\t   Thanks for Playing");
			printf("\n\t\t       TRY AGAIN");
			goto go_to_main_menu;
		}

	go_to_main_menu:
		puts("\n\n > Press Y if you want to play next game");
		puts(" > Press any key if you want to go main menu\n\n");
		puts("--- Coded by Mizab ---");
		if(toupper(getch())=='Y'){
			goto game;
		}else{
			goto mainhome;
		}
	}
}

void help(){
	system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game .........................");
    printf("\n >> When the game start you will be encounterd with 10 questions on GK");
    printf("\n >> You will be given 4 options with 1 option as the correct answer and you have to");
    printf("\n    press A, B ,C or D for the right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers.");
    printf("\n >> The game will stop if you give wrong answer.");

	printf("\n\n*********************BEST OF LUCK*********************************");
	printf("\n\n***********THIS QUIZ GAME IS DEVELOPED BY MIZAB***********");
}