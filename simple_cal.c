#include<stdio.h>
int main(){
	int a,b,sum,min,mul;
	char ch;
    float div;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("\nEnter second number:");
    scanf("%d",&b);
	printf("\nOpertion:");
	fflush(stdin);
	scanf("%c",&ch);

	
	switch(ch){
		case '+':
		 sum=a+b;
			printf("\n%d+%d\n=%d",a,b,sum);	
			break;
			case '-':
				 min=a-b;
				printf("\n%d-%d\n=%d",a,b,min);
				break;
				case '*':
					 mul=a*b;
					printf("\n%d*%d\n=%d",a,b,mul);
					break;
					case '/':
					 div=(float)a/b;
					printf("\n%d/%d\n=%.2f",a,b,div);
					break;
					default:
						printf("\nINVALID OPERATION");
					
	
	}
}
