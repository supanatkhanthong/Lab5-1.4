#include <stdio.h>

int main(void) {
  float grade;
  printf("Enter Grade :");
  scanf("%f",&grade);
  switch((int)grade/10){
    case 8:
printf("Grade A");
break;
case 7:
if(grade>=75&&grade<80)
printf("Grade B+");
else
printf("Grade B");
break;
case 6:
if(grade>=65&&grade<70)
printf("Grade C+");
else
printf("Grade C");
break;
case 5:
if(grade>=55&&grade<60)
printf("Grade D+");
else
printf("Grade D");
break;
default :
if(grade>=0&&grade<50)
printf("Grade F");

  }
  return 0;
}