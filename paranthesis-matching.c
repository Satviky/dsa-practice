int main()  
{  
    char expression[50];  
    int x=0, i=0;
    printf("\nEnter an expression");  
    scanf("%s", expression);  
 
 while(expression[i]!= '\0')  
    {  
    // Condition to check the symbol is '('     
     if(expression[i]=='(')  
        {  
            x++;      
        }  
     // condition to check the symbol is ')'     
     else if(expression[i]==')')  
        {  
            x--;   
            if(x<0)  
            break;  
        }  
    i++;       
    }  
    
    if(x==0)  
    {  
        printf("Expression is balanced");  
    }  
      
    else  
    {  
        printf("Expression is unbalanced");  
    }  
    return 0;  
}  
