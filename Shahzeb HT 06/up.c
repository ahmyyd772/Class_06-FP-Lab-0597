
#include<stdio.h>
int main(){
int panel,choice;
printf("Enter appliance value (-1 to exit):\n");
scanf("%d",&panel);
while(panel!=-1){
printf("1.Water Heater ON\n2.Air Conditioner OFF\n3.Toggle Main Lights\n4.Check Security Camera\n");
scanf("%d",&choice);
switch(choice){
case 1:
panel|=2;
break;
case 2:
panel&=~4;
break;
case 3:
panel^=1;
break;
case 4:
if(panel&8){
printf("Security Camera is ON\n");
}else{
printf("Security Camera is OFF\n");
}
break;
default:
printf("Invalid option\n");
}
printf("New combined value:%d\n",panel);
if((panel&4)&&(panel&2)){
printf("Overload risk:Air Conditioner and Water Heater are both ON\n");
}
printf("Enter appliance value (-1 to exit):\n");
scanf("%d",&panel);
}
return 0;
}