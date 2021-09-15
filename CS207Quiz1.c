#include <stdio.h>
#include <stdlib.h>

struct Blood
{
    char name[25];
    char age[2];
    char city[20];
    char Blood_group[3];
};
struct Blood B[20];

int I = 0, J = 0, K = 0, L = 0, Exit = 1;

void putdonor()
{

    printf("Enter the your name:");
    scanf("%s", B[I].name);
    I++;

    printf("Enter the your age:");
    scanf("%s", B[J].age);
    J++;

    printf("Enter the your city:");
    scanf("%s", B[K].city);
    K++;

    printf("Enter the your Blood_group:");
    scanf("%s", B[L].Blood_group);
    L++;
}

void getdonor()
{
    char Blood[3], city[20];
    printf("which Blood group you want\n");
    scanf("%s", Blood);

    int i = 0, j = 0, k = 0, Q = 0, w = 1;
    while (B[i].Blood_group != '\0')
    {
        if(k == 1){
            break;
        }
        w = strcmp(Blood, B[i].Blood_group);
        if (w == 0)
        {
            printf("in which city you want Blood group\n");
            scanf("%s", city);
            while (B[j].city != '\0')
            {
                Q = strcmp(city, B[j].city);
                if (Q != 0)
                {
                    printf("Sorry in your area this type of Blood group is not available\n");
                    break;
                }
                else
                {
                    printf("yes Blood is availble, you contacts your near hospital\n");
                    k = 1;
                    break;
                }
                j++;
            }
        }
        int k = 1;
        break;
        i++;
    }
    if (k == 0 || w == 1)
    {
        printf("Sorry in our hospital this type of Blood group is not available\n");
    }
    // else
    // {
    //     printf("i am so sorry, We can't help you ,Please check onther hospital\n");
    // }
}

void menu()
{
    int choice;

    printf("\t1 Add a new entry for Donate Boold group\n");
    printf("\t2 Search by Blood Group \n");
    printf("\t3 You want to Exit \n");

    printf("\tYour Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        putdonor();
        break;

    case 2:
        getdonor();
        break;

    case 3:
        Exit = 0;
        printf("Thank You for using This App");

        break;

    default:
        printf("\n\n\t\tYou have entered wrong choice.....!!!");
        menu();
    }
}

int main()
{
    printf("\n\n\t\tBLOOD DONOR DATABASE \n\n");

    while(Exit!=0)
    {
        menu();
    }
    return 0;
}