#include<stdio.h>
int main(){
int age, category, day;
float price;
printf("Enter Your Age\n");
scanf("%d", &age);
 while(age !=0){
 	printf("Enter Category: \n 1:/Regular \n 2:/3D Movie\n 3:/Premier\n");
scanf("%d", &category);
switch(category){


case 1:
	price=500;
	break;
case 2:
	price=800;
	break;
case 3:
	price=1200;
	break;}
if(age<13){
	price= price - (price* 30/100); 	
}
else if(age>=60){
	price= price - (price * 20/100);
}
 printf("Enter Days\n");
 scanf("%d", &day);
 if(day % 5 ==0){
 price = price - 50;
 }
 if(price<100){
 price=100;
 }
 
 printf("Final Price is = %.2f", price);
 
 
printf("Enter Next Customer Age\n");
scanf("%d", &age);

}
return 0;
}

