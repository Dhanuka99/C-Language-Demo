#include <stdio.h>
int main(void)
{
int var1 = 11;
int var2 = 22;
int *ptr1, *ptr2, *ptr3;
ptr1 = &var1;
ptr2 = &var2;
ptr3 = ptr2;
printf(“%d %d %d\n”, *ptr1 , *ptr2 , *ptr3);
ptr2 = ptr1;
printf(“%d %d %d\n”, *ptr1 , *ptr2 , *ptr3);
*ptr1 = *ptr3;
printf(“%d %d %d\n”, *ptr1 , *ptr2 , *ptr3);
return 0;
}
