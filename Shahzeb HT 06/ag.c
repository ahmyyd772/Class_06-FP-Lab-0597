#include<stdio.h>
int main(){
int access,hour,night;
printf("Enter access number (9999 to stop):\n");
scanf("%d",&access);
while(access!=9999){
printf("Enter hour (0-23):\n");
scanf("%d",&hour);
night=(hour>=22||hour<6)?1:0;
printf("%s\n",night?"LATE NIGHT MODE":"STANDARD MODE");
if(access&(night?8:(1|2|4))){
printf("Entry Granted\n");
}else{
printf("Entry Denied\n");
}
if(access&4){
printf("Personal Trainer Access: Yes\n");
}else{
printf("Personal Trainer Access: No\n");
}
printf("Enter access number (9999 to stop):\n");
scanf("%d",&access);
}
return 0;
}