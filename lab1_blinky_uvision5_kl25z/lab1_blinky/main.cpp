#include "mbed.h"

DigitalOut myled(PTD1);

int main() {
    while(1) {
        myled = 1;
        wait(0.2);	//wait for .2 milliseconds
        myled = 0;
        wait(0.2);
    }
}
