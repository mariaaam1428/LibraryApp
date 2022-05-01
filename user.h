#ifndef LIBRARY__APPLICATION_USER_H
#define LIBRARY__APPLICATION_USER_H
/****************************************************************************************************************************************************/
/* File Name : TYPE.h                                                                                                                                */
/* File Info. :This File contains the proto-Types of functions used in main.c                                                                          */
/* Version :V1.0                                                                                                                                      */
/* Data : 18 Sept 2021.                                                                                                                               */
/* Author : Mariam Awad Allah .                                                                                                                       */
/*****************************************************************************************************************************************************/
/************************************************************************************************************************/
/* Header file guard To prevent this file from multiple inclusions                                                   ***/
/**********************************************************************************************************************/

#include <stdio.h>
#include "TYPE.h"
//#define  NULL ((void*)0)
//for 50 user..
typedef struct {
    u8 name[50];
    u8 author[50];
    u32 price;
}User;

User user[50]; // number of users ..
u32 i;


void view_all_book ();
void add();
int delete(u32 n);
int view_no_available_book ();


#endif //LIBRARY__APPLICATION_USER_H
