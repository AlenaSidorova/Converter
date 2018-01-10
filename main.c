#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
char a; 
float cel, kelv, faren, c; 
printf ("$ tconvert "); 
scanf("%f%c",&c, &a); 
switch(a) 
{ 
case 'F': 
if (c >=-459.67) 
{ 
cel = 0.56*(c - 32); 
kelv = cel + 273; 
printf("%.1f C\n", cel); 
printf("%.1f K\n", kelv); 
} 
break; 
case 'K': 
if(c >= 0.0) 
{ 
cel = 273 - c; 
faren = 1.8*cel + 32; 
printf("%.1f C\n", cel); 
printf("%.1f F\n", faren); 
} 
break; 
case 'C': 
if (c >=-273.15) 
{ 
kelv = c + 273; 
faren = 1.8*c + 32; 
printf("%.1f K\n", kelv); 
printf("%.1f F\n", faren); 
} 
break; 
default: 
cel = c; 
if (cel >=-273.15) 
{ 
kelv = cel + 273; 
faren = cel*1.8 + 32; 
printf("%.1f C:\n", cel); 
printf("%.1f F\n", faren); 
printf("%.1f K\n\n", kelv); 
} 
faren = c; 
if (faren >=-459.67) 
{ 
cel = 0.56*(faren - 32); 
kelv = cel + 273; 
printf("%.1f F:\n", faren); 
printf("%.1f K\n", kelv); 
printf("%.1f C\n\n", cel); 
} 
kelv = c; 
if(kelv >= 0.0) 
{ 
cel = 273 - kelv; 
faren = 1.8*cel + 32; 
printf("%.1f K:\n", kelv); 
printf("%.1f C\n", cel); 
printf("%.1f F\n\n", faren); 
} 
} 
return 0; 
}
 

