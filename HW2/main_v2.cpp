/* Test which brings default HelloWorld project from mbed online compiler
   to be built under GCC.
*/
#include "mbed.h"



DigitalOut led_array[] = {(LED1),(LED2),(LED3),(LED4)};

int main() 
{
int i;

led_array[0]=1;
wait(.25);
while(1)
    {

	    led_array[1]=1;
	    led_array[0]=0;
	    wait(.25);

	    led_array[2]=1;
	    led_array[1]=0;
	    wait(.25);

	    led_array[3]=1;
	    led_array[2]=0;
	    wait(.5);


	    led_array[2]=1;
	    led_array[3]=0;
	    wait(.25);


	    led_array[1]=1;
	    led_array[2]=0;
	    wait(.25);

	    led_array[0]=1;
	    led_array[1]=0;
	    wait(.50);
   }
}
