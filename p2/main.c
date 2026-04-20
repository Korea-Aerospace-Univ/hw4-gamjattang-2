#include <stdio.h>

int main() 
{
  
    int n;                  
    char str[101];    
  
    int alpha_count = 0;   
    int digit_count = 0;   
  
    int max_alpha = 0;     
    int max_digit = 0;     

    scanf("%d", &n);        
    scanf("%s", str);      

    for (int i = 0; i < n; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {  
            alpha_count++;                      
            digit_count = 0;  
          
        } else if (str[i] >= '0' && str[i] <= '9') { 
            digit_count++;                           
            alpha_count = 0;    
          
        } else {
            alpha_count = 0;    
            digit_count = 0;
        }

        if (alpha_count > max_alpha)  
            max_alpha = alpha_count;
      
        if (digit_count > max_digit)    
            max_digit = digit_count;
    }

    printf("%d\n", max_alpha);  
    printf("%d\n", max_digit);  

    return 0;
}
