#include <iostream>

using namespace std;

int main() {
    // Initial ticket cost
    double ticketCost = 1200;

    // Apply 25% discount
    double discountedCost = ticketCost - (ticketCost * 0.25);

    // Add 8% service charges
    double costWithService = discountedCost + (discountedCost * 0.08);

    // Add Rs. 50 online booking fee
    double finalCost = costWithService + 50;

    cout << "Final amount after policy changes: " << finalCost << " PKR" << endl;

    return 0;
}
