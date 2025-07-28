#include <iostream>
#include <iomanip>
#include <fstream>
#include <format>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <format>
#include <sstream>
#include <regex>
#include <algorithm>
#include <cctype>
#include <set>

#ifdef _WIN32
    #include <conio.h>  // Windows-specific
#else
    #include <termios.h>
    #include <unistd.h>
#endif

using namespace std;

void buddha()
{
    cout << "                  _oo0oo_                      " << endl;
    cout << "                 o8888888o                     " << endl;
    cout << "                 88\" . \"88                     " << endl;
    cout << "                 (| -_- |)                     " << endl;
    cout << "                 0\\  =  /0                     " << endl;
    cout << "               ___/`---'\\___                   " << endl;
    cout << "             .' \\\\|     |// '.                 " << endl;
    cout << "            / \\\\|||  :  |||// \\                " << endl;
    cout << "           / _||||| -:- |||||- \\               " << endl;
    cout << "          |   | \\\\\\  -  /// |   |              " << endl;
    cout << "          | \\_|  ''\\---/''  |_/ |              " << endl;
    cout << "          \\  .-\\__  '-'  ___/-. /              " << endl;
    cout << "        ___'. .'  /--.--\\  `. .'___            " << endl;
    cout << "     .\"\" '<  `.___\\_<|>_/___.' >' \"\".          " << endl;
    cout << "    | | :  `- \\`.;`\\ _ /`;.`/ - ` : | |        " << endl;
    cout << "    \\  \\ `_.   \\_ __\\ /__ _/   .-` /  /        " << endl;
    cout << "=====`-.____`.___ \\_____/___.-`___.-'=====     " << endl;
    cout << "                  `=---='                      " << endl;
    cout << "                                               " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
    cout << "          佛祖保佑         永無BUG               " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
}

void tq()
{
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⠀⠀⠀⢠⣾⣧⣤⡖⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⠋⠀⠉⠀⢄⣸⣿⣿⣿⣿⣿⣥⡤⢶⣿⣦⣀⡀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡆⠀⠀⠀⣙⣛⣿⣿⣿⣿⡏⠀⠀⣀⣿⣿⣿⡟" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⠷⣦⣤⣤⣬⣽⣿⣿⣿⣿⣿⣿⣿⣟⠛⠿⠋⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠋⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⡆⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⣠⣶⣶⣶⣿⣦⡀⠘⣿⣿⣿⣿⣿⣿⣿⣿⠿⠋⠈⢹⡏⠁⠀⠀" << endl;
    cout << "⠀⠀⠀⢀⣿⡏⠉⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡆⠀⢀⣿⡇⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⢸⣿⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣟⡘⣿⣿⣃⠀⠀⠀" << endl;
    cout << "⣴⣷⣀⣸⣿⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⠹⣿⣯⣤⣾⠏⠉⠉⠉⠙⠢⠀" << endl;
    cout << "⠈⠙⢿⣿⡟⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣄⠛⠉⢩⣷⣴⡆⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠋⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣀⡠⠋⠈⢿⣇⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⠿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
}


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
    T timeDuration;
    T catering;
    T decoration;
    T entertaintment;
    T activities;
    T partyGift;
    T cake;
    T price;
    vector <T> confirmListpackageList;

    string commaFormat()
    {
        return packageType + "," + venue + "," + timeDuration + "," + catering + "," + decoration + "," + entertaintment + "," + activities + "," + partyGift + "," + cake + "," + price;
    }

    Package(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, packageType, ',');
            getline(ss, venue, ',');
            getline(ss, timeDuration, ',');
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
};

template <typename T>
struct Theme
{
    T themeDescription;
    T themePrice;
    T themeStatus;

    string commaFormat() const
    {
        return themeDescription + "," + themePrice + "," + themeStatus;
    }

    Theme(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, themeDescription, ',');
            getline(ss, themePrice, ',');
            getline(ss, themeStatus);
        }
    }
};

template <typename T>
struct CustomPackage
{
    T item;
    T itemPrice;
    T itemStatus;
    T extraGuestAmt;
    T extraGuestAmtStatus;
    T extraGuestAmtPrice;

    string commaFormat() const
    {
        return item + "," + itemPrice + "," + itemStatus;
    }

    CustomPackage(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, item, ',');
            getline(ss, itemPrice, ',');
            getline(ss, itemStatus);
        }
    }
};

template <typename T>
struct Registration
{
    T serialNum;
    T eventDate;
    T startTime;
    T endTime;
    T birthdayName;
    T packageChosen;
    T totalCost;
    T bookingStatus;
    T guestAmount;
    T specialRequest;
    T customStatus;
    double TAX = 0.06;
    LoginDetails login;
    Package<string> package;

    string commaFormat()
    {
        return serialNum + "," + login.username + "," + eventDate + "," + 
        startTime + "," + endTime + "," + birthdayName + "," + login.contactNum + "," + 
        login.email + "," + packageChosen + "," + totalCost
        + "," + bookingStatus + "," + guestAmount + "," + specialRequest + "," +
        customStatus;
    }

    Registration(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, serialNum, ',');
            getline(ss, login.username, ',');
            getline(ss, eventDate, ',');
            getline(ss, startTime, ',');
            getline(ss, endTime, ',');
            getline(ss, birthdayName, ',');
            getline(ss, login.contactNum, ',');
            getline(ss, login.email, ',');
            getline(ss, packageChosen, ',');
            getline(ss, totalCost, ',');
            getline(ss, bookingStatus, ',');
            getline(ss, guestAmount, ',');
            getline(ss, specialRequest, ','); 
            getline(ss, customStatus);
        }   
    }
};

template <typename T>
struct CustomList
{
    T item1;
    T item1Price;
    T item1Status;
    T item2;
    T item2Price;
    T item2Status;
    T item3;
    T item3Price;
    T item3Status;
    T item4;
    T item4Price;
    T item4Status;
    Registration<T> registers;
    CustomPackage<T> customPackage;
    Theme <T> themes;

    string commaFormat() const
    {
        return registers.serialNum + "," + item1 + "," + item1Price + "," + item1Status + "," + 
        item2 + "," + item2Price + "," + item2Status + "," + item3 + "," + item3Price + "," + item3Status + "," + 
        item4 + "," + item4Price + "," + item4Status + "," + customPackage.extraGuestAmt + "," + customPackage.extraGuestAmtPrice + "," + customPackage.extraGuestAmtStatus +
        "," + themes.themeDescription + "," + themes.themePrice + "," + themes.themeStatus;
    }

    CustomList(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, registers.serialNum, ',');  
            getline(ss, item1, ',');
            getline(ss, item1Price, ',');
            getline(ss, item1Status, ',');
            getline(ss, item2, ',');
            getline(ss, item2Price, ',');
            getline(ss, item2Status, ',');
            getline(ss, item3, ',');
            getline(ss, item3Price, ',');
            getline(ss, item3Status, ',');
            getline(ss, item4, ',');
            getline(ss, item4Price, ',');
            getline(ss, item4Status, ',');
            getline(ss, customPackage.extraGuestAmt, ',');
            getline(ss, customPackage.extraGuestAmtPrice, ',');
            getline(ss, customPackage.extraGuestAmtStatus, ',');
            getline(ss, themes.themeDescription, ',');
            getline(ss, themes.themePrice, ',');
            getline(ss, themes.themeStatus);
        }
    }
};

struct Receipt
{
    string receiptID;
    string paymentStatus;
    string issueDate;
    string amtBeforeTax;
    string taxAmt;
    string amtAfterTax;
    string totalGuestAmt;
    string totalGeneralAddOn;
    string depositAmt;
    string paymentType;
    Registration <string> registers;
    CustomList <string> custom;
    Package <string> package;

        string commaFormat()
    {
        return receiptID + "," + registers.login.nickname + "," + paymentStatus + "," + issueDate + "," + amtBeforeTax + "," + taxAmt + "," + amtAfterTax + "," + registers.eventDate + "," + 
        registers.startTime + "," + registers.endTime + "," + registers.birthdayName + "," + registers.login.contactNum + "," + 
        registers.login.email + "," + registers.packageChosen + "," + package.venue + "," + package.catering + "," + package.decoration + "," + package.entertaintment + "," + package.partyGift + "," + registers.totalCost
        + "," + registers.guestAmount + "," + registers.specialRequest + "," + registers.customStatus + "," + custom.item1 + "," + custom.item1Price + "," + custom.item1Status + "," + 
        custom.item2 + "," + custom.item2Price + "," + custom.item2Status + "," + custom.item3 + "," + custom.item3Price + "," + custom.item3Status + "," + 
        custom.item4 + "," + custom.item4Price + "," + custom.item4Status + "," + totalGeneralAddOn + "," + custom.customPackage.extraGuestAmt + "," + totalGuestAmt + "," + custom.customPackage.extraGuestAmtPrice + "," + custom.customPackage.extraGuestAmtStatus +
        "," + custom.themes.themeDescription + "," + custom.themes.themePrice + "," + custom.themes.themeStatus + "," + depositAmt + "," + paymentType;
    }

    Receipt(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, receiptID, ',');
            getline(ss, registers.login.nickname, ',');
            getline(ss, paymentStatus, ',');
            getline(ss, issueDate, ',');
            getline(ss, amtBeforeTax, ',');
            getline(ss, taxAmt, ',');
            getline(ss, amtAfterTax, ',');
            getline(ss, registers.eventDate, ',');
            getline(ss, registers.startTime, ',');
            getline(ss, registers.endTime, ',');
            getline(ss, registers.birthdayName, ',');
            getline(ss, registers.login.contactNum, ',');
            getline(ss, registers.login.email, ',');
            getline(ss, registers.packageChosen, ',');
            getline(ss, package.venue, ',');
            getline(ss, package.catering, ',');
            getline(ss, package.decoration, ',');
            getline(ss, package.entertaintment, ',');
            getline(ss, package.partyGift, ',');
            getline(ss, registers.totalCost, ',');
            getline(ss, registers.guestAmount, ',');
            getline(ss, registers.specialRequest, ','); 
            getline(ss, registers.customStatus, ',');
            getline(ss, custom.item1, ',');
            getline(ss, custom.item1Price, ',');
            getline(ss, custom.item1Status, ',');
            getline(ss, custom.item2, ',');
            getline(ss, custom.item2Price, ',');
            getline(ss, custom.item2Status, ',');
            getline(ss, custom.item3, ',');
            getline(ss, custom.item3Price, ',');
            getline(ss, custom.item3Status, ',');
            getline(ss, custom.item4, ',');
            getline(ss, custom.item4Price, ',');
            getline(ss, custom.item4Status, ',');
            getline(ss, totalGeneralAddOn, ',');
            getline(ss, custom.customPackage.extraGuestAmt, ',');
            getline(ss, totalGuestAmt, ',');
            getline(ss, custom.customPackage.extraGuestAmtPrice, ',');
            getline(ss, custom.customPackage.extraGuestAmtStatus, ',');
            getline(ss, custom.themes.themeDescription, ',');
            getline(ss, custom.themes.themePrice, ',');
            getline(ss, custom.themes.themeStatus, ',');
            getline(ss, depositAmt, ',');
            getline(ss, paymentType);
        }   
    }
};

struct Feedback
{   
    string content;
    string rate;
    string fbStatus;
    Registration <string> registers;

    string commaFormat()
    {
        return registers.serialNum + "," + registers.login.nickname + "," + content + "," + rate + "," + fbStatus;
    }

    Feedback(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, registers.serialNum, ',');
            getline(ss, registers.login.nickname, ',');
            getline(ss, content, ',');
            getline(ss, rate, ',');
            getline(ss, fbStatus);
        }
    }
};

string getIssueDate() {
    auto now = chrono::system_clock::now();
    time_t now_time = chrono::system_clock::to_time_t(now);
    tm* local_tm = localtime(&now_time);

    stringstream ss;
    ss << put_time(local_tm, "%Y-%m-%d %H:%M:%S");

    return ss.str(); 
}

template <typename T1,typename T2>
void saveVectorList(vector<T1>& list, const T2& fileName) 
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
vector<T> getVectorList(const string& fileName) 
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

void calculateAmount(double& amtBeforeTax,double& taxAmt, double& amtAfterTax,int index, int customIndex,double& totalGeneralAddOn, double& depositAmt)
{   
    vector <Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");
    vector <CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");

    double totalCost = stod(registerList[index].totalCost);
    double guestPrice = stod(customList[customIndex].customPackage.extraGuestAmtPrice);
    double item1 = stod(customList[customIndex].item1Price);
    double item2 = stod(customList[customIndex].item2Price);
    double item3 = stod(customList[customIndex].item3Price);
    double item4 = stod(customList[customIndex].item4Price);
    double themePrice = stod(customList[customIndex].themes.themePrice);

    amtBeforeTax = totalCost + guestPrice + item1 + item2 + item3 + item4 + themePrice;

    taxAmt = amtBeforeTax * registerList[index].TAX;

    amtAfterTax = amtBeforeTax + taxAmt;

    depositAmt = amtAfterTax * 0.2;

    totalGeneralAddOn = item1 + item2 + item3 + item4;
}

void printReceipt(const vector<vector<string>>& registerRecord,int index,string receiptType) 
{
    //e recipet title
    cout << "╔" << setfill('=') << setw(80) << right << "╗" << endl;
    cout << "║  " << setfill(' ')<< left << setw(75)  << "BIRTYDAY EVENT E-RECEIPT" << "║" << endl;
    cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

    //receipt id,issue date,payment status
    for(int i = 0 ; i < 3 ; i++)
    {
        cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[i][0] << " : " << left << setw(52) << registerRecord[i][1] << "║" << endl;
    }

    cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

    //customer name
    cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[3][0] << " : " << left << setw(52) << registerRecord[3][1] << "║" << endl;
    cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

    //event date,start time,end time
    for(int i = 4 ; i < 7 ; i++)
    {
        cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[i][0] << " : " << left << setw(52) << registerRecord[i][1] << "║" << endl;
    }

    cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

    //package items
    for(int i = 7 ; i < 13 ; i++)
    {
        cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[i][0] << " : " << left << setw(52) << registerRecord[i][1] << "║" << endl;
    }

    cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

    //package guest amount
    cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[13][0] << " : " << left << setw(52) << registerRecord[13][1] << "║" << endl;
    cout << "╠" << setfill('-') << setw(80) << right << "╣" << endl;

    //package cost
    cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[14][0] << " : " << left << setw(10) << registerRecord[14][1] << "║" << endl;
    cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

    //special request
    cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[15][0] << " : " << left << setw(52) << registerRecord[15][1] << "║" << endl;
    cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

    if(registerRecord[16][1] == "ACTIVE")
    {
        //custom status
        cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[16][0] << " : " << left << setw(52) << registerRecord[16][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //general add on title
        cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[17][0] << left << setw(55) << registerRecord[17][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //general add on items's title
        cout << "║  " << setfill(' ')<< left << setw(18)  << registerRecord[18][0] << " | " << left << setw(18)  << registerRecord[18][1] << " | " << left << setw(18)  << registerRecord[18][2] << " | " << left << setw(12) << registerRecord[18][3] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //general add on items
        for(int i = 19 ; i < 23 ; i++)
        {
            cout << "║  " << setfill(' ')<< left << setw(18)  << registerRecord[i][0] << " | " << left << setw(18)  << registerRecord[i][1] << " | " << left << setw(18)  << registerRecord[i][2] << " | " << left << setw(12) << registerRecord[i][3] << "║" << endl;
            cout << "╠" << setfill('-') << setw(80) << right << "╣" << endl;
        }

        //general add on cost
        cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[23][0] << " : " << left << setw(10) << registerRecord[23][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //extra guest title
        cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[24][0] << left << setw(55) << registerRecord[24][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //extra guest's item name,item status and item price's title
        cout << "║  " << setfill(' ')<< left << setw(24)  << registerRecord[25][0] << " | " << left << setw(24)  << registerRecord[25][1] << " | " << left << setw(21)  << registerRecord[25][2] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //extra guest's item name,item status and item price 
        cout << "║  " << setfill(' ')<< left << setw(24)  << registerRecord[26][0] << " | " << left << setw(24)  << registerRecord[26][1] << " | " << left << setw(21)  << registerRecord[26][2] << "║" << endl;
        cout << "╠" << setfill('-') << setw(80) << right << "╣" << endl;

        //total guest's cost
        cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[28][0] << " : " << left << setw(10) << registerRecord[28][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //total guest amount
        cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[27][0] << " : " << left << setw(52) << registerRecord[27][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //cutomize theme title
        cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[29][0] << left << setw(55) << registerRecord[29][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //customize theme's item name,item status and item price title
        cout << "║  " << setfill(' ')<< left << setw(40)  << registerRecord[30][0] << " | " << left << setw(14)  << registerRecord[30][1] << " | " << left << setw(15)  << registerRecord[30][2] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //customize theme's item name,item status and item price
        cout << "║  " << setfill(' ')<< left << setw(40)  << registerRecord[31][0] << " | " << left << setw(14)  << registerRecord[31][1] << " | " << left << setw(15)  << registerRecord[31][2] << "║" << endl;
        cout << "╠" << setfill('-') << setw(80) << right << "╣" << endl;

        //customize theme cost
        cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[32][0] << " : " << left << setw(10) << registerRecord[32][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

    }
    else
    {
        //total guest amount
        cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[27][0] << " : " << left << setw(52) << registerRecord[27][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;
    }

        if(receiptType != "RECEIPT")
        {

            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[38][0]+" <DEPOSIT>" << " : " << left << setw(10) << registerRecord[38][1] << "║" << endl;

            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[42][0] << " : " << left << setw(10) << registerRecord[42][1] << "║" << endl;

            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[41][0] << " : " << left << setw(10) << registerRecord[41][1] << "║" << endl;
             //total bill with tax
            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[36][0] << " : " << left << setw(10) << registerRecord[36][1] << "║" << endl;

            cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[40][0] << " : " << left << setw(10) << registerRecord[40][1] << "║" << endl;
        }
       
       //deposit
       if(receiptType == "RECEIPT")
       {
            //subtotal
            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[33][0] << " : " << left << setw(10) << registerRecord[33][1] << "║" << endl;
            cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

            //bill before tax
            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[34][0] << " : " << left << setw(10) << registerRecord[34][1] << "║" << endl;

            //tax amount
            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[35][0] << " : " << left << setw(10) << registerRecord[35][1] << "║" << endl;

            //total bill with tax
            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[36][0] << " : " << left << setw(10) << registerRecord[36][1] << "║" << endl;
            
            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[37][0] << " : " << left << setw(10) << registerRecord[37][1] << "║" << endl;

            cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[39][0] << " : " << left << setw(10) << registerRecord[39][1] << "║" << endl;
       }
    //bottom line
    cout << "╚" << setfill('=') << setw(80) << right << "╝" << endl;
    cout << setfill(' ');
}

void outputPackage(const vector<vector<string>>& packageList,int index)
{
    cout << "╔════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║                                PACKAGE LIST                                ║" << endl;
    cout << "╠════════════════════════════════════════════════════════════════════════════╣" << endl;
    for (int i =0; i < packageList.size()-1; i++)
    {
        if(packageList[i][0] == "TIME DURATION")
        {
            cout << "║  "<< left << setw(15) << packageList[i][0]<<"║  " << left << setw(56) << packageList[i][1]+" HOURS" << "║" << endl;
            cout << "╠════════════════════════════════════════════════════════════════════════════╣" << endl;
            continue;
        }
        cout << "║  "<< left << setw(15) << packageList[i][0]<<"║  " << left << setw(56) << packageList[i][1] << "║" << endl;
        cout << "╠════════════════════════════════════════════════════════════════════════════╣" << endl;
    }
        cout << "║  "<< left << setw(15) << packageList[packageList.size()-1][0]<<"║  RM" << left << setw(54) << packageList[packageList.size()-1][1] << "║" << endl;
        cout << "╚════════════════════════════════════════════════════════════════════════════╝" << endl;
}

void outputConfirm(const vector<vector<string>>& confirmList)
{
    cout << "╔════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║                              BOOKING CONFIRMATION                              ║" << endl;
    cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
    for (int i =0; i < confirmList.size(); i++)
    {
        cout << "║  "<< left << setw(19) << confirmList[i][0]<<"║  " << left << setw(56) << confirmList[i][1] << "║" << endl;
        cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
    }
        cout << "╚════════════════════════════════════════════════════════════════════════════════╝" << endl;
}

void outputCustomMenu()
{
    vector<CustomPackage<string>> customPackage = getVectorList<CustomPackage<string>>("customPackage.txt");

    cout << "╔══════════════════════════════════════════════╗" << endl;
    cout << "╠══════════════════════════════════════════════╣" << endl;
    cout << "║  ITEM                ║  PRICE                ║" << endl;
    cout << "╠══════════════════════════════════════════════╣" << endl;
    for (int i =0; i < customPackage.size(); i++)
    {
        cout << "║  " << left << setw(3) << to_string(i+1) << "║  " << left << setw(14) << 
        customPackage[i].item<<"║  RM" << left << setw(19) << customPackage[i].itemPrice << "║" << endl;
        cout << "╠══════════════════════════════════════════════╣" << endl;
    }
        cout << "╚══════════════════════════════════════════════╝" << endl;
}

void outputTheme()
{
    vector<Theme<string>> themeList = getVectorList<Theme<string>>("theme.txt");

    cout << "╔══════════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "╠══════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    cout << "║  ITEM                                                              ║  PRICE          ║" << endl;
    cout << "╠══════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    for (int i =0; i < themeList.size(); i++)
    {
        cout << "║  " << left << setw(3) << to_string(i+1) << "║  " << left << setw(60) << 
        themeList[i].themeDescription<<"║  RM" << left << setw(13) << themeList[i].themePrice << "║" << endl;
        cout << "╠══════════════════════════════════════════════════════════════════════════════════════╣" << endl;

    }
    cout << "╚══════════════════════════════════════════════════════════════════════════════════════╝" << endl;
}

void outputCustomCart(string receiptID)
{
    MenuTemplate<string> m;
    vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");
    int customIndex = getIndex<CustomList<string>>(customList , receiptID , [](CustomList<string> cl){return cl.registers.serialNum;});

    cout << "\n\n";

    cout << "╔════════════════════════════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║  GENERAL ADD ON                                  ║  STATUS         ║               PRICE               ║" << endl;
    cout << "╠════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    cout << "║  1  ║  " << left << setw(42) << customList[customIndex].item1 << "║  " << left << setw(15) << customList[customIndex].item1Status << "║  " << left << setw(33) << customList[customIndex].item1Price << "║" <<endl;
    cout << "╠════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    cout << "║  2  ║  " << left << setw(42) << customList[customIndex].item2 << "║  " << left << setw(15) << customList[customIndex].item2Status << "║  " << left << setw(33) << customList[customIndex].item2Price << "║" <<endl;
    cout << "╠════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    cout << "║  3  ║  " << left << setw(42) << customList[customIndex].item3 << "║  " << left << setw(15) << customList[customIndex].item3Status << "║  " << left << setw(33) << customList[customIndex].item3Price << "║" <<endl;
    cout << "╠════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    cout << "║  4  ║  " << left << setw(42) << customList[customIndex].item4 << "║  " << left << setw(15) << customList[customIndex].item4Status << "║  " << left << setw(33) << customList[customIndex].item4Price << "║" <<endl;
    cout << "╚════════════════════════════════════════════════════════════════════════════════════════════════════════╝" << endl;

    cout << "\n";

    cout << "╔════════════════════════════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║  EXTRA GUEST                                     ║  STATUS         ║  AMOUNT         ║  PRICE          ║" << endl;
    cout << "╠════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    cout << "║  1  ║  EXTRA GUEST                               ║  " << left << setw(15) << customList[customIndex].customPackage.extraGuestAmtStatus  
    << "║  " << left << setw(15) << customList[customIndex].customPackage.extraGuestAmt << "║  RM" << left << setw(13) << customList[customIndex].customPackage.extraGuestAmtPrice << "║" <<endl;
    cout << "╚════════════════════════════════════════════════════════════════════════════════════════════════════════╝" << endl;

    cout << "\n";

    cout << "╔════════════════════════════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║  CUSTOMIZE THEME                                 ║  STATUS         ║               PRICE               ║" << endl;
    cout << "╠════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    cout << "║  1  ║  " << left << setw(42) << customList[customIndex].themes.themeDescription << "║  " << left << setw(15) << customList[customIndex].themes.themeStatus << "║  " << left << setw(33) << customList[customIndex].themes.themePrice << "║" <<endl;
    cout << "╚════════════════════════════════════════════════════════════════════════════════════════════════════════╝" << endl;
}

// Print records in groups of 3 mini-tables per row
template <typename T>
void printRecords(const vector<vector<pair<string, T>>>& records, int width = 25, int perRow = 3) {
    // Step 1: filter out all the empty records
    vector<vector<pair<string, T>>> filteredRecords;
    for (const auto& record : records) {
        bool hasContent = false;
        for (const auto& field : record) {
            if (!field.second.empty()) {
                hasContent = true;
                break;
            }
        }
        if (hasContent)
            filteredRecords.push_back(record);
    }

    // Step 2: use filteredRecords to print out only
    for (size_t i = 0; i < filteredRecords.size(); i += perRow) {
        int actualCount = min(perRow, static_cast<int>(filteredRecords.size() - i));

        for (int j = 0; j < actualCount; ++j) {
            cout << "╔" << string(width, '=') << "╗   ";
        }
        cout << endl;

        size_t maxFields = 0;
        for (int j = 0; j < actualCount; ++j)
            maxFields = max(maxFields, filteredRecords[i + j].size());

        // print row by row
        for (size_t line = 0; line < maxFields; ++line) {
            for (int j = 0; j < actualCount; ++j) {
                if (line < filteredRecords[i + j].size()) {
                    const auto& field = filteredRecords[i + j][line];
                    cout << "║" << left << setw(width) << field.first + ": " + field.second << "║   ";
                } else {
                    cout << "║" << setw(width) << " " << "║   ";
                }
            }
            cout << endl;
        }

        for (int j = 0; j < actualCount; ++j) {
            cout << "╚" << string(width, '=') << "╝   ";
        }
        cout << endl << endl;
    }
}

//To match list's elements
template <typename T>
bool usernameExist(const vector<T>& list , const string& compareItem)
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

bool receiptUsernameExist(const vector<Receipt>& list, const string& compareItem)
{
    for(const auto& r : list)
    {
        if(r.registers.login.username == compareItem)
        {
            return true;
        }
    }
    return false;
}

template <typename T, typename F>
string generateSerialNo(const string& type, const vector<T>& list, F getId)

{
    string prefix = type;
    regex pattern("^" + prefix + "(\\d{4})$");
    set<int> usedNumbers;

    for (const auto& item : list) {
        smatch match;
        string id = getId(item);  // 👈 use the lambda to get the ID
        if (regex_match(id, match, pattern)) {
            int num = stoi(match[1]);
            usedNumbers.insert(num);
        }
    }

    int nextNum = 1;
    while (usedNumbers.count(nextNum)) {
        nextNum++;
    }

    stringstream ss;
    ss << prefix << setfill('0') << setw(4) << nextNum;
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

void pressAny() {
    cout << "\nPress any key to continue...";

#ifdef _WIN32
    _getch();  // Wait for any key without needing Enter (Windows only)
#else
    // POSIX system (macOS, Linux)
    termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);         // get current terminal attributes
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);       // disable buffering and echo
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);  // set new attributes

    getchar();  // wait for a single key

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);  // restore original settings
#endif

    cout << endl;
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
void custCustomParty(string name , int userIndex);
void custViewProfile();
void custPayment(string receiptType,int registerIndex, int customIndex,string name);
void custFeedback();
void custCustomPartyOption(string name, int userIndex,string receiptId);
void customPartyCart(string name , int userIndex,string receiptID);
void addRemoveItem(string prefix,int userIndex,int ansIndex,int customIndex);

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

    buddha();

    cout << "\n";

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
            system("clear");
            tq();
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
        getline(cin,confirmDetails);

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
            custCustomParty(name , userIndex);
            status = false;
        }
        else if(ans == "5")
        {
            custViewProfile();
            status = false;
        }
        else if(ans == "6")
        {
            custFeedback();
            status = false;
        }
        else if(ans == "7")
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

void addPackageList(int packageIndex)
{
    vector<Package<string>> packageList = getVectorList <Package<string>> ("packageList.txt");
    vector<vector<string>> packageRecord;

   packageRecord =
    {
        {"PACKAGE TYPE",packageList[packageIndex].packageType},
        {"VENUE",packageList[packageIndex].venue},
        {"TIME DURATION",packageList[packageIndex].timeDuration},
        {"CATERING",packageList[packageIndex].catering},
        {"DECORATION",packageList[packageIndex].decoration},
        {"ENTERTAINMENT",packageList[packageIndex].entertaintment},
        {"ACTIVITIES",packageList[packageIndex].activities},
        {"PARTY GIFT",packageList[packageIndex].partyGift},
        {"CAKE",packageList[packageIndex].cake},
        {"PRICE",packageList[packageIndex].price}
    };

    outputPackage(packageRecord,packageIndex);
}

string addHoursToTime(const string& timeStr, int addHours) {
    int hour, minute;

    // Parse HH:MM
    sscanf(timeStr.c_str(), "%d:%d", &hour, &minute);

    // Add hours and handle wrap-around
    hour = (hour + addHours) % 24;

    // Determine AM or PM for the current 24-hour time
    string period = (hour >= 12) ? "PM" : "AM";

    // Format result as 24-hour with AM/PM
    ostringstream oss;
    oss << setw(2) << setfill('0') << hour << ":"
        << setw(2) << setfill('0') << minute << " " << period;

    return oss.str();
}

//Customer main menu's registration event function
void custRegis(string name , int userIndex)
{
    system("clear");

    bool status = true;
    int row = 0,column =0;
    int packageIndex;
    string confirmPackage;
    string ans;
    string receiptId;

    Registration<string> r;
    Registration<string> newResgister;

    MenuTemplate <string> m;

    m.menuTitle = "REGISTRATION SECTION";

    m.menuTitleTemplate();

    cout << "\n\n";
    
    Package <string> p;
    CustomList<string> newCustom;
    
    vector <LoginDetails> custList = getVectorList<LoginDetails>("customer.txt");
    vector<Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");
    vector<Package<string>> packageList = getVectorList<Package<string>>("packageList.txt");
    vector<vector<string>> packageRecord;
    vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");

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
        cout << "PLEASE ENTER THE EVENT TIME <0 to exit> : ";
        getline(cin , r.startTime);

        if(r.startTime == "0")
        {
            custMainPage(name);
            status = false;
        }

        regex timeFormat("([0-1][0-9]|2[0-3]):[0-5][0-9]");

        if(regex_match(r.startTime,timeFormat))
        {
            r.startTime = timePrefix(r.startTime);
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
        transform(r.birthdayName.begin(),r.birthdayName.end(),r.birthdayName.begin(),::toupper);
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

    m.menuTitle = "SPECIAL REQUEST";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER SPECIAL REQUEST <0 to exit> : ";
        getline(cin,r.specialRequest);

        if(r.specialRequest== "0")
        {
            custMainPage(name);
            status = false;
        }

        if(r.specialRequest.length()>70)
        {
            cout << "PLEASE DON\'T MORE THAN 70 CHARACTERS :)\n"<<endl;
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

    for(int i = 0; i < packageList.size();i++)
    {
        m.menuOptions.push_back(packageList[i].packageType);
    }

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

        int ansInt = stoi(ans);
        packageIndex = ansInt-1;
        if(ansInt <= packageList.size() && ansInt > 0)
        {
            addPackageList(packageIndex);
        }
        else
        {
            cout << "INVALID INPUT... PLEASE NETER VALID OPTION :)" << endl;
            continue;
        }

        cout << "ARE YOU SURE YOU WANT THIS PACKAGE <y/n> ? : ";
        
        getline(cin, confirmPackage);

        if(confirmPackage == "Y" || confirmPackage == "y")
        {
            r.packageChosen = packageList[packageIndex].packageType;
        }
        else if(confirmPackage == "N" || confirmPackage == "n")
        {
            continue;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER <y/n> ONKY :)\n" << endl;
            continue;
        }
        status = false;
    }   

    system("clear");

    vector<vector<string>> confirmRecord;

    int hoursAdd = stoi(packageList[packageIndex].timeDuration);
    string endTime = addHoursToTime(r.startTime,hoursAdd);
    confirmRecord =
    {
        {"CUSTOMER NAME",custList[userIndex].nickname},
        {"EVENT DATE",r.eventDate},
        {"EVENY START TIME",r.startTime},
        {"EVENY END TIME",endTime},
        {"BIRTHDAY THEME",r.birthdayName},
        {"CONTACT NUMBER",r.login.contactNum},
        {"EMAIL",r.login.email},
        {"PACKAGE CHOSEN",packageList[packageIndex].packageType},
        {"PACKAGE PRICE",packageList[packageIndex].price},
        {"GUEST AMOUNT",r.guestAmount},
        {"SPECIAL REQUEST",r.specialRequest}
    };
 
    outputConfirm(confirmRecord);

    status = true;
    string confirmation;
    receiptId = generateSerialNo("RE", registerList, [](const Registration<string>& r) {
    return r.serialNum; 
});


    while(status)
    {
        cout << "ARE YOU SURE ALL THE DETAILS SHOWN ABOVE ARE CORRECT ? <y/n> : ";
        getline(cin , confirmation);
        if(confirmation == "Y" || confirmation == "y")
        {
            newResgister.serialNum = receiptId;
            newResgister.login.username = custList[userIndex].nickname;
            newResgister.eventDate = r.eventDate;
            newResgister.startTime = r.startTime;
            newResgister.endTime = endTime;
            newResgister.birthdayName = r.birthdayName;
            newResgister.login.contactNum = r.login.contactNum;
            newResgister.login.email = r.login.email;
            newResgister.packageChosen = packageList[packageIndex].packageType;
            newResgister.totalCost = packageList[packageIndex].price;
            newResgister.bookingStatus = "PAYMENT PENDING";
            newResgister.guestAmount = r.guestAmount;
            newResgister.specialRequest = r.specialRequest;
            newResgister.customStatus = "INACTIVE";
            registerList.push_back(newResgister);
            saveVectorList(registerList,"registration.txt");
            newCustom.registers.serialNum = receiptId;
            newCustom.item1 = "EMPTY";
            newCustom.item1Price = "0.00";
            newCustom.item1Status = "FALSE";
            newCustom.item2 = "EMPTY";
            newCustom.item2Price = "0.00";
            newCustom.item2Status = "FALSE";
            newCustom.item3 = "EMPTY";
            newCustom.item3Price = "0.00";
            newCustom.item3Status = "FALSE";
            newCustom.item4 = "EMPTY";
            newCustom.item4Price = "0.00";
            newCustom.item4Status = "FALSE";
            newCustom.customPackage.extraGuestAmt = "0";
            newCustom.customPackage.extraGuestAmtPrice = "0.00";
            newCustom.customPackage.extraGuestAmtStatus = "FALSE";
            newCustom.themes.themeDescription = "EMPTY";
            newCustom.themes.themePrice = "0.00";
            newCustom.themes.themeStatus = "FALSE";
            customList.push_back(newCustom);
            saveVectorList(customList,"customList.txt");
            cout << "BOOKING MADE SUCCESSFULLY~~~ :)"<<endl;
            pressAny();
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

    string customAns;
    status = true;

    while(status)
    {
        cout << "DO YOU NEED ANY CUSTOMIZATION ON YOU PARTY ? <y/n> :";
        getline(cin ,customAns);

        if(customAns == "Y" || customAns == "y")
        {   
            custCustomParty(name,userIndex);
            status = false;
        }
        else if(customAns == "N" || customAns == "n")
        {
            cout << "ALRIGHT... PLEASE BACK TO MAIN MENU TO FINISH THE PAYMENT :)"<<endl;
            pressAny();
            custMainPage(name);
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :)\n"<< endl;
            continue;
        }
        status = false;
    }
}

void addReceiptDetails(string receiptType, int index , int customIndex)
{
    Receipt newReceipt;

    vector<Registration<string>> registeredList = getVectorList <Registration<string>>("registration.txt");
    vector<CustomList<string>> customList = getVectorList <CustomList<string>>("customList.txt");
    vector<Receipt> receiptList = getVectorList <Receipt> ("receipt.txt");
    vector<Package<string>> packageList = getVectorList <Package<string>> ("packageList.txt");
    vector<vector<string>> registerRecord;

    double amtBeforeTax, taxAmt, amtAfterTax, totalGeneralAddOn, depositAmt;

    int packageIndex;

    calculateAmount(amtBeforeTax, taxAmt, amtAfterTax,index,customIndex,totalGeneralAddOn, depositAmt);

    for(int i = 0; i < packageList.size() ; i++)
    {
        if(registeredList[index].packageChosen == packageList[i].packageType)
        {
            packageIndex = i;
        }
    }

    string issueDates = getIssueDate();
    stringstream ssTotal,ssTax,ssFinal,ssGeneral,ssDeposit;
    ssTotal << fixed << setprecision(2) << amtBeforeTax;
    ssTax << fixed << setprecision(2) << taxAmt;
    ssFinal << fixed << setprecision(2) << amtAfterTax;
    ssGeneral << fixed << setprecision(2) << totalGeneralAddOn;
    ssDeposit << fixed << setprecision(2) << depositAmt;
    string amtBeforeTaxString = ssTotal.str();
    string taxAmtString = ssTax.str();
    string amtAfterTaxString = ssFinal.str();
    string totalGeneralAddOnString = ssGeneral.str();
    string depositAmtString = ssDeposit.str();
    string receiptId = generateSerialNo("IN", receiptList, [](const Receipt& r) {return r.receiptID;});

    int oriGuest = stoi(registeredList[index].guestAmount);
    int extraGuest = stoi(customList[customIndex].customPackage.extraGuestAmt);
    int totalGuest = oriGuest + extraGuest;
    string totalGuestString = to_string(totalGuest);

    if(!receiptUsernameExist(receiptList , receiptList[index].registers.login.username))
    {
        newReceipt.receiptID = receiptId;
        newReceipt.registers.login.nickname = registeredList[index].login.username;
        newReceipt.paymentStatus = registeredList[index].bookingStatus;
        newReceipt.issueDate = issueDates;
        newReceipt.amtBeforeTax = amtBeforeTaxString;
        newReceipt.taxAmt = taxAmtString;
        newReceipt.amtAfterTax = amtAfterTaxString;
        newReceipt.registers.eventDate = registeredList[index].eventDate;
        newReceipt.registers.startTime = registeredList[index].startTime;
        newReceipt.registers.endTime = registeredList[index].endTime;
        newReceipt.registers.birthdayName = registeredList[index].birthdayName;
        newReceipt.registers.login.contactNum = registeredList[index].login.contactNum;
        newReceipt.registers.login.email = registeredList[index].login.email;
        newReceipt.registers.packageChosen = registeredList[index].packageChosen; 
        newReceipt.package.venue = packageList[packageIndex].venue;
        newReceipt.package.catering = packageList[packageIndex].catering;
        newReceipt.package.decoration = packageList[packageIndex].decoration;
        newReceipt.package.entertaintment = packageList[packageIndex].entertaintment;
        newReceipt.package.partyGift = packageList[packageIndex].partyGift;
        newReceipt.registers.totalCost = registeredList[index].totalCost; 
        newReceipt.registers.guestAmount = registeredList[index].guestAmount;    
        newReceipt.registers.specialRequest = registeredList[index].specialRequest;  
        newReceipt.registers.customStatus = registeredList[index].customStatus;
        newReceipt.custom.item1 = customList[customIndex].item1;  
        newReceipt.custom.item1Price = customList[customIndex].item1Price;  
        newReceipt.custom.item1Status = customList[customIndex].item1Status;  
        newReceipt.custom.item2 = customList[customIndex].item2;  
        newReceipt.custom.item2Price = customList[customIndex].item2Price;  
        newReceipt.custom.item2Status = customList[customIndex].item2Status;  
        newReceipt.custom.item3 = customList[customIndex].item3;  
        newReceipt.custom.item3Price = customList[customIndex].item3Price;  
        newReceipt.custom.item3Status = customList[customIndex].item3Status;  
        newReceipt.custom.item4 = customList[customIndex].item4;  
        newReceipt.custom.item4Price = customList[customIndex].item4Price;  
        newReceipt.custom.item4Status = customList[customIndex].item4Status;  
        newReceipt.totalGeneralAddOn = totalGeneralAddOnString;
        newReceipt.custom.customPackage.extraGuestAmt = customList[customIndex].customPackage.extraGuestAmt;  
        newReceipt.totalGuestAmt = totalGuestString;
        newReceipt.custom.customPackage.extraGuestAmtPrice = customList[customIndex].customPackage.extraGuestAmtPrice;  
        newReceipt.custom.customPackage.extraGuestAmtStatus = customList[customIndex].customPackage.extraGuestAmtStatus;  
        newReceipt.custom.themes.themeDescription = customList[customIndex].themes.themeDescription;
        newReceipt.custom.themes.themePrice = customList[customIndex].themes.themePrice;
        newReceipt.custom.themes.themeStatus = customList[customIndex].themes.themeStatus;
        newReceipt.depositAmt = depositAmtString;
        newReceipt.paymentType = "";
        receiptList.push_back(newReceipt);
        saveVectorList(receiptList,"receipt.txt");
    }
    else 
    {
        receiptList[index].registers.login.nickname = registeredList[index].login.username;
        receiptList[index].paymentStatus = registeredList[index].bookingStatus;
        receiptList[index].amtAfterTax = receiptList[index].amtAfterTax;
        receiptList[index].registers.eventDate = registeredList[index].eventDate;
        receiptList[index].registers.startTime = registeredList[index].startTime;
        receiptList[index].registers.endTime = registeredList[index].endTime;
        receiptList[index].registers.birthdayName = registeredList[index].birthdayName;
        receiptList[index].registers.login.contactNum = registeredList[index].login.contactNum;
        receiptList[index].registers.login.email = registeredList[index].login.email;
        receiptList[index].registers.packageChosen = registeredList[index].packageChosen; 
        receiptList[index].package.venue = packageList[packageIndex].venue;
        receiptList[index].package.catering = packageList[packageIndex].catering;
        receiptList[index].package.decoration = packageList[packageIndex].decoration;
        receiptList[index].package.entertaintment = packageList[packageIndex].entertaintment;
        receiptList[index].package.partyGift = packageList[packageIndex].partyGift;
        receiptList[index].registers.totalCost = registeredList[index].totalCost; 
        receiptList[index].registers.guestAmount = registeredList[index].guestAmount;    
        receiptList[index].registers.specialRequest = registeredList[index].specialRequest;  
        receiptList[index].registers.customStatus = registeredList[index].customStatus;
        receiptList[index].custom.item1 = customList[customIndex].item1;  
        receiptList[index].custom.item1Price = customList[customIndex].item1Price;  
        receiptList[index].custom.item1Status = customList[customIndex].item1Status;  
        receiptList[index].custom.item2 = customList[customIndex].item2;  
        receiptList[index].custom.item2Price = customList[customIndex].item2Price;  
        receiptList[index].custom.item2Status = customList[customIndex].item2Status;  
        receiptList[index].custom.item3 = customList[customIndex].item3;  
        receiptList[index].custom.item3Price = customList[customIndex].item3Price;  
        receiptList[index].custom.item3Status = customList[customIndex].item3Status;  
        receiptList[index].custom.item4 = customList[customIndex].item4;  
        receiptList[index].custom.item4Price = customList[customIndex].item4Price;  
        receiptList[index].custom.item4Status = customList[customIndex].item4Status;  
        receiptList[index].totalGeneralAddOn = totalGeneralAddOnString;
        receiptList[index].custom.customPackage.extraGuestAmt = customList[customIndex].customPackage.extraGuestAmt;  
        receiptList[index].totalGuestAmt = totalGuestString;
        receiptList[index].custom.customPackage.extraGuestAmtPrice = customList[customIndex].customPackage.extraGuestAmtPrice;  
        receiptList[index].custom.customPackage.extraGuestAmtStatus = customList[customIndex].customPackage.extraGuestAmtStatus;  
        receiptList[index].custom.themes.themeDescription = customList[customIndex].themes.themeDescription;
        receiptList[index].custom.themes.themePrice = customList[customIndex].themes.themePrice;
        receiptList[index].custom.themes.themeStatus = customList[customIndex].themes.themeStatus;
        receiptList[index].depositAmt = depositAmtString;
        receiptList[index].paymentType = receiptList[index].paymentType;
        saveVectorList(receiptList,"receipt.txt");
    }

    registerRecord = {
                        {"RECEIPT ID",receiptList[index].receiptID,"",""},
                        {"ISSUE DATE",receiptList[index].issueDate,"",""},
                        {"PAYMENT STATUS",receiptList[index].paymentStatus,"",""},
                        {"CUSTOMER NAME",receiptList[index].registers.login.nickname,"",""},
                        {"EVENT DATE",receiptList[index].registers.eventDate,"",""},
                        {"EVENT START TIME",receiptList[index].registers.startTime,"",""},
                        {"EVENT END TIME",receiptList[index].registers.endTime,"",""},
                        {"PACKAGE CHOSEN",receiptList[index].registers.packageChosen,"",""},
                        {"VENUE",receiptList[index].package.venue,"",""},
                        {"CATERING",receiptList[index].package.catering,"",""},
                        {"DECORATION",receiptList[index].package.decoration,"",""},
                        {"ENTERTAINMENT",receiptList[index].package.entertaintment,"",""},
                        {"PARTY GIFT",receiptList[index].package.partyGift,"",""},
                        {"GUEST AMOUNT",receiptList[index].registers.guestAmount,"",""},
                        {"PRICE (RM)",receiptList[index].registers.totalCost,"",""},
                        {"SPECIAL REQUEST",receiptList[index].registers.specialRequest,"",""},
                        {"CUSTOM STATUS",receiptList[index].registers.customStatus,"",""},
                        {"GENERAL ADD ON","","",""},
                        {"ITEM","AMOUNT","ITEM'S STATUS","PRICE"},
                        {receiptList[index].custom.item1,"-",receiptList[index].custom.item1Status,receiptList[index].custom.item1Price},
                        {receiptList[index].custom.item2,"-",receiptList[index].custom.item2Status,receiptList[index].custom.item2Price},
                        {receiptList[index].custom.item3,"-",receiptList[index].custom.item3Status,receiptList[index].custom.item3Price},
                        {receiptList[index].custom.item4,"-",receiptList[index].custom.item4Status,receiptList[index].custom.item4Price},
                        {"PRICE (RM)",receiptList[index].totalGeneralAddOn,"",""},
                        {"EXTRA GUEST","","",""},
                        {"AMOUNT","STATUS","PRICE",""},
                        {receiptList[index].custom.customPackage.extraGuestAmt,receiptList[index].custom.customPackage.extraGuestAmtStatus,receiptList[index].custom.customPackage.extraGuestAmtPrice,""},
                        {"TOTAL GUEST",receiptList[index].totalGuestAmt,"",""},
                        {"PRICE (RM)",receiptList[index].custom.customPackage.extraGuestAmtPrice,"",""},
                        {"CUSTOMIZE THEME","","",""},
                        {"ITEM","STATUS","PRICE",""},
                        {receiptList[index].custom.themes.themeDescription,receiptList[index].custom.themes.themeStatus,receiptList[index].custom.themes.themePrice,""},
                        {"PRICE (RM)",receiptList[index].custom.themes.themePrice,"",""},
                        {"SUBTOTAL (RM)",receiptList[index].amtBeforeTax,"",""},
                        {"AMOUNT BEFORE TAX (RM)",receiptList[index].amtBeforeTax,"",""},
                        {"TAX (6 PERCENT) (RM)",receiptList[index].taxAmt,"",""},
                        {"TOTAL BILL (AFTER TAX) (RM)",receiptList[index].amtAfterTax,"",""},
                        {"DEPOSIT AMOUNT (20 PERCENT OF TOTAL BILL) (RM)",receiptList[index].depositAmt,"",""},
                        {"PAYMENT TYPE",receiptList[index].paymentType,"",""},
                        //deposit
                        {"AMOUNT NEED TO PAY (RM)",receiptList[index].depositAmt,"",""},
                        //full payment
                        {"AMOUNT NEED TO PAY (RM)",receiptList[index].amtAfterTax,"",""},
                        //deduct dposit
                        {"(-) DEPOSIT AMOUNT (RM)",receiptList[index].depositAmt,"",""},
                        {"ORIGINAL AMOUNT (RM)",amtAfterTaxString,"",""}
                    };


    printReceipt(registerRecord,index,receiptType);
}

void cancelAlert(string name, int registerIndex)
{
    bool status = true;
    string ans;

    vector<Registration<string>> registeredList = getVectorList <Registration<string>>("registration.txt");
    vector<CustomList<string>> customList = getVectorList <CustomList<string>> ("customList.txt");
    vector<Receipt> receiptList = getVectorList <Receipt> ("receipt.txt");

    cout << "* * * * * * * * * * * * WARNING * * * * * * * * * * * *" << endl;
    cout << "*                                                     *" << endl;
    cout << "*  ARE YOU SURE YOU WANT TO CANCEL YOUR BOOKING ????  *" << endl;
    cout << "*        YOU WILL LOST YOU DEPOSIT MONEY !!!          *" << endl;
    cout << "*                                                     *" << endl;
    cout << "* * * * * * * * * * * * WARNING * * * * * * * * * * * *\n" << endl;

    while(status)
    {
        cout << "ARE UYOU SURE YOU WANT TO CANCEL YOU BOOKING ? <y/n>" ;
        getline(cin,ans);

        if(ans == "N" || ans == "n")
        {
            custMainPage(name);
            cout << "CANCEL BOOKING UNSUCCESSFUL......"<< endl;
            pressAny();
            status = false;
        }
        else if(ans == "Y" || ans == "y")
        {
            cout << "registeredList size: " << registeredList.size() << endl;
cout << "receiptList size: " << receiptList.size() << endl;

            cout << "YOU HAVE CANCELED SUCCESSFULLY....."<<endl;
            cout << "YOU HAVE CANCELED YOUR <" << registeredList[registerIndex].serialNum << "> BOOKING AND LOST YOUR RM" << receiptList[registerIndex].depositAmt << " :)"<<endl;
            pressAny();
            registeredList.erase(registeredList.begin()+registerIndex);
            receiptList.erase(receiptList.begin()+registerIndex);
            saveVectorList(registeredList,"registration.txt");
            saveVectorList(receiptList,"receipt.txt");
            custMainPage(name);
            status = false;
        }
        status = false;
    }
}

//Customer view booking function
void custViewBooking(string name)
{
    bool status = true,innerStatus = true;
    int registerIndex, customIndex;
    string ans,payOrCancel;

    system("clear");

    MenuTemplate <string> m;

    vector<vector<pair<string,string>>> bookingRecords;
    vector<vector<string>> registerRecord;
    vector<string> headers = {"RECEIPT ID","USERNAME","STATUS","CUSTOMIZE"};
    vector<Registration<string>> registeredList = getVectorList <Registration<string>>("registration.txt");
    vector<CustomList<string>> customList = getVectorList <CustomList<string>> ("customList.txt");

    m.menuTitle = "VIEW BOOKING SECTION";
    m.menuTitleTemplate();

    cout << "\n";

    for(int i = 0 ; i < registeredList.size() ; i++)
    {
        string reId;
        string userName;
        string status;
        string customStatus;
        if(name == registeredList[i].login.username)
        {
            reId = registeredList[i].serialNum;
            userName = registeredList[i].login.username;;
            status = registeredList[i].bookingStatus;
            customStatus = registeredList[i].customStatus;
        }

        bookingRecords.push_back
        (
            {   
                {headers[0],reId},
                {headers[1],userName},
                {headers[2],status},
                {headers[3],customStatus}
            }
        );
    }

    if(registeredList.size() == 0)
    {
        cout << "\nYOU HAVEN\'T MAKE ANY BOOKING YET :)\n";
        pressAny();
        custMainPage(name);
    }

    printRecords(bookingRecords);
    cout << "THESE ARE THE CURRENT BOOKINGS YOU HAVE MADE :)\n"<<endl;

    while(status)
    {
        cout << "PLEASE CHOOSE ANY BOOKING TO VIEW THE DETAILS <enter RECEIPT ID> <0 to exit> : ";
        getline(cin , ans);

        registerIndex = getIndex<Registration<string>>(registeredList, ans , [](Registration<string>r){return r.serialNum;});
        customIndex = getIndex<CustomList<string>>(customList, ans , [](CustomList<string> c ){return c.registers.serialNum;});

        cout << "INDEX : " << registerIndex << endl;

        string compareAns = ans;
        transform(compareAns.begin(),compareAns.end(),compareAns.begin(),::toupper);

        if(ans == "0")
        {
            custMainPage(name);
            status = false;
        }

        if(compareAns == registeredList[registerIndex].serialNum)
        {
            addReceiptDetails("RECEIPT",registerIndex,customIndex);
            if(registeredList[registerIndex].bookingStatus == "PAYMENT PENDING")
            {
                custPayment("RECEIPT",registerIndex,customIndex,name);
                status = false;
            }
            else if(registeredList[registerIndex].bookingStatus == "DEPOSIT DONE")
            {
                while(innerStatus)
                {
                    cout << "DO YOU WANT TO PAY THE FULL PAYMENT OR CANCEL THE BOOKING ? <p = PAY> <c = CANCEL> : ";
                    getline(cin,payOrCancel);

                    if(payOrCancel == "p" || payOrCancel == "P")
                    {
                        innerStatus = false;
                    }
                    else if(payOrCancel == "C" || payOrCancel == "c")
                    {
                        cancelAlert(name,registerIndex);
                        innerStatus = false;
                    }
                    else
                    {
                        cout << "PLEASE ENTER A VALID OPTION :)\n"<<endl;
                        continue;
                    }
                    innerStatus = false;
                }
                
                custPayment("INVOICE",registerIndex,customIndex,name);
                status = false;
            }
            else if(registeredList[registerIndex].bookingStatus == "PAYMENT DONE")
            {
                cout << "\nTHANKS FOR TRUSTING US :)\n";
                pressAny();
                custMainPage(name);
                status = false;
            }
        }
        else
        {
            cout << "PLEASE ENTER A VALID RECEIPT ID TO VIEW BOOKING :)\n"<<endl;
            continue;
        }
        status = false;
    }
}   

//Customer view campaign promotion function
void custViewCampaign()
{

}

vector<CustomPackage<string>> defaultCustomPackage()
{
    vector<CustomPackage<string>> customPackage = getVectorList<CustomPackage<string>>("customPackage.txt");

    for(int i = 0 ; i < customPackage.size(); i++)
    {
        customPackage[i].itemStatus = "FALSE";
    }

    return customPackage;
}

void removeCart(string name,string category,int userIndex,int customIndex,string receiptID)
{
    int ansIndex;
    bool status = true;
    string ans,chosenItem;

    vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customPackage.txt");

    cout << "YOU HAVE CHOSE <" << category << "> CATEGORY TO REMOVE ITEM\n" << endl;


    while(status)
    {
        if(category == "GENERAL ADD ON")
        {
            cout << "PLEASE ENTER WHICH ITEM TO REMOVE <enter a number> <0 to exit> : ";
            getline(cin,ans);

            ansIndex = stoi(ans);

            if(ans == "0")
            {
                customPartyCart(name,userIndex,receiptID);
                status = false;
            }
            if(ansIndex < 1 || ansIndex > customList.size())
            {
                cout << "PLEASE ENTER A POSITIVE NUMBER BETWEEN <1 to " << customList.size() << "> :)\n"<<endl;
                continue;
            }
            else
            {
                addRemoveItem("REMOVE",userIndex,ansIndex,customIndex);
                pressAny();
                custCustomPartyOption(name,userIndex,receiptID);
                status = false;
            }
        }
        else
        {
            cout << "PLEASE CONFIRM WHETHER YOU REALLY WANT TO REMOVE <y/n> <0 to exit> : ";
            getline(cin,chosenItem);
            if(chosenItem == "0")
            {

                customPartyCart(name,userIndex,receiptID);
                status = false;
            }

            if(chosenItem == "Y" || chosenItem == "y")
            {
                addRemoveItem("REMOVE",userIndex,ansIndex,customIndex);
                cout << "YOU HAVE SUCCESSFULLY REMOVED <" <<  category <<"> :)\n" <<endl;
                pressAny();
                custCustomPartyOption(name,userIndex,receiptID);
                status = false;
            }
            else if(chosenItem == "N" || chosenItem == "n")
            {
                customPartyCart(name,userIndex,receiptID);
                status = false;
            }
        }
        status = false;
    }
}       

void customPartyCart(string name , int userIndex,string receiptID)
{
    bool status = true;
    bool innerstatus = true;
    string ans,removeItem;
    MenuTemplate <string> m;

    system("clear");

    m.menuTitle = "CUSTOMIZE ITEM'S CART";
    m.menuTitleTemplate();

    vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");
    vector<Theme<string>> themeList = getVectorList<Theme<string>>("theme.txt");
    vector<Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");

    int customIndex = getIndex<CustomList<string>>(customList , receiptID , [](CustomList<string> cl){return cl.registers.serialNum;});

    if(customList[customIndex].customPackage.extraGuestAmtStatus == "FALSE" && customList[customIndex].item1Status == "FALSE" &&
     customList[customIndex].item2Status == "FALSE" && customList[customIndex].item3Status == "FALSE" && 
     customList[customIndex].item4Status == "FALSE" && customList[customIndex].themes.themeStatus == "FALSE")
     {
        cout << "YOUR CUSTOMIZE ITEM'S CART IS EMPTY PLEASE ADD SOME ITEM IN IT :)\n"<<endl;
        registerList[userIndex].customStatus = "INACTIVE";
        saveVectorList(registerList,"registration.txt");
        pressAny();
        custCustomPartyOption(name,userIndex,receiptID);
     }

    outputCustomCart(receiptID);
    cout << "PLEASE CHECK BEFORE PROCEED YOU BOOKING :)\n"<< endl;

    while(status)
    {
        cout << "DO YOU HAVE ANYTHING WANT TO REMOVE ? <y/n> : ";
        getline(cin,ans);

        if(ans == "Y" || ans == "y")
        {
            while(innerstatus)
            {
                cout << "PLEASE CHOOSE THE CATEGORY <g = GENERAL ADD ON / e = EXTRA GUEST / t = CUSTOMIZE THEME> : ";
                getline(cin,removeItem);

                if(removeItem == "E" || removeItem == "e")
                {   
                    if(customList[customIndex].customPackage.extraGuestAmtStatus == "FALSE")
                    {
                        cout << "YOUR EXTRA GUEST SECTION HAVE ALREADY EMPTY :)\n" <<endl;
                        continue;
                    }
                    removeCart(name,"EXTRA GUEST",userIndex,customIndex,receiptID);
                    innerstatus = false;
                }
                else if(removeItem == "G" || removeItem == "g")
                {   
                    if(customList[customIndex].item1Status == "FALSE" && customList[customIndex].item2Status == "FALSE" && 
                    customList[customIndex].item3Status == "FALSE" && customList[customIndex].item4Status == "FALSE")
                    {
                        cout << "YOUR GENERAL ADD ON SECTION HAVE ALREADY EMPTY :)\n" <<endl;
                        continue;
                    }
                    removeCart(name,"GENERAL ADD ON",userIndex,customIndex,receiptID);
                    innerstatus = false;
                }
                else if(removeItem == "T" || removeItem == "t")
                {
                    if(customList[customIndex].themes.themeStatus == "FALSE")
                    {
                        cout << "YOUR CUSTOMIZE THEME SECTION HAVE ALREADY EMPTY :)\n" <<endl;
                        continue;
                    }
                    removeCart(name,"CUSTOMIZE THEME",userIndex,customIndex,receiptID);
                    innerstatus = false;
                }
                else
                {
                    cout << "INVALID INPUT... PLASE TRY AGAIN :)\n" << endl;
                    continue;
                }
                innerstatus = false;
            }
        }
        else if(ans == "N" || ans == "n")
        {
            custCustomPartyOption(name,userIndex,receiptID);
            status = false;
        } 
        else
        {
            cout << "INVALID INPUT.. PLEASE ENTER AGAIN :)\n"<<endl;
            continue;
        }
    status = false;
    }
}

void addRemoveItem(string prefix,int userIndex,int ansIndex,int customIndex)
{
        vector<CustomPackage<string>> customPackage = getVectorList<CustomPackage<string>>("customPackage.txt");
        vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");
        vector<Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");
        

    if(prefix == "ADD")
    {
        // Find the first empty slot and fill it
        if(customList[customIndex].item1 == "EMPTY")
        {
            customList[customIndex].item1 = customPackage[ansIndex].item;
            customList[customIndex].item1Price = customPackage[ansIndex].itemPrice;
            customList[customIndex].item1Status = "TRUE";
        }
        else if(customList[customIndex].item2 == "EMPTY")
        {
            customList[customIndex].item2 = customPackage[ansIndex].item;
            customList[customIndex].item2Price = customPackage[ansIndex].itemPrice;
            customList[customIndex].item2Status = "TRUE";
        }
        else if(customList[customIndex].item3 == "EMPTY")
        {
            customList[customIndex].item3 = customPackage[ansIndex].item;
            customList[customIndex].item3Price = customPackage[ansIndex].itemPrice;
            customList[customIndex].item3Status = "TRUE";
        }
        else if(customList[customIndex].item4 == "EMPTY")
        {
            customList[customIndex].item4 = customPackage[ansIndex].item;
            customList[customIndex].item4Price = customPackage[ansIndex].itemPrice;
            customList[customIndex].item4Status = "TRUE";
        }

                // Mark the package item as used
        customPackage[ansIndex].itemStatus = "TRUE";
        registerList[userIndex].customStatus = "ACTIVE";
        saveVectorList(customList, "customList.txt");
        saveVectorList(customPackage, "customPackage.txt");
        saveVectorList(registerList, "registration.txt");
    }
    else if(prefix == "REMOVE")
    {
        if(ansIndex == 1 && customList[customIndex].item1Status == "TRUE")
        {
            cout << "YOU HAVE SUCCESSFULLY REMOVED <" <<  customList[customIndex].item1 <<"> :)" << endl;
            customList[customIndex].item1 = "EMPTY";
            customList[customIndex].item1Price = "0.00";
            customList[customIndex].item1Status = "FALSE";
        }
        else if(ansIndex == 2 && customList[customIndex].item2Status == "TRUE")
        {
            cout << "YOU HAVE SUCCESSFULLY REMOVED <" <<  customList[customIndex].item2 <<"> :)" << endl;
            customList[customIndex].item2 = "EMPTY";
            customList[customIndex].item2Price = "0.00";
            customList[customIndex].item2Status = "FALSE";
        }
        else if(ansIndex == 3 && customList[customIndex].item3Status == "TRUE")
        {
            cout << "YOU HAVE SUCCESSFULLY REMOVED <" <<  customList[customIndex].item3 <<"> :)" << endl;
            customList[customIndex].item3 = "EMPTY";
            customList[customIndex].item3Price = "0.00";
            customList[customIndex].item3Status = "FALSE";
        }
        else if(ansIndex == 4 && customList[customIndex].item4Status == "TRUE")
        {
            cout << "YOU HAVE SUCCESSFULLY REMOVED <" <<  customList[customIndex].item4 <<"> :)" << endl;
            customList[customIndex].item4 = "EMPTY";
            customList[customIndex].item4Price = "0.00";
            customList[customIndex].item4Status = "FALSE";
        }
        else if(customList[customIndex].customPackage.extraGuestAmtStatus == "TRUE")
        {
            customList[customIndex].customPackage.extraGuestAmt = "0";
            customList[customIndex].customPackage.extraGuestAmtPrice = "0.00";
            customList[customIndex].customPackage.extraGuestAmtStatus = "FALSE";
        }
        else if(customList[customIndex].themes.themeStatus == "TRUE")
        {
            customList[customIndex].themes.themeDescription = "EMPTY";
            customList[customIndex].themes.themePrice = "0.00";
            customList[customIndex].themes.themeStatus = "FALSE";
        }
        else
        {
            registerList[userIndex].customStatus = "INACTIVE";
            cout << "YOU GOT NOTHING TO REMOVE ALREADY :)\n" << endl;
        }
        saveVectorList(customList, "customList.txt");
        saveVectorList(customPackage, "customPackage.txt");
        saveVectorList(registerList, "registration.txt");
    }
}

void customPartyGeneral(string name, int userIndexs, string receiptID)
{
    system("clear");

    MenuTemplate <string> m;
    CustomList<string> newCustom;

    bool status = true;
    bool innerStatus = true;

    vector<CustomPackage<string>> customPackage = getVectorList<CustomPackage<string>>("customPackage.txt");
    vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");
    vector<Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");

    int customIndex = getIndex<CustomList<string>>(customList , receiptID , [](CustomList<string> cl){return cl.registers.serialNum;});
    int userIndex = getIndex<Registration<string>>(registerList , receiptID , [](Registration<string> r){return r.serialNum;});

    m.menuTitle = "GENERAL ADD ON SECTION";
    m.menuTitleTemplate();


    cout << "\n";

        if(customList[customIndex].item1 == "MAGICIAN" || customList[customIndex].item2 == "MAGICIAN" || customList[customIndex].item3 == "MAGICIAN" || customList[customIndex].item4 == "MAGICIAN")
        {
            for(int i = 0 ; i < customPackage.size(); i++)
            {
                if(customPackage[i].item == "MAGICIAN")
                {
                    customPackage[i].itemStatus = "TRUE";
                }
            }
            saveVectorList(customPackage,"customPackage.txt");
        }
        else if(customList[customIndex].item1 == "CLOWN" || customList[customIndex].item2 == "CLOWN" || customList[customIndex].item3 == "CLOWN" || customList[customIndex].item4 == "CLOWN")
        {
            for(int i = 0 ; i < customPackage.size(); i++)
            {
                if(customPackage[i].item == "CLOWN")
                {
                    customPackage[i].itemStatus = "TRUE";
                }
            }
            saveVectorList(customPackage,"customPackage.txt");
        }
        else
        {
            customPackage = defaultCustomPackage();
            saveVectorList(customPackage,"customPackage.txt");
        }

    string ans;
    
    outputCustomMenu();

    while(status)
    {
        cout << "PLEASE ENTER ANY ITEM THAT YOU WANT TO ADD ON <enter number> <0 to exit> : ";
        getline(cin , ans);

        if(ans == "0")
        {
            custCustomPartyOption(name,userIndexs,receiptID);
            status = false;
        }

        if (ans.empty()) 
        {
            cout << "PLEASE ENTER A VALID OPTION :)\n" << endl;
            continue;
        }

        int ansInt = stoi(ans);
        int ansIndex = ansInt - 1;

        if(ansInt < 1 || ansInt > customPackage.size())
        {
            cout << "PLEASE ENTER A POSITIVE NUMBER BETWEEN <1 to " << customPackage.size() << "> :)\n"<<endl;
            continue;
        }
        
        if(customPackage[ansIndex].item == "EXTRA GUEST")
        {
            innerStatus = true;
            while(innerStatus)
            {
                string addOn;
                cout << "HOW MANY GUEST WOULD YOU LIKE TO ADD ? <enter a number> : ";
                getline(cin,addOn);
                int addOnInt = stoi(addOn);
                int guestAmount = stoi(customList[customIndex].customPackage.extraGuestAmt);
                int totalAmount = guestAmount + addOnInt;
                double guestAmtprice = totalAmount * stod(customPackage[ansIndex].itemPrice);
                stringstream ss;
                ss << fixed << setprecision(2) << guestAmtprice;
                string result = ss.str();
                string totalAmtStr = to_string(totalAmount);
                customList[customIndex].customPackage.extraGuestAmt = totalAmtStr;
                customList[customIndex].customPackage.extraGuestAmtPrice = result;
                customList[customIndex].customPackage.extraGuestAmtStatus = "TRUE";
                customPackage[ansIndex].itemStatus = "TRUE";
                registerList[userIndex].customStatus = "ACTIVE";
                innerStatus = false;
            }
            saveVectorList(customList,"customList.txt");
            saveVectorList(customPackage,"customPackage.txt");
            saveVectorList(registerList,"registration.txt");

            innerStatus = true;

            while(innerStatus)
            {
                cout << "WOULD YOU LIKE TO ADD ON ANYTHING ? <y/n> : ";
                getline(cin,ans);

                if(ans == "Y" || ans == "y")
                {
                    customPartyGeneral(name,userIndex,receiptID);
                    innerStatus = false;
                }   
                else if(ans == "N" || ans == "n")
                {
                    custCustomPartyOption(name,userIndex,receiptID);
                    innerStatus = false;
                }
                else
                {
                    cout << "INVALID INPUT../ PLEASE ENTER AGAIN :)\n" << endl;
                    continue;
                }
                innerStatus = false;
            }
        }

        if(customPackage[ansIndex].item == "MAGICIAN" && customPackage[ansIndex].itemStatus == "TRUE")
        {
            cout << "YOU HAVE CHOSE <" << customPackage[ansIndex].item << "> ALREADY :)"<< endl;
            cout << " PLEASE CHOOSE ANOTHER ONE :)"<< endl;
            continue;
        }
        else if(customPackage[ansIndex].item == "CLOWN" && customPackage[ansIndex].itemStatus == "TRUE")
        {
            cout << "YOU HAVE CHOSE <" << customPackage[ansIndex].item << "> ALREADY :)"<< endl;
            cout << " PLEASE CHOOSE ANOTHER ONE :)"<< endl;
            continue;
        }
        
        if(customPackage[ansIndex].itemStatus == "FALSE")
        {
            cout << "YOU HAVE CHOSE <"<< customPackage[ansIndex].item << "> TO ADD ON." << endl;
            if(customList[customIndex].item1=="EMPTY")
            {
                addRemoveItem("ADD",userIndex,ansIndex,customIndex);
                status = false;
            }
            else if(customList[customIndex].item2=="EMPTY")
            {
                addRemoveItem("ADD",userIndex,ansIndex,customIndex);
                status = false;
            }
            else if(customList[customIndex].item3=="EMPTY")
            {
                addRemoveItem("ADD",userIndex,ansIndex,customIndex);
                status = false;
            }
            else if(customList[customIndex].item4=="EMPTY")
            {
                addRemoveItem("ADD",userIndex,ansIndex,customIndex);
                status = false;
            }
            else
            {
                cout << "YOU GOT NO SPACE AT ALL :)" << endl;
                cout << "BACK TO MAIN MENU TO REMOVE CUSTOMIZE ITEM :)" << endl;
                pressAny();
                custCustomParty(name,userIndex);
                status = false;
            }
            status = false;
        }

        status = true;
            
        while(status)
        {
            cout << "WOULD YOU LIKE TO ADD ON ANYTHING ? <y/n> : ";
            getline(cin,ans);

            if(ans == "Y" || ans == "y")
            {
                customPartyGeneral(name,userIndex,receiptID);
                status = false;
            }   
            else if(ans == "N" || ans == "n")
            {
                custCustomPartyOption(name,userIndex,receiptID);
                status = false;
            }
            else
            {
                cout << "INVALID INPUT../ PLEASE ENTER AGAIN :)\n" << endl;
                continue;
            }
            status = false;
        }
        status = false;
    }
}

void customPartyTheme(string name , int userIndex,string receiptID)
{
    system("clear");

    MenuTemplate <string> m;

    bool status = true;
    bool innerStatus = true;
    string ans,confirmAns;

    vector<Theme<string>> themeList = getVectorList<Theme<string>>("theme.txt");
    vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");
    vector<Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");

    int customIndex = getIndex<CustomList<string>>(customList , receiptID , [](CustomList<string> cl){return cl.registers.serialNum;});

    m.menuTitle = "CUSTOMIZE THEME SECTION";
    m.menuTitleTemplate();

    cout << "\n\n";
    
    outputTheme();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY CUSTOM THEME SHOWN ABOVE <enter number> <0 to exit> : ";
        getline(cin,ans);

        int ansIndex = stoi(ans) - 1;

        if(ans == "0")
        {
            custCustomParty(name,userIndex);
            status = false;
        }

        if(ansIndex < themeList.size() && ansIndex >= 0)
        {
            cout << "YOU HAVE CHOSE <" << themeList[ansIndex].themeDescription << "> :)"<< endl;
            customList[customIndex].themes.themeDescription = themeList[ansIndex].themeDescription;
            customList[customIndex].themes.themePrice = themeList[ansIndex].themePrice;
            customList[customIndex].themes.themeStatus = "TRUE";
            saveVectorList(customList,"customList.txt");

            while(innerStatus)
            {
                cout << "ARE YOU SURE YOU WANT TO APPLY <" << themeList[ansIndex].themeDescription << "> ? <y/n> :";
                getline(cin,confirmAns);

                if(confirmAns == "N" || confirmAns =="n")
                {
                    customPartyTheme(name,userIndex,receiptID);
                    customList[customIndex].themes.themeDescription = "EMPTY";
                    customList[customIndex].themes.themePrice = "0.00";
                    customList[customIndex].themes.themeStatus = "FALSE";
                    saveVectorList(customList,"customList.txt");

                    innerStatus = false;
                }
                else if(confirmAns == "Y" || confirmAns == "y")
                {
                    registerList[userIndex].customStatus = "ACTIVE";
                    saveVectorList(registerList,"registration.txt");
                    pressAny();
                    custCustomPartyOption(name,userIndex,receiptID);
                    innerStatus = false;
                }
                else
                {
                    cout << "INVALID INPUT... PLEASE ENTER AGAIN\n"<<endl;
                    continue;
                }
                innerStatus = false;
            }
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER AGAIN\n"<<endl;
            continue;
        }
        status = false;
    }
}

void custCustomPartyOption(string name, int userIndex,string receiptId)
{
    system("clear");
    MenuTemplate <string> m;

    m.menuTitle = "CUSTOMIZE SECTION";
    m.menuTitleTemplate();
    cout << "\n";

    bool status = true;
    string ans;
    string receiptIdUpper = receiptId;
    transform(receiptIdUpper.begin(),receiptIdUpper.end(),receiptIdUpper.begin(),::toupper);

    m.menuTitle = "MAIN MENU";
    m.menuOptions.push_back("GENERAL ADD ON");
    m.menuOptions.push_back("CUSTOMIZE THEME");
    m.menuOptions.push_back("VIEW CUSTOM PARTY CART");

    m.menuTemplate();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY OPTION <0 to exit> : ";
        getline(cin , ans);

        if(ans == "0")
        {
            custMainPage(name);
            status = false;
        }

        if(ans == "1")
        {
            customPartyGeneral(name,userIndex,receiptIdUpper);
            status = false;
        }
        else if(ans == "2")
        {
            customPartyTheme(name,userIndex,receiptIdUpper);
            status = false;
        }
        else if(ans == "3")
        {
            customPartyCart(name,userIndex,receiptIdUpper);
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :)\n"<<endl;
            continue;
        }
        
        status = false;
    }
}

//Customer customize party function
void custCustomParty(string name , int userIndex)
{
    system("clear");

    bool status = true;
    string ans;
    int registerIndex;

    MenuTemplate <string> m;

    vector<vector<pair<string,string>>> bookingRecords;
    vector<string> headers = {"RECEIPT ID","USERNAME","STATUS","CUSTOMIZE"};
    vector<Registration<string>> registeredList = getVectorList <Registration<string>>("registration.txt");

    m.menuTitle = "CUSTOMIZE PARTY SECTION";
    m.menuTitleTemplate();

    for(int i = 0 ; i < registeredList.size() ; i++)
    {
        string reId;
        string userName;
        string status;
        string customStatus;
        if(name == registeredList[i].login.username)
        {
            reId = registeredList[i].serialNum;
            userName = registeredList[i].login.username;;
            status = registeredList[i].bookingStatus;
            customStatus = registeredList[i].customStatus;
        }

        bookingRecords.push_back
        (
            {   
                {headers[0],reId},
                {headers[1],userName},
                {headers[2],status},
                {headers[3],customStatus}
            }
        );
    }

    if(registeredList.size() == 0)
    {
        cout << "\nYOU HAVEN\'T MAKE ANY BOOKING YET :)\n";
        pressAny();
        custMainPage(name);
    }

    printRecords(bookingRecords);

    string receiptId;
    string receiptIdUpper;

    while(status)
    {
        cout << "PLEASE CHOOSE ANY RECORD TO CUSTOMIZE <enter receipt id> <0 to exit> :";
        getline(cin,receiptId);

        receiptIdUpper = receiptId;
        transform(receiptIdUpper.begin(),receiptIdUpper.end(),receiptIdUpper.begin(),::toupper);

        registerIndex = getIndex<Registration<string>>(registeredList, receiptIdUpper , [](Registration<string>r){return r.serialNum;});

        if(receiptId == "0")
        {
            custMainPage(name);
            status = false;
        }

        if(registeredList[registerIndex].bookingStatus == "DEPOSIT DONE")
        {
            cout << "YOU HAVE PAYED THE DEPOSIT,WHICH MEANS YOU CAN\'T CUSTOMIZE YOUR BDAY PARTY ALREADY :)\n"<<endl;
            continue;
        }
        else if(registeredList[registerIndex].bookingStatus == "PAYMENT DONE")
        {
            cout << "YOU HAVE MAKE THE FULL PAYMENT,WHICH MEANS YOU CAN\'T CUSTOMIZE YOUR BDAY PARTY ALREADY :)\n"<<endl;
            continue;
        }

        if(receiptIdUpper == registeredList[registerIndex].serialNum)
        {
            custCustomPartyOption(name,userIndex,receiptId);
            status = false;
        }
        else
        {
            cout << "PLEASE ENTER A VALID RECIPT ID TO PROCEED :)\n"<<endl;
            continue;
        }
        status = false;
    }
}

//Customer view profile function
void custViewProfile()
{

}

//Customer make payment function
void custPayment(string receiptType,int registerIndex, int customIndex,string name)
{
    system("clear");

    bool status = true;
    string payType;
    double newAmount,totalBill,deposit;

    vector<Registration<string>> registerList = getVectorList <Registration<string>>("registration.txt");
    vector<CustomList<string>> customList = getVectorList <CustomList<string>> ("customList.txt");
    vector<Receipt> receiptList = getVectorList <Receipt> ("receipt.txt");

    totalBill = stod(receiptList[registerIndex].amtAfterTax);
    deposit = stod(receiptList[registerIndex].depositAmt);
    newAmount = totalBill - deposit;

    stringstream ssTotal;
    ssTotal << fixed << setprecision(2) << newAmount;

    string newTotalString = ssTotal.str();

    MenuTemplate <string> m;
    m.menuTitle = "PAYMENT SECTION";
    m.menuTitleTemplate();

    addReceiptDetails(receiptType,registerIndex,customIndex);

    cout << "\n";
    m.menuOptions.clear();
    cout << setfill(' ');
    m.menuTitle = "SELECT PAYMENT TYPE";
    m.menuOptions.push_back("TOUCH N GO");
    m.menuOptions.push_back("CREDIT CARD");
    m.menuOptions.push_back("E-BANKING");

    m.menuTemplate();

    cout << "\n";

    while(status)
    {   
        if(receiptType == "RECEIPT")
        {   
            cout << "PLEASE PAY THE DEPOSIT AMOUNT TO BOOK THE BIRTHDAY EVENT :)\n"<< endl;
        }
        else if(receiptType == "INVOICE")
        {
            cout << "PLEASE MAKE FULL PAYMENT FOR THE BIRTHDAY EVENT :)\n"<< endl;
        }

        cout << "PLEASE SELECT ANY PAYMENT TYPE TO PROCEED THE PAYMENT <0 to exit> : ";
        getline(cin,payType);

        if(payType == "0")
        {
            custViewBooking(name);
            status = false;
        }

        if(payType == "1")
        {
            receiptList[registerIndex].paymentType = "TOUCH N GO";
            if(receiptType == "RECEIPT")
            {   
                receiptList[registerIndex].amtAfterTax = newTotalString;
                receiptList[registerIndex].paymentStatus = "DEPOSIT DONE";
                registerList[registerIndex].bookingStatus = "DEPOSIT DONE";
                cout << "THANKS FOR YOUR DEPOSIT :)\n"<< endl;
                saveVectorList(receiptList,"receipt.txt");
                saveVectorList(registerList,"registration.txt");
            }
            else if(receiptType == "INVOICE")
            {
                receiptList[registerIndex].paymentStatus = "PAYMENT DONE";
                registerList[registerIndex].bookingStatus = "PAYMENT DONE";
                cout << "THANKS FOR MAKING THE FULL PAYMENT :)\n"<< endl;
                saveVectorList(receiptList,"receipt.txt");
                saveVectorList(registerList,"registration.txt");
            }
            pressAny();
            custMainPage(name);
            status = false;
        }
        else if(payType == "2")
        {
            receiptList[registerIndex].paymentType = "CREDIT CARD";
            if(receiptType == "RECEIPT")
            {   
                receiptList[registerIndex].amtAfterTax = newTotalString;
                receiptList[registerIndex].paymentStatus = "DEPOSIT DONE";
                registerList[registerIndex].bookingStatus = "DEPOSIT DONE";
                cout << "THANKS FOR YOUR DEPOSIT :)\n"<< endl;
            saveVectorList(receiptList,"receipt.txt");
            saveVectorList(registerList,"registration.txt");
            }
            else if(receiptType == "INVOICE")
            {
                receiptList[registerIndex].paymentStatus = "PAYMENT DONE";
                registerList[registerIndex].bookingStatus = "PAYMENT DONE";
                cout << "THANKS FOR MAKING THE FULL PAYMENT :)\n"<< endl;
                saveVectorList(receiptList,"receipt.txt");
                saveVectorList(registerList,"registration.txt");
            }
            pressAny();
            custMainPage(name);
            status = false;
        }
        else if(payType == "3")
        {
            receiptList[registerIndex].paymentType = "E-BANKING";
            if(receiptType == "RECEIPT")
            {   
                receiptList[registerIndex].amtAfterTax = newTotalString;
                receiptList[registerIndex].paymentStatus = "DEPOSIT DONE";
                registerList[registerIndex].bookingStatus = "DEPOSIT DONE";
                cout << "THANKS FOR YOUR DEPOSIT :)\n"<< endl;
            saveVectorList(receiptList,"receipt.txt");
            saveVectorList(registerList,"registration.txt");
            }
            else if(receiptType == "INVOICE")
            {
                receiptList[registerIndex].paymentStatus = "PAYMENT DONE";
                registerList[registerIndex].bookingStatus = "PAYMENT DONE";
                cout << "THANKS FOR MAKING THE FULL PAYMENT :)\n"<< endl;
                saveVectorList(receiptList,"receipt.txt");
                saveVectorList(registerList,"registration.txt");
            }
            pressAny();
            custMainPage(name);
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER AGAIN :)\n"<< endl;
            continue;
        }
        status = false;
    }
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
