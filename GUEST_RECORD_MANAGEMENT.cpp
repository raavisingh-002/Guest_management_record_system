#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>
#include <conio.h>
using namespace std;
 
struct node
{
    int room_no;
    char name[50];
    long long int contact_no;
    long long int adhaar_number;
    int age;
    struct node *prev, *next;
};
class oberoi
{
private:
    int counter, num, b;
    int from, vrom, orom;
    struct node *start, *end;
    int choise, rom, day;
    int rup;
    int bill;
    int allot;
    int y;
    int count;
    int countvip;
 
protected:
    char admin_hotel[20] = "MEHRAV OBEROI";
    char password[12] = "Hellooberoi";
 
public:
    oberoi()
    {
        counter = 100;
        start = NULL;
        from = 20;
        vrom = 30;
        orom = 50;
        rup = bill = 0;
        allot = day = b = rom = num = choise = 0;
        y = 0;
        count = 0;
        countvip = 0;
    }
    void family_room()
    {
        int a;
        cout << "\t\t\t\t    -----------------------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
 
        cout << "\t\t\t\t      | ***     WELCOME TO 1st floor for family Rooms...!     ***    |\n";
        cout << "\t\t\t\t      |          Rent of the room is 1500 Rs/day\t             |" << endl;
        cout << "\t\t\t\t      |    Press 1 to allot a room                                   |" << endl;
        cout << "\t\t\t\t      |    Press 2 if you have forgotten to allot an entry           |" << endl;
 
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    ------------------------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\n\n";
        cout << "\t\t\t\t";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\nENTER THE CHOICE! :\t";
        cin >> allot;
        if (allot == 1)
        {
            cout << "\n\n\tPress 1 if you want to allot just one room or tell the number of rooms if you want to do group booking                     \t";
            cin >> rom;
            cout << "\n\n\tHow many days do you want to stay /For how many days you want to do the booking of the group                               \t";
            cin >> day;
            if (rom <= 20)
            {
                cout << "\n\t        Family Rooms ranges from 1 - 20                   \t" << endl;
            }
            else
            {
                cout << "\n\t        SORRY ROOM ARE CURRENTLY UNAVAILABLE" << endl;
                cout << "\t        Available Family Rooms are\t" << from << endl;
 
                family_room();
            }
        }
        if (allot == 2)
        {
            cout << "\n\n\tPress 1 if you forgot to allot just one guest's room's entry or tell the number of rooms if you have forgotten to do the entry for a group booking                     \t";
            cin >> rom;
            cout << "\n\n\tEnter the number of days for which that customer is staying in the hotel which you had forgotten to enter in your database                                 \t";
            cin >> day;
            if (rom > 20)
            {
                cout << "\n\t        SORRY ROOM ARE CURRENTLY UNAVAILABLE" << endl;
                cout << "\t        Available Family Rooms are\t" << from << endl;
 
                family_room();
            }
        }
 
    a:
        day = day * 1500;
        bill = day * rom;
        cout << "\n\t YOUR BILL IS \t" << bill << endl;
        cout << "\n\t ROOM CAN BE ALLOTED" << endl;
 
        if (allot == 1)
        {
            while (rom != 0)
            {
                y = first_allot();
                if (y == 1)
                {
                    from--;
                    counter--;
                    rom--;
                }
            }
 
            cout << "Available Family Rooms are\t" << from << endl;
            cout << "Total available Rooms  are\t" << counter << endl;
            system("pause");
            working();
        }
        else if (allot == 2)
        {
            while (rom != 0)
            {
                y = forgot_allot();
                if (y == 1)
                {
                    from--;
                    counter--;
                    rom--;
                }
            }
            cout << "Available Family Rooms are\t" << from << endl;
            cout << "Total available Rooms are\t" << counter << endl;
            system("pause");
            working();
        }
    }
    void VIP_room()
    {
        int a;
        cout << "\t\t\t\t    -----------------------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
 
        cout << "\t\t\t\t      | ***     WELCOME TO 1st floor for VIP Rooms...!     ***    |\n";
        cout << "\t\t\t\t      |          Rent of the room is 3000 Rs/day\t             |" << endl;
        cout << "\t\t\t\t      |    Press 1 to allot a room                                   |" << endl;
        cout << "\t\t\t\t      |    Press 2 if you have forgotten to allot an entry           |" << endl;
 
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    ------------------------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\n\n";
        cout << "\t\t\t\t";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\nENTER THE CHOICE! :\t";
        cin >> allot;
        if (allot == 1)
        {
            cout << "\n\n\tPress 1 if you want to allot just one room or tell the number of rooms if you want to do group booking                     \t";
            cin >> rom;
            cout << "\n\n\tHow many days do you want to stay /For how many days you want to do the booking of the group                               \t";
            cin >> day;
            if (rom <= 20)
            {
                cout << "\n\t        VIP Rooms ranges from 30 -  50                   \t" << endl;
            }
            else
            {
                cout << "\n\t        SORRY ROOM ARE CURRENTLY UNAVAILABLE" << endl;
                cout << "\t        Available VIP Rooms are\t" << from << endl;
 
                VIP_room();
            }
        }
        if (allot == 2)
        {
            cout << "\n\n\tPress 1 if you forgot to allot just one guest's room's entry or tell the number of rooms if you have forgotten to do the entry for a group booking                     \t";
            cin >> rom;
            cout << "\n\n\tEnter the number of days for which that customer is staying in the hotel which you had forgotten to enter in your database                                 \t";
            cin >> day;
            if (rom > 20)
            {
                cout << "\n\t        SORRY ROOM ARE CURRENTLY UNAVAILABLE" << endl;
                cout << "\t        Available VIP Rooms are\t" << from << endl;
 
                VIP_room();
            }
        }
 
    a:
        day = day * 3000;
        bill = day * rom;
        cout << "\n\t YOUR BILL IS \t" << bill << endl;
        cout << "\n\t ROOM CAN BE ALLOTED" << endl;
 
        if (allot == 1)
        {
            while (rom != 0)
            {
                y = first_allot();
                if (y == 1)
                {
                    from--;
                    counter--;
                    rom--;
                }
            }
 
            cout << "Available VIP Rooms are\t" << from << endl;
            cout << "Total available Rooms  are\t" << counter << endl;
            system("pause");
            working();
        }
        else if (allot == 2)
        {
            while (rom != 0)
            {
                y = forgot_allot();
                if (y == 1)
                {
                    from--;
                    counter--;
                    rom--;
                }
            }
            cout << "Available VIP Rooms are\t" << from << endl;
            cout << "Total available Rooms are\t" << counter << endl;
            system("pause");
            working();
        }
    }
 
   
 
    int first_allot()
    {
        y = 0;
        bool flag = false;
        struct node *x = start;
 
        while (x != NULL)
        {
            cout << "\tROOM WHICH ARE ALREADY BOOKED ARE :  ROOM NO: " << x->room_no << endl;
            x = x->next;
        }
 
        cout <<"\t\t\t\t\t|Enter the Room number          |\t";
        cin >> num;
 
        struct node *newer = new node;
        newer->room_no = num;
        cout <<"\t\t\t\t\t|Enter name                     |\t";
        cin >> newer->name;
        cout <<"\t\t\t\t\t|Enter age                      |\t";
        cin >> newer->age;
        cout <<"\t\t\t\t\t|Enter AADHAR number            |\t";
        cin >> newer->adhaar_number;
        cout <<"\t\t\t\t\t|Enter contact no               |\t";
        cin >> newer->contact_no;
 
        newer->prev = NULL;
        newer->next = start;
 
        flag = true;
        if (start != NULL)
        {
            start->prev = newer;
        }
        start = newer;
        if (flag != false)
        {
            cout << "\n\tRoom is allotted successfully!" << endl;
            return 1;
        }
        else
        {
            cout << "\n\tRoom is not allotted!" << endl;
            return 0;
        }
        system("pause");
    }
    int forgot_allot()
    {
    begin:
        y = 0;
        if (start == NULL)
        {
            cout << "\n\tHotel is empty!";
            cout << "\n\tdo you want to allot first?(1 for yes 2 for No)";
            cin >> b;
            if (b == 1)
            {
                first_allot();
            }
            else
            {
 
                visit_oberoi();
            }
        }
        else
        {
            bool flag = false;
            struct node *temp = start;
            struct node *p;
            struct node *newer = new node;
            struct node *x = start;
            int posi; //6 7 8
            cout << "\n\tEnter the Room which you forgot to allot : ";
            cin >> num; //5
            cout << "\n\tEnter the customer number after which u had forgotten to allot the room : ";
            cin >> posi;                   //1
            int dec = search(&start, num); //-1
            int cnt = 0;
            node *original = start;
            node *templength = start;
            while (templength != NULL)
            {
                cnt++;
                templength = templength->next;
            }                   //cnt =3
            int s = cnt - posi; //3-1=2
 
            if (dec == -1)
            {
                int jump = 0;
                while (jump != s - 1) //jump!= 1
                {
                    original = original->next;
                    jump++; //jump=1
                }
                original->next->prev = newer;
                newer->prev = original;
                newer->next = original->next;
                original->next = newer;
 
                newer->room_no = num;
                cout << "\n\tEnter name\t";
                cin >> newer->name;
                cout << "\n\tEnter Age\t";
                cin >> newer->age;
                cout << "\n\tEnter contact no\t";
                cin >> newer->contact_no;
                cout << "\n\tEnter AADHAR number\t";
                cin >> newer->adhaar_number;
                flag = true;
            }
            else if (dec != -1)
            {
                cout << "ROOM HAS ALREADY BEEN ALLOTED BY ANOTHER CUSTOMER. ASK THE CURRENT CUSTOMER TO BOOK SOME OTHER ROOM" << endl;
                goto begin;
            }
            if (flag != false)
            {
                cout << "\n\tRoom is allotted successfully!" << endl;
                return 1;
            }
            else
            {
                cout << "\n\tRoom is not allotted" << endl;
                return 0;
            }
        }
    }
 
    int search(node **head_ref, int x)
    {
        node *temp = *head_ref;
 
        while (temp->room_no != x && temp->next != NULL)
        {
            temp = temp->next;
        }
 
        if (temp->room_no != x)
            return -1;
        else
            return 1;
    }
 
    void del()
    {
        cout << "\n\tenter the Room number which you want to deallocate!\t";
        cin >> num;
        if (num > 100)
        {
            cout << "\n\t enter  valid room no !\t";
            void del();
        }
 
        if (start == NULL)
        {
            cout << "\n\tHotel is empty!" << endl;
            cout << "\n\tpress 1 for main manu\n"
                 << endl;
            cout << "\tpress 2 for exit\n"
                 << endl;
            cout << "\nENTER YOUR CHOICE\t";
            cin >> choise;
            if (choise == 1)
            {
                working();
            }
            else
            {
                exit(0);
            }
        }
        struct node *temp = start; 
        struct node *p, *q;
        if (temp->room_no == num && temp->next != NULL)
        {
            p = temp;
            start = temp->next;
            start->prev = NULL;
            delete(p);
            cout << "\tROOM DEALLOCATED" << endl;
            working();
        }
        else if (temp->room_no == num && temp->next == NULL)
        {
            delete(temp);
            cout << "\tROOM DEALLOCATED" << endl;
            working();
        }
        else
        {
            temp = temp->next; 
            while (temp != NULL)
            {
                if (temp->room_no == num)
                {
 
                    if (temp->next == NULL)
                    {
                        q = temp; //5 3 2 4
                        p = temp->prev;
                        p->next = NULL;
                        delete(q);
                        cout << "\tROOM DEALLOCATED" << endl;
                        working();
                    }
                    else
                    {
                        p = temp->prev;
                        q = temp->next;
                        p->next = q;
                        q->prev = p;
                        delete(temp);
                        cout << "\tROOM DEALLOCATED" << endl;
                        working();
                    }
                }
                temp = temp->next;
            }
        }
        cout << "\tROOM NOT BOOKED YET" << endl;
        working();
    }
    void display()
    {
        if (start == NULL)
        {
            cout << "\n\tHotel is empty!" << endl;
            cout << "\n\tpress 1 for main manu\n"
                 << endl;
            cout << "\tpress 2 for exit\n"
                 << endl;
            cout << "\nENTER YOUR CHOICE\t";
            cin >> choise;
            if (choise == 1)
            {
                working();
            }
            else
            {
                exit(0);
            }
        }
        else
        {
            struct node *temp = start;
            cout<<  "*************************************************SHOWING THE LATEST ENTRIES *********************************************\n";
 
            while (temp != NULL)
            {
                cout << "\n\tBooked room with details\t";
                if (temp->room_no <= 20)
                    cout << "\nFLOOR NO:"
                         << " 1st floor" << endl;
                if (temp->room_no > 20 && temp->room_no <= 50)
                {
                    cout << "****VIP***" << endl;
                    cout << "\nFLOOR NO:"
                         << " 2nd floor" << endl;
                }
                if (temp->room_no > 50 && temp->room_no <= 70)
                    cout << "\nFLOOR NO:"
                         << " 3rd floor" << endl;
                if (temp->room_no > 70 && temp->room_no <= 85)
                    cout << "\nFLOOR NO:"
                         << " 4th floor" << endl;
                if (temp->room_no > 85 && temp->room_no <= 100)
                    cout << "\nFLOOR NO:"
                         << " 5th floor" << endl;
 
                cout << "\nROOM NO: " << temp->room_no << endl;
                cout << "\nROOM BOOKED UNDER NAME: " << temp->name << endl;
                cout << "\nCONTACT: " << temp->contact_no << endl;
 
                temp = temp->next;
            }
        }
        system("pause");
        working();
    }
    void displaytherecordfromend()
    {
        if (start == NULL)
        {
            cout << "\n\tHotel is empty!" << endl;
            cout << "\n\tpress 1 for main manu\n"
                 << endl;
            cout << "\tpress 2 for exit\n"
                 << endl;
            cout << "\nENTER YOUR CHOICE\t";
            cin >> choise;
            if (choise == 1)
            {
                working();
            }
            else
            {
                exit(0);
            }
        }
        else
        {
            struct node *temp = start;
 
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            cout<<  "********************************************SHOWING ALL ENTRIES OF THE DAY********************************************\n";
            while (temp != NULL)
            {
                
                cout << "\n=====================================================================================================================\n";
                cout << "Guest Name        Contact_no        Adhaar_number        Age        room_no" << endl;
                cout << temp->name << "             " << temp->contact_no << "          " << temp->adhaar_number << "             " << temp->age << "          " << temp->room_no << endl;
                cout << "\n=====================================================================================================================\n";
                temp = temp->prev;
            }
        }
        system("pause");
        working();
    }
    void visit_oberoi()
    {
        system("cls");
    START:
        cout << "\t*****WELCOM TO oberoi HOTEL*****\n\t" << endl;
        cout << "\t***1st floor for family Rooms...!***\n"
             << endl;
        cout << "\t***2nd floor for VIP Rooms...!***\n"
             << endl;
        cout << "\t***For others 3rd,4th and 5th floors are available...!***\n\t" << endl;
        cout << "\t press 1 for Family room\n"
             << endl;
        cout << "\t press 2 for VIP room\n"
             << endl;
        cout << "\t press 3 for others...\n"
             << endl;
        cout << "\nENTER YOUR CHOISE! :\t ";
        cin >> choise;
        if (choise == 1)
        {
            family_room();
        }
        else if (choise == 2)
        {
            VIP_room();
        }
        else
        {
            cout << "\n\tinvalid opetion" << endl;
 
            visit_oberoi();
        }
    }
    void working()
    {
        int a;
        system("cls");
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    ----------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    |            OBEROI'S HOTEL             |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    ----------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\n\n";
        cout << "\t\t\t\t";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\n\t***********Main Manu************\n\t" << endl;
        cout << "\n\tpress 1 to visit the oberoi hotel!\t" << endl;
        cout << "\n\tpress 2 to delete the record of the room\t" << endl;
        cout << "\n\tpress 3 to display the record of oberoi...\t" << endl;
        cout << "\n\tpress 4 to display the record of oberoi from end...\t" << endl;
        cout << "\n\tpress 5 for exit...\n\t" << endl;
        cout << "\nENTER YOUR CHOISE! :\t ";
        cin >> choise;
        for (a = 0; a <= 100000000; a++)
        {
        }
 
        if (choise == 1)
        {
            visit_oberoi();
        }
        else if (choise == 2)
        {
            del();
        }
        else if (choise == 3)
        {
            display();
        }
        else if (choise == 4)
        {
            displaytherecordfromend();
        }
        else
        {
            exit(0);
        }
        system("pause");
    }
};
 
class logininsystem : virtual private oberoi
{
    char Username[20];
    char Password[15];
 
public:
    void Login()
    {
 
        char key;
        int true1 = 1;
        int try1 = 0;
        int i = 0;
 
        do
        {
            system("cls");
            cout << "\n\n\n\n\n\n";
            int a;
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    ----------------------------------------\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    |   GUEST RECORD MANAGEMENT SYSTEM      |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    ----------------------------------------\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\n\n";
            cout << "\t\t\t\t\t";
            cout << "Username : ";
            cin.getline(Username, 14);
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            cout << "Password : ";
            for (i = 0;;)
            {
                key = getch();
                if ((key >= 'a' && key <= 'z') || (key >= 'A' && key <= 'Z') || (key >= '0' && key <= '9'))
                {
                    Password[i] = key;
                    ++i;
                    cout << "*";
                }
                if (key == '\b' && i >= 1)
                {
                    cout << "\b \b";
                    --i;
                }
                if (key == '\r')
                {
                    Password[i] = '\0';
                    break;
                }
            }
 
            if (strcmp(Username, admin_hotel) == 0 && strcmp(Password, password) == 0)
            {
                cout << "\n\n";
                cout << "\t\t\t\t";
                cout << "You are accessed to the system!\n\n";
                cout << "\t\t\t\t";
                system("pause");
                system("cls");
                true1 = 0;
                try1 = 4;
            }
            else
            {
                system("cls");
                try1 = try1 + 1;
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "\t\t\t\t\t";
                cout << "No. of attempts remain: " << 3 - try1;
                cout << "\n\n";
                cout << "\t\t\t\t";
                system("pause");
 
                if (try1 >= 3)
                {
                    cout << "\t\t\t\t\t\t";
                    cout << "\n";
                    cout << "\t\t\t\t";
                    cout << "No permission to enter the system!\n\n";
                    cout << "\t\t\t\t";
                    system("pause");
                    exit;
                }
            }
        } while (try1 < 3);
    }
};
void FrontPage()
{
    int process = 0;
    system("cls");
    cout << "\n";
    int a;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    |    GUEST RECORD MANAGEMENT SYSTEM     |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\n\n";
    cout << "\t\t\t\t";
    for (a = 0; a <= 100000000; a++)
    {
    }
 
    cout << "Mini Project   ";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << ":";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "  Guest Record Management system  ";
    cout << "\n\n";
    cout << "\t\t\t\t";
    cout << "\n\n";
    cout << "\n\n";
    cout << "\t\t\t\t";
    system("pause");
    cout << "\n\t\t\t\tLoading";
 
    for (process = 0; process < 15; process++)
    {
        for (int a = 0; a <= 100000000; a++)
        {
        }
        cout << ".";
    }
}
 
int main()
{
    FrontPage();
    logininsystem m;
    m.Login();
    oberoi obj;
    obj.working();
}