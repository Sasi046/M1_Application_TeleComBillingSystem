/** 
* @file telecom billing.h
* Billing application
*
*/
#ifndef __TELECOM_BILLING_H_
#define __TELECOM_BILLING_H__

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
struct subscriber
{
char phonenumber[20];
char name[50];
float amount;
}s;
void addrecords();
void listrecords();
void modifyrecords();
void deleterecords();
void searchrecords();
void payment();
 
#endif  /* #define __TELECOM_BILLING_H__ */
