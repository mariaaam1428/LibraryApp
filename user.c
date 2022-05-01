#include "user.h"
/****************************************************************************************************************************************************/
/* File Name : user.c                                                                                                                                */
/* File Info. :This File contains Implementation of functions used in main.c                                                                          */
/* Version :V1.0                                                                                                                                      */
/* Data : 18 Sept 2021.                                                                                                                               */
/* Author : Mariam Awad Allah .                                                                                                                       */
/*****************************************************************************************************************************************************/

#include "user.h"
void view_all_book (){

    if( user[0].price==0){
        printf("The library is empty..No book to view !!!!! ");
    } else{

        for (u32 j = 0; j <i ; j++) {
            printf("The name of book : %s\n", user[j].name);
            printf("The book author: %s\n", user[j].author);
            printf("The price of the book : %d\n", user[j].price);
        }
    }
}

void add(){
    printf("Enter the name of book : ");
    scanf("%s",&user[i].name);

    printf("Enter the book author: ");
    scanf("%s",&user[i].author);

    printf("Enter the price of book : ");
    scanf("%d", &user[i].price);

    printf("Book has added successfully:)");
}

int delete(u32 position){
    if ( position > i || position <= 0  ) printf("It isn't available.. Try again ......\n");

        //Copy the next element u need to delete to the current element of array..

    else{ for (u32 j= position - 1 ; j <= i  ; j++ ) {user[j]= user[j + 1]; }
        i--;
        printf("\nThe Book has been deleted successfully :) ");
    }
    //return  user;


}

int view_no_available_book (){
    return  i ;

}

