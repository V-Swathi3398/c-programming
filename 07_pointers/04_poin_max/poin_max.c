/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application:
 * Brief:
 * Author: Sanketh J H
 * Title: Trainee
 * Last Modified Date: 30.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main()
{
    int num1, num2, *ptr1, *ptr2;

    printf("Pointer : Find the maximum number between two numbers :\n");
    printf("------------------------------------------------------------\n");

    printf("Input the first number : ");
    scanf("%d", &num1);

    printf("Input the second number : ");
    scanf("%d", &num2);

    ptr1 = &num1; // Assign address of num1 to ptr1
    ptr2 = &num2; // Assign address of num2 to ptr2

    if (*ptr1 > *ptr2)
    { // Compare values at addresses pointed by ptr1 and ptr2
        printf("%d is the maximum number.\n", *ptr1);
    }
    else
    {
        printf("%d is the maximum number.\n", *ptr2);
    }

    return 0;
}

// Program End
