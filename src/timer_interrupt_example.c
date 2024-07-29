#include <stdio.h>
#include <unistd.h> // For sleep function

void setup_timer(void) {
    // Simulated setup; just prints a message here
    printf("Timer setup complete.\n");
}

void timer_interrupt(void) {
    // Simulated interrupt handler; just prints a message
    printf("Timer interrupt occurred.\n");
}

int main(void) {
    setup_timer();

    // Simulate a timer interrupt every second
    while (1) {
        sleep(1); // Sleep for 1 second
        timer_interrupt();
    }

    return 0;
}