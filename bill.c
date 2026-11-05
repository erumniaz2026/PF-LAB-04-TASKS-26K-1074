#include<stdio.h>
int main(){
	int units,bill;
	printf("Enter units:");
	scanf("%d",&units);
	if(units<=100){
		bill=units*5;
	}
	else if(units<=200){
		bill=units*8;
	}
	else if(units<=400){
	bill=units*12;
}
    else{
    	bill=100*5+100*8+(units-200)*12;
	}
	printf("Electricity bill=rs.%d",bill);
	return 0;
}
