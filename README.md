# Find-Product-From-Predefined-Stock-List.





Research ~ 


What is the Telephone Directory?
A telephone directory, commonly called a telephone book, telephone address book, phonebook, or the white and yellow pages, is a listing of telephone subscribers in a geographical area or subscribers to services provided by the organization that publishes the directory. Its purpose is to allow the telephone number of a subscriber identified by name and address to be found.

History:-
Telephone directories are a type of city directory. Books listing the inhabitants of an entire city were widely published starting in the 18th century, before the invention of the telephone.
The first telephone directory, consisting of a single piece of cardboard, was issued on 21 February 1878; it listed 50 individuals, businesses, and other offices in New Haven, Connecticut, that had telephones.The directory was not alphabetized and no numbers were included with the people listed in it. In 1879, Dr. Moses Greeley Parker suggested the format of the telephone directory be changed so that subscribers appeared in alphabetical order and each telephone be identified with a number. Parker came to this idea out of fear that Lowell, Massachusetts's four operators would contract measles and be unable to connect telephone subscribers to one another.
The first British telephone directory was published on 15 January 1880 by The Telephone Company. It contained 248 names and addresses of individuals and businesses in London; telephone numbers were not used at the time as subscribers were asked for by name at the exchange. The directory is preserved as part of the British phone book collection by BT Archives.
Key components:-
include a user interface for interaction
 a database to store contact details
 Name
 Phone number
Address,etc.
Project structure:-
Admin Module: A section for administrators with a login system to manage the directory.
Contact Module: Allows for the entry of contact details.
Insert/Delete/View Modules: Specific functions for manipulating the contact list.
Search Module: A dedicated function for searching through contacts. 
Analysis ~ 

Requirements:-
Functional Requirements: The core functions should include:
Add: Add new subscriber details to the directory.
Search: Find a contact by name or telephone number.
Edit: Update the details of an existing entry.
Delete: Remove a contact from the directory.
View: Display all or a specific contact's details.
Non-functional Requirements: Define system availability, reliability, and performance targets.
Data Management:
Store contact information, such as name, phone number, address, and potentially email or other details.
Ensure data is stored in a structured way, often in a database like MySQL or PostgreSQL.
User Interface (UI):
Design a user-friendly interface for interacting with the directory.
For a command-line project, this might involve a text-based menu system.
For a graphical project, a more visual layout would be used
Development considerations
Programming Language: Choose a language like Java, C++, or Python, depending on your project's requirements and your familiarity with the language.
Database: Select a database system suitable for the project's needs, such as MySQL or PostgreSQL.
Project Documentation:
Create a Software Requirements Specification (SRS) document to outline all functional and non-functional requirements.
This document is crucial for guiding development, testing, and maintenance. 
Example project structure
Admin Module: A section for administrators with a login system to manage the directory.
Contact Module: Allows for the entry of contact details.
Insert/Delete/View Modules: Specific functions for manipulating the contact list.
Search Module: A dedicated function for searching through contacts. 


Ideate ~
Objective:
To show how C structures can be used to:
Represent real-world entities (like store items).


Store multiple related attributes (name, ID, and price).


Display structured data neatly on the screen.



⚙️ Key Features:
Predefined Item Details:
 The program includes a fixed set of items such as Pant, Shirt, Tshirt, Socks, and Trouser.
 Each item has:


A name


A unique ID


A price


No User Input Required:
 All data is predefined, making it simple and ready to execute instantly.


Formatted Output:
 The data is displayed in a clean table format for easy readability.


Lightweight Program:
 Uses only arrays and structures, with no complex data structures or sorting logic.

🧠 Concepts Used:
Structures (struct) — to group related data.

Arrays of Structures — to manage multiple items.

Loops — to display all items easily.

Formatted Output — using printf formatting options.

🚀 Possible Future Enhancements:
If you extend this project later, you could add:

Dynamic input — allow users to enter new stock items.

Sorting — arrange items by price, name, or ID.

Search feature — find an item by its name or ID.

File handling — save and load stock data from a file.

Total value calculator — compute total worth of all stock items.

Build ~ 
#include <stdio.h>


struct stock {
    char name[50];  // Name of the item
    int id;         // Unique ID
    int price;      // Unit price
};

int main() {
    // Predefined stock data
    struct stock S1[5] = {
        {"Pant", 1, 500},
        {"Shirt", 2, 700},
        {"Tshirt", 3, 200},
        {"Socks", 4, 70},
        {"Trouser", 5, 400}
    };
     int result;

    // Display predefined stock list
    printf("Predefined Stock List:\n");
    printf("%-15s %-10s %-10s\n", "Name", "ID", "Price");
    printf("-------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-15s %-10d %-10d\n", S1[i].name, S1[i].id, S1[i].price);
    }
    printf("Enter what info you have about product\n1.Id\n2.Price\n");
    int type;
    scanf("%d",&type);
   
   if (type==1)
    {
        int b;
        printf("Enter Id:");
        scanf("%d",&b);
        for (int i = 0; i < 5; i++) {
            if (S1[i].id == b) {
                  printf("\n-------------------------------------\n");
                printf("Name:%s\nPrice:%d\n", S1[i].name, S1[i].price);
               
            }
            else{
                printf("Invalid Input\nEnter Correct id!");
                break;
            }
        }
    }
    else if (type==2)
    {
        int c;
        printf("Enter Price:");
        scanf("%d",&c);
        for (int i = 0; i < 5; i++) {
            if (S1[i].price == c) {
                  printf("\n-------------------------------------\n");
                printf("Name:%s\nID:%d\n", S1[i].name, S1[i].id);
               
            }
            else{
                 printf("Invalid Input\nEnter Correct Price!");
                 break;
            }
        }
    }
    else
    {
        printf("Invalid option selected.\n");
    }
    return 0;
}    




Test Cases ~ 


Test Case 1-
Predefined Stock List:
Name            ID         Price     
-------------------------------------
Pant            1          500       
Shirt           2          700       
Tshirt          3          200       
Socks           4          70        
Trouser         5          400       
Enter what info you have about product
1.Id
2.Price
1
Enter Id:2

-------------------------------------
Name:Shirt
Price:700


=== Code Execution Successful ===




Test Case 2-
Predefined Stock List:
Name            ID         Price     
-------------------------------------
Pant            1          500       
Shirt           2          700       
Tshirt          3          200       
Socks           4          70        
Trouser         5          400       
Enter what info you have about product
1.Id
2.Price
2
Enter Price:70

-------------------------------------
Name:Socks
ID:4


=== Code Execution Successful ===
Test Case 3-

Predefined Stock List:
Name            ID         Price     
-------------------------------------
Pant            1          500       
Shirt           2          700       
Tshirt          3          200       
Socks           4          70        
Trouser         5          400       
Enter what info you have about product
1.Id
2.Price
1
Enter Id:23
Invalid Input
Enter Correct id!

=== Code Execution Successful ===




Implementation~
https://github.com/Shreyash111024/Find-Product-From-Predefined-Stock-List..git

