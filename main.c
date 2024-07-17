#include <stdio.h>
int main()
{

    int select;
    float km, met, inch, foot, cm, kg, pound, meter;
    char exit;
label:
printf("\n\n\t\tUNIT CONVERTER APP\n");
printf("\t==================================\n");
    printf("\n 1. Kilometer to Meter\n");
    printf(" 2. Inches to foot\n");
    printf(" 3. Centimeter to inches\n");
    printf(" 4. Kilogram to Pound\n");
    printf(" 5. Inches to meters\n");
    printf(" 6. Exit\n");
    printf("Enter the number of your selection: ");
    scanf("%d", &select);

    switch (select)
    {
    case 1:
        printf("\n Enter kilometers : ");
        scanf("%f", &km);
        met = km * 1000;
        printf("\n %.2f kilometer(s) is equal to %.2f meter(s) ", km, met);
        goto label;
        break;

    case 2:
        printf("\n Enter Inches : ");
        scanf("%f", &inch);
        foot = inch / 12;
        printf("\n %.2f inch(es) is equal to %.2f foot(s) ", inch, foot);
        goto label;
        break;

    case 3:
        printf("\n Enter Centimeters : ");
        scanf("%f", &cm);
        inch = cm * 0.393701;
        printf("\n %.2f centimeters(s) is equal to %.2f inch(es) ", cm, inch);
        goto label;
        break;

    case 4:
        printf("\n Enter Kilograms : ");
        scanf("%f", &kg);
        pound = kg * 2.20462;
        printf("\n %.2f Kilogram(s) is equal to %.2f Pound(s) ", kg, pound);
        goto label;
        break;

    case 5:
        printf("\n Enter Inches : ");
        scanf("%f", &inch);
        meter = inch * 0.0254;
        printf("\n %.2f inch(es) is equal to %.2f meter(s) ", inch, meter);
        goto label;
        break;

    case 6:
        goto end;

    default:
        printf(" Invalid Option\n");
    }
end:
    printf("\n Do you want to Exit?");
    printf("\n Press Y if Yes and N for No : ");
    scanf("%s", &exit);
    if (exit == 'Y' || exit == 'y')
    {
        goto out;
    }
    else
    {
        goto label;
    }

out:
printf("\nThankyou for using Unit Converter\n Developer : Hrithik\n");
    return 0;
}
