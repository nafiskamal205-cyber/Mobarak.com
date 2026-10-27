// Program to calculate electricity bill
#include <stdio.h>
int main()
{
    int customerID;
    float units, totalBill;
    char customerName[50];

    printf("Enter customer Name: ");
    scanf("%s", customerName);

    printf("Enter customer ID: ");
    scanf("%d", &customerID);

    printf("Enter number of units consumed: ");
    scanf("%f", &units);

    if(units <= 200)
    {
        totalBill = units * 1.20;
    }
    else if(units <= 400)
    {
        totalBill = (200 * 1.20) + ((units - 200) * 1.50);
    }
    else if(units <= 600)
    {
        totalBill = (200 * 1.20) + (200 * 1.50) + ((units - 400) * 1.80);
    }
    else
    {
        totalBill = (200 * 1.20) + (200 * 1.50) + (200 * 1.80) + ((units - 600) * 2.00);
    }

    printf("\n");
    printf("Customer Name: %s\n", customerName);
    printf("Customer ID: %d\n", customerID);
    printf("Total bill: %.2f\n", totalBill);

    return 0;
}
