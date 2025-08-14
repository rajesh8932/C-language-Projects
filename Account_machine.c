#include <stdio.h>
#include <string.h>
#define Maximum_Employees 1

struct Employee
{
    char name[50];
    int employee_id;
    float sallary;
};

int main()
{
    int choice, Number_of_employees;
    struct Employee emp[Maximum_Employees];

    do
    {
        printf("1.Add Employee: \n");
        printf("2.Display: \n");
        printf("3.Exit: \n");
        printf("Enter the Choice: \n");
        scanf("%d", &choice);
        if (choice == 1)
        {

            printf("How many employees Do you want to add?: ");
            scanf("%d", &Number_of_employees);

            
            

            for (int i = 0; i < Number_of_employees; i++)
            {

                if (Number_of_employees > Maximum_Employees)
            {
                printf("Employee Seat has been full\n");
                break;
            }

                // number_of_list++;
                printf("Enter the Name of Employee: ");
                scanf("%s", &emp[i].name);

                printf("Enter the Name of Employee ID: ");
                scanf("%d", &emp[i].employee_id);

                printf("Enter the Name of Employee Sallary : ");
                scanf("%f", &emp[i].sallary);
                printf("The Number of employee %d Added Successfully \n", i + 1);
            }
        }
        else if (choice == 2)
        {
            for (int j = 0; j < Number_of_employees; j++)
            {
                printf("Name: %s :Employee Id: %d : Employee Sallary: $%3.4f \n", emp[j].name, emp[j].employee_id, emp[j].sallary);
            }
        }
        
        else if (choice == 3)
        {
            printf("Exiting...........");
        }

    } while (choice != 3);
}