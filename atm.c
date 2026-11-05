#include<stdio.h>
int main(){
	int balance;
	int withdrawalamount;
	printf("Enter balance");
	scanf("%d",&balance);
	printf("Enter withdrawalamount");
	scanf("%d",&withdrawalamount);
	if(withdrawalamount%500==0 && withdrawalamount<=balance && withdrawalamount<=25000){
		printf("withdrawal successful.\n");
		printf("Remaining balance:%d\n",balance-withdrawalamount);
	}
	else if(withdrawalamount%500!=0){
		printf("Withdrawal failed:amount must be multiple of 500.\n");
	}
	else if(withdrawalamount>balance){
		printf("Withdrawal failed:insufficent balance.\n");
	}
	else if(withdrawalamount>25000){
		printf("Withdrawal failed:amount exceeds daily limit.\n");
	}
	return 0;
}
