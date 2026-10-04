#include<stdio.h>
int main(){
int n;
printf("Enter number of containers\n");
scanf("%d",&n);
int i,weight,type,track;
for(i=1;i<=n;i++){
printf("Enter Type of Conatiner\n 1:General goods\n 2:Hazardous material\n 3:Refrigerated Goods\n");
scanf("%d", &type);
printf("Enter the Weight of container in KG\n");
scanf("%d", &weight);
switch(type){
case 1:
if(weight>20000){
    printf("Loading rejected\n");
}
else{
    printf("Loading Allowed\n");
}
break;
case 2:
if(weight>15000 || i%2==0){
    printf("Loading Rejected\n");
}
else{
    printf("Loading Allowed\n");
}
break;
case 3:
if(weight>18000){
    printf("Loading Rejected\n");
}
else{
    printf("Loading Allowed\n");
}
break;
default : printf("invalid Type\n");
}
track=(weight%97)%100;
printf("Tracking code:%02d\n", track);
}
    return 0;
}