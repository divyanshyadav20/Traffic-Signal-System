#include<mega16.h>
#include<delay.h>
unsigned char dis[]={0b11000000,0b11111001,0b10100100,0b10110000,0b10011001,0b10010010,0b10000010,0b11111000,0b10000000,0b10010000};
int i,j;
void time();
void main()
{
 DDRA=DDRC=DDRD=0b11111111;
 PORTA=0b10101001;
 time();
 PORTA=0b10100110;
 time();
 PORTA=0b10011010;
 time();
 PORTA=0b01101010;
 time();         
}
void time()
{
 PORTC=dis[3];
 PORTD=dis[0]; 
 delay_ms(100);
 for(i=2;i>=0;i--)
 {
  PORTC=dis[i];
  for(j=9;j>=0;j--)
  {PORTD=dis[j];
  delay_ms(100);}
 }
}
  
