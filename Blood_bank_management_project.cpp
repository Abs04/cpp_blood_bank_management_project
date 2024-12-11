/*
 * Project Name    : Blood bank management System.
 * Group Name      : Flipflop.
 * Project Language: C++.
 * Coding Paradigm : OOP.
 * Author          : Abu Bakor Siddik(Abs)
 */

#include <iostream>
#include <cstring>
using namespace std;

class blood_bank
{
public:
    char s[20] = "flipflop"; // Our team name is our password.
    char str[20];
    static int bloodgroup[8];
    char name[50];
    char sex[15];
    int display()
    {
        cout << "\t\t------------------------------------" << endl;
        cout << "\t\tHere is the Blood stock list: \n";
        cout << "\t\tA+ve:" << blood_bank::bloodgroup[0] << endl;
        cout << "\t\tO+ve:" << blood_bank::bloodgroup[1] << endl;
        cout << "\t\tB+ve:" << blood_bank::bloodgroup[2] << endl;
        cout << "\t\tAB+ve:" << blood_bank::bloodgroup[3] << endl;

        cout << "\t\tA-ve:" << blood_bank::bloodgroup[4] << endl;
        cout << "\t\tO-ve:" << blood_bank::bloodgroup[5] << endl;
        cout << "\t\tB-ve:" << blood_bank::bloodgroup[6] << endl;
        cout << "\t\tAB-ve:" << blood_bank::bloodgroup[7] << endl;
        cout << "\t\t------------------------------------" << endl;

        cout << "For exit from Admin panel press 0 then press enter" << endl;
        return 0;
    }

    // friend function:
    friend void welcome();

    // outline function declaration.
    int display(int c, int x); // polymorphism

    // For patient.
    string date;
    char blood_group[20];
    // DONOR DETAILS
    long long int phone_no;
};

// int blood_back::display()

int blood_bank::display(int c, int x)
{

    cout << "\t\t----------------" << endl;
    cout << "\t\tNAME : ";
    cout << name << endl;
    cout << "\t\tSEX : ";
    cout << sex << endl;
    cout << "\t\tPHONE NUMBER : ";
    cout << phone_no << endl;
    cout << "\t\tDate(DD.MM.YY) : ";
    cout << date << endl;
    cout << "\t\tBLOOD GROUP : ";

    switch (c)
    {
        // A, O+, B+, AB+, A-, O-, B-, AB-
    case 0:
        cout << "\t0 = A+" << endl;
        break;
    case 1:
        cout << "\t1 = O+" << endl;
        break;
    case 2:
        cout << "\t2 = B+" << endl;
        break;
    case 3:
        cout << "\t3 = AB+" << endl;
        break;
    case 4:
        cout << "\t4 = A-" << endl;
        break;
    case 5:
        cout << "\t5 = O-" << endl;
        break;
    case 6:
        cout << "\t6 = B-" << endl;
        break;
    case 7:
        cout << "\t7 = AB-" << endl;
    }

    cout << "\t\tPackets of blood:" << x << endl;
    cout << "\t\t----------------" << endl;
    return 0;
}
int blood_bank::bloodgroup[] = {0, 0, 0, 0, 0, 0, 0, 0};

class admin : public blood_bank // inheritance.
{

public:
    admin() // constructor
    {
        cout << "Enter password:";
        cin >> str;
        if (strcmp(s, str) == 0) // checking password.
        {
            cout << "welcome Admin, Here are the blood-bank details" << endl;
            display();
        }
        else
            cout << "Invalid Password. Please try again. " << endl;
    }
};

class patient // Class.
{
    char name[50];
    char blood_group[20];

public:
    int save();
    void show(int c); // Using function argument.
};

int patient::save() // outline functoin
{
    int c, n;

    cout << "\tEnter your name:";
    cin >> name;

    cout << "Enter type of blood group you are looking for:" << endl;

    cout << "\t0 = A+" << endl
         << "\t1 = O+" << endl
         << "\t2 = B+" << endl
         << "\t3 = AB+" << endl
         << "\t4 = A-" << endl
         << "\t5 = O-" << endl
         << "\t6 = B-" << endl
         << "\t7 = AB-" << endl;

    cin >> c;

    show(c); // Nested function.
    return 0;
}

void patient::show(int c) // outline function.
{
    cout << "Available blood groups are :" << endl;
    if (c == 0)
    {
        cout << "A+ve:" << blood_bank::bloodgroup[0] << endl;
        if (blood_bank::bloodgroup[0] > 0)
        {
            cout << "\t\tYou will get 1 bag of blood." << endl
                 << "\t\tIf your want more please login." << endl;

            blood_bank::bloodgroup[0]--;
        }
        else
        {
            cout << "Sorry blood is not avilable" << endl;
        }
    }
    else if (c == 1)
    {
        cout << "O+ve:" << blood_bank::bloodgroup[1] << endl;

        if (blood_bank::bloodgroup[1] > 0)
        {
            cout << "\t\tYou will get 1 bag of blood." << endl
                 << "\t\tIf your want more please login." << endl;
            blood_bank::bloodgroup[1]--;
        }
        else
        {
            cout << "Compatible blood group not available";
        }
    }
    else if (c == 2)
    {
        cout << "B+ve:" << blood_bank::bloodgroup[2] << endl;

        if (blood_bank::bloodgroup[2] > 0)
        {
            cout << "\t\tYou will get 1 bag of blood." << endl
                 << "\t\tIf your want more please login." << endl;
            blood_bank::bloodgroup[2]--;
        }
        else
        {
            cout << "Compatible blood group not available";
        }
    }

    else if (c == 3)
    {
        cout << "AB+ve:" << blood_bank::bloodgroup[3] << endl;

        if (blood_bank::bloodgroup[3] > 0)
        {
            cout << "\t\tYou will get 1 bag of blood." << endl
                 << "\t\tIf your want more please login." << endl;
            blood_bank::bloodgroup[3]--;
        }
        else
        {
            cout << "Compatible blood group not available";
        }
    }
    else if (c == 4)
    {
        cout << "A-ve:" << blood_bank::bloodgroup[4] << endl;

        if (blood_bank::bloodgroup[4] > 0)
        {
            cout << "\t\tYou will get 1 bag of blood." << endl
                 << "\t\tIf your want more please login." << endl;
            blood_bank::bloodgroup[4]--;
        }
        else
        {
            cout << "Compatible blood group not available";
        }
    }
    else if (c == 5)
    {
        cout << "O-ve:" << blood_bank::bloodgroup[5] << endl;

        if (blood_bank::bloodgroup[5] > 0)
        {
            cout << "\t\tYou will get 1 bag of blood." << endl
                 << "\t\tIf your want more please login." << endl;
            blood_bank::bloodgroup[5]--;
        }
        else
        {
            cout << "Compatible blood group not available";
        }
    }
    else if (c == 6)
    {
        cout << "B-ve:" << blood_bank::bloodgroup[6] << endl;
        if (blood_bank::bloodgroup[6] > 0)
        {
            cout << "\t\tYou will get 1 bag of blood." << endl
                 << "\t\tIf your want more please login." << endl;
            blood_bank::bloodgroup[6]--;
        }
        else
        {
            cout << "Compatible blood group not available";
        }
    }
    else if (c == 7)
    {
        cout << "AB-ve:" << blood_bank::bloodgroup[7] << endl;
        if (blood_bank::bloodgroup[7] > 0)
        {
            cout << "\t\tYou will get 1 bag of blood." << endl
                 << "\t\tIf your want more please login." << endl;
            blood_bank::bloodgroup[7]--;
        }
        else
        {
            cout << "Compatible blood group not available";
        }
    }
}

class donor : public blood_bank // Inheritance; Here donar is child class and blood_bank is parent class.
{

public:
    int save(); // function declaration.
    int x, c;
};

int donor::save()
{
    cout << "Enter your name:";
    cin >> name;

    cout << "Sex:";
    cin >> sex;
    cout << "Enter your Phone No:";
    cin >> phone_no;
    cout << "Enter date(DD.MM.YY):";
    cin >> date;

    // A, O+, B+, AB+, A-, O-, B-, AB-

    cout << "Enter your Blood Group:" << endl;

    cout << "\t0 = A+" << endl
         << "\t1 = O+" << endl
         << "\t2 = B+" << endl
         << "\t3 = AB+" << endl
         << "\t4 = A-" << endl
         << "\t5 = O-" << endl
         << "\t6 = B-" << endl
         << "\t7 = AB-" << endl;

    cin >> c;

    cout << "How many Bag of blood you want to donate?\n";
    cin >> x;

    blood_bank::bloodgroup[c] += x;
    char ch;
    cout << "Do you want your information to be displayed now(Y/N)";
    cin >> ch;

    if (ch == 'Y' || ch == 'y')
    {
        blood_bank::display(c, x);
    } // polymorphisam.
    return 0;
}
void welcome()
{
    {
        cout << "\n\t\t----Welcome to Flip-flop Blood Bank----\n";
    }
}

int main()
{
    int i = 0, j = 0;
    donor a[100];  // Array of objects.
    patient b[50]; // Array of objects.

    int c = 0;

    while (c != 4)
    {
        welcome();
        cout << "Enter \n 1 if you are the admin \n 2 if you are a donor \n 3 if you are a patient or \n 4 if you want to exit:";
        cin >> c;
        switch (c)
        {

        case 4:
            break;

        case 1:
        {
            admin t;
            int stop;
            cin >> stop;
            if(stop == 0) {
                break;
            }
        }

        case 2:
        {

            int k;
            static int i = 0;
            cout << "welcome donor!!!" << endl;
            cout << "Please enter 1 if you want to enter your information:";
            cin >> k;
            if (k == 1)
            {
                a[i++].save();
            }
            else if (k == 2)
            {
                cout << "\n\t\t!!Thank You. See you again!!" << endl;
            }

            break;
        }

        case 3:
        {
            static int i = 0;
            cout << "Welcome patient!!!" << endl;
            b[i++].save();
            break;
        }
        }
    }
    return 0;
}
