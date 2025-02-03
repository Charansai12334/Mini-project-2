#include <stdio.h>
#include <string.h>

#define MAX_BUSES 100
#define MAX_SEATS 40
#define MAX_BOOKINGS 1000

typedef struct {
    int id;
    char name[50];
    int seats[MAX_SEATS];
} Bus;

typedef struct {
    int busId;
    char passengerName[50];
    int seatNumber;
} Booking;

Bus buses[MAX_BUSES];
Booking bookings[MAX_BOOKINGS];
int busCount = 0;
int bookingCount = 0;

void addBus() {
}

void displayBuses() {

}

void bookSeat() {

}

void viewBookings() {
}

void cancelBooking() {
    // Cancel a booking
}

int main() {
    int choice;
    while (1) {
        printf("Bus Reservation System\n");
        printf("1. Add Bus\n");
        printf("2. Display Buses\n");
        printf("3. Book Seat\n");
        printf("4. View Bookings\n");
        printf("5. Cancel Booking\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addBus();
                break;
            case 2:
                displayBuses();
                break;
            case 3:
                bookSeat();
                break;
            case 4:
                viewBookings();
                break;
            case 5:
                cancelBooking();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

