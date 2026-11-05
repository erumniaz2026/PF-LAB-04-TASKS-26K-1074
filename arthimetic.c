#include<stdio.h>
int main () {
	int num1;
	scanf("%d",&num1);
	int num2;
	scanf("%d",&num2);
	char op;
	scanf(" %c",&op);
	switch(op){
		case '+':
		printf("sum=%d",num1+num2);
		break;
		case '-':
		printf("difference=%d",num1-num2);
		break;
		case '*':
		printf("product=%d",num1*num2);
		break;
		case '/':
			if(num2==0){
				printf("Error! cannot divide by zero");
			}
			else {
		printf("quotient=%d",num1/num2);
	}
		break;
		default:
			printf("invalid operator! please enter +,-,*,/. ");
		}
		return 0;
}
