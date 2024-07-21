#include <stdbool.h>















bool dopple_out(const char *str_in) {
  
  
  char str[strlen(str_in)];
  strcpy(str, str_in);
  int i = 0;
  while (str[i] != '\0') {
    int s = i +1;
    printf("s=%d,i=%d\n",s,i);
    while (str[s] != '\0') {
      
      if (str[i]==str[s])
        {
        printf("s=%d,i=%d\n",s,i);
        printf("s=%c,i=%c\n",str[s],str[i]);
        
        return false;}
      s++;
  }

    i++;
  }
return true;
  
    
    
}