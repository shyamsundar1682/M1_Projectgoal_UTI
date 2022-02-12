
#include <stdio.h>
 int addition();
int subtraction();
int multiplication();
int division();
int modulus();
int main() {
  // variable declaration
  int choice; 
  int n1,n2, result=0;
  printf("Select the operation you want perform");
  printf("1.+\n 2.-\n 3.* \n / \n 5.%\n ");
  scanf("%d", &result);

// switch statement
 switch (choice) {

    case 1:
      printf("Enter two numbers");
      scanf("%d %d",&n1,&n2);
      
      ans = addition(n1,n2); //calling addition function
      
      printf("answer=%d",ans);
      break;
    case 2:
     printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      ans=subtraction(n1,n2); //calling subtraction function
      printf("answer=%d",ans);
      break;
    case 3:
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      ans = multiplication(n1,n2); //calling multiply function 
      printf("answer=%d",ans);
      break;
    case 4:
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
     ans = division(n1,n2);    //calling division function
     printf("answer=%d",ans);

      break;
    case 5: 
        printf("Enter two number");
        scanf("%d %d",&n1,&n2);
       ans= modulus(n1,n2);  // calling madules function
       printf("answer=%d",ans);
        break;  
    case 6: 
        printf("\nEnter two numbers to find the power \n");
        printf("number: ");
        scanf("%d",&n1);
 
        printf("power : ");
        scanf("%d",&n2);      // calling power function
       ans= power(n1,n2);
          printf("answer=%d",ans);
        break;  
    case 7: 
        printf("\nEnter a number to find factorial : ");
        scanf("%d",&n1);
        ans = factorial(n1); //calling  factorial function
        printf("answer=%d",ans);
        break;  
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
