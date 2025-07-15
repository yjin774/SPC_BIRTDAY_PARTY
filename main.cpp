#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include <format>
#include <sstream>

using namespace std;

void clearScreen() {
#ifdef _WIN32
    // Windows-specific clear screen
    system("cls");
#else
    // macOS / Linux / Unix
    cout << "\033[2J\033[H" << flush;
#endif
}

template <typename T>
struct MenuTemplate
{
    T menuTitle;
    vector <T> menuOptions;

    void menuTitleTemplate()
    {
        cout << "╔════════════════════════════════════════╗" << endl;
        cout << "║  " << left << setw(36)  << menuTitle << "  ║" << endl;
        cout << "╚════════════════════════════════════════╝" << endl;
    }

    void menuTemplate()
    {
        cout << "╔════════════════════════════════════════╗" << endl;
        cout << "║  " << left << setw(36)  << menuTitle << "  ║" << endl;
        cout << "╠════════════════════════════════════════╣" << endl;

        for(int i = 0 ; i < menuOptions.size() ; i++)
        {
            cout << "║  " << i+1 << ". " << left << setw(33) << menuOptions[i] << "  ║" << endl;
        }

        cout << "╚════════════════════════════════════════╝" << endl;
    }

    void confirmDetails()
    {
        cout << "\n╔════════════════════════════════════════╗" << endl;
        cout << "║  " << left << setw(36)  << menuTitle << "  ║" << endl;
        cout << "╠════════════════════════════════════════╣" << endl;

        for(int i = 0 ; i < menuOptions.size() ; i++)
        {
            if(i == 0)
            {
                cout << "║  " << "USERNAME  ║  " << left << setw(23) << menuOptions[i] << "  ║" << endl;
            }
            else if(i == 1)
            {
                cout << "║  " << "PASSWORD  ║  " << left << setw(23) << menuOptions[i] << "  ║" << endl;
            }
            else if(i ==2)
            {
                cout << "║  " << "NICKNAME  ║  " << left << setw(23) << menuOptions[i] << "  ║" << endl;
            }
        }

        cout << "╚════════════════════════════════════════╝" << endl;
    }
};

struct LoginDetails
{
    string username;
    string password;
    string nickname;

    struct SignUpDetails
    {   
        string confirmPass;
        string confirmDetails;
    };

    string commaFormat()
    {
        return username + "," + password + "," + nickname;
    }

    LoginDetails(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, username, ',');
            getline(ss, password, ',');
            getline(ss, nickname);
        }
    }

    void setUsername(string newName)
    {
        username = newName;
    }

    void setPass(string newPass)
    {
        password = newPass;
    }

    void setNickName(string newNickName)
    {
        nickname = newNickName;
    }
};

template <typename T>
void saveVectorList(vector<T> list, string fileName) {
    ofstream saveFile(fileName);
    if (saveFile.is_open()) 
    {
        for (auto r : list) {
            saveFile << r.commaFormat() << endl;
        }
        saveFile.close();
    } 
}

template <typename T>
vector<T> getVectorList(string fileName) {
    vector<T> list;
    ifstream outputFile(fileName);
    if (outputFile.is_open()) {
        string values;
        while (getline(outputFile, values)) 
        {
            list.emplace_back(values);
        }
        outputFile.close();
    } 
    return list;
}

void loginScreen();

void staffPage();
void staffLogin();
void staffSignUp();
void staffChangePass();

void custPage();
void custLogin();
void custSignUp();
void custChangePass();

void staffMainPage(string nickname);

void custMainPage(string nickname);


int main()
{
    loginScreen();

    return 0;
}

void loginScreen()
{
    clearScreen();
    string loginAns;

    MenuTemplate <string> menu;
    menu.menuTitle = "LOGIN SCREEN";
    menu.menuOptions.push_back("CUSTOMER");
    menu.menuOptions.push_back("STAFF");
    menu.menuOptions.push_back("EXIT");

    menu.menuTemplate();

    while(true)
    {
        cout << "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE : ";
        cin >> loginAns;

        if(loginAns == "1")
        {
            custPage();
            break;
        }
        else if(loginAns == "2")
        {
            staffPage();
            break;
        }
        else if(loginAns == "3")
        {
            cout << "\nTHANKS FOR USING OUR SYSTEM :)" << endl;
            break;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER VALID OPTIONS <1 ~ 3>"<<endl;
            continue;
        }
        break;
    }
}

void custPage()
{
    clearScreen();
    string ans;
    bool status = true;

    MenuTemplate <string> menu;
    menu.menuTitle = "CUSTOMER SECTION";
    menu.menuOptions.push_back("LOG IN ACCOUNT");
    menu.menuOptions.push_back("SIGN UP ACCOUNT");
    menu.menuOptions.push_back("CHANGE PASSWORD");
    menu.menuOptions.push_back("EXIT");

    menu.menuTemplate();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE : ";
        cin >> ans;

        if(ans == "4")
        {
            loginScreen();
            status = false;
        }

        if(ans == "1")
        {
            custLogin();
            status = false;
        }
        else if(ans == "2")
        {
            custSignUp();
            status = false;
        }
        else if(ans == "3")
        {
            custChangePass();
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER VALID OPTION :)"<< endl;
            continue;
        }
        status = false;
    }
}

void custLogin()
{
    bool status = true;
    LoginDetails l;

    cout << "\n";

    vector<LoginDetails> custList = getVectorList<LoginDetails>("customer.txt");

    MenuTemplate <string> menu;
    menu.menuTitle = "CUSTOMER LOGIN";
    menu.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR USERNAME <0 to exit> : ";
        cin >> l.username;
        
        if(l.username == "0")
        {
            loginScreen();
            break;
        }

        cout << "PLEASE ENTER YOUR PASSWORD <0 to exit> : ";
        cin >> l.password;

        if(l.password == "0")
        {
            loginScreen();
            break;
        }

        for(int i = 0; i < custList.size() ; i++)
        {
            if(l.username == custList[i].username && l.password == custList[i].password)
            {
                l.nickname = custList[i].nickname;
                custMainPage(l.nickname);
                status = false;
            }
            else
            {
                cout << "\nPLEASE MAKE SURE YOUR USERNAME AND PASSWORD ARE BOTH CORRECT :)"<<endl;
                continue;
            }
        }
    }
}

void custSignUp()
{
    bool status = true;
    LoginDetails l;
    LoginDetails newCust;
    LoginDetails::SignUpDetails s;

    vector<LoginDetails> custList = getVectorList<LoginDetails>("customer.txt");
    string tempArr[1][3];
    int row = 0, column = 0;

    cout << "\n";

    MenuTemplate <string> menu;
    menu.menuTitle = "CUSTOMER SIGN UP";
    menu.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR USERNAME <0 to exit> : ";
        cin >> l.username;

        tempArr[row][column] = l.username;
        column++;

        cout << "PLEASE ENTER PASSWORD <0 to exit> : ";
        cin >> l.password;

        cout << "PLEASE CONFIRM YOUR PASSWORD : ";
        cin >> s.confirmPass;

        if(s.confirmPass == l.password)
        {
            tempArr[row][column] = l.password;
            column++;
        }
        else
        {
            cout << "\nPLEASE MAKE SURE YOU HAVE ENTERED THE SAME PASSWORD :)"<< endl;
            continue;
        }

        cout << "PLEASE ENTER YOUR NICKNAME : ";
        cin >> l.nickname;

        tempArr[row][column] = l.nickname;
        column = 0;
        status = false;
    }

    menu.menuTitle = "DETAILS CONFIRMATION";

    for(int i = 0; i < 1 ; i++)
    {
        for(int j = 0;j < 3 ; j++)
        {
            menu.menuOptions.push_back(tempArr[i][j]);
        }
    }
    menu.confirmDetails();

    status = true;

    while(status)
    {
        cout << "\n*PLEASE CHECK BEFORE PROCEED* <y/n> : ";
        cin >> s.confirmDetails;

        if(s.confirmDetails == "Y" || s.confirmDetails == "y")
        {
            cout << "ACCOUNTE CREATED SUCCESSFUL~~~" << endl;
            cout << "PRESS ANY KEY TO PROCEED...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            newCust.username = l.username;
            newCust.password = l.password;
            newCust.nickname = l.nickname;
            custList.push_back(newCust);
            saveVectorList(custList,"customer.txt");
            staffPage();
            status = false;
        }
        else if(s.confirmDetails == "N" || s.confirmDetails == "n")
        {
            cout << "ACCOUNTE CREATED UNSUCCESSFUL :(" << endl;
            cout << "PRESS ANY KEY TO PROCEED...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            clearScreen();
            staffSignUp();
            status = false;
        }
        else
        {
            cout << "PLEASE ENTER VALID OPTIONS :)"<< endl;
            continue;
        }
        status = false;
    }
}

void custChangePass()
{
    bool status = true;

    cout << "\n";

    MenuTemplate <string> menu;
    menu.menuTitle = "CUSTOMER CHANGE PASSWORD";
    menu.menuTitleTemplate();
    
}

void staffPage()
{
    clearScreen();
    bool status = true;
    string ans;

    MenuTemplate <string> menu;
    menu.menuTitle = "STAFF SECTION";
    menu.menuOptions.push_back("LOG IN ACCOUNT");
    menu.menuOptions.push_back("SIGN UP ACCOUNT");
    menu.menuOptions.push_back("CHANGE PASSWORD");
    menu.menuOptions.push_back("EXIT");

    menu.menuTemplate();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE : ";
        cin >> ans;

        if(ans == "1")
        {
            staffLogin();
            status = false;
        }
        else if(ans == "2")
        {
            staffSignUp();
            status = false;
        }
        else if(ans == "3")
        {
            staffChangePass();
            status = false;
        }
        else if(ans == "4")
        {
            loginScreen();
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER VALID OPTION :)"<< endl;
            continue;
        }
        status = false;
    }
}

void staffLogin()
{
    bool status = true,loginSuccess = false;
    LoginDetails l;

    vector<LoginDetails> staffList = getVectorList<LoginDetails>("staff.txt");

    cout << "\n";

    MenuTemplate <string> menu;
    menu.menuTitle = "STAFF LOGIN";
    menu.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR USERNAME <0 to exit> : ";
        cin >> l.username;
        
        if(l.username == "0")
        {
            loginScreen();
            break;
        }

        cout << "PLEASE ENTER YOUR PASSWORD <0 to exit> : ";
        cin >> l.password;

        if(l.password == "0")
        {
            loginScreen();
            break;
        }

        for(int i = 0; i < staffList.size() ; i++)
        {
            if(l.username == staffList[i].username && l.password == staffList[i].password)
            {
                l.nickname = staffList[i].nickname;
                staffMainPage(l.nickname);
                loginSuccess = true;
                status = false;
            }
        }

        if(!loginSuccess)
        {
            cout << "\nPLEASE MAKE SURE BOTH INPUT ARE CORRECT :)" << endl;
        }
    }
}

void staffSignUp()
{
    bool status = true;
    LoginDetails l, newStaff;
    LoginDetails::SignUpDetails s;
    string tempArr[1][3];
    vector <LoginDetails> staffList = getVectorList<LoginDetails>("staff.txt");
    int row = 0, column = 0;

    cout << "\n";

    MenuTemplate <string> menu;
    menu.menuTitle = "STAFF SIGN UP";
    menu.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR USERNAME <0 to exit> : ";
        cin >> l.username;

        if(l.username == "0")
        {
            staffPage();
            status = false;
        }

        tempArr[row][column] = l.username;
        column++;

        cout << "PLEASE ENTER PASSWORD <0 to exit> : ";
        cin >> l.password;

        if(l.username == "0")
        {
            staffPage();
            status = false;
        }

        cout << "PLEASE CONFIRM YOUR PASSWORD : ";
        cin >> s.confirmPass;

        if(s.confirmPass == l.password)
        {
            tempArr[row][column] = l.password;
            column++;
        }
        else
        {
            cout << "\nPLEASE MAKE SURE YOU HAVE ENTERED THE SAME PASSWORD :)"<< endl;
            continue;
        }

        cout << "PLEASE ENTER YOUR NICKNAME : ";
        cin >> l.nickname;

        tempArr[row][column] = l.nickname;
        column = 0;
        status = false;
    }

    menu.menuTitle = "DETAILS CONFIRMATION";

    for(int i = 0; i < 1 ; i++)
    {
        for(int j = 0;j < 3 ; j++)
        {
            menu.menuOptions.push_back(tempArr[i][j]);
        }
    }
    clearScreen();
    menu.confirmDetails();

    status = true;

    while(status)
    {
        cout << "\n*PLEASE CHECK BEFORE PROCEED* <y/n> : ";
        cin >> s.confirmDetails;

        if(s.confirmDetails == "Y" || s.confirmDetails == "y")
        {
            cout << "ACCOUNTE CREATED SUCCESSFUL~~~" << endl;
            cout << "PRESS ANY KEY TO PROCEED...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            newStaff.username = l.username;
            newStaff.password = l.password;
            newStaff.nickname = l.nickname;
            staffList.push_back(newStaff);
            saveVectorList(staffList,"staff.txt");
            staffPage();
            status = false;
        }
        else if(s.confirmDetails == "N" || s.confirmDetails == "n")
        {
            cout << "ACCOUNTE CREATED UNSUCCESSFUL :(" << endl;
            cout << "PRESS ANY KEY TO PROCEED...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            clearScreen();
            staffSignUp();
            status = false;
        }
        else
        {
            cout << "PLEASE ENTER VALID OPTIONS :)"<< endl;
            continue;
        }
        status = false;
    }
}

void staffChangePass()
{
    bool status = true;
    int choices;
    vector <LoginDetails> staffList = getVectorList<LoginDetails>("staff.txt");
    LoginDetails l;

    cout << "\n";

    MenuTemplate <string> menu;
    menu.menuTitle = "STAFF CHANGE PASSWORD";

    menu.menuTitleTemplate();

    for(int i = 0 ; i < staffList.size() ; i++)
    {
        cout << i+1 <<". "<< staffList[i].nickname << endl;
    }

    while(status)
    {
        cout << "PLEASE CHOOSE ANY USER TO CHANGE PASSWORD <enter the number> : ";
        cin >> choices;
    }

}

void custMainPage(string name)
{
    clearScreen();
    bool status = true;

    MenuTemplate <string> m;
    string ans;
    LoginDetails::SignUpDetails l;
    m.menuTitle = "MAIN MENU";

    cout << "WELCOME BACK " << name << " !!!\n" << endl;

    m.menuOptions.push_back("REGISTRATION");
    m.menuOptions.push_back("VIEW BOOKING STATUS");
    m.menuOptions.push_back("VIEW CAMPAIGN");
    m.menuOptions.push_back("CUSTOMIZE PARTY");
    m.menuOptions.push_back("VIEW/UPDATE PROFILE");
    m.menuOptions.push_back("MAKE PAYMENT");
    m.menuOptions.push_back("PROVIDE FEEDBACK");
    m.menuOptions.push_back("LOG OUT");

    m.menuTemplate();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE : ";
        cin >> ans;

        if(ans == "1")
        {
            status = false;
        }
        else if(ans == "2")
        {
            status = false;
        }
        else if(ans == "3")
        {
            status = false;
        }
        else if(ans == "4")
        {
            status = false;
        }
        else if(ans == "5")
        {
            status = false;
        }
        else if(ans == "6")
        {
            status = false;
        }
        else if(ans == "7")
        {
            cout << "ARE YOU SURE YOU WANT TO LOG OUT ? <y/n> : ";
            cin >> l.confirmDetails;

            if(l.confirmDetails == "Y" || l.confirmDetails == "y")
            {
                loginScreen();
                status = false;
            }
            else if(l.confirmDetails == "N" || l.confirmDetails == "n")
            {
                custMainPage(name);
                status = false;
            }
            else
            {
                cout << "INVALID INPUT~~~ PLEASE CHOOSE VALID OPTION :)" <<endl;
                continue;
            }
            status = false;
        }
        else
        {
            cout << "INVALID INPUT~~~ PLEASE CHOOSE VALID OPTION :)" <<endl;
            continue;
        }
        status = false;
    }

}

void staffMainPage(string name)
{
    clearScreen();
    MenuTemplate <string> m;
    LoginDetails::SignUpDetails l;
    bool status = true;
    string ans;
    m.menuTitle = "MAIN MENU";

    cout << "WELCOME BACK " << name << " !!!\n" << endl;

    m.menuOptions.push_back("VIEW ALL BOOKINGS");
    m.menuOptions.push_back("MANAGE BOOKINGS");
    m.menuOptions.push_back("MONITOR EVENTS");
    m.menuOptions.push_back("GENERATE REPORTS");
    m.menuOptions.push_back("VIEW CUSTOMER FEEDBACK");
    m.menuOptions.push_back("CAMPAIGN PROMOTE");
    m.menuOptions.push_back("MANAGE USERS");
    m.menuOptions.push_back("LOG OUT");

    m.menuTemplate();

       while(status)
    {
        cout << "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE : ";
        cin >> ans;

        if(ans == "1")
        {
            status = false;
        }
        else if(ans == "2")
        {
            status = false;
        }
        else if(ans == "3")
        {
            status = false;
        }
        else if(ans == "4")
        {
            status = false;
        }
        else if(ans == "5")
        {
            status = false;
        }
        else if(ans == "6")
        {
            status = false;
        }
        else if(ans == "7")
        {
            status = false;
        }
        else if(ans == "8")
        {
            cout << "ARE YOU SURE YOU WANT TO LOG OUT ? <y/n> : ";
            cin >> l.confirmDetails;

            if(l.confirmDetails == "Y" || l.confirmDetails == "y")
            {
                loginScreen();
                status = false;
            }
            else if(l.confirmDetails == "N" || l.confirmDetails == "n")
            {
                staffMainPage(name);
                status = false;
            }
            else
            {
                cout << "INVALID INPUT~~~ PLEASE CHOOSE VALID OPTION :)" <<endl;
                continue;
            }
            status = false;
        }
        else
        {
            cout << "INVALID INPUT~~~ PLEASE CHOOSE VALID OPTION :)" <<endl;
            continue;
        }
        status = false;
    }
}