#include <stdio.h>
#define maximum_customer 1900000
typedef struct
{
    int account_number;
    char name[50];
    float balance;

} Banking_system;
Banking_system ac[maximum_customer];
// calling the function
void display_choice();
int Add_Account(int *counter);
int display_details(int counter);
int Deposit_Amount(int counter);
int Withdraw_Amount(int counter);
int Check_Account(int counter);

// Main function
int main()
{
    int ask, counter = 0;
    do
    {
        display_choice(); // called display function for option that choice the user
        printf("Enter the Following choice: ");
        scanf("%d", &ask);
        switch (ask)
        {
        case 1:
            Add_Account(&counter); // Called the Add account function
            break;
        case 2:
            display_details(counter); // Called display the details function where user can see the all details of bank account
            break;
        case 3:
            Deposit_Amount(counter); // Called the deposit amount function
            break;
        case 4:
            Withdraw_Amount(counter); // Called the withdraw amount function
            break;
        case 5:
            Check_Account(counter); // Called the Check account function
            break;
        default:
            break;
        }
    } while (ask != 6);

    return 0;
}

void display_choice()
{
    char option[][50] = {
        "1.Add Account\n",
        "2.Display_details\n",
        "3.Deposit_Amount\n",
        "4.Withdraw_Amount\n",
        "5.Check Account\n",
        "6.Exit\n"};
    for (int i = 0; i < 6; i++)
    {
        printf("%s", option[i]);
    }
}

int Add_Account(int *counter)
{
    printf("Enter the account Number: ");
    scanf("%d", &ac[*counter].account_number);
    // Input of Name
    printf("Enter the Name:");
    scanf("%s", &ac[*counter].name);
    // Input of Add Balance
    printf("Enter the Balance: ");
    scanf("%f", &ac[*counter].balance);
    (*counter)++;

    printf("Account Added Successfully.\n");
}

int display_details(int counter)
{
    for (int i = 0; i < counter; i++)
    {
        printf("|Account Number: %d| |Name: %s| |Balance: %f|\n",
               ac[i].account_number, ac[i].name, ac[i].balance);
    }
}

int Deposit_Amount(int counter)
{
    int account_number;
    int found = 0;
    float add_balance;

    printf("Enter the Account Number: ");
    scanf("%d", &account_number);

    for (int i = 0; i < counter; i++)
    {

        if (ac[i].account_number == account_number)
        {
            printf("Enter the Amount to Deposit: ");
            scanf("%f", &add_balance);
            ac[i].balance += add_balance;
            found = 1;
            printf("Now the balance of %s is : %f \n", ac[i].name, ac[i].balance);
        }
        if (!found)
        {
            printf("Account Not found\n");
        }
    }
}
// Withdraw amount

int Withdraw_Amount(int counter)
{
    int account_number;
    int found = 0;
    float add_balance;

    printf("Enter the Account Number: ");
    scanf("%d", &account_number);

    for (int i = 0; i < counter; i++)
    {

        if (ac[i].account_number == account_number)
        {
            printf("Enter the Amount to Withdraw: ");
            scanf("%f", &add_balance);
            ac[i].balance -= add_balance;
            found = 1;
            printf("Now the balance of %s is : %f \n", ac[i].name, ac[i].balance);
        }
        if (!found)
        {
            printf("Account Not found\n");
        }
    }
}
// Check single bank account
int Check_Account(int counter)
{
    int account_number, found = 0;

    printf("Enter the Account Number: ");
    scanf("%d", &account_number);

    for (int i = 0; i < counter; i++)
    {
        if (ac[i].account_number == account_number)
        {
            printf("|Account Number: %d|Name: %s|Balance: %f",
                   ac[i].account_number, ac[i].name, ac[i].balance);
            found = 1;
        }
        if (!found)
        {
            printf("This account is not available in this Bank.\n");
        }
    }
}

// Project has been done Needs to be Updation
