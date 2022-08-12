#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void ask_question();
void ask_question()
{
	int r;
	for (int i = 1; i <= 10; i++)
	{
		system("cls");
		r = i;
		switch (r)
		{
		case 1:
			printf("\n\nThe world famous monument Pyramid is located in?");
			printf("\n\nA.Egypt\t\tB.Russia\n\nC.Greece\tD.England");
			// Here will be input and validation system

		case 2:
			printf("\n\nWhat is the full form of AI?");
			printf("\n\nA.Artificial Ingenius\t\tB.Artificial Intellactual\n\nC.Artificial Intelligence\tD.None of the above");
			// Here will be input and validation system

		case 3:
			printf("\n\nWhich among the following is also popular as Earths Twin?");
			printf("\n\nA.Mercury\t\tB.Venus\n\nC.Mars\t\t\tD.Neptune");
			// Here will be input and validation system

		case 4:
			printf("\n\nWhite House is located at?");
			printf("\n\nA.United States\t\tB.Italy\n\nC.England\t\tD.Canada");
			// Here will be input and validation system

		case 5:
			printf("\n\nMost advance rover of Mars is?");
			printf("\n\nA.Opportunity\t\tB.Perseverance\n\nC.Curiosity\t\tD.Spirit");
			// Here will be input and validation system

		case 6:
			printf("\n\nPyton is a..");
			printf("\n\nA.Snake\t\tB.Language\n\nC.A Game\tD.Progrmming Language");
			// Here will be input and validation system

		case 7:
			printf("\n\nInventor of C is..");
			printf("\n\nA.Dennis Ritchie\t\tB.Dennis Richie\n\nC.Dannis Ritchie\t\tD.Denis Ritchie");
			// Here will be input and validation system

		case 8:
			printf("\n\nWhich is not a programming paradigm?");
			printf("\n\nA.Functional\t\tB.Object Oriented\n\nC.Procedural\t\tD.Steps Oriented");
			// Here will be input and validation system

		case 9:
			printf("\n\nWhich is not a Mechanicals Switch?");
			printf("\n\nA.Blue Switches\t\tB.Skyblue Switched\n\nC.Red Switched\t\tD.Black Switches");
			// Here will be input and validation system

		case 10:
			printf("\n\nWhich is the furthest away man-made object from earth?");
			printf("\n\nA.Cessini\t\tB.New Horizons\n\nC.Voyager\t\tD.Pioneer 10");
			// Here will be input and validation system
		}
	}
}