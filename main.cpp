#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include <format>
#include <sstream>
#include <regex>

using namespace std;

void pressAny()
{
    cout << "PRESS <ENTER> TO PROCEED......"<< endl;
    cin.ignore();
    cin.get();
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
            else if(i ==3)
            {
                cout << "║ " << "CONTACT NO ║  " << left << setw(23) << menuOptions[i] << "  ║" << endl;
            }
            else if(i ==4)
            {
                cout << "║   " << "EMAIL    ║  " << left << setw(23) << menuOptions[i] << "  ║" << endl;
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
    string contactNum;
    string email;

    string commaFormat()
    {
        return username + "," + password + "," + nickname + "," + contactNum + "," + email;
    }

    LoginDetails(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, username, ',');
            getline(ss, password, ',');
            getline(ss, nickname, ',');
            getline(ss, contactNum, ',');
            getline(ss, email);
        }
    }

    template <typename T>
    struct Registration
    {
        T eventDate;
        T birthdayName;
        T packageChosen;
        T totalCost;
        string commaFormat()
        {
            return username + "," + eventDate + "," + birthdayName + "," + contactNum + "," + email + "," + packageChosen + "," + totalCost;
        }

        Registration(string line = "") 
        {
            if (!line.empty()) 
            {
                stringstream ss(line);
                getline(ss, username, ',');
                getline(ss, eventDate, ',');
                getline(ss, birthdayName, ',');
                getline(ss, contactNum, ',');
                getline(ss, email, ',');
                getline(ss, packageChosen, ',');
                getline(ss, totalCost);
            }
        }
    };
};

struct Package
{
    string packageType;
    string venue;
    string catering;
    string decoration;
    string entertaintment;
    string activities;
    string partyGift;
    string cake;
    string price;

    string commaFormat()
    {
        return packageType + "," + venue + "," + catering + "," + decoration + "," + entertaintment + "," + activities + "," + partyGift + "," + cake + "," + price;
    }

    Package(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, packageType, ',');
            getline(ss, venue, ',');
            getline(ss, catering, ',');
            getline(ss, decoration, ',');
            getline(ss, entertaintment, ',');
            getline(ss, activities, ',');
            getline(ss, partyGift, ',');
            getline(ss, cake, ',');
            getline(ss, price);
        }
    }
};

void line(int amt)
{
    cout << "╠";
    for(int i = 0 ; i < amt ; i++)
    {
        cout << "═";
    }
    cout << "╣" <<endl;
}

template <typename T>
void outputPackages(vector <T> packageList ,string type)
{   
    if(type == "basic")
    {

    }
    else if(type == "standard")
    {

    }
    else if(type == "premium")
    {

    }

        cout << "\n╔══════════════════════════════════════════════════════════════════╗" << endl;
        
        for(int i = 0 ; i < packageList.size() ; i++)
        {
            if(i == 0 )
            {
                cout << "║  " << "PACKAGE TYPE  ║  " << left << setw(45) << packageList[i] << "  ║" << endl;
                line(66);
            }
            else if(i == 1)
            {
                cout << "║  " << "VENUE         ║  " << left << setw(45) << packageList[i] << "  ║" << endl;
                line(66);
            }
            else if(i == 2)
            {
                cout << "║  " << "CATERING      ║  " << left << setw(45) << packageList[i] << "  ║" << endl;
                line(66);
            }
            else if(i == 3)
            {
                cout << "║  " << "DECORATION    ║  " << left << setw(45) << packageList[i] << "  ║" << endl;
                line(66);
            }
            else if(i == 4)
            {
                cout << "║  " << "ENTERTAINMENT ║  " << left << setw(45) << packageList[i] << "  ║" << endl;
                line(66);
            }
            else if(i == 5)
            {
                cout << "║  " << "ACTIVITY      ║  " << left << setw(45) << packageList[i] << "  ║" << endl;
                line(66);
            }
            else if(i == 6)
            {
                cout << "║  " << "PARTY GIFT    ║  " << left << setw(45) << packageList[i] << "  ║" << endl;
                line(66);
            }
            else if(i == 7)
            {
                cout << "║  " << "CAKE          ║  " << left << setw(45) << packageList[i] << "  ║" << endl;
                line(66);
            }
            else if(i == 8)
            {
                cout << "║  " << "PRICE         ║  RM" << left << setw(43) << packageList[i] << "  ║" << endl;
            }
        }
        cout << "╚══════════════════════════════════════════════════════════════════╝" << endl;
    }

template <typename T>
struct customPackage
{
    T extraGuest;
    T extraGuestPrice;
    T customCake;
    T customCakeDesign;
    T clown;
    T clownPrice;
    T magician;
    T magicianPrice;
    T customTheme;
    T customThemePrice;

    struct StandardTheme
    {
        T sTheme1;
        T sTheme2;
        T sTheme3;
        T sTheme4;
    };

    struct PremiumTheme
    {
        T pTheme1;
        T pTheme2;
        T pTheme3;
        T pTheme4;
    };
};

template <typename T>
void saveVectorList(vector<T> list, string fileName) 
{
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
vector<T> getVectorList(string fileName) 
{
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

//To match list's elements
template <typename T>
bool usernameExist(vector<T> list , string compareItem)
{
    for(auto r : list)
    {
        if(r.username == compareItem)
        {
            return true;
        }   
    }
    return false;
}

//To get list elements's index number
template <typename T>
int getUserNameIndex(vector <T> list , string compareItem)
{
    int indexNum;
    for(int i = 0 ; i < list.size() ; i++)
    {
        if(list[i].username == compareItem)
        {
            indexNum = i;
        }
    }
    return indexNum;
}

void loginScreen();

void staffPage();
void custPage();
void login(string aspect);
void signUp(string aspect);
void changePass(string aspect);

void custMainPage(string nickname);
void custRegis(string name);
void custViewBooking();
void custViewCampaign();
void custCustomParty();
void custViewProfile();
void custPayment();
void custFeedback();

void staffMainPage(string nickname);
void staffViewBooking();
void staffManageBooking();
void staffMonitorEvent();
void staffGenerateReport();
void staffViewFeedBack();
void staffCampaignPromote();
void staffManageUsers();


//MAIN FUNCTION 
int main()
{
    loginScreen();

    return 0;
}
//MAIN FUNCTION

//Main login page
void loginScreen()
{
    system("clear");
    string loginAns;
    bool status = true;

    MenuTemplate <string> menu;
    menu.menuTitle = "LOGIN SCREEN";
    menu.menuOptions.push_back("CUSTOMER");
    menu.menuOptions.push_back("STAFF");
    menu.menuOptions.push_back("EXIT");

    menu.menuTemplate();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE : ";
        getline(cin,loginAns);

        if(loginAns == "1")
        {
            custPage();
            status = false;
        }
        else if(loginAns == "2")
        {
            staffPage();
            status = false;
        }
        else if(loginAns == "3")
        {
            cout << "\nTHANKS FOR USING OUR SYSTEM :)" << endl;
            exit(0);
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER VALID OPTIONS <1 ~ 3>"<<endl;
            continue;
        }
        status = false;
    }
}

//Customer login page
void custPage()
{
    system("clear");
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
        getline(cin,ans);

        if(ans == "4")
        {
            loginScreen();
            status = false;
        }

        if(ans == "1")
        {
            login("customer");
            status = false;
        }
        else if(ans == "2")
        {
            signUp("customer");
            status = false;
        }
        else if(ans == "3")
        {
            changePass("customer");
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

//Staff login page
void staffPage()
{
    system("clear");
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
        getline(cin,ans);

        if(ans == "1")
        {
            login("staff");
            status = false;
        }
        else if(ans == "2")
        {
            signUp("staff");
            status = false;
        }
        else if(ans == "3")
        {
            changePass("staff");
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

//Login function
void login(string aspect)
{
    bool status = true;
    string function;

    LoginDetails l;
    MenuTemplate <string> m;

    cout << "\n";

    vector<LoginDetails> currenList;
    
    if(aspect == "customer")
    {
        currenList = getVectorList<LoginDetails>("customer.txt");
        if(currenList.size() == 0)
        {
            cout << "THERE'S NO ACCOUNT EXITS IN THE SYSTEM :)" << endl;
            cout << "PLEASE SIGN UP AN ACCOUNT TO PROCEED :)" << endl;
            pressAny();
            custPage();
        }
        m.menuTitle = "CUSTOMER LOGIN";
        m.menuTitleTemplate();
    }
    else if(aspect == "staff")
    {
        currenList = getVectorList<LoginDetails>("staff.txt");
        if(currenList.size() == 0)
        {
            cout << "THERE'S NO ACCOUNT EXITS IN THE SYSTEM :)" << endl;
            cout << "PLEASE SIGN UP AN ACCOUNT TO PROCEED :)" << endl;
            pressAny();
            staffPage();
        }
        m.menuTitle = "STAFF LOGIN";
        m.menuTitleTemplate();
    }

    while(status)
    {
        cout << "PLEASE ENTER YOUR USERNAME <0 to exit> : ";
        getline(cin,l.username);
        
        if(l.username == "0")
        {
            if(aspect == "customer")
            {
                custPage();
                status = false;
            }
            else
            {
                staffPage();
                status = false;
            }
        }

        cout << "PLEASE ENTER YOUR PASSWORD <0 to exit> : ";
        getline(cin,l.password);

        if(l.password == "0")
        {
            if(aspect == "customer")
            {
                custPage();
                status = false;
            }
            else
            {
                staffPage();
                status = false;
            }
        }

        for(int i = 0; i < currenList.size() ; i++)
        {
            if(l.username == currenList[i].username && l.password == currenList[i].password)
            {
                l.nickname = currenList[i].nickname;
                if(aspect == "customer")
                {
                    custMainPage(l.nickname);
                }
                else
                {
                    staffMainPage(l.nickname);
                }
                status = false;
            }
            else
            {
                cout << "\nPLEASE MAKE SURE YOUR USERNAME AND PASSWORD ARE BOTH CORRECT :)"<<endl;
                continue;
            }
        }
        status = false;
    }
}

//Sign up function
void signUp(string aspect)
{
    bool status = true;
    LoginDetails l;
    LoginDetails newCust;
    MenuTemplate <string> m;

    string tempArr[1][5];
    string confirmPass,confirmDetails;
    int row = 0, column = 0;

    vector<LoginDetails> currentList;

    cout << "\n";

    if(aspect == "customer")
    {
        currentList = getVectorList<LoginDetails>("customer.txt");
        
        m.menuTitle = "CUSTOMER SIGN UP";
        m.menuTitleTemplate();
    }
    else if(aspect == "staff")
    {
        currentList = getVectorList<LoginDetails>("staff.txt");
        m.menuTitle = "STAFF SIGN UP";
        m.menuTitleTemplate();
    }

    while(status)
    {
        cout << "PLEASE ENTER YOUR USERNAME <0 to exit> : ";
        getline(cin,l.username);

        if(l.username == "0")
        {
            if(aspect == "customer")
                {
                    custPage();
                    status = false;
                }
                else
                {
                    staffPage();
                    status = false;
                }
            status = false;
        }

        tempArr[row][column] = l.username;
        column++;
        status = false;
    }

    status = true;

    while(status)
    {
        cout << "PLEASE ENTER YOUR CONTACT NUMBER <0 to exit> : ";
        getline(cin,l.contactNum);

        if(l.contactNum == "0")
        {
            if(aspect == "customer")
                {
                    custPage();
                    status = false;
                }
                else
                {
                    staffPage();
                    status = false;
                }
            status = false;
        }

        regex contactPattern("01[0-9]+-\\d+");

        if(regex_match(l.contactNum,contactPattern) && l.contactNum.length() == 11)
        {
            tempArr[row][column] = l.contactNum;
            column++;
            status = false;
        }
        else
        {
            cout << "PLEASE ENTER THE CONTAC NUMBER WITH FORMAT <xxx-xxxxxxx> :)"<<endl;
            continue;
        }
        status = false;
    }

    status = true;

    while(status)
    {
        cout << "PLEASE ENTER YOUR EMAIL <0 to exit> : ";
        getline(cin,l.email);

        if(l.email == "0")
        {
            if(aspect == "customer")
                {
                    custPage();
                    status = false;
                }
                else
                {
                    staffPage();
                    status = false;
                }
            status = false;
        }

        regex emailPattern("[a-zA-Z0-9]+@[a-zA-Z]+.com");

        if(regex_match(l.email,emailPattern)&&l.email.length() == 25)
        {
            tempArr[row][column] = l.email;
            column++;
        }
    status = false;
    }

    status = true;

    while(status)
    {
        cout << "PLEASE ENTER PASSWORD <0 to exit> : ";
        getline(cin,l.password);

        if(l.password == "0")
        {
            if(aspect == "customer")
                {
                    custPage();
                    status = false;
                }
                else
                {
                    staffPage();
                    status = false;
                }
            status = false;
        }

        cout << "PLEASE CONFIRM YOUR PASSWORD : ";
        getline(cin,confirmPass);

        if(confirmPass == l.password)
        {
            tempArr[row][column] = l.password;
            column++;
        }
        else
        {
            cout << "\nPLEASE MAKE SURE YOU HAVE ENTERED THE SAME PASSWORD :)"<< endl;
            continue;
        }
        status = false;
    }

    status = true;

    while(status)
    {
        cout << "PLEASE ENTER YOUR NICKNAME <0 to exit> : ";
        getline(cin,l.nickname);

        if(l.nickname == "0")
        {
            if(aspect == "customer")
            {
                custPage();
                status = false;
            }
            else
            {
                staffPage();
                status = false;
            }
            status = false;
        }

        tempArr[row][column] = l.nickname;
        column = 0;
        status = false;
    }

    m.menuTitle = "DETAILS CONFIRMATION";

    for(int i = 0; i < 1 ; i++)
    {
        for(int j = 0;j < 5 ; j++)
        {
            m.menuOptions.push_back(tempArr[i][j]);
        }
    }
    m.confirmDetails();

    status = true;

    while(status)
    {
        cout << "\n*PLEASE CHECK BEFORE PROCEED* <y/n> : ";
        cin >> confirmDetails;

        if(confirmDetails == "Y" || confirmDetails == "y")
        {
            cout << "ACCOUNTE CREATED SUCCESSFUL~~~" << endl;

            pressAny();

            newCust.username = l.username;
            newCust.password = l.password;
            newCust.nickname = l.nickname;
            newCust.contactNum = l.contactNum;
            newCust.email = l.email;

            currentList.push_back(newCust);
            
            if(aspect == "customer")
            {
                saveVectorList(currentList,"customer.txt");
                custPage();
                status = false;
            }
            else
            {
                saveVectorList(currentList,"staff.txt");
                staffPage();
                status = false;
            }
        }
        else if(confirmDetails == "N" || confirmDetails == "n")
        {
            cout << "ACCOUNTE CREATED UNSUCCESSFUL :(" << endl;

            pressAny();
   
            system("clear");
            if(aspect == "customer")
            {
                custPage();
                status = false;
            }
            else
            {
                staffPage();
                status = false;
            }
        }
        else
        {
            cout << "PLEASE ENTER VALID OPTIONS :)"<< endl;
            continue;
        }
        status = false;
    }
}

//Change password function
void changePass(string aspect)
{
    bool status = true;
    string username;
    int index;
    string pass,newPass;
    vector <LoginDetails> currentList;

    LoginDetails l;
    MenuTemplate <string> m;

    cout << "\n";

    if(aspect == "customer")
    {
        currentList = getVectorList<LoginDetails>("customer.txt");
        m.menuTitle = "CUSTOMER CHANGE PASSWORD";
    }
    else
    {
        currentList = getVectorList<LoginDetails>("staff.txt");
        m.menuTitle = "STAFF CHANGE PASSWORD";
    }

    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR USERNAME TO CHANGE PASSWORD <0 to exit> : ";
        getline(cin,username);

        if(username == "0")
        {
            if(aspect == "customer")
            {
                custPage();
                status = false;
            }
            else
            {
                staffPage();
                status = false;
            }
        }

        index = getUserNameIndex(currentList , username);

        if(usernameExist(currentList , username))
        {
            cout << "YOU HAVE CHOSE <" << currentList[index].nickname << "> TO CHANGE PASSWORD :)"<<endl;
            status = false;
        }
        else
        {
            cout << "USERNAME DOES\'NT EXIST... PLEASE ENTER A VALID USERNAME :)" << endl;
            continue;
        }
        status = false;
    }

    status = true;

    while(status)
    {
        cout << "PLEASE ENTER YOUR OLD PASSWORD : ";
        getline(cin,pass);

        if(currentList[index].password != pass)
        {
            cout << "PLEASE ENTER THE CORRECT OLD PASSWORD :)" << endl;
            continue;
        }
        else
        {
            status = false;
        }
        status = false;
    }

    status = true;

    while(status)
    {
        cout << "\nPLEASE ENTER YOUR NEW PASSWORD <maximum 15 characters> : ";
        getline(cin,newPass);

        if(newPass.length() > 15)
        {
            cout << "PLEASE LIMIT THE CHARACTER IN 15 WORDS ONLY :)";
            continue;
        }

        currentList[index].password = newPass;
        if(aspect == "customer")
        {
            saveVectorList(currentList,"customer.txt");
        }
        else
        {
            saveVectorList(currentList,"staff.txt");
        }

        cout << "\n" << currentList[index].nickname << "\'s PASSWORD HAS CHANGED SUCCESSFULLY" << endl;

        if(aspect == "customer")
        {
            pressAny();
            custPage();
            status = false;
        }
        else
        {
            pressAny();
            staffPage();
            status = false;
        }
    }
}

//Customer main menu page
void custMainPage(string name)
{
    system("clear");
    bool status = true;

    MenuTemplate <string> m;
    string ans;
    string confirmPass,confirmDetails;
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
        getline(cin,ans);

        if(ans == "1")
        { 
            custRegis(name);
            status = false;
        }
        else if(ans == "2")
        {
            custViewBooking();
            status = false;
        }
        else if(ans == "3")
        {
            custViewCampaign();
            status = false;
        }
        else if(ans == "4")
        {
            custCustomParty();
            status = false;
        }
        else if(ans == "5")
        {
            custViewProfile();
            status = false;
        }
        else if(ans == "6")
        {
            custPayment();
            status = false;
        }
        else if(ans == "7")
        {
            custFeedback();
            status = false;
        }
        else if(ans == "8")
        {
            cout << "ARE YOU SURE YOU WANT TO LOG OUT ? <y/n> : ";
            getline(cin,confirmDetails);

            if(confirmDetails == "Y" || confirmDetails == "y")
            {
                loginScreen();
                status = false;
            }
            else if(confirmDetails == "N" || confirmDetails == "n")
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

//Staff main menu page
void staffMainPage(string name)
{
    system("clear");
    MenuTemplate <string> m;
    string confirmPass,confirmDetails;
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
        getline(cin,ans);

        if(ans == "1")
        {
            staffViewBooking();
            status = false;
        }
        else if(ans == "2")
        {
            staffManageBooking();
            status = false;
        }
        else if(ans == "3")
        {
            staffMonitorEvent();
            status = false;
        }
        else if(ans == "4")
        {
            staffGenerateReport();
            status = false;
        }
        else if(ans == "5")
        {
            staffViewFeedBack();
            status = false;
        }
        else if(ans == "6")
        {
            staffCampaignPromote();
            status = false;
        }
        else if(ans == "7")
        {
            staffManageUsers();
            status = false;
        }
        else if(ans == "8")
        {
            cout << "ARE YOU SURE YOU WANT TO LOG OUT ? <y/n> : ";
            getline(cin,confirmDetails);

            if(confirmDetails == "Y" || confirmDetails == "y")
            {
                loginScreen();
                status = false;
            }
            else if(confirmDetails == "N" || confirmDetails == "n")
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

//Customer main menu's registration event function
void custRegis(string name)
{
    system("clear");

    bool status = true;

    LoginDetails::Registration <string> lr;
    LoginDetails l;
    MenuTemplate <string> m;
    Package p;
    Package newPackage;
    vector <string> tmpList;
    vector <Package> packageList = getVectorList<Package>("packageList.txt");
    vector <LoginDetails> packageList = getVectorList<LoginDetails>("registration.txt");

    while(status)
    {
        cout << "PLEASE ENTER YOUR NAME <0 to exit> : ";
        getline(cin , l.username);

        if(l.username == "0")
        {
            custMainPage(name);
            status = false;
        }

        cout << "PLEASE ENTER THE EVENT DATE <> <0 to exit> : ";
        getline(cin , lr.eventDate);

        regex datePattern("2(0[0-9]1[0-9]2[0-9])-(0[0-9]1[0-9])-(0[0-9]1[0-9])");
        
        status = false;
    }

    status = true;

    m.menuTitle = "PACKAGES";
    m.menuOptions.push_back("BASIC");
    m.menuOptions.push_back("STANDARD");
    m.menuOptions.push_back("PREMIUM");

    m.menuTemplate();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY PACKAGE SHOWN ABOVE <0 to exit> : ";
        getline(cin,lr.packageChosen);

        if(lr.packageChosen == "0")
        {
            custMainPage(name);
            status = false;
        }

        if(lr.packageChosen == "1")
        {
            outputPackages(packageList,"basic");

            
            status = false;
        }
        else if(lr.packageChosen == "2")
        {
            outputPackages(packageList,"standard");
            status = false;
        }
        else if(lr.packageChosen == "3")
        {   
            outputPackages(packageList,"premium");
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE NETER VALID OPTION :)" << endl;
            continue;
        }
        status = false;
    }
}

//Customer view booking function
void custViewBooking()
{

}

//Customer view campaign promotion function
void custViewCampaign()
{

}

//Customer customize party function
void custCustomParty()
{

}

//Customer view profile function
void custViewProfile()
{

}

//Customer make payment function
void custPayment()
{

}

//Customer provide feedback function
void custFeedback()
{

}


//Staff view booking function
void staffViewBooking()
{
    
}

//Staff manage booking function
void staffManageBooking()
{

}

//Staff monitor event function
void staffMonitorEvent()
{

}

//Staff view report function
void staffGenerateReport()
{

}

//Staff view customer's feedback function
void staffViewFeedBack()
{

}

//Staff create campaign and promote to customer page function
void staffCampaignPromote()
{

}

//Staff manage user's function
void staffManageUsers()
{

}
