#include <stdio.h>


int main()
{
    printf("---------- Main Menu ------------\n\n");
    printf("1. Add Books\n\n");
    printf("2. Display Book Information\n");
    printf("\n3. Search Books(Book Status)");
    printf("\n4. Exit\n\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n\n");
    if (choice == 1)
    {
        printf("You can add book information\n\n");
        printf("Choose A category\n\n");
        printf("1. Computer\n\n");
        printf("2. Electronics\n\n");
        printf("3. Mechanical\n\n");

        int cat;
        printf("Choose A Book Category: ");
        scanf("%d", &cat);
        printf("\n\n");

        if (cat == 1)
        {
            printf("You have selected a Computer category.\n\n");
            printf("1. Introduction to C\n");
            printf("2. Introduction to Python\n");
            printf("3. Introduction to R Programming\n");

            int book_choice;
            printf("Choose A Book: ");
            scanf("%d", &book_choice);
            printf("\n\n");
            if (book_choice == 1)
            {
                printf("You have selected Introduction to C book\n\n");
                char book_namea[50], author_namea[50];
                int pagea, pricea;
                printf("Book Name: ");
                scanf("%s", book_namea);
                printf("\n\n");

                printf("Author Name: ");
                scanf("%s", author_namea);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d", &pagea);
                printf("\n\n");

                printf("Price: ");
                scanf("%d", &pricea);
                printf("\n\n");
            }
            else if (book_choice == 2)
            {
                printf("You have selected Introduction to Python book\n\n");
                char book_nameb[50], author_nameb[50];
                int pageb, priceb;
                printf("Book Name: ");
                scanf("%s", book_nameb);
                printf("\n\n");

                printf("Author Name: ");
                scanf("%s", author_nameb);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d", &pageb);
                printf("\n\n");

                printf("Price: ");
                scanf("%d", &priceb);
                printf("\n\n");
            }
            else if(book_choice==3){
                printf("You have select Introduction R Programming book\n");
                char book_namec[50], author_namec[50];
                int pagec, pricec;
                printf("Book Name: ");
                scanf("%s", book_namec);
                printf("\n\n");

                printf("Author Name: ");
                scanf("%s", author_namec);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d", &pagec);
                printf("\n\n");

                printf("Price: ");
                scanf("%d", &pricec);
                printf("\n\n");


            }
        }

        else if(cat==2){
            printf("You have selected Electronics Category: \n\n");
            printf("1. Practical Electronics for Inventors\n");
            printf("2. The Art of Electronics\n");
            printf("3. Fundamentals of Digital Circuits\n");

            int book_choice_2;
            printf("Choose A Book: ");
            scanf("%d",&book_choice_2);
            if(book_choice_2==1){
                printf("You have selected Practical Electronics for Inventors book.\n\n");
                char book_named[50],author_named[50];
                int paged,priced;
                printf("Book Name: ");
                scanf("%s", book_named);
                printf("\n\n");

                printf("Author Name: ");
                scanf("%s", author_named);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d", &paged);
                printf("\n\n");

                printf("Price: ");
                scanf("%d", &priced);
                printf("\n\n");

            }
            else if(book_choice_2==2){
                printf("You have selected The Art of Electronics book.\n\n");
                char book_namee[50],author_namee[50];
                int pagee,pricee;
                printf("Book Name: ");
                scanf("%s", book_namee);
                printf("\n\n");

                printf("Author Name: ");
                scanf("%s", author_namee);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d", &pagee);
                printf("\n\n");

                printf("Price: ");
                scanf("%d", &pricee);
                printf("\n\n");
            }
            else if(book_choice_2==3){
                printf("You have selected Fundamentals of Digital Circuits.\n\n");
                char book_namef[50],author_namef[50];
                int pagef,pricef;
                printf("Book Name: ");
                scanf("%s", book_namef);
                printf("\n\n");

                printf("Author Name: ");
                scanf("%s", author_namef);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d", &pagef);
                printf("\n\n");

                printf("Price: ");
                scanf("%d", &pricef);
                printf("\n\n");

            }
        }
        else if(cat==3){
            printf("You have selected Mechanical Category: \n\n");
            printf("1. Introduction to Autocad\n");
            printf("2. Fundamentals of Thermodynamics\n");
            printf("3. Mechanical Engineering: Conventional and Objective Type\n\n");

            int book_choice_3;
            printf("Choose A Book: ");
            scanf("%d",&book_choice_3);
            printf("\n\n");
            if(book_choice_3==1){
                printf("You have selected Introduction to Autocad book\n");
                char book_nameg[50],author_nameg[50];
                int pageg,priceg;
                printf("Book Name: ");
                scanf("%s", book_nameg);
                printf("\n\n");

                printf("Author Name: ");
                scanf("%s", author_nameg);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d", &pageg);
                printf("\n\n");

                printf("Price: ");
                scanf("%d", &priceg);
                printf("\n\n");
            }
            else if(book_choice_3==2){
                printf("You have selected Fundamentals of Thermodynamics book\n");
                char book_nameh[50],author_nameh[50];
                int pageh,priceh;
                printf("Book Name: ");
                scanf("%c", book_nameh);
                printf("\n\n");

                printf("Author Name: ");
                scanf("%c", author_nameh);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d", &pageh);
                printf("\n\n");

                printf("Price: ");
                scanf("%d", &priceh);
                printf("\n\n");
            }
            else if(book_choice_3==3){
                 printf("You have selected Mechanical Engineering: Conventional and Objective Type\n");
                char book_namei[50],author_namei[50];
                int pagei,pricei;
                printf("Book Name: ");
                scanf("%c", book_namei);
                printf("\n\n");

                printf("Author Name: ");
                scanf("%c", author_namei);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d", &pagei);
                printf("\n\n");

                printf("Price: ");
                scanf("%d", &pricei);
                printf("\n\n");
            }
        }
    }
    else if(choice==3){
        printf("You can search a book (Book status)\n\n");
        printf("Press the code:123 for Introduction to C\n"); 
        printf("Press the code:456 for Introduction to Python\n"); 
        printf("Press the code:789 for Introduction to R Programming\n"); 
        printf("Press the code:523 for Practical Electronics for Inventors\n"); 
        printf("Press the code:759 for The Art of Electronics\n"); 
        printf("Press the code:157 for Fundamentals of Digital Circuits\n"); 
        printf("Press the code:359 for Introduction to Autocad\n"); 
        printf("Press the code:153 for Fundamentals of Thermodynamics\n"); 
        printf("Press the code:104 for Mechanical Engineering: Conventional and Objective Type\n"); 
        
        int searchCodeBook;
        printf("Enter A Book to Search (USE THE CODE)");
        scanf("%d",&searchCodeBook);
        printf("\n");
        switch(searchCodeBook){
            case 123:
            printf("Book Name: Introduction to C\n\n");
            printf("Book Status: 2 copies are left");
            break;

            case 456:
            printf("Book Name: Introduction to Python\n\n");
            printf("Book Status: 10 copies are left");
            break;

            case 789:
            printf("Book Name: Introduction to R Programming\n\n");
            printf("Book Status: 1 copies are left");
            break;

            case 523:
            printf("Book Name: Practical Electronics for Inventors\n\n");
            printf("Book Status: 20 copies are left");
            break;

            case 759:
            printf("Book Name: The Art of Electronics\n\n");
            printf("Book Status: 30 copies are left");
            break;

            case 157:
            printf("Book Name: Fundamentals of Digital Circuits\n\n");
            printf("Book Status: 18 copies are left");
            break;

            case 359:
            printf("Book Name: Introduction to Autocad\n\n");
            printf("Book Status: Out of stock");

            case 153:
            printf("Book Name: Fundamentals of Thermodynamics\n\n");
            printf("Book Status: 5 copies are left");
            break;

            case 104:
            printf("Book Name: Mechanical Engineering: Conventional and Objective Type\n\n");
            printf("Book Status: 4 copies are left");
            break;
        }         
    }
    else if(choice==4){
        printf("The Library is closed now!\n\n");
        printf("Have a Nice day");
    }
    printf("\n");
    return 0;
}
