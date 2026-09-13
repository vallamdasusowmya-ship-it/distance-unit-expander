#include <stdio.h>

int main()
{
    int choice;
    float value, result;

    printf("===== DISTANCE & UNIT EXPANDER =====\n");
    printf("1. Kilometer to Meter\n");
    printf("2. Kilometer to Centimeter\n");
    printf("3. Meter to Kilometer\n");
    printf("4. Meter to Centimeter\n");
    printf("5. Centimeter to Meter\n");
    printf("6. Centimeter to Kilometer\n");
    printf("7. Mile to Kilometer\n");
    printf("8. Kilometer to Mile\n");
    printf("9. Feet to Meter\n");
    printf("10. Meter to Feet\n");
    printf("11. Inch to Centimeter\n");
    printf("12. Centimeter to Inch\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value: ");
    scanf("%f", &value);

    switch (choice)
    {
        case 1:
            result = value * 1000;
            printf("%.2f km = %.2f m\n", value, result);
            break;

        case 2:
            result = value * 100000;
            printf("%.2f km = %.2f cm\n", value, result);
            break;

        case 3:
            result = value / 1000;
            printf("%.2f m = %.2f km\n", value, result);
            break;

        case 4:
            result = value * 100;
            printf("%.2f m = %.2f cm\n", value, result);
            break;

        case 5:
            result = value / 100;
            printf("%.2f cm = %.2f m\n", value, result);
            break;

        case 6:
            result = value / 100000;
            printf("%.2f cm = %.2f km\n", value, result);
            break;

        case 7:
            result = value * 1.60934;
            printf("%.2f miles = %.2f km\n", value, result);
            break;

        case 8:
            result = value / 1.60934;
            printf("%.2f km = %.2f miles\n", value, result);
            break;

        case 9:
            result = value * 0.3048;
            printf("%.2f feet = %.2f m\n", value, result);
            break;

        case 10:
            result = value * 3.28084;
            printf("%.2f m = %.2f feet\n", value, result);
            break;

        case 11:
            result = value * 2.54;
            printf("%.2f inches = %.2f cm\n", value, result);
            break;

        case 12:
            result = value / 2.54;
            printf("%.2f cm = %.2f inches\n", value, result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
