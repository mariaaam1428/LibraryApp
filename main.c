/*************************************************************************************************************************************************************/
/* File Name : Main.c                                                                                                                                        */
/* File Info. :Tis File contains Functionality of this Application                                                                                          */
/* Version :V1.0                                                                                                                                            */
/* Data : 18 Sept 2021.                                                                                                                                     */
/* Author : Mariam Awad Allah .                                                                                                                              */
/************************************************************************************************************************************************************/
#include <stdio.h>
#include "TYPE.h"
#include <stdlib.h>
#include "user.h"

int main() {
    i=0;
    u32 choice ,Delete_book;

    printf("------------------- WELCOME TO LIBRARY APP ---------------------\n");
    printf("----------------------------------------------------------------");

    while (1) {
        printf("\n----------------------------------------------------------------\n");
        printf("choose one of the following options:\n");
        printf("To view all books                   Enter '1'\n");
        printf("To add a new book                   Enter '2'\n");
        printf("To delete a book                    Enter '3'\n");
        printf("To view no. of available books      Enter '4'\n");
        printf("To exit the library App             Enter '5'\n");
        printf("Your choice is : ");
        scanf("%d",&choice);

        switch (choice) {
            case 1: {
                view_all_book();
            }
                break;
            case 2: {
                add();
                i++;
            }
                break;

            case 3:{
                printf("Enter the Number of the book you want to delete (from 1 to %d): ",i);
                scanf("%d",&Delete_book);
                delete(Delete_book);
            }
                break;

            case 4: {
                printf("The No. of available books is %d book",view_no_available_book());
            }
                break;
            case 5: {
                // void exit(int status);
                return 0;
            }
                break;

            default:{
                printf("ERROR");
            }
        }

    }

    return 0;
}
