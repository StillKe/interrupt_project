#include <stdio.h>
#include "software_interrupt.h"

// Simulated System Call Numbers
#define SYS_CALL_PRINT 1
#define SYS_CALL_EXIT  2

// Simulated System Call Handler
void syscall_handler(int syscall_number, void *arg) {
    switch (syscall_number) {
        case SYS_CALL_PRINT:
            printf("System Call: Print - %s\n", (char *)arg);
            break;
        case SYS_CALL_EXIT:
            printf("System Call: Exit\n");
            // In a real OS, you would exit the process here
            break;
        default:
            printf("Unknown System Call\n");
    }
}

// User-Space Application Simulation
void user_space_program(void) {
    char *message = "Hello, World!";
    
    // Simulate a system call to print a message
    syscall_handler(SYS_CALL_PRINT, message);
    
    // Simulate a system call to exit
    syscall_handler(SYS_CALL_EXIT, NULL);
}
