#include<stdio.h>
int main(){
 float weight;
 float height;
 float BMI;
 printf("Enter weight (kg)");
 scanf("%f",&weight);
 printf("Enter height (m)");
 scanf("%f",&height);
  BMI=weight/(height*height);
  printf("BMI=%.2f",BMI);
  if(BMI < 18.5){
  	printf("category=underweight");}
  	else if(BMI<24.9){
  	    printf("category=normal");}
	  else if(BMI<29.9){
	  	printf("category=overweight");}
	  	else{
	  		printf("category=obese");}
		  return 0;	
  }
