#include <stdio.h>
#include <stdlib.h>
 unsigned char is_right(unsigned char a,unsigned char b,unsigned char c);
 /* is right is a function to test if 3 sides passed can form a right angle triangle
 a,b,c : sides passed to be tested
       :0<side<=255
 return: 1---> if yes  , no ---> otherwise

 * _ *  muhsen sheta   * _ *
 */
int main()
{
  if (is_right(3,4,5)==1){
    printf("3,4,5 can perform right angle triangle.\n");
  }
  if (is_right(13,11,5)==1){
    printf("13,11,5 can perform right angle triangle.\n");
  }
return 0;
}
unsigned char is_right(unsigned char a,unsigned char b,unsigned char c){
unsigned  char ret=0;
unsigned int a_square=(unsigned int)a*a;
unsigned int b_square=(unsigned int)b*b;
unsigned int c_square=(unsigned int)c*c;
if((a_square!=0)&&(b_square!=0)&&(c_square!=0)){
    if((a_square+b_square==c_square)||
       (c_square+b_square==a_square)||
      (a_square+c_square==b_square) ){
        ret=1;
      }
    }
return ret;
 }
