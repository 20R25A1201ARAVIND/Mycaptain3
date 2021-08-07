#include<stdio.h>
int main()
{
  int ch;
  printf("1.Chicken,Rs150 \n2.Mutton,Rs250 \n3.Egg,Rs50 \n4.Fish,Rs200 \n5.Pronce,Rs.230\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
      printf("Food item -Chicken \nPrice - Rs 150");
      break;
    case 2:
      printf("Food item -Mutton \nPrice - Rs 250");
      break;
    case 3:
      printf("Food item -Egg \nPrice - Rs 50");
      break;
    case 4:
      printf("Food item -Fish \nPrice - Rs 200");
      break;
    case 5:
      printf("Food item -Pronce \nPrice - Rs 230");
      break;
    default:
      printf("Item Not Available");
      break;
  }
  return 0;
}
