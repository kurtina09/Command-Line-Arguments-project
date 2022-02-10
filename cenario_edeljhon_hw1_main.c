/**************************************************************
* Class:  CSC-415-02 Fall 2021
* Name: Edel Jhon Cenario
* Student ID: 921121224
* GitHub Name: kurtina09
* Project: Assignment 1 � Command Line Arguments
*
* File: cenario_edeljhon_HW1_main.c
*
* Description: This is my Assignment 1 - Command Line project.
*
**************************************************************/

#include<stdio.h>


// -- Main --
int main(int argc, char* argv[]) {

	int i; //Index variable

	//start of validation
	if (argc == 1)
		printf("\nThere is only one argument."); //One argument

	if (argc >= 2) {
		printf("\nThere were %d arguments passed.", argc); //Two or more arguments
		for (i = 0; i < argc; i++) { //Iterate arguments
			printf("\nArgument %d: %s", i, argv[i]); //Display arguments
			printf("\n");
		}
	}
	return 0;
}
