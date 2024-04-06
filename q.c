/*!
@file       the name of source file is q.c
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   lab 5
@date       file created on 29/09/2023
@brief      provide a brief explanation about what this source file does:
            This file is contains 2 function definitions be to called by 
            main in qdriver
_________________________________________________________________________*/

#include <stdio.h>                                                                              // printf, scanf
#include "q.h"

void cost(void){
    int age = 0, comma = 0, num_accidents = 0, insurance = 0; 

    scanf("%d", &age);
    comma = getchar();
    scanf("%d", &num_accidents);

    printf("age = %d, number of accidents = %d, ", age, num_accidents);

    if (age >=16 && (num_accidents >= 0 && num_accidents < 5) && comma == 44){                  // where 0 is 48 in accii form and 5 is 53 in accii form
        
        age <25 ? (insurance = 550) : (insurance = 500);                                        // check if age is <25 for insurance surcharge
        /*

        switch (num_accidents){                                               (switch version) // check number of accidnts for additional insurance cost 
            case 0:
                break;
            case 1:
            case 2:
                insurance += 100;
                break;
            case 3:
            case 4:
                insurance += 225;
                break;
            
        }
 
        if (num_accidents >= 1 && num_accidents <= 2){insurance += 100;}          (if version) // check number of accidnts for additional insurance cost 
        else if (num_accidents >= 3 && num_accidents <=4 ){insurance += 225;} 
        */
                                                                  //(stright line if version) // check number of accidnts for additional insurance cost
        num_accidents >= 1 && num_accidents <= 2 ? insurance += 100 : num_accidents >= 3 && num_accidents <=4 ? insurance += 225 : 1 ;
        

        printf("insurance cost = %d\n", insurance);                                             // default statement

    }
    else{printf("no insurance coverage!\n");}                                                   // default statement

}

void rev(void){

    int num=0, r_num =0, convert =0;
    scanf("%d", &num);                                                  // scan for input

    if (num/10!= 0 ){

        if (num<0){                                                     // check if input is negative 
            num*=-1;
            convert =1;                                                 
        }
        //num2 = num;

        do{                                                             // reverse number order
            r_num = (r_num*10) + (num%10);                              
            if(num/1 != 0){num = num/10;}                               // accepts the number and reverse with zero in front 
        }while (num != 0);
        
        if (convert == 1){printf("-");}                                 // when input is negative 
        
        printf("%d", r_num);                                            // print reverse number order
        
    }else{printf("%d", num);}                                           // print single digit numbers in normal order

    printf("\n");
}
