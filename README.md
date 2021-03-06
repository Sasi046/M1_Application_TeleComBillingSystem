# M1_Application_TeleComBillingSystem
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/4fbc83ed871c4a8eaadd953fb7787cbd)](https://www.codacy.com/gh/Sasi046/M1_Application_TeleComBillingSystem/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Sasi046/M1_Application_TeleComBillingSystem&amp;utm_campaign=Badge_Grade)

[![Unit Testing - Unity](https://github.com/Sasi046/M1_Application_TeleComBillingSystem/actions/workflows/unity.yml/badge.svg)](https://github.com/Sasi046/M1_Application_TeleComBillingSystem/actions/workflows/unity.yml)

[![Code Quality - Static Code - Cppcheck](https://github.com/Sasi046/M1_Application_TeleComBillingSystem/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/Sasi046/M1_Application_TeleComBillingSystem/actions/workflows/cppcheck.yml)



### INTRODUCTION

             You can perform and manage billing operations like they do in Telecom companies. Here, you can add records with name, phone number and the amount of payment. You can view, modify, search and delete existing records.
             You can also make payment by providing your phone number instead of name. All data added or modified are recorded in a file. How to add, list, edit, search and delete records using file handling.
_______________________________________________________________________________________________________________________________________________________________________________            
## Functions 

| Feature Id | Feature |
| -----------|---------|
|F_01| Adding the RECORDS  |
|F_02| Deleting the RECORDS  |
|F_03| search the RECORDS |
|F_04| view the RECORDS |
|F_05| Edit the RECORDS |
|F_06| bill calculation|
|F_07| Exit|

As per your need, enter 1, 2, 3, 4, 5 ,6 or 7 and follow the instructions provided by the application itself.


## Folder Structure
Folder               | Description
-------------------  | -----------------------------------------
`1_Requirements`     | Documents Detailing requirements and research.
`2_Architecture`     | Documents Specifying design details.
`3_Implementation`   | All Code and Documentation.
`4_Test Plan`| Test Cases.




### Features

  ??? Add new records: add new data into file with name, phone number and amount to be paid.
  
  ??? View list of records ??? lists all telephone billing records.
  
  ??? Modify records ??? edit the added records; name, phone number and/or amount of payment can be edited,
  
  ??? View payment ??? shows amount to be paid.
  
  ??? total bill amount.
  
  ??? Search records ??? search for added/updated records in file.
  
  ??? Delete records ??? removes data permanently from file.
 
______________________________________________________________________________________________________________________________________________________________________________   
  

## Details requirements
### High Level Requirements:
| ID | Description | Status |
|------| ------| ------|
| HLR1 | User shall be able to Add new RECORDS (A) | Implemented
|HLR2  | User shall be able to Delete RECORDS (D) | Implemented
|HLR3  | User shall be able to Modifying RECORDS (M) |	Implemented
|HLR4  | User shall be able to  PAYMENT RECORDS (P) |	Implemented
|HLR5  | User shall be able For Search RECORDS(S) |	Implemented
|HLR6  | User shall be able to Exit(E) |	Implemented

#### Low Level Requirements:

| ID | Description | Status |
|-------|------|------|
| LLR1 | User shall be able to fetch RECORDS | Implemented 
| LLR2 |System must display data without error | Implemented
  

  
________________________________________________________________________________________________________________________________________________________________________________ 



## Integrated Tools to GitHub
* [Codacy](https://www.codacy.com/)


## Challenges Faced and How Was It Overcome

1.GCC erorr in windows and linux: installed the gcc msys64 mingw64 properly.

2.Generation of makefile: To overcome this problem research on makefiles was done.

3.Unity testing: Initially a few testcases did not pass, to overcome this issue debugging of program was performed.

## Learning Resources

1.[gcc makefile](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.1)

2.[github workflow](https://www.programiz.com/c-programming/c-dynamic-memory-allocation)

3.[structure in c](https://www.studytonight.com/c/structures-in-c.php/)

