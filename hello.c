#include<stdio.h>
#include<cs50.h>

int main(void) {
//let's get the user input
	string name=get_string("Enter your name: ");
	printf("Hello %s ",name);
}