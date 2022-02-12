#include <stdio.h>
#include "calculator.h"
	int addition(); 
	int subtraction(); 
	int multiplication(); 
	int division(); 
	int modulus(); 
	int main()
        {
  	  int Operator; 
  	  int n1,n2, ans=0;
	  printf("1.+\n 2.-\n 3.* \n / \n 5.%\n ");
	  scanf("%c", &Operator);

	  switch (Operator)
	 {

		case 1:
  			printf("Enter two operands");
		        scanf("%d %d",&n1,&n2);
  			result = addition(n1,n2); 
  			printf("result=%d",result);
 			
			break;

		case 2:
  			printf("Enter two operands");
  			scanf("%d %d",&n1,&n2);
  			result=subtraction(n1,n2); 
  			printf("result=%d",result);
  			
			break;

		case 3:
  			printf("Enter two operands");
  			scanf("%d %d",&n1,&n2);
  			result = multiplication(n1,n2);
  			printf("result=%d",result);
  
			break;

		case 4:
  			printf("Enter two number");
  			scanf("%d %d",&n1,&n2);
 			result= division(n1,n2);    
 			printf("result=%d",result);
 
			break;

		case 5: 
    			printf("Enter two operands");
    			scanf("%d %d",&n1,&n2);
  			result = modulus(n1,n2);  
   			printf("result=%d",result);
    
			break; 
 
 		default: 
            		printf("/n Ooops! You have entered invalid operator.");

		}

	return 0; 
     }
