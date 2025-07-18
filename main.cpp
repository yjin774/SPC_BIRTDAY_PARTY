#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include <format>
#include <sstream>
#include <regex>
#include <algorithm>
#include <cctype>

using namespace std;

template <typename T>
struct MenuTemplate
{
    T menuTitle;
    vector <T> menuOptions;

    void menuTitleTemplate()
    {
        cout << "╔══════════════════════════════════════════════════╗" << endl;
        cout << "║  " << left << setw(46)  << menuTitle << "  ║" << endl;
        cout << "╚══════════════════════════════════════════════════╝" << endl;
    }

    void menuTemplate()
    {
        cout << "╔═════════════════════════════════════════╗" << endl;
        cout << "║  " << left << setw(37)  << menuTitle << "  ║" << endl;
        cout << "╠═════════════════════════════════════════╣" << endl;

        for(int i = 0 ; i < menuOptions.size() ; i++)
        {
            cout << "║  "<< left << setw(37)<< "{"+to_string(i+1)+"} "+menuOptions[i] << "  ║" << endl;
        }

        cout << "╚═════════════════════════════════════════╝" << endl;
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
};

template <typename T>
struct Package
{
    T packageType;
    T venue;
    T catering;
    T decoration;
    T entertaintment;
    T activities;
    T partyGift;
    T cake;
    T price;
    vector <T> packageList;

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

    void line(int amt)
    {
        cout << "╠";
        for(int i = 0 ; i < amt ; i++)
        {
            cout << "═";
        }
        cout << "╣" <<endl;
    }

    void outputPackages()
    {   
        cout << "\n╔═════════════════════════════════════════════════════════════════════════╗" << endl;
            
        for(int i = 0 ; i < packageList.size() ; i++)
        {
            if(i == 0)
            {
                cout << "║  " << "PACKAGE TYPE  ║  " << left << setw(52) << packageList[i] << "  ║" << endl;
                line(73);
            }
            else if(i == 1)
            {
                cout << "║  " << "VENUE         ║  " << left << setw(52) << packageList[i] << "  ║" << endl;
                line(73);
            }
            else if(i == 2)
            {
                cout << "║  " << "CATERING      ║  " << left << setw(52) << packageList[i] << "  ║" << endl;
                line(73);
            }
            else if(i == 3)
            {
                cout << "║  " << "DECORATION    ║  " << left << setw(52) << packageList[i] << "  ║" << endl;
                line(73);
            }
            else if(i == 4)
            {
                cout << "║  " << "ENTERTAINMENT ║  " << left << setw(52) << packageList[i] << "  ║" << endl;
                line(73);
            }
            else if(i == 5)
            {
                cout << "║  " << "ACTIVITY      ║  " << left << setw(52) << packageList[i] << "  ║" << endl;
                line(73);
            }
            else if(i == 6)
            {
                cout << "║  " << "PARTY GIFT    ║  " << left << setw(52) << packageList[i] << "  ║" << endl;
                line(73);
            }
            else if(i == 7)
            {
                cout << "║  " << "CAKE          ║  " << left << setw(52) << packageList[i] << "  ║" << endl;
                line(73);
            }
            else if(i == 8)
            {
                cout << "║  " << "PRICE         ║  RM" << left << setw(50) << packageList[i] << "  ║" << endl;
            }
        }
        cout << "╚═════════════════════════════════════════════════════════════════════════╝" << endl;
    }
};

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
struct Registration
{
    T serialNum;
    T eventDate;
    T time;
    T birthdayName;
    T packageChosen;
    T totalCost;
    T bookingStatus;
    T guestAmount;
    LoginDetails login;
    Package<string> package;

    string commaFormat()
    {
        return serialNum + "," + login.username + "," + eventDate + "," + 
        time + "," +birthdayName + "," + login.contactNum + "," + 
        login.email + "," + packageChosen + "," + totalCost
        + "," + bookingStatus + "," + guestAmount;
    }

    Registration(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, serialNum, ',');
            getline(ss, login.username, ',');
            getline(ss, eventDate, ',');
            getline(ss, time, ',');
            getline(ss, birthdayName, ',');
            getline(ss, login.contactNum, ',');
            getline(ss, login.email, ',');
            getline(ss, packageChosen, ',');
            getline(ss, totalCost, ',');
            getline(ss, bookingStatus, ',');
            getline(ss, guestAmount);
        }
    }
};

template <typename T>
struct Receipt
{
    T invoiceNum;
    T paymentType;
    T paymentTime;
    T paymentTax;
    T amtWithoutTax;
    T amtWithTax;
    Registration <string> registers;
    LoginDetails login;

    string commaFormat()
    {
        return login.username + "," + login.email + "," + login.contactNum +
         "," + registers.totalCost + "," + registers.eventDate + 
         "," + registers.packageChosen + "," + registers.guestAmount + 
         "," + invoiceNum + "," + paymentType + "," + paymentTime + 
         "," + paymentTax + "," + amtWithoutTax + "," + amtWithTax; 
    }

    Receipt(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, login.username, ',');
            getline(ss, login.email, ',');
            getline(ss, login.contactNum, ',');
            getline(ss, registers.totalCost, ',');
            getline(ss, registers.eventDate, ',');
            getline(ss, registers.packageChosen, ',');
            getline(ss, registers.guestAmount, ',');
            getline(ss, invoiceNum, ',');
            getline(ss, paymentType, ',');
            getline(ss, paymentTime, ',');
            getline(ss, paymentTax, ',');
            getline(ss, amtWithoutTax, ',');
            getline(ss, amtWithTax, ',');
        }
    }
};

double calculateAmt(string amount)
{
    double result;

    return result;
}

template <typename T>
void printBookingDetails(vector<T>list)
{
    cout << "╔══════════════════════════════════════════════════╗" << endl;
    cout << "╚══════════════════════════════════════════════════╝" << endl;
}

template <typename T>
void printReceiptDetails(vector<T>list)
{
    cout << "╔══════════════════════════════════════════════════╗" << endl;
    cout << "╚══════════════════════════════════════════════════╝" << endl;
}

// Print records in groups of 3 mini-tables per row
template <typename T>
void printRecords(vector<vector<pair<string, T>>> records, int width = 25, int perRow = 3) {
    for (size_t i = 0; i < records.size(); i += perRow) {
        int actualCount = min(perRow, static_cast<int>(records.size() - i));

        // Top borders
        for (int j = 0; j < actualCount; ++j) {
            cout << "╔" << string(width, '=') << "╗   ";
        }
        cout << endl;

        // Print each field row by row
        size_t maxFields = 0;
        for (int j = 0; j < actualCount; ++j)
            maxFields = max(maxFields, records[i + j].size());

        for (size_t line = 0; line < maxFields; ++line) {
            for (int j = 0; j < actualCount; ++j) {
                if (line < records[i + j].size()) {
                    auto& field = records[i + j][line];
                    cout << "║" << left << setw(width) << field.first + ": " + field.second << "║   ";
                } else {
                    cout << "║" << setw(width) << " " << "║   ";
                }
            }
            cout << endl;
        }

        // Bottom borders
        for (int j = 0; j < actualCount; ++j) {
            cout << "╚" << string(width, '=') << "╝   ";
        }
        cout << endl << endl;
    }
}

template <typename T1,typename T2>
void saveVectorList(vector<T1> list, T2 fileName) 
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
int getIndex(vector<T> list , string compareInput , function<string(T)>getItem)
{
    int indexNum;
    string compareInputLower = compareInput;
    transform(compareInputLower.begin(),compareInputLower.end(),compareInputLower.begin(),::tolower);

    for(int i = 0 ; i < list.size() ; i++)
    {
        string itemValue = getItem(list[i]);
        string itemValueLower = itemValue;
        transform(itemValueLower.begin(),itemValueLower.end(),itemValueLower.begin(),::tolower);
        if(itemValueLower == compareInputLower)
        {
            indexNum = i;
            break;
        }
    }
    return indexNum;
}

template <typename T>
string generateSerialNo(string type,vector<T>list)
{
    string prefix;
    if(type == "RE")
    {
        prefix = "RE";
    }
    else if(type == "IN")
    {
        prefix = "IN";
    }

    int serialNum = list.size()+1;
    stringstream ss;

    ss << prefix << setfill('0') << setw(4) << serialNum;
    return ss.str();
}

string timePrefix(string time)
{
    string prefix;
    stringstream ss(time);
    string hour,min;

    getline(ss,hour,':');

    int hourInt = stoi(hour);
    if(hourInt <=11)
    {
        prefix = "AM";
    }
    else
    {
        prefix = "PM";
    }

    return time+" "+prefix;
}

void pressAny()
{
    cout << "PRESS <ENTER> TO PROCEED......";
    cin.ignore();
    cin.get();
}

void loginScreen();

void staffPage();
void custPage();
void login(string aspect);
void signUp(string aspect);
void changePass(string aspect);

void custMainPage(string nickname);
void custRegis(string name ,int userIndex);
void custViewBooking(string name);
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

    vector<LoginDetails> currentList;
    
    if(aspect == "customer")
    {
        currentList = getVectorList<LoginDetails>("customer.txt");
        if(currentList.size() == 0)
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
        currentList = getVectorList<LoginDetails>("staff.txt");
        if(currentList.size() == 0)
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

        int usernameIndex = getIndex<LoginDetails>(currentList , l.username , [](LoginDetails ld){return ld.username;});
        int passIndex = getIndex<LoginDetails>(currentList , l.password , [](LoginDetails ld){return ld.password;});

        if(l.username == currentList[usernameIndex].username && l.password == currentList[passIndex].password)
        {
            l.nickname = currentList[usernameIndex].nickname;
            if(aspect == "customer")
            {
                custMainPage(l.nickname);
                status = false;
            }
            else
            {
                staffMainPage(l.nickname);
                status = false;
            }
        }
        else
        {
            cout << "\nPLEASE MAKE SURE USERNAME AND PASSWORD ARE BOTH CORRECT :)\n" << endl;
            continue;
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

        index = getIndex<LoginDetails>(currentList , username , [](LoginDetails ld){return ld.username;});

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
    vector<LoginDetails> custList = getVectorList<LoginDetails>("customer.txt");
    int userIndex = getIndex<LoginDetails>(custList , name , [](LoginDetails ld){return ld.username;});
    string ans;
    string confirmPass,confirmDetails;
    m.menuTitle = "MAIN MENU";

    cout << "USERNAME : " << name << "\n" << endl;

    m.menuOptions.push_back("REGISTRATION");
    m.menuOptions.push_back("VIEW BOOKINGS");
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
            custRegis(name , userIndex);
            status = false;
        }
        else if(ans == "2")
        {
            custViewBooking(name);
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

    cout << "USERNAME : " << name << "\n" << endl;

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
void custRegis(string name , int userIndex)
{
    system("clear");

    bool status = true;
    int row = 0,column =0;
    string ans;

    Registration<string> r;
    Registration<string> newResgister;

    MenuTemplate <string> m;
    
    Package <string> p;
    
    vector <LoginDetails> custList = getVectorList<LoginDetails>("customer.txt");
    vector<Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");
    vector<Package<string>> packageList = getVectorList<Package<string>>("packageList");

    m.menuTitle = "USERNAME <d to use default name>";
    m.menuTitleTemplate();
    while(status)
    {
        cout << "PLEASE ENTER YOUR NAME <0 to exit> : ";
        getline(cin , r.login.username);

        if(r.login.username == "0")
        {
            custMainPage(name);
            status = false;
        }
        else if(r.login.username == "D" || r.login.username == "d")
        {
            r.login.username = name;
            status = false;
        }
        status = false;
    }

    status = true;

    m.menuTitle = "EVENT DATE";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER THE EVENT DATE <0 to exit> : ";
        getline(cin , r.eventDate);

        if(r.eventDate == "0")
        {
            custMainPage(name);
            status = false;
        }

        regex dateFormat("20[0-9]{2}-(0[1-9]|1[0-2])-(0[0-9]|[12][0-9]|3[01])");

        if(regex_match(r.eventDate,dateFormat))
        {
            status = false;
        }   
        else
        {
            cout << "PLEASE ENTER IN <YYY-MM-DD> FORMAT :)\n"<<endl;
            continue;
        }

        status = false;
    }

    m.menuTitle = "TIME";
    m.menuTitleTemplate();

    status = true;

    while(status)
    {
        cout << "PLEASE ENTER THE EVENT DATE <0 to exit> : ";
        getline(cin , r.time);

        if(r.time == "0")
        {
            custMainPage(name);
            status = false;
        }

        regex timeFormat("([0-1][0-9]|2[0-3]):[0-5][0-9]");

        if(regex_match(r.time,timeFormat))
        {
            r.time = timePrefix(r.time);
            status = false;
        }   
        else
        {
            cout << "PLEASE ENTER IN <HH:MM> FORMAT :)\n"<<endl;
            continue;
        }

        status = false;
    }

    status = true;

    m.menuTitle = "BIRTHDAY THEME NAME";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR BIRTHDAY THEME NAME <0 to exit> : ";
        getline(cin,r.birthdayName);

        if(r.birthdayName == "0")
        {
            custMainPage(name);
            status = false;
        }
        status = false;
    }

    status = true;

    m.menuTitle = "CONTACT NUMBER <d to use default contact no>";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR CONTACT NUMBER <0 to exit> : ";
        getline(cin,r.login.contactNum);

        if(r.login.contactNum == "0")
        {
            custMainPage(name);
            status = false;
        }
        
        if(r.login.contactNum == "D" || r.login.contactNum == "d")
        {
            r.login.contactNum = custList[userIndex].contactNum;
            status = false;
        }

        status = false;
    }

    status = true;

    m.menuTitle = "EMAIL <d to use default email>";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR EMAIL <0 to exit> : ";
        getline(cin,r.login.email);

        if(r.login.email == "D" || r.login.email == "d")
        {
            r.login.email = custList[userIndex].email;
            status = false;
        }

        if(r.login.email == "0")
        {
            custMainPage(name);
            status = false;
        }
        status = false;
    }

    status = true;

    m.menuTitle = "GUEST AMOUNT";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER GUEST AMOUNT <0 to exit> : ";
        getline(cin,r.guestAmount);

        if(r.guestAmount== "0")
        {
            custMainPage(name);
            status = false;
        }

        regex guestFormat("\\d+");
        int amt = stoi(r.guestAmount);

        if(!regex_match(r.guestAmount , guestFormat))
        {
            cout << "PLEASE ENTER WITH NUMBERS :)" << endl;
            continue;
        }
        else if(amt <= 0 || r.guestAmount.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY OR ZERO" << endl;
            continue;
        }
        else
        {
            status = false;
        }


        status = false;
    }

    status = true;

    m.menuTitle = "PACKAGES";
    m.menuOptions.push_back("BASIC");
    m.menuOptions.push_back("STANDARD");
    m.menuOptions.push_back("PREMIUM");

    while(status)
    {
        system("clear");

        m.menuTemplate();

        cout << "PLEASE CHOOSE ANY PACKAGE SHOWN ABOVE <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            custMainPage(name);
            status = false;
        }
        else if(ans == "1")
        {
            p.packageList.clear();
            p.packageList.push_back("BASIC");
            p.packageList.push_back("SMALL PARTY ROOM");
            p.packageList.push_back("LIGHT SNACK AND DRINKS");
            p.packageList.push_back("BASIC BALLON SETUP AND BIRTYDAY SIGNAGE");
            p.packageList.push_back("NOT AVAILABLE");
            p.packageList.push_back("NOT AVAILABLE");
            p.packageList.push_back("SIMPLE GOODIE BAGS");
            p.packageList.push_back("1KG STANDARD BDAY CAKE");
            p.packageList.push_back("599");

            r.package.price = "599";
        }
        else if(ans == "2")
        {
            p.packageList.clear();
            p.packageList.push_back("STANDARD");
            p.packageList.push_back("EVENT HALL");
            p.packageList.push_back("3-4 MAIN COURSES + DRINKS");
            p.packageList.push_back("THEME BASED SETUP WITH BACKDROPS AND WELCOME SIGNAGE");
            p.packageList.push_back("MUSIC PLAYLIST WITH SPEAKERS");
            p.packageList.push_back("NOT AVAILABLE");
            p.packageList.push_back("PERSONALIZED GOODIE BAGS");
            p.packageList.push_back("2KG CUSTOME THEMED CAKE");
            p.packageList.push_back("899");

            r.package.price = "899";
        }
        else if(ans == "3")
        {   
            p.packageList.clear();
            p.packageList.push_back("PREMIUM");
            p.packageList.push_back("HOTEL FUNCTION ROOM");
            p.packageList.push_back("MULTI-COURSE BUFFET");
            p.packageList.push_back("PREMIUM THEME");
            p.packageList.push_back("DJ OR MAGICIAN PERFORMANCE");
            p.packageList.push_back("PHOTO BOOTH or GAME or PRIZE DRAWS");
            p.packageList.push_back("SIMPLE GOODIE BAGS"); 
            p.packageList.push_back("3KG DESIGNER CAKE");
            p.packageList.push_back("1399");

            r.package.price = "1399";
        }
        else
        {
            cout << "INVALID INPUT... PLEASE NETER VALID OPTION :)" << endl;
            continue;
        }

        p.outputPackages();

        cout << "ARE YOU SURE YOU WANT THIS PACKAGE <y/n> ? : ";
        getline(cin ,r.packageChosen);

        if(r.packageChosen == "Y" || r.packageChosen == "y")
        {
            if(ans == "1")
            {
                r.packageChosen = "BASIC";
            }
            else if(ans == "2")
            {
                r.packageChosen = "STANDARD";
            }
            else if(ans == "3")
            {
                r.packageChosen = "PREMIUM";
            }
            else if(r.packageChosen == "N" || r.packageChosen == "n")
            {
                continue;
            }
            else
            {
                cout << "\nINVALID INPUT... PLEASE ENTER <y/n> ONLY :)\n"<<endl;
                continue;
            }
            status = false;
        }
        else if(r.packageChosen == "N" || r.packageChosen == "n")
        {
            continue;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER <y/n> ONKY :)";
            continue;
        }
        status = false;
    }   

    system("clear");

    m.menuOptions.clear();
    m.menuTitle = "BOOKING CONFIRMATION";
    m.menuOptions.push_back(r.login.username);
    m.menuOptions.push_back(r.eventDate);
    m.menuOptions.push_back(r.time);
    m.menuOptions.push_back(r.birthdayName);
    m.menuOptions.push_back(r.login.contactNum);
    m.menuOptions.push_back(r.login.email);
    m.menuOptions.push_back(r.packageChosen);
    m.menuOptions.push_back(r.login.username);
    m.menuOptions.push_back(r.package.price);
    m.menuOptions.push_back(r.guestAmount);

    cout << "Debug: menuOptions size = " << m.menuOptions.size() << "\n";
    for (size_t i = 0; i < m.menuOptions.size(); ++i) {
        std::cout << "Debug: [" << i << "] = " << m.menuOptions[i] << "\n";
    }


    m.menuTemplate();

    status = true;
    string confirmation;

    while(status)
    {
        cout << "ARE YOU SURE ALL THE DETAILS SHOWN ABOVE ARE CORRECT ? <y/n> : ";
        getline(cin , confirmation);
        if(confirmation == "Y" || confirmation == "y")
        {
            newResgister.serialNum = generateSerialNo("RE",registerList);
            newResgister.login.username = r.login.username;
            newResgister.eventDate = r.eventDate;
            newResgister.time = r.time;
            newResgister.birthdayName = r.birthdayName;
            newResgister.login.contactNum = r.login.contactNum;
            newResgister.login.email = r.login.email;
            newResgister.packageChosen = r.packageChosen;
            newResgister.totalCost = r.package.price;
            newResgister.bookingStatus = "PAYMENT PENDING";
            newResgister.guestAmount = r.guestAmount;
            registerList.push_back(newResgister);
            saveVectorList(registerList,"registration.txt");
            cout << "BOOKING MADE SUCCESSFULLY~~~ :)"<<endl;
            pressAny();
            custMainPage(name);
            status = false;
        }
        else if(confirmation == "N" || confirmation == "n")
        {
            cout << "BOOKING MADE UNSUCCESSFULL~~~ :(\n"<<endl;;
            pressAny();
            custMainPage(name);
            status = false;
        }
        status = false;
    }
}

//Customer view booking function
void custViewBooking(string name)
{
    bool status = true;
    string ans;

    system("clear");

    MenuTemplate <string> m;

    vector<vector<pair<string,string>>> bookingRecords;
    const vector<string> HEADERS = {"RECEIPT ID","USERNAME","STATUS"};
    vector<Registration<string>> registeredList = getVectorList <Registration<string>>("registration.txt");
    // vector<>

    m.menuTitle = "VIEW BOOKING";
    m.menuTitleTemplate();

    cout << "\n";

    for(int i = 0 ; i < registeredList.size() ; i++)
    {
        string reId = registeredList[i].serialNum;
        string userName = registeredList[i].login.username;
        string status = registeredList[i].bookingStatus;

        bookingRecords.push_back
        (
            {   
                {HEADERS[0],reId},
                {HEADERS[1],userName},
                {HEADERS[2],status}
            }
        );
    }

    printRecords(bookingRecords);

    while(status)
    {
        cout << "THESE ARE THE CURRENT BOOKINGS YOU HAVE MADE :)"<<endl;
        cout << "PLEASE CHOOSE ANY BOOKING TO VIEW THE DETAILS <enter RECEIPT ID> <0 to exit> : ";
        getline(cin , ans);

        int index = getIndex<Registration<string>>(registeredList, ans , [](Registration<string>r){return r.serialNum;});

        if(ans == "0")
        {
            custMainPage(name);
            status = false;
        }

        if(ans == registeredList[index].serialNum)
        {
            if(registeredList[index].bookingStatus == "PAYMENT PENDING")
            {
                printBookingDetails(registeredList);
                status = false;
            }
            else
            {
                // printReceiptDetails();
                status = false;
            }
        }
        
        status = false;
    }
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
