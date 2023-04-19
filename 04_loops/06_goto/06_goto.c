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
 * Title : Trainee
 * Last Modified Date: 24.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main()
{
     int num;
     printf("Enter a number: ");
     scanf("%d", &num);

     if (num % 2 == 0)
          goto even;
     else
          goto odd;

even:
     printf("Given num is Even\n");
     goto end;

odd:
     printf("Given num is Odd\n");
     goto end;

end:
     return 0;
}

// Program End
