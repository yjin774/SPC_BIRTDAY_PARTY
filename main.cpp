#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <sstream>
#include <regex>
#include <algorithm>
#include <cctype>
#include <set>
#include <chrono>

#ifdef _WIN32
    #include <conio.h>  // Windows-specific
#else
    #include <termios.h>
    #include <unistd.h>
#endif

using namespace std;

void clear()
{
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

void mainLogo()
{
    cout << "                          (             )                            " << endl;
    cout << "                  )      (*)           (*)      (                    " << endl;
    cout << "         *       (*)      |             |      (*)                   " << endl;
    cout << "                  |      |~|           |~|      |          *         " << endl;
    cout << "                 |~|     | |           | |     |~|                   " << endl;
    cout << "                 | |     | |           | |     | |                   " << endl;
    cout << "                ,| |a@@@@| |@@@@@@@@@@@| |@@@@a| |.                  " << endl;
    cout << "           .,a@@@| |@@@@@| |@@@@@@@@@@@| |@@@@@| |@@@@a,.            " << endl;
    cout << "         ,a@@@@@@| |@@@@@@@@@@@@.@@@@@@@@@@@@@@| |@@@@@@@a,          " << endl;
    cout << "        a@@@@@@@@@@@@@@@@@@@@@' . `@@@@@@@@@@@@@@@@@@@@@@@@a         " << endl;
    cout << "        ;`@@@@@@@@@@@@@@@@@@'   .   `@@@@@@@@@@@@@@@@@@@@@';         " << endl;
    cout << "        ;@@@`@@@@@@@@@@@@@'     .     `@@@@@@@@@@@@@@@@'@@@;         " << endl;
    cout << "        ;@@@;,.aaaaaaaaaa       .       aaaaa,,aaaaaaa,;@@@;         " << endl;
    cout << "        ;;@;;;;@@@@@@@@;@      @.@      ;@@@;;;@@@@@@;;;;@@;         " << endl;
    cout << "        ;;;;;;;@@@@;@@;;@    @@ . @@    ;;@;;;;@@;@@@;;;;;;;         " << endl;
    cout << "        ;;;;;;;;@@;;;;;;;  @@   .   @@  ;;;;;;;;;;;@@;;;;@;;         " << endl;
    cout << "        ;;;;;;;;;;;;;;;;;@@     .     @@;;;;;;;;;;;;;;;;@@@;         " << endl;
    cout << "    ,%%%;;;;;;;;@;;;;;;;;       .       ;;;;;;;;;;;;;;;;@@;;%%%,     " << endl;
    cout << " .%%%%%%;;;;;;;@@;;;;;;;;     ,%%%,     ;;;;;;;;;;;;;;;;;;;;%%%%%%,  " << endl;
    cout << ".%%%%%%%;;;;;;;@@;;;;;;;;   ,%%%%%%%,   ;;;;;;;;;;;;;;;;;;;;%%%%%%%, " << endl;
    cout << "%%%%%%%%`;;;;;;;;;;;;;;;;  %%%%%%%%%%%  ;;;;;;;;;;;;;;;;;;;'%%%%%%%% " << endl;
    cout << "%%%%%%%%%%%%`;;;;;;;;;;;;,%%%%%%%%%%%%%,;;;;;;;;;;;;;;;'%%%%%%%%%%%% " << endl;
    cout << "`%%%%%%%%%%%%%%%%%,,,,,,,%%%%%%%%%%%%%%%,,,,,,,%%%%%%%%%%%%%%%%%%%%' " << endl;
    cout << "  `%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%'   " << endl;
    cout << "      `%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%'       " << endl;
    cout << "             \"\"\"\"\"\"\"\"\"\"\"\"\"\"`,,,,,,,,,'\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"              " << endl;
    cout << "                            `%%%%%%%\'                                " << endl;
    cout << "                             `%%%%%\'                                 " << endl;
    cout << "                               %%%   BIRTHDAY EVENT MANAGEMENT       " << endl;
    cout << "                              %%%%%           SYSTEM                 " << endl;
    cout << "                           .,%%%%%%%,.                               " << endl;
    cout << "                      ,%%%%%%%%%%%%%%%%%%%,                          " << endl;
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

void profilePic()
{
    cout << "╔═══════════╗════════════════════════════════════════╗" << endl;
    cout << "║    ###    ║                                        ║" << endl;
    cout << "║   #####   ║                                        ║" << endl;
    cout << "║    ###    ║              USER PROFILE              ║" << endl;
    cout << "║  #######  ║                                        ║" << endl;
    cout << "║ ######### ║                                        ║" << endl;
    cout << "║ ######### ║                                        ║" << endl;
    cout << "╠════════════════════════════════════════════════════╣" << endl;
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
        cout << "╔════════════════════════════════════════════════════════════════╗" << endl;
        cout << "║  " << left << setw(60)  << menuTitle << "  ║" << endl;
        cout << "╠════════════════════════════════════════════════════════════════╣" << endl;

        for(int i = 0 ; i < menuOptions.size() ; i++)
        {
            cout << "║  "<< left << setw(3) << to_string(i+1) << "║  "<<  setw(54)<< menuOptions[i] << "  ║" << endl;
            if(i == menuOptions.size()-1)
            {
                continue;
            }
            cout << "╠════════════════════════════════════════════════════════════════╣" << endl;
        }

        cout << "╚════════════════════════════════════════════════════════════════╝" << endl;
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
    T packageTimeChosen;
    vector <T> confirmListpackageList;

    string commaFormat()
    {
        return packageType + "," + venue + "," + timeDuration + "," + catering + "," + decoration + "," + entertaintment + "," + activities + "," + partyGift + "," + cake + "," + price + "," + packageTimeChosen;
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
            getline(ss, price, ',');
            getline(ss, packageTimeChosen);
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
    T themeTemp;
    T themeTimeChosen;

    string commaFormat() const
    {
        return themeDescription + "," + themePrice + "," + themeStatus + "," + themeTemp + "," + themeTimeChosen;
    }

    Theme(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, themeDescription, ',');
            getline(ss, themePrice, ',');
            getline(ss, themeStatus, ',');
            getline(ss, themeTemp, ',');
            getline(ss, themeTimeChosen);
        }
    }
};

template <typename T>
struct CustomPackage
{
    T item;
    T itemPrice;
    T tempStatus;
    T itemStatus;
    T itemAmountStatus;
    T itemAmount;
    T itemAmtLimit;
    T customTimeChosen;

    string commaFormat() const
    {
        return item + "," + itemPrice + "," + tempStatus + "," + itemStatus + "," + itemAmountStatus + "," + itemAmount + "," + itemAmtLimit + "," + customTimeChosen; 
    }

    CustomPackage(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, item, ',');
            getline(ss, itemPrice, ',');
            getline(ss, tempStatus, ',');
            getline(ss, itemStatus, ',');
            getline(ss, itemAmountStatus, ',');
            getline(ss, itemAmount, ',');
            getline(ss, itemAmtLimit,',');
            getline(ss, customTimeChosen);
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
    T setupStatus;
    T staffCateringStatus;
    T staffDecorationStatus;
    T staffEntertainmentStatus;
    T staffPartyItem;
    T orderStatus;
    T feedbackStatus;
    T doneCount;
    double TAX = 0.06;
    LoginDetails login;
    Package<string> package;

    string commaFormat()
    {
        return serialNum + "," + login.nickname + "," + eventDate + "," + 
        startTime + "," + endTime + "," + birthdayName + "," + login.contactNum + "," + 
        login.email + "," + packageChosen + "," + totalCost
        + "," + bookingStatus + "," + guestAmount + "," + specialRequest + "," +
        customStatus + "," + setupStatus + "," + staffCateringStatus + "," + staffDecorationStatus + "," +
        staffEntertainmentStatus + "," + staffPartyItem + "," + orderStatus + "," + feedbackStatus + "," + doneCount;  
    }

    Registration(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, serialNum, ',');
            getline(ss, login.nickname, ',');
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
            getline(ss, customStatus, ',');
            getline(ss, setupStatus, ',');
            getline(ss, staffCateringStatus, ',');
            getline(ss, staffDecorationStatus, ',');
            getline(ss, staffEntertainmentStatus, ',');
            getline(ss, staffPartyItem, ',');
            getline(ss, orderStatus, ',');
            getline(ss, feedbackStatus, ',');
            getline(ss, doneCount);
        }   
    }
};

template <typename T>
struct CustomList
{
    T item1;
    T item1Price;
    T item1Amt;
    T amt1Status;
    T item1Status;
    T item2;
    T item2Price;
    T item2Amt;
    T amt2Status;
    T item2Status;
    T item3;
    T item3Price;
    T item3Amt;
    T amt3Status;
    T item3Status;
    T item4;
    T item4Price;
    T item4Amt;
    T amt4Status;
    T item4Status;
    Registration<T> registers;
    Theme <T> themes;

    string commaFormat() const
    {
        return registers.serialNum + "," + item1 + "," + item1Price + "," + item1Amt + "," + amt1Status + "," + item1Status + "," + 
        item2 + "," + item2Price + "," + item2Amt + "," + amt2Status + "," + item2Status + "," + item3 + "," + item3Price + "," + item3Amt + "," + amt3Status + "," + item3Status + "," + 
        item4 + "," + item4Price + "," + item4Amt + "," + amt4Status + "," + item4Status + "," + themes.themeDescription + "," + themes.themePrice + "," + themes.themeStatus;
    }

    CustomList(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, registers.serialNum, ',');  
            getline(ss, item1, ',');
            getline(ss, item1Price, ',');
            getline(ss, item1Amt, ',');
            getline(ss, amt1Status, ',');
            getline(ss, item1Status, ',');
            getline(ss, item2, ',');
            getline(ss, item2Price, ',');
            getline(ss, item2Amt, ',');
            getline(ss, amt2Status, ',');
            getline(ss, item2Status, ',');
            getline(ss, item3, ',');
            getline(ss, item3Price, ',');
            getline(ss, item3Amt, ',');
            getline(ss, amt3Status, ',');
            getline(ss, item3Status, ',');
            getline(ss, item4, ',');
            getline(ss, item4Price, ',');
            getline(ss, item4Amt, ',');
            getline(ss, amt4Status, ',');
            getline(ss, item4Status, ',');
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
    string newAmtAfterTax;
    string totalGuestAmt;
    string totalGeneralAddOn;
    string depositAmt;
    string paymentType;
    Registration <string> registers;
    CustomList <string> custom;
    Package <string> package;

        string commaFormat()
    {
        return receiptID + "," + registers.login.nickname + "," + paymentStatus + "," + issueDate + "," + amtBeforeTax + "," + taxAmt + "," + amtAfterTax + "," + newAmtAfterTax + "," + registers.eventDate + "," + 
        registers.startTime + "," + registers.endTime + "," + registers.birthdayName + "," + registers.login.contactNum + "," + 
        registers.login.email + "," + registers.packageChosen + "," + package.venue + "," + package.catering + "," + package.decoration + "," + package.entertaintment + "," + package.partyGift + "," + registers.totalCost
        + "," + registers.guestAmount + "," + registers.specialRequest + "," + registers.customStatus + "," + custom.item1 + "," + custom.item1Price + "," + custom.item1Amt + "," + 
        custom.item2 + "," + custom.item2Price + "," + custom.item2Amt + "," + custom.item3 + "," + custom.item3Price + "," + custom.item3Amt + "," + 
        custom.item4 + "," + custom.item4Price + "," + custom.item4Amt  + "," + totalGeneralAddOn + "," + totalGuestAmt + "," + custom.themes.themeDescription + "," + custom.themes.themePrice+ "," + depositAmt + "," + paymentType;
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
            getline(ss, newAmtAfterTax, ',');
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
            getline(ss, custom.item1Amt, ',');
            getline(ss, custom.item2, ',');
            getline(ss, custom.item2Price, ',');
            getline(ss, custom.item2Amt, ',');
            getline(ss, custom.item3, ',');
            getline(ss, custom.item3Price, ',');
            getline(ss, custom.item3Amt, ',');
            getline(ss, custom.item4, ',');
            getline(ss, custom.item4Price, ',');
            getline(ss, custom.item4Amt, ',');
            getline(ss, totalGeneralAddOn, ',');
            getline(ss, totalGuestAmt, ',');
            getline(ss, custom.themes.themeDescription, ',');
            getline(ss, custom.themes.themePrice, ',');
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
    string viewStatus;
    string feedBackDate;
    Registration <string> registers;

    string commaFormat()
    {
        return registers.serialNum + "," + registers.login.nickname + "," + content + "," + rate + "," + fbStatus + "," + viewStatus + "," + feedBackDate;
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
            getline(ss, fbStatus, ',');
            getline(ss, viewStatus, ',');
            getline(ss, feedBackDate);
        }
    }
};

struct Campaign
{
    string campaignId;
    string contentTitle;
    string content;
    string contentStatus;
    
    string commaFormat()
    {
        return campaignId + "," + contentTitle + "," + content + "," + contentStatus;
    }

    Campaign(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, campaignId, ',');
            getline(ss, contentTitle, ',');
            getline(ss, content, ',');
            getline(ss, contentStatus);
        }
    }
};

struct Operation
{
    LoginDetails login;
    string operations;
    string dateTime;
    string operateType;
    string operatePrefix;
    
    string commaFormat()
    {
        return login.nickname + "," + operations + "," + dateTime + "," + operateType + "," + operatePrefix;
    }

    Operation(string line = "") 
    {
        if (!line.empty()) 
        {
            stringstream ss(line);
            getline(ss, login.nickname, ',');
            getline(ss, operations, ',');
            getline(ss, dateTime, ',');
            getline(ss, operateType, ',');
            getline(ss, operatePrefix);
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

void part1()
{
    cout << "╔═══════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║       .                                                                   ║" << endl;
    cout << "║               }       *                                                   ║" << endl;
    cout << "║     .--.     {            )                                               ║" << endl;
    cout << "║    /    \\     }          (                                                ║" << endl;
    cout << "║    |#   |         +                                                       ║" << endl;
    cout << "║    \\_ _.'   +                                                             ║" << endl;
    cout << "║     (^   *       .                                                        ║" << endl;
    cout << "║      )  _ _  ___  ___  ___                                                ║" << endl;
    cout << "║     (  | | |/   \\|   \\|                                                   ║" << endl;
    cout << "║      ) |   || - || -_/| -                                                 ║" << endl;
    cout << "║        |_|_||_|_||_|  |_|                                                 ║" << endl;
    cout << "╚═══════════════════════════════════════════════════════════════════════════╝" << endl;
}

void part2()
{
    cout << "╔═══════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║       .                      .    *+*+*   +                               ║" << endl;
    cout << "║               }       *           |||||       .---.                       ║" << endl;
    cout << "║     .--.     {            )     @@.@.@.@@    /     \\                      ║" << endl;
    cout << "║    /    \\     }          (      |'='='='|    |#                           ║" << endl;
    cout << "║    |#   |         +            @@.@.@.@.@@   '._ _,/                      ║" << endl;
    cout << "║   \\_ _.'   +          *   )   |'='='='='|                                 ║" << endl;
    cout << "║     (^   *       .            @@.@.@.@.@.@@     )                         ║" << endl;
    cout << "║      )  _ _  ___  ___  ___+__  __  ___  _  ___                            ║" << endl;
    cout << "║     (  | | |/   \\|   \\|   \\\\ \\/ / | _ \\| ||                               ║" << endl;
    cout << "║      ) |   || - || -_/| -_/ \\  /  | _ <| || - /                           ║" << endl;
    cout << "║        |_|_||_|_||_|  |_|   /_/   |___/|_||_._\\                           ║" << endl;
    cout << "╚═══════════════════════════════════════════════════════════════════════════╝" << endl;
}

void part3()
{
    cout << "╔═══════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║       .                      .    *+*+*   +             *       .---,     ║" << endl;
    cout << "║               }       *           |||||       .---.            /#    `\\   ║" << endl;
    cout << "║     .--.     {            )     @@.@.@.@@    /     \\  .        |      |   ║" << endl;
    cout << "║    /    \\     }          (      |'='='='|    |#     |          '.   _/    ║" << endl;
    cout << "║    |#   |         +            @@.@.@.@.@@   '._ _,/             `(^      ║" << endl;
    cout << "║    \\_ _.'   +          *   )   |'='='='='|     (^            +     )      ║" << endl;
    cout << "║     (^   *       .            @@.@.@.@.@.@@     )        *        (       ║" << endl;
    cout << "║      )  _ _  ___  ___  ___+__  __  ___  _  ___  ___+ _ _  ___  ___ __ *__ ║" << endl;
    cout << "║     (  | | |/   \\|   \\|   \\\\ \\/ / | _ \\| ||   \\|   || | ||   \\/   \\\\ \\/ / ║" << endl;
    cout << "║      ) |   || - || -_/| -_/ \\  /  | _ <| || - / | | |   || | || - | \\  /  ║" << endl;
    cout << "║        |_|_||_|_||_|  |_|   /_/   |___/|_||_._\\ |_| |_|_||___/|_|_| /_/   ║" << endl;
    cout << "╚═══════════════════════════════════════════════════════════════════════════╝" << endl;
}

void stars(int amt)
{
    const string yellowStar = "\033[33m*\033[0m";

    for (int i = 0; i < amt; i++) 
    {
        cout << yellowStar+"  ";
    }

    if(amt == 1)
    {
        cout  << "*  *  *  *  ";
    }
    else if(amt == 2)
    {
        cout  << "*  *  *  ";
    }
    else if(amt == 3)
    {
        cout  << "*  *  ";
    }
    else if(amt == 4)
    {
        cout  << "*  ";
    }
    else if(amt == 5)
    {
        cout << "";
    }
}

void comments(int amt)
{
    string comments;

    cout << "╔═════════════════╗" << endl;
    cout << "║  ";
    if(amt == 1)
    {
        stars(amt);
        cout <<"║" << endl;
        comments= "SORRY FOR THE LETDOWN. WE\'LL IMPROVE TO SATISFY YOU!\n";
    }
    else if(amt == 2)
    {
        stars(amt);
        cout <<"║" << endl;
        comments= "THANKS FOR FEEDBACK. WE\'RE WORKING TO DO BETTER!\n";
    }
    else if(amt == 3)
    {
        stars(amt);
        cout <<"║" << endl;
        comments= "GLAD YOU LIKED IT! WE\'LL AIM HIGHER NEXT TIME!\n";
    }
    else if(amt == 4)
    {
        stars(amt);
        cout <<"║" << endl;
        comments= "THANKS FOR THE LOVE! WE\'RE CLOSE TO PERFECT!\n";
    }
    else if(amt == 5)
    {
        stars(amt);
        cout <<"║" << endl;
        comments= "THRILLED WITH 5 STARS! WE\'LL KEEP SHINING!\n";
    }
    cout << "╚═════════════════╝" << endl;

    cout << comments << endl;
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

string getTodayDate()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string year = to_string(1900 + ltm->tm_year);
    string month = (ltm->tm_mon + 1 < 10 ? "0" : "") + to_string(ltm->tm_mon + 1);
    string day = (ltm->tm_mday < 10 ? "0" : "") + to_string(ltm->tm_mday);
    return year + "-" + month + "-" + day;
}

tm parseDate(const string &dateStr)
{
    tm t = {};
    stringstream ss(dateStr);
    ss >> get_time(&t, "%Y-%m-%d");
    t.tm_hour = 0; t.tm_min = 0; t.tm_sec = 0;
    return t;
}

bool checkDateRange(const string &date, const string &start, const string &end)
{

    tm d_tm = parseDate(date);
    tm s_tm = parseDate(start);
    tm e_tm = parseDate(end);

    time_t d = mktime(&d_tm);
    time_t s = mktime(&s_tm);
    time_t e = mktime(&e_tm);

    return d >= s && d <= e;
}

void outputCampaign(const vector<vector<string>>& campaignRecords,string prefix,int camIndex)
{
    string word;
    string currentLine;
    int currentLength = 0;
    int maxCharsPerLine = 40;

    vector <Campaign> campaignList = getVectorList <Campaign> ("campaign.txt");

    if(prefix == "CONFIRMATION")
    {
        stringstream ss1(campaignRecords[1][1]);

        cout << "\n";

        cout << "╔" << setfill('=') << setw(50) << right << "╗" << endl;
        cout << "║  " << setfill(' ')<< left << setw(45)  << "CAMPAIGN CONFIRMATION" << "║" << endl;
        cout << "╠" << setfill('=') << setw(50) << right << "╣" << endl;
        cout << setfill(' ');

        cout << "║  "<< left << setw(15)  << campaignRecords[0][0] << ": " << left << setw(28) << campaignRecords[0][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(50) << right << "╣" << endl;
        cout << setfill(' ');

        cout << "║  "<< left << setw(45)  << campaignRecords[1][0] << "║" << endl;
        cout << "╠" << setfill('=') << setw(50) << right << "╣" << endl;
        cout << setfill(' ');

        while (ss1 >> word) 
        {
            // Calculate the length if this word is added (including a space)
            int wordLength = word.length();
            int newLength = currentLength + (currentLength > 0 ? 1 : 0) + wordLength;

            if (newLength <= maxCharsPerLine) 
            {
                // Add word with a space (if not the first word on the line)
                if (currentLength > 0) 
                {
                    currentLine += " ";
                    currentLength++;
                }
                currentLine += word;
                currentLength += wordLength;
            } 
            else 
            {
                // Print the current line and start a new one
                if (!currentLine.empty()) 
                {
                    cout << "║  " << left << setw(45) << currentLine << "║" << endl;
                }
                currentLine = word;
                currentLength = wordLength;
            }
        }

        // Print the last line if it contains any text
        if (!currentLine.empty()) 
        {
            cout << "║  " << left << setw(45) << currentLine << "║" << endl;
        }

        cout << "╚" << setfill('=') << setw(50) << right << "╝" << endl;
        cout << setfill(' ');
    }
    else if(prefix == "VIEW CAMPAIGN")
    {
        stringstream ss2(campaignRecords[2][1]);
        MenuTemplate <string> m;

        clear();
        m.menuTitle = "VIEW CAMPAIGN";
        m.menuTitleTemplate();
        cout << "\n";

            cout << "╔" << setfill('=') << setw(50) << right << "╗" << endl;
            cout << setfill(' ');
            cout << "║  " << setfill(' ')<< left << setw(15)  << campaignRecords[0][0] << " : " << left << setw(27) << campaignRecords[0][1] << "║" << endl;
            cout << "╠" << setfill('=') << setw(50) << right << "╣" << endl;
            cout << setfill(' ');
            cout << "║  " << setfill(' ')<< left << setw(15)  << campaignRecords[1][0] << " : " << left << setw(27) << campaignRecords[1][1] << "║" << endl;
            cout << "╠" << setfill('=') << setw(50) << right << "╣" << endl;
            cout << setfill(' ');
            cout << "║  " << setfill(' ')<< left << setw(45)  << campaignRecords[2][0] << "║" << endl;
            cout << "╠" << setfill('=') << setw(50) << right << "╣" << endl;
            cout << setfill(' ');

            while (ss2 >> word) 
            {
                // Calculate the length if this word is added (including a space)
                int wordLength = word.length();
                int newLength = currentLength + (currentLength > 0 ? 1 : 0) + wordLength;

                if (newLength <= maxCharsPerLine) 
                {
                    // Add word with a space (if not the first word on the line)
                    if (currentLength > 0) 
                    {
                        currentLine += " ";
                        currentLength++;
                    }
                    currentLine += word;
                    currentLength += wordLength;
                } 
                else 
                {
                    // Print the current line and start a new one
                    if (!currentLine.empty()) 
                    {
                        cout << "║  " << left << setw(45) << currentLine << "║" << endl;
                    }
                    currentLine = word;
                    currentLength = wordLength;
                }
            }

            // Print the last line if it contains any text
            if (!currentLine.empty()) 
            {
                cout << "║  " << left << setw(45) << currentLine << "║" << endl;
            }

            cout << "╚" << setfill('=') << setw(50) << right << "╝" << endl;
            cout << setfill(' ');
            campaignList[camIndex].contentStatus = "VIEWED";
            saveVectorList(campaignList,"campaign.txt");
    }
}

void outoutCampaignList()
{
    vector <Campaign> campaignList = getVectorList <Campaign> ("campaign.txt");

    cout << "╔═════════════════════════════════════════════╗" << endl;
    cout << "║  " << left << setw(20) << "CAMPAIGN ID"<< "║  " << left << setw(20) << "CAMPAIGN TITLE" << "║" << endl;
    cout << "╠═════════════════════════════════════════════╣" << endl;

    for(int i = 0; i < campaignList.size(); i++)
    {
        cout << "║  " << left << setw(3) << to_string(i+1) << "║  " << left << setw(14) << campaignList[i].campaignId << "║  " << left << setw(20) << campaignList[i].contentTitle << "║" << endl;
            if(i == campaignList.size()-1)
            {
                continue;
            }
        cout << "╠═════════════════════════════════════════════╣" << endl;
    }

    cout << "╚═════════════════════════════════════════════╝" << endl;
}

template <typename T>
int getIndex(vector<T> list, string compareInput, function<string(T)> getItem) {
    int indexNum = -1; // Default to -1 if not found
    string compareInputLower = compareInput;
    transform(compareInputLower.begin(), compareInputLower.end(), compareInputLower.begin(), ::tolower);

    for (int i = 0; i < list.size(); i++) {
        string itemValue = getItem(list[i]);
        string itemValueLower = itemValue;
        transform(itemValueLower.begin(), itemValueLower.end(), itemValueLower.begin(), ::tolower);
        if (itemValueLower == compareInputLower) {
            indexNum = i;
            break;
        }
    }
    return indexNum;
}

void addOperation(int userIndex,string operation,string operationType,string prefix)
{
    Operation newOperation;
    vector <LoginDetails> staffList = getVectorList <LoginDetails> ("staff.txt");
    vector <LoginDetails> custList = getVectorList <LoginDetails> ("customer.txt");
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");

    string operateTime = getIssueDate();
    transform(prefix.begin(),prefix.end(),prefix.begin(),::toupper);
    if(prefix == "CUSTOMER")
    {
        newOperation.login.nickname = custList[userIndex].nickname;
        newOperation.dateTime = operateTime;
        newOperation.operations = operation;
        newOperation.operateType = operationType;
        newOperation.operatePrefix = prefix;
    }
    else if(prefix == "STAFF")
    {
        newOperation.login.nickname = staffList[userIndex].nickname;
        newOperation.dateTime = operateTime;
        newOperation.operations = operation;
        newOperation.operateType = operationType;
        newOperation.operatePrefix = prefix;
    }

    operateList.push_back(newOperation);

    saveVectorList(operateList,"operation.txt");
}

void calculateAmount(double& amtBeforeTax,double& taxAmt, double& amtAfterTax,int index, int customIndex,double& totalGeneralAddOn, double& depositAmt)
{   
    vector <Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");
    vector <CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");

    double totalCost = stod(registerList[index].totalCost);
    double guestPrice = 0.0;
    if(customList[customIndex].item1 == "EXTRA GUEST")
    {
        guestPrice = stod(customList[customIndex].item1Price);
    }
    else if(customList[customIndex].item2 == "EXTRA GUEST")
    {
        guestPrice = stod(customList[customIndex].item2Price);
    }
    else if(customList[customIndex].item3 == "EXTRA GUEST")
    {
        guestPrice = stod(customList[customIndex].item3Price);
    }
    else if(customList[customIndex].item4 == "EXTRA GUEST")
    {
        guestPrice = stod(customList[customIndex].item4Price);
    }
    double item1 = stod(customList[customIndex].item1Price);
    double item1Amt = stod(customList[customIndex].item1Amt);
    double item2 = stod(customList[customIndex].item2Price);
    double item2Amt = stod(customList[customIndex].item2Amt);
    double item3 = stod(customList[customIndex].item3Price);
    double item3Amt = stod(customList[customIndex].item3Amt);
    double item4 = stod(customList[customIndex].item4Price);
    double item4Amt = stod(customList[customIndex].item4Amt);
    double themePrice = stod(customList[customIndex].themes.themePrice);

    totalGeneralAddOn = (item1*item1Amt) + (item2*item2Amt) + (item3*item3Amt) + (item4*item4Amt);

    amtBeforeTax = totalCost + totalGeneralAddOn + themePrice;

    taxAmt = amtBeforeTax * registerList[index].TAX;

    amtAfterTax = amtBeforeTax + taxAmt;

    depositAmt = amtAfterTax * 0.2;
}

bool isNumber(const string &s)
{
    regex numPattern(R"(^-?\d+(\.\d+)?$)");
    return regex_match(s, numPattern);
}

double safeStod(const string &s)
{
    return isNumber(s) ? stod(s) : 0.0;
}

void calculateReport(double &totalRevenue,double &pendingPayment,double &completePayment,double &totalPackageRevenue,double &totalAddOnRevenue,
double &totalFeedback,double &averageRating,double &generalTotalRevenue,double &themeTotalRevenue,int &packageTime,int &generalTime,int &themeTime,string &startDate,string &endDate) 
{
    vector<Receipt> receiptList = getVectorList<Receipt>("receipt.txt");
    vector<Feedback> feedbackList = getVectorList<Feedback>("feedback.txt");
    vector<CustomPackage<string>> customPackage = getVectorList<CustomPackage<string>>("customPackage.txt");
    vector<Theme<string>> themeList = getVectorList<Theme<string>>("theme.txt");
    vector<Package<string>> packageList = getVectorList<Package<string>>("packageList.txt");

    // Rating calculation
    double totalRate = 0.0;
    int ratingCount = 0;

    // Reset all time-chosen counters to zero
    for (auto &p : customPackage) p.customTimeChosen = "0";
    for (auto &t : themeList) t.themeTimeChosen = "0";
    for (auto &p : packageList) p.packageTimeChosen = "0";

    // Main loop: filter receipts within date range
    for (const auto &r : receiptList) 
    {
        if (!checkDateRange(r.issueDate, startDate, endDate)) continue;

        // Total revenue
        if(r.paymentStatus != "PAYMENT PENDING")
        {
            totalRevenue += safeStod(r.amtAfterTax);
        }

        if (r.paymentStatus == "DEPOSIT DONE") {
            pendingPayment += safeStod(r.newAmtAfterTax);
        }

        completePayment = totalRevenue - pendingPayment;

        totalPackageRevenue += safeStod(r.registers.totalCost);
        totalAddOnRevenue += safeStod(r.custom.item1Price)
                           + safeStod(r.custom.item2Price)
                           + safeStod(r.custom.item3Price)
                           + safeStod(r.custom.item4Price);

        // Update package time chosen
        for (auto &pkg : packageList) {
            if (r.registers.packageChosen == pkg.packageType)
            {
                int count = stoi(pkg.packageTimeChosen);
                pkg.packageTimeChosen = to_string(count + 1);
                break;
            }
        }

        // Update general add-ons
        vector<pair<string, string>> items = {
            {r.custom.item1, r.custom.item1Price},
            {r.custom.item2, r.custom.item2Price},
            {r.custom.item3, r.custom.item3Price},
            {r.custom.item4, r.custom.item4Price}
        };

        for (const auto &itemPair : items) 
        {
            const string &itemName = itemPair.first;
            const string &price = itemPair.second;
            for (auto &cp : customPackage) 
            {
                if (itemName == cp.item) {
                    int count = stoi(cp.customTimeChosen);
                    cp.customTimeChosen = to_string(count + 1);
                    break;
                }
            }
        }

        // Update theme count
        for (auto &theme : themeList) {
            if (r.custom.themes.themeDescription == theme.themeDescription) {
                int count = stoi(theme.themeTimeChosen);
                theme.themeTimeChosen = to_string(count + 1);
                break;
            }
        }
    }

    // Feedback processing
    for (const auto &f : feedbackList) {
        if (checkDateRange(f.feedBackDate, startDate, endDate)) {
            totalRate += safeStod(f.rate);
            ratingCount++;
        }
    }

    totalFeedback = ratingCount;
    averageRating = (ratingCount > 0) ? totalRate / ratingCount : 0.0;

    // Calculate generalTime and generalTotalRevenue
    generalTime = 0;
    generalTotalRevenue = 0.0;
    for (const auto &cp : customPackage) {
        int count = stoi(cp.customTimeChosen);
        generalTime += count;
        generalTotalRevenue += count * safeStod(cp.itemPrice);
    }

    // Calculate themeTime and themeTotalRevenue
    themeTime = 0;
    themeTotalRevenue = 0.0;
    for (const auto &theme : themeList) {
        int count = stoi(theme.themeTimeChosen);
        themeTime += count;
        themeTotalRevenue += count * safeStod(theme.themePrice);
    }

    // Calculate total package times (summed for reporting if needed)
    packageTime = 0;
    for (const auto &pkg : packageList) {
        packageTime += stoi(pkg.packageTimeChosen);
    }

    // Save updated data back to file
    saveVectorList(packageList, "packageList.txt");
    saveVectorList(customPackage, "customPackage.txt");
    saveVectorList(themeList, "theme.txt");
}

void outputPackage(const vector<vector<string>>& packageList,int index,string prefix)
{
    cout << "╔════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║                                PACKAGE LIST                                    ║" << endl;
    cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;

    if(prefix == "GENERAL")
    {
        for (int i =0; i < packageList.size()-1; i++)
        {
            if(packageList[i][0] == "TIME DURATION")
            {
                cout << "║  "<< left << setw(15) << packageList[i][0]<<"║  " << left << setw(60) << packageList[i][1]+" HOURS" << "║" << endl;
                cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
                continue;
            }
            cout << "║  "<< left << setw(15) << packageList[i][0]<<"║  " << left << setw(60) << packageList[i][1] << "║" << endl;
            cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
        }
            cout << "║  "<< left << setw(15) << packageList[packageList.size()-1][0]<<"║  RM" << left << setw(58) << packageList[packageList.size()-1][1] << "║" << endl;
    }
    else if(prefix == "EDIT")
    {
        for (int i =0; i < packageList.size()-1; i++)
        {
            if(packageList[i][0] == "TIME DURATION")
            {
                cout << "║  "<< left << setw(3) << to_string(i+1) << "║  "<< left << setw(15) << packageList[i][0]<<"║  " << left << setw(54) << packageList[i][1]+" HOURS" << "║" << endl;
                cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
                continue;
            }
            cout << "║  "<< left << setw(3) << to_string(i+1) << "║  " << left << setw(15) << packageList[i][0]<<"║  " << left << setw(54) << packageList[i][1] << "║" << endl;
            cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
        }
            cout << "║  "<< left << setw(3) << to_string(packageList.size()) << "║  "<< left << setw(15) << packageList[packageList.size()-1][0]<<"║  RM" << left << setw(52) << packageList[packageList.size()-1][1] << "║" << endl;
    }
        cout << "╚════════════════════════════════════════════════════════════════════════════════╝" << endl;
}

void outputConfirm(const vector<vector<string>>& confirmList,string prefix)
{
    cout << "╔════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║  " << left << setw(78) << prefix << "║" << endl;
    cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
    for (int i =0; i < confirmList.size(); i++)
    {
        cout << "║  "<< left << setw(19) << confirmList[i][0]<<"║  " << left << setw(56) << confirmList[i][1] << "║" << endl;
        if(i == confirmList.size()-1)
        {
            continue;
        }
        cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
    }
        cout << "╚════════════════════════════════════════════════════════════════════════════════╝" << endl;
}

void outputList(const vector<vector<string>>& list,string title)
{
    cout << "╔════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║  " << left << setw(78) << title + " SECTION" << "║" << endl;
    cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
    for (int i =0; i < list.size(); i++)
    {
        cout << "║  "<< left << setw(3) << to_string(i+1) << "║  "<< left << setw(19) << list[i][0]<<"║  " << left << setw(50) << list[i][1] << "║" << endl;
        if(i == list.size()-1)
        {
            continue;
        }
        cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
    }
        cout << "╚════════════════════════════════════════════════════════════════════════════════╝" << endl;
}

void outputCustomMenu(string prefix,int specificIndex)
{
    vector<CustomPackage<string>> customPackage = getVectorList<CustomPackage<string>>("customPackage.txt");

    cout << "╔═══════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║  ITEM                               ║  PRICE                ║  ITEM STATUS        ║" << endl;
    cout << "╠═══════════════════════════════════════════════════════════════════════════════════╣" << endl;
    
    if(prefix == "GENERAL")
    {
    for (int i =0; i < customPackage.size(); i++)
        {
            cout << "║  " << left << setw(3) << to_string(i+1) << "║  " << left << setw(29) << 
            customPackage[i].item<<"║  RM" << left << setw(19) << customPackage[i].itemPrice << "║  " << left << setw(19) << customPackage[i].itemStatus << "║" << endl;
            if(i == customPackage.size()-1)
            {
                continue;
            }

            cout << "╠═══════════════════════════════════════════════════════════════════════════════════╣" << endl;
        }
    }
    else if(prefix == "SPECIFIC")
    {
            cout << "║  " << left << setw(35) << customPackage[specificIndex].item<<"║  RM" << left << setw(19) << 
            customPackage[specificIndex].itemPrice << "║  " << left << setw(19) << customPackage[specificIndex].itemStatus << "║" << endl;
    }
        cout << "╚═══════════════════════════════════════════════════════════════════════════════════╝" << endl;
}

void outputTheme(string prefix,int specificIndex)
{
    vector<Theme<string>> themeList = getVectorList<Theme<string>>("theme.txt");

    cout << "╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "╠═══════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    cout << "║  ITEM                                                              ║  PRICE          ║  ITEM STATUS       ║" << endl;
    cout << "╠═══════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    
    if(prefix == "GENERAL")
    {
    for (int i =0; i < themeList.size(); i++)
        {
            cout << "║  " << left << setw(3) << to_string(i+1) << "║  " << left << setw(60) << 
            themeList[i].themeDescription<<"║  RM" << left << setw(13) << themeList[i].themePrice << "║  " << left << setw(18) << themeList[i].themeStatus << "║"<<  endl;
            cout << "╠═══════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;

        }
    }
    else if(prefix == "SPECIFIC")
    {
        cout << "║  " << left << setw(66) << themeList[specificIndex].themeDescription<<"║  RM" << left << setw(13) << themeList[specificIndex].themePrice << "║  " << left << setw(18) << 
        themeList[specificIndex].themeStatus << "║"<<  endl;
    }
    cout << "╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════╝" << endl;
}

void outputCustomCart(string receiptID)
{
    MenuTemplate<string> m;
    vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");
    int customIndex = getIndex<CustomList<string>>(customList , receiptID , [](CustomList<string> cl){return cl.registers.serialNum;});

    cout << "\n\n";

    cout << "╔══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║  GENERAL ADD ON                                  ║  STATUS         ║  AMOUNT         ║           PRICE           ║" << endl;
    cout << "╠══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    cout << "║  1  ║  " << left << setw(42) << customList[customIndex].item1 << "║  " << left << setw(15) << customList[customIndex].item1Status << "║  " << left << setw(15) << customList[customIndex].item1Amt << "║  RM" << left << setw(23) << customList[customIndex].item1Price << "║" <<endl;
    cout << "╠══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    cout << "║  2  ║  " << left << setw(42) << customList[customIndex].item2 << "║  " << left << setw(15) << customList[customIndex].item2Status << "║  " << left << setw(15) << customList[customIndex].item2Amt << "║  RM" <<  left << setw(23) << customList[customIndex].item2Price << "║" <<endl;
    cout << "╠══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    cout << "║  3  ║  " << left << setw(42) << customList[customIndex].item3 << "║  " << left << setw(15) << customList[customIndex].item3Status << "║  " << left << setw(15) << customList[customIndex].item3Amt << "║  RM" <<  left << setw(23) << customList[customIndex].item3Price << "║" <<endl;
    cout << "╠══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    cout << "║  4  ║  " << left << setw(42) << customList[customIndex].item4 << "║  " << left << setw(15) << customList[customIndex].item4Status << "║  " << left << setw(15) << customList[customIndex].item4Amt << "║  RM" <<  left << setw(23) << customList[customIndex].item4Price << "║" <<endl;
    cout << "╚══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝" << endl;

    cout << "\n";

    cout << "╔════════════════════════════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║  CUSTOMIZE THEME                                 ║  STATUS         ║               PRICE               ║" << endl;
    cout << "╠════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
    cout << "║  1  ║  " << left << setw(42) << customList[customIndex].themes.themeDescription << "║  " << left << setw(15) << customList[customIndex].themes.themeStatus << "║  RM" << left << setw(31) << customList[customIndex].themes.themePrice << "║" <<endl;
    cout << "╚════════════════════════════════════════════════════════════════════════════════════════════════════════╝" << endl;
}

void outputProfile(const vector<vector<string>>& profileList,int index)
{
    profilePic();

    for(int i = 0;i<profileList.size()-1;i++)
    {
        cout << "║  " << setfill(' ')<< left << setw(20)  << profileList[i][0] << "║  " <<  left << setw(27) << profileList[i][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(55) << right << "╣" << endl;
    }
    cout << "║  " << setfill(' ')<< left << setw(20)  << profileList[4][0] << "║  " << left << setw(27);

    int len = stoi(profileList[4][1]);

    string stars(len, '*'); // Create a string of len asterisks
    cout << stars << "║" << endl;
    cout << "╚" << setfill('=') << setw(55) << right << "╝" << endl;
    cout << setfill(' ');
}

void feedBackHeader()
{
    cout << "\n";
    cout << "╔════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║  " << left << setw(20)  << "RECIPT ID" << "║  " << left << setw(25) << "VIEW STATUS" << "║  " << left << setw(15) << "RATING" << "║" << endl;
    cout << "╠════════════════════════════════════════════════════════════════════╣" << endl;
}

void outputFeedBackList(const vector<vector<string>>& list)
{

        for(int i = 0;i < list.size();i++)
        {
            int starRate = stoi(list[i][2]);

            cout << "║  " << left << setw(20)<< list[i][0] << "║  " << left << setw(25) << list[i][1] << "║  ";
            stars(starRate);
            cout << "║" <<endl;

            if(i == list.size()-1)
            {
                continue;
            }
            cout << "╠════════════════════════════════════════════════════════════════════╣" << endl;
        }
        cout << "╚════════════════════════════════════════════════════════════════════╝" << endl;

}

void outputFeedbackRecords(const vector<vector<string>>& feedbackList)
{   
    stringstream ss(feedbackList[2][1]);
    string word;
    string currentLine;
    int currentLength = 0;
    int maxCharsPerLine = 50;

    cout << "╔════════════════════════════════════════════════════╗" << endl;
    for(int i = 0;i<feedbackList.size()-1;i++)
    {
        cout << "║  " << left << setw(20) << feedbackList[i][0] << "║  " <<left << setw(27) << feedbackList[i][1] << "║" << endl;
        cout << "╠════════════════════════════════════════════════════╣" << endl;
    }

    cout << "║  " << left << setw(50) << feedbackList[2][0] << "║" << endl;
    cout << "╠════════════════════════════════════════════════════╣" << endl;
    
    while (ss >> word) {
        // Calculate the length if this word is added (including a space)
        int wordLength = word.length();
        int newLength = currentLength + (currentLength > 0 ? 1 : 0) + wordLength;

        if (newLength <= maxCharsPerLine) 
        {
            // Add word with a space (if not the first word on the line)
            if (currentLength > 0) 
            {
                currentLine += " ";
                currentLength++;
            }
            currentLine += word;
            currentLength += wordLength;
        } 
        else 
        {
            // Print the current line and start a new one
            if (!currentLine.empty()) 
            {
                cout << "║  " << left << setw(50) << currentLine << "║" << endl;
            }
            currentLine = word;
            currentLength = wordLength;
        }
    }

    // Print the last line if it contains any text
    if (!currentLine.empty()) {
        cout << "║  " << left << setw(50) << currentLine << "║" << endl;
    }

    cout << "╚════════════════════════════════════════════════════╝" << endl;
}

void outputOperations(const vector<vector<string>>& list,string prefix)
{
    if(prefix == "STAFF")
    {
        cout << "╔════════════════════════════════════════════════════════════════════════════════╗" << endl;
        cout << "║  " << left << setw(20)  << "STAFF NAME"  << "  ║  " << left << setw(20)  << "OPERATIONS                    " << "║  " << left << setw(20)  << "DATE TIME" <<  "║" << endl;
        cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;

        for(int i  = 0 ; i < list.size() ; i++)
        {
            cout << "║ " << left << setw(4) << to_string(i+1) <<"║  " << left << setw(16)  << list[i][0]  << "║  " << left << setw(30)  << list[i][1] << "║  " << left << setw(20)  << list[i][2] <<  "║" << endl;
            if(i == list.size()-1)
            {
                continue;
            }
            cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
        }

        cout << "╚════════════════════════════════════════════════════════════════════════════════╝" << endl;
    }
    else if(prefix == "CUSTOMER")
    {
        cout << "╔════════════════════════════════════════════════════════════════════════════════╗" << endl;
        cout << "║  " << left << setw(20)  << "CUSTOMER NAME"  << "  ║  " << left << setw(17)  << "OPERATIONS                    " << "║  " << left << setw(20)  << "DATE TIME" <<  "║" << endl;
        cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;

        for(int i  = 0 ; i < list.size() ; i++)
        {
            cout << "║ " << left << setw(4) << to_string(i+1) <<"║  " << left << setw(16)  << list[i][0]  << "║  " << left << setw(30)  << list[i][1] << "║  " << left << setw(20)  << list[i][2] <<  "║" << endl;
            if(i == list.size()-1)
            {
                continue;
            }
            cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
        }

        cout << "╚════════════════════════════════════════════════════════════════════════════════╝" << endl;
    }
    else if(prefix == "MONITOR EVENT")
    {
        cout << "╔════════════════════════════════════════════════════════════════════════════════╗" << endl;
        cout << "║  " << left << setw(20)  << "CATEGORY"  << "  ║  " << left << setw(17)  << "OPERATIONS                    " << "║  " << left << setw(20)  << "STATUS" <<  "║" << endl;
        cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;

        for(int i  = 0 ; i < list.size() ; i++)
        {
            cout << "║ " << left << setw(4) << to_string(i+1) <<"║  " << left << setw(16)  << list[i][0]  << "║  " << left << setw(30)  << list[i][1] << "║  " << left << setw(20)  << list[i][2] <<  "║" << endl;
            if(i == list.size()-1)
            {
                continue;
            }
            cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
        }

        cout << "╚════════════════════════════════════════════════════════════════════════════════╝" << endl;
    }
}

void outputSetupDetails(const vector<vector<string>>& list, string prefix)
{
    cout << "╔════════════════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║  " << left << setw(20)  << "CATEGORY"  << "  ║  " << left << setw(53)  << "STATUS" << "║" << endl;
    cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;

    if(prefix == "VIEW")
    {
        for(int i  = 0 ; i < list.size() ; i++)
        {
            cout << "║  " << left << setw(22) << list[i][0] << "║  " << left << setw(53) << list[i][1] << "║" <<endl;
            if(i == list.size()-1)
            {
                continue;
            }
            cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
        }
    }
    else if(prefix == "MANAGE")
    {
        for(int i  = 0 ; i < list.size() ; i++)
        {
            cout << "║  " << left << setw(3) << to_string(i+1) << "║  " <<  left << setw(16) << list[i][0] << "║  " << left << setw(53) << list[i][1] << "║" <<endl;
            if(i == list.size()-1)
            {
                continue;
            }
            cout << "╠════════════════════════════════════════════════════════════════════════════════╣" << endl;
        }
    }

    cout << "╚════════════════════════════════════════════════════════════════════════════════╝" << endl;
}

void outputReport(const vector<vector<string>>& list, const vector<vector<string>>& generalList,const vector<vector<string>>& themeRecords, const vector<vector <string>>& extraInfo, string prefix)
{
    vector<CustomPackage<string>> customPackage = getVectorList<CustomPackage<string>>("customPackage.txt");
    vector<Theme<string>> themeList = getVectorList<Theme<string>>("theme.txt");
    vector<Package<string>> packageList = getVectorList<Package<string>>("packageList.txt");
    
    if(prefix == "REVENUE")
    {
        cout << "╔════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗" << endl;
        cout << "║  " << left <<setw(15) << "RECEIPT ID" << "║  " << left <<setw(15) << "CUSTOMER NAME" << "║  " << left << setw(15) << "ISSUE DATE" << 
        "║  " << left << setw(20) << "AMOUNT AFTER TAX" << "║  " << left << setw(15) << "PAYMENT STATUS" << "║  " << left << setw(15) << "PAYMENT TYPE" << "║" << endl;
        cout << "╠════════════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
        for(int i = 0;i < list.size();i++)
        {
            cout << "║  " << left <<setw(15) << list[i][0] << "║  " << left <<setw(15) << list[i][1] << "║  " << left << setw(15) << list[i][2] << 
            "║  " << left << setw(20) << list[i][3] << "║  " <<  left << setw(15) << list[i][4] << "║  " << left << setw(15) << list[i][5] << "║" << endl;
        }
        cout << "╚════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝" << endl;

        cout << "╔══════════════════════════════════════════════════╗" << endl;
        for(int i = 0;i < extraInfo.size();i++)
        {
            if(!extraInfo[i][0].empty())
            {
                cout << "║  " << left <<setw(25) << extraInfo[i][0] <<"║  "<< left <<setw(20) << extraInfo[i][1] << "║" << endl;
            }
        }
        cout << "╚══════════════════════════════════════════════════╝\n" << endl;
    }
    else if(prefix == "ITEM PERFORMANCE")
    {
        cout << "╔══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗" << endl;
        cout << "║  " << left <<setw(15) << "PACKAGE NAME" << "║  " << left <<setw(30) << "VENUE" << "║  " << left << setw(25) << "CATERING" << 
        "║  " << left << setw(15) << "TIMES CHOSEN" << "║  " << left << setw(15) << "PRICE" << "║" << endl;
        cout << "╠══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╣" << endl;
        for(int i = 0;i < list.size();i++)
        {
            cout << "║  " << left <<setw(15) << list[i][0] << "║  " << left <<setw(30) << list[i][1] << "║  " <<  left << setw(25) << list[i][2] << "║  " <<
            left << setw(15) << list[i][3] << "║  " <<  left << setw(15) << list[i][4] << "║" << endl;
        }
        cout << "╚══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n" << endl;

        cout << "╔═════════════════════════════════════════════════════╗" << endl;
        cout << "║  " << left <<setw(15) << "GENRAL ADD ON" << "║  " << left << setw(15) << "TIMES CHOSEN" << "║  " << left << setw(15) << "PRICE" << "║" << endl;
        cout << "╠═════════════════════════════════════════════════════╣" << endl;
        for(int i = 0;i < generalList.size();i++)
        {
            cout << "║  " << left <<setw(15) << generalList[i][0] << "║  " << left <<setw(15) << generalList[i][1] << "║  " <<  left << setw(15) << generalList[i][2] << "║" << endl;
        }
        cout << "╚═════════════════════════════════════════════════════╝\n" << endl;

        cout << "╔═══════════════════════════════════════════════════════════════════════════════════╗" << endl;
        cout << "║  " << left <<setw(45) << "CUSTOM THEME" << "║  " << left << setw(15) << "TIMES CHOSEN" << "║  " << left << setw(15) << "PRICE" << "║" << endl;
        cout << "╠═══════════════════════════════════════════════════════════════════════════════════╣" << endl;
        for(int i = 0;i < themeRecords.size();i++)
        {
            cout << "║  " << left <<setw(45) << themeRecords[i][0] << "║  " << left <<setw(15) << themeRecords[i][1] << "║  " <<  left << setw(15) << themeRecords[i][2] << "║" << endl;
        }
        cout << "╚═══════════════════════════════════════════════════════════════════════════════════╝\n" << endl;

        cout << "╔══════════════════════════════════════════════════╗" << endl;
        for(int i = 0;i < extraInfo.size();i++)
        {
            if(!extraInfo[i][0].empty())
            {
                cout << "║  " << left <<setw(25) << extraInfo[i][0] <<"║  "<< left <<setw(20) << extraInfo[i][1] << "║" << endl;
            }
        }
        cout << "╚══════════════════════════════════════════════════╝\n" << endl;
    }
    else if(prefix == "FEEDBACK")
    {
        cout << "╔═════════════════════════════════════════════════════╗" << endl;
        cout << "║  " << left <<setw(15) << "CUSTOMER NAME" << "║  " << left <<setw(15) << "RATING" <<"║  " <<  left << setw(15) << "FEEDBACK DATE" << "║" << endl;
        cout << "╠═════════════════════════════════════════════════════╣" << endl;
        for(int i = 0;i < list.size();i++)
        {
            cout << "║  " << left <<setw(15) << list[i][0] << "║  " << left <<setw(15) << list[i][1] <<"║  " << left << setw(15) << list[i][2] << "║" << endl;
        }
        cout << "╚═════════════════════════════════════════════════════╝\n" << endl;

        cout << "╔══════════════════════════════════════════════════╗" << endl;
        for(int i = 0;i < extraInfo.size();i++)
        {
            if(!extraInfo[i][0].empty())
            {
                cout << "║  " << left <<setw(25) << extraInfo[i][0] <<"║  "<< left <<setw(20) << extraInfo[i][1] << "║" << endl;
            }
        }
        cout << "╚══════════════════════════════════════════════════╝\n" << endl;
    }
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


template <typename T>
bool usernameExist(const vector<T>& list, const string& compareItem)
{
    string lowerCompareItem = compareItem;
    transform(lowerCompareItem.begin(), lowerCompareItem.end(), lowerCompareItem.begin(), ::tolower);

    string listValue;
    for(int i = 0; i < list.size(); i++)
    {
        listValue = list[i].username;
        transform(listValue.begin(), listValue.end(), listValue.begin(), ::tolower);
        if(listValue == lowerCompareItem)
        {
            return true;
        }
    }
    return false;
}

template <typename T>
bool nicknameExist(const vector<T>& list, const string& compareItem)
{
    string lowerCompareItem = compareItem;
    transform(lowerCompareItem.begin(), lowerCompareItem.end(), lowerCompareItem.begin(), ::tolower);

    string listValue;
    for(int i = 0; i < list.size(); i++)
    {
        listValue = list[i].nickname;
        transform(listValue.begin(), listValue.end(), listValue.begin(), ::tolower);
        if(listValue == lowerCompareItem)
        {
            return true;
        }
    }
    return false;
}

string removeTimeSuffix(const string& time)
{
    // Removes " AM" or " PM" if present
    if (time.size() > 3 && time[time.size()-3] == ' ')
        return time.substr(0, time.size() - 3);
    return time;
}

int timeToMinutes(const string& time)
{
    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));
    return hours * 60 + minutes;
}

// helper: parse duration from package safely
bool parseIntStrict(const std::string& s, int& out)
{
    try {
        size_t idx = 0;
        int v = std::stoi(s, &idx);
        if (idx != s.size()) return false; // extra chars not allowed
        out = v;
        return true;
    } catch (...) {
        return false;
    }
}


// returns true if any interval overlaps on that date
template <typename T>
bool dateExist(const std::vector<T>& list,
               const std::string& date,
               const std::string& newStartHHMM,
               int durationMinutes) // pass duration explicitly
{
    // convert input start and computed end into minutes
    int newStart = timeToMinutes(newStartHHMM); // must accept "HH:MM"
    int newEnd   = newStart + durationMinutes;

    for (const auto& item : list)
    {
        if (item.eventDate == date)
        {
            int existingStart = timeToMinutes(removeTimeSuffix(item.startTime));
            int existingEnd   = timeToMinutes(removeTimeSuffix(item.endTime));

            if (newStart < existingEnd && newEnd > existingStart)
            {
                return true;
            }
        }
    }
    return false;
}


template <typename T>
bool packageExist(const vector<T>& list, const string& packageName)
{
    string comparePackage = packageName;

    transform(comparePackage.begin(),comparePackage.end(),comparePackage.begin(),::tolower);
    for(int i = 0; i < list.size(); i++)
    {
        string listValue;
            listValue = list[i].packageType;
            transform(listValue.begin(),listValue.end(),listValue.begin(),::tolower);
            if(listValue == comparePackage)
            {
                return true;
            }
    }
    return false;
}

template <typename T>
bool customExist(const vector<T>& list,const string& customName)
{
    string compareCustom = customName;

    transform(compareCustom.begin(),compareCustom.end(),compareCustom.begin(),::tolower);

    for(int i = 0; i < list.size(); i++)
    {
        string listValue;

            listValue = list[i].item;
            transform(listValue.begin(),listValue.end(),listValue.begin(),::tolower);
            if(listValue == compareCustom)
            {
                return true;
            }
    }
    return false;
}

template <typename T>
bool themeExist(const vector<T>& list,const string& themeName)
{
    string comprareTheme = themeName;

    transform(comprareTheme.begin(),comprareTheme.end(),comprareTheme.begin(),::tolower);

    for(int i = 0; i < list.size(); i++)
    {
        string listValue;

            listValue = list[i].themeDescription;
            transform(listValue.begin(),listValue.end(),listValue.begin(),::tolower);
            if(listValue == comprareTheme)
            {
                return true;
            }
    }
    return false;
}

template <typename T>
bool campaignExist(const vector<T>& list,const string& camapaignName)
{
    string compareCampaign = camapaignName;

    transform(compareCampaign.begin(),compareCampaign.end(),compareCampaign.begin(),::tolower);
    for(int i = 0; i < list.size(); i++)
    {
        string listValue;
    
            listValue = list[i].contentTitle;
            transform(listValue.begin(),listValue.end(),listValue.begin(),::tolower);
            if(listValue == compareCampaign)
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
        if(r.registers.login.nickname == compareItem)
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

string replaceCommas(const string& s) 
{
    string result = s;
    replace(result.begin(), result.end(), ',', ';');
    return result;
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
void changePass(string name, int userIndex,string aspect);

void custMainPage(string nickname,int usernameIndex);
void custRegis(string name ,int userIndex);
void custViewBooking(string name,int usernameIndex);
void custViewCampaign(string name,int usernameIndex);
void custCustomParty(string name , int userIndex);
void custViewProfile(string name,int userIndex);
void custPayment(string receiptType,int registerIndex, int customIndex,string name,int usernameIndex);
void custFeedback(string name, int userIndex);
void customPartyGeneral(string name,int userIndexs, string receiptId);
void custCustomPartyOption(string name, int userIndex,string receiptId);
void customPartyCart(string name , int userIndex,string receiptID);
void addRemoveItem(string prefix,int userIndex,int ansIndex,int customIndex, string totalAmtString,string amtStatus);

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
        cout << "║  " << setfill(' ')<< left << setw(24)  << registerRecord[18][0] << " | " << left << setw(24)  << registerRecord[18][1] << " | " << left << setw(21)  << registerRecord[18][2] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //general add on items
        for(int i = 19 ; i < 23 ; i++)
        {
            if(registerRecord[i][0] != "EMPTY")
            {
                cout << "║  " << setfill(' ')<< left << setw(24)  << registerRecord[i][0] << " | " << left << setw(24)  << registerRecord[i][1] << " | " << left << setw(21)  << registerRecord[i][2] << "║" << endl;
                cout << "╠" << setfill('-') << setw(80) << right << "╣" << endl;
            }
        }

        //total guest amount
        cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[38][0] << " : " << left << setw(52) << registerRecord[38][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //general add on cost
        cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[23][0] << " : " << left << setw(10) << registerRecord[23][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //customize theme title
        cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[24][0] << left << setw(55) << registerRecord[24][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //customize theme's item name and item price's title
        cout << "║  " << setfill(' ')<< left << setw(49)  << registerRecord[25][0] << " | " << left << setw(23)  << registerRecord[25][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

        //customize theme's item name,item status and item price 
        cout << "║  " << setfill(' ')<< left << setw(49)  << registerRecord[26][0] << " | " << left << setw(23)  << registerRecord[26][1] << "║" << endl;
        cout << "╠" << setfill('-') << setw(80) << right << "╣" << endl;

        //total theme cost
        cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[27][0] << " : " << left << setw(10) << registerRecord[27][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;
    }
    else
    {
        //total guest amount
        cout << "║  " << setfill(' ')<< left << setw(20)  << registerRecord[38][0] << " : " << left << setw(52) << registerRecord[38][1] << "║" << endl;
        cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;
    }
        if(receiptType == "DEPOSIT")
        {
             //total bill with tax
            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[31][0]+" <DEDUCTED "+"RM"+registerRecord[36][1]+">" << " : " << left << setw(10) << registerRecord[31][1] << "║" << endl;

            cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[35][0] << " : " << left << setw(10) << registerRecord[35][1] << "║" << endl;
        }

        if(receiptType == "PAYMENT DONE")
        {
            cout << "║  " << setfill(' ')<< right << setw(60)  << registerRecord[33][0] << " : " << left << setw(12) << registerRecord[33][1] << "║" << endl;
            cout << "║  " << setfill(' ')<< right << setw(60)  << registerRecord[39][0] << " : " << left << setw(12) << registerRecord[39][1] << "║" << endl;
        }
       
       //deposit
       if(receiptType == "RECEIPT")
       {
            //subtotal
            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[28][0] << " : " << left << setw(10) << registerRecord[28][1] << "║" << endl;
            cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

            //bill before tax
            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[29][0] << " : " << left << setw(10) << registerRecord[29][1] << "║" << endl;

            //tax amount
            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[30][0] << " : " << left << setw(10) << registerRecord[30][1] << "║" << endl;

            //total bill with tax
            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[31][0] << " : " << left << setw(10) << registerRecord[31][1] << "║" << endl;
            
            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[32][0] << " : " << left << setw(10) << registerRecord[32][1] << "║" << endl;

            cout << "╠" << setfill('=') << setw(80) << right << "╣" << endl;

            cout << "║  " << setfill(' ')<< right << setw(62)  << registerRecord[34][0] << " : " << left << setw(10) << registerRecord[34][1] << "║" << endl;
       }
    //bottom line
    cout << "╚" << setfill('=') << setw(80) << right << "╝" << endl;
    cout << setfill(' ');
}

void staffMainPage(string nickname,int usernameIndex);
void staffMonitorEvent(string name, int staffIndex);
void staffManageItem(string name,int staffIndex);
void staffGenerateReport(string name, int staffIndex);
void staffViewFeedBack(string name, int staffIndex);
void staffCreateCampaign(string name, int staffIndex);
void staffManageOperation(string name, int staffIndex);
void manageOperation(string name, int staffIndex, string prefix);
void manageEvent(string name,int staffIndex, int registerIndex);
void manageItemOptions(string name,int staffIndex,string prefix);
void editItem(string name,int staffIndex,string prefix);
void editOptions(string name,int staffIndex,string prefix,int index);


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
    clear();;
    string loginAns;
    bool status = true;    

    mainLogo();

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
            clear();;
            tq();
            cout << "\nTHANKS FOR USING OUR SYSTEM :)" << endl;
            exit(0);
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER VALID OPTIONS <1 ~ 3> :)\n"<<endl;
            continue;
        }
        status = false;
    }
}

//Customer login page
void custPage()
{
    clear();;
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
            cout << "INVALID INPUT... PLEASE ENTER VALID OPTION :)\n"<< endl;
            continue;
        }
        status = false;
    }
}

//Staff login page
void staffPage()
{
    clear();;
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
            cout << "INVALID INPUT... PLEASE ENTER VALID OPTION :)\n"<< endl;
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
    Operation newOperation;

    cout << "\n";

    vector<LoginDetails> currentList;
    vector<Operation> operateList = getVectorList <Operation> ("operation.txt");
    
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

        if(l.username.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
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

        if(l.password.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        int usernameIndex = getIndex<LoginDetails>(currentList , l.username , [](LoginDetails ld){return ld.username;});
        int passIndex = getIndex<LoginDetails>(currentList , l.password , [](LoginDetails ld){return ld.password;});

        if(l.username == currentList[usernameIndex].username && l.password == currentList[passIndex].password)
        {
            l.nickname = currentList[usernameIndex].nickname;
            if(aspect == "customer")
            {
                addOperation(usernameIndex,"CUSTOMER LOGGED IN","LOG IN","customer");
                custMainPage(l.nickname,usernameIndex);
                status = false;
            }
            else
            {
                addOperation(usernameIndex,"STAFF LOGGED IN","LOG IN","staff");
                staffMainPage(l.nickname,usernameIndex);
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

    cout << "\n";

    m.menuTitle = "USERNAME <LESS THAN 20 CHARACTERS>";
    m.menuTitleTemplate();
    m.menuTitle = "ALLOW ALPHABET AND UNDERSCORE ONLY";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR USERNAME <0 to exit> : ";
        getline(cin,l.username);

        if(l.username == "0")
        {
            if(aspect == "customer") custPage();
            else staffPage();
            return;
        }

        if(l.username.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(usernameExist(currentList,l.username))
        {
            cout << "THE USERNAME HAVE BEEN USED :)\n"<<endl;
            continue;
        }

        regex usernamePattern("^[a-zA-Z0-9_]{1,20}$");
        if(!regex_match(l.username, usernamePattern))
        {
            cout << "INVALID USERNAME... ONLY ALLOW ALPHABET, UNDERSCORE AND MAX 20 CHARACTERS :)\n" << endl;
            continue;
        }

        tempArr[row][column++] = l.username;
        break;
    }

    m.menuTitle = "CONTACT NUMBER <ENTER WITH NUMBER>";
    m.menuTitleTemplate();
    m.menuTitle = "PLEASE FOLLOW THE FORMAT <xxx-xxxxxxx>";
    m.menuTitleTemplate();

    status = true;
    while(status)
    {
        cout << "PLEASE ENTER YOUR CONTACT NUMBER <0 to exit> : ";
        getline(cin,l.contactNum);

        if(l.contactNum == "0")
        {
            if(aspect == "customer") custPage();
            else staffPage();
            return;
        }

        if(l.contactNum.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        regex contactPattern("^01[0-9]{1}-[0-9]{7}$");
        if(!regex_match(l.contactNum, contactPattern))
        {
            cout << "INVALID INPUT... PLEASE USE THE FORMAT <xxx-xxxxxxx> :)\n" << endl;
            continue;
        }

        tempArr[row][column++] = l.contactNum;
        break;
    }

    m.menuTitle = "EMAIL <LESS THAN 30 CHARACTERS>";
    m.menuTitleTemplate();
    m.menuTitle = "PLEASE FOLLOW FORMAT <xxxxxxxxxx@xxxxx.com>";
    m.menuTitleTemplate();

    status = true;
    while(status)
    {
        cout << "PLEASE ENTER YOUR EMAIL <0 to exit> : ";
        getline(cin,l.email);

        if(l.email == "0")
        {
            if(aspect == "customer") custPage();
            else staffPage();
            return;
        }

        if(l.email.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" <<endl;
            continue;
        }
        

        regex emailPattern("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.com$");
        if(!regex_match(l.email,emailPattern))
        {
            cout << "INVALID INPUT... PLEASE FOLLOW FORMAT<xxxxxxxxxx@xxxxx.com> :)\n" << endl;
            continue;
        }
        else if(l.email.length() > 30)
        {
            cout << "INVALID INPUT... PLEASE ENTER LESS THAN 30 CHARACTERS :)\n"<<endl;
            continue;
        }

        tempArr[row][column++] = l.email;
        break;
    }

    m.menuTitle = "PASSWORD <LESS THAN 20 CHARACTERS>";
    m.menuTitleTemplate();

    status = true;
    while(status)
    {
        cout << "PLEASE ENTER PASSWORD <0 to exit> : ";
        getline(cin,l.password);

        if(l.password == "0")
        {
            if(aspect == "customer") custPage();
            else staffPage();
            return;
        }

        if(l.password.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(l.password.length() > 20)
        {
            cout << "INVALID INPUT...  PLEASE ENTER LESS THAN 20 CHARACTERS :)\n" << endl;
            continue;
        }

        m.menuTitle = "CONFIRM YOUR PASSWORD";
        m.menuTitleTemplate();

        cout << "PLEASE CONFIRM YOUR PASSWORD : ";
        getline(cin,confirmPass);

        if(confirmPass.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(confirmPass != l.password)
        {
            cout << "PASSWORD NOT MATCH... PLEASE TRY AGAIN :)\n" << endl;
            continue;
        }

        tempArr[row][column++] = l.password;
        break;
    }

    m.menuTitle = "NICKNAME <LESS THAN 20 CHARACTERS>";
    m.menuTitleTemplate();

    status = true;
    while(status)
    {
        cout << "PLEASE ENTER YOUR NICKNAME <0 to exit> : ";
        getline(cin,l.nickname);

        if(l.nickname == "0")
        {
            if(aspect == "customer") custPage();
            else staffPage();
            return;
        }

        if(l.nickname.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :) \n" << endl;
            continue;
        }

        if(l.nickname.length() > 20 )
        {
            cout << "INVAID INPUT... PLEASE ENTER LESS THAN 20 CHARACTERS :)\n" << endl;
            continue;
        }
        else if(nicknameExist(currentList,l.nickname))
        {
            cout << "THE NICKNAME HAVE BEEN USED BY OTHER PERSON :)\n" << endl;
            continue;
        }

        transform(l.nickname.begin(),l.nickname.end(),l.nickname.begin(),::toupper);
        tempArr[row][column++] = l.nickname;
        break;
    }

    tempArr[0][0] = l.username;
    tempArr[0][1] = l.password;
    tempArr[0][2] = l.nickname;
    tempArr[0][3] = l.contactNum;
    tempArr[0][4] = l.email;

    m.menuOptions.clear();
    for (int j = 0; j < 5; j++) {
        m.menuOptions.push_back(tempArr[0][j]);
    }
    m.menuTitle = "DETAILS CONFIRMATION";
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
            int currentIndex = currentList.size()-1;

            if(aspect == "customer")
            {
                saveVectorList(currentList,"customer.txt");
                addOperation(currentIndex,"CUSTOMER SIGN UP","SIGN UP","customer");
                custPage();
            }
            else
            {
                saveVectorList(currentList,"staff.txt");
                addOperation(currentIndex,"STAFF SIGN UP","SIGN UP","staff");
                staffPage();
            }
            status = false;
        }
        else if(confirmDetails == "N" || confirmDetails == "n")
        {
            cout << "ACCOUNTE CREATED UNSUCCESSFUL :(" << endl;
            pressAny();
            clear();;
            if(aspect == "customer") custPage();
            else staffPage();
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER VALID OPTION :)"<< endl;
            continue;
        }
    }
}

//Change password function
void changePass(string name, int userIndex,string aspect)
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
    m.menuTitle = "ENTER YOUR USERNAME";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR USERNAME TO CHANGE PASSWORD <0 to exit> : ";
        getline(cin,username);

        if(username == "0")
        {
            if(aspect == "customer")
            {
                custViewProfile(name,userIndex);
                status = false;
            }
            else
            {
                staffPage();
                status = false;
            }
        }

        if(username.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        index = getIndex<LoginDetails>(currentList , username , [](LoginDetails ld){return ld.username;});

        if(usernameExist(currentList , username))
        {
            cout << "YOU HAVE CHOSE <" << currentList[index].nickname << "> TO CHANGE PASSWORD :)\n"<<endl;
            status = false;
        }
        else
        {
            cout << "USERNAME DOES\'NT EXIST... PLEASE ENTER A VALID USERNAME :)\n" << endl;
            continue;
        }
        status = false;
    }

    status = true;
    m.menuTitle = "ENTER YOUR OLD PASSWORD";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR OLD PASSWORD <0 to exit> : ";
        getline(cin,pass);

        if(pass == "0")
        {
            custViewProfile(name,userIndex);
            status = false;
        }

        if(pass.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(currentList[index].password != pass)
        {
            cout << "PLEASE ENTER THE CORRECT OLD PASSWORD :)\n" << endl;
            continue;
        }
        else
        {
            status = false;
        }
        status = false;
    }

    status = true;
    m.menuTitle = "ENTER YOUR NEW PASSWORD";
    m.menuTitleTemplate();
     m.menuTitle = "MAXIMUM 15 CHARACTERS";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "\nPLEASE ENTER YOUR NEW PASSWORD <0 to exit> : ";
        getline(cin,newPass);

        if(newPass == "0")
        {
            custViewProfile(name,userIndex);
            status = false;
        }

        if(newPass.empty())
        {
            cout << "PELASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(newPass.length() > 15)
        {
            cout << "PLEASE LIMIT THE CHARACTER IN 15 WORDS ONLY :)\n" << endl;
            continue;
        }

        currentList[index].password = newPass;
        if(aspect == "customer")
        {
            addOperation(index,"CUSTOMER CHANGE PASS","CHANGE PASS","customer");
            saveVectorList(currentList,"customer.txt");
        }
        else
        {
            addOperation(index,"STAFF CHANGE PASS","CHANGE PASS","staff");
            saveVectorList(currentList,"staff.txt");
        }

        cout << "\n" << currentList[index].nickname << "\'s PASSWORD HAS CHANGED SUCCESSFULLY\n" << endl;

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
void custMainPage(string name,int usernameIndex)
{
    clear();;
    bool status = true;

    MenuTemplate <string> m;
    Operation newOperation;
    vector<LoginDetails> custList = getVectorList<LoginDetails>("customer.txt");
    vector<Campaign> campaignList = getVectorList<Campaign>("campaign.txt");
    vector<Operation> operateList = getVectorList<Operation>("operation.txt");

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
            custRegis(name , usernameIndex);
            status = false;
        }
        else if(ans == "2")
        {
            custViewBooking(name,usernameIndex);
            status = false;
        }
        else if(ans == "3")
        {
            custViewCampaign(name,usernameIndex);
            status = false;
        }
        else if(ans == "4")
        {
            custCustomParty(name , usernameIndex);
            status = false;
        }
        else if(ans == "5")
        {
            custViewProfile(name,usernameIndex);
            status = false;
        }
        else if(ans == "6")
        {
            custFeedback(name,usernameIndex);
            status = false;
        }
        else if(ans == "7")
        {
            cout << "\nARE YOU SURE YOU WANT TO LOG OUT ? <y/n> : ";
            getline(cin,confirmDetails);

            if(confirmDetails == "Y" || confirmDetails == "y")
            {
                addOperation(usernameIndex,"CUSTOMER LOGGED OUT","LOG OUT","customer");
                loginScreen();
                status = false;
            }
            else if(confirmDetails == "N" || confirmDetails == "n")
            {
                custMainPage(name,usernameIndex);
                status = false;
            }
            else
            {
                cout << "INVALID INPUT~~~ PLEASE CHOOSE VALID OPTION :)\n" <<endl;
                continue;
            }
            status = false;
        }
        else
        {
            cout << "INVALID INPUT~~~ PLEASE CHOOSE VALID OPTION :)\n" <<endl;
            continue;
        }
        status = false;
    }
}

//Staff main menu page
void staffMainPage(string name,int staffIndex)
{
    clear();;
    MenuTemplate <string> m;
    Operation newOperation;

    string confirmPass,confirmDetails;
    bool status = true;
    string ans;
    int feedbackCounter = 0;
    int bookCounter = 0;

    vector<Feedback> feedbackList = getVectorList<Feedback>("feedback.txt");
    vector<Operation> operateList = getVectorList<Operation>("operation.txt");
    vector<LoginDetails> staffList = getVectorList<LoginDetails>("staff.txt");
    vector<Registration<string>> registerList = getVectorList <Registration<string>> ("registration.txt");

    for(int i = 0;i < feedbackList.size();i++)
    {
        if(feedbackList[i].viewStatus == "VIEW PENDING")
        {
            feedbackCounter++;
        }
    }

    for(int i = 0;i < registerList.size();i++)
    {
        if(registerList[i].setupStatus != "SET UP DONE" && registerList[i].bookingStatus == "PAYMENT DONE")
        {
            bookCounter++;
        }
    }

    string fbCounterString = to_string(feedbackCounter);
    string viewFeedBack = "VIEW FEEDBACK { "+fbCounterString+" TO VIEW }";

    string bookCounterStr = to_string(bookCounter);
    string viewBooking = "MANAGE BOOKINGS { "+bookCounterStr+" TO MANAGE }";

    m.menuTitle = "MAIN MENU";

    cout << "USERNAME : " << name << "\n" << endl;

    m.menuOptions.push_back(viewBooking);
    m.menuOptions.push_back("MANAGE ITEMS");
    m.menuOptions.push_back("GENERATE REPORTS");
    m.menuOptions.push_back(viewFeedBack);
    m.menuOptions.push_back("CREATE CAMPAIGN");
    m.menuOptions.push_back("TRACK OPERATION");
    m.menuOptions.push_back("LOG OUT");

    m.menuTemplate();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE : ";
        getline(cin,ans);
        
        if(ans == "1")
        {
            staffMonitorEvent(name,staffIndex);
            status = false;
        }
        else if(ans == "2")
        {
            staffManageItem(name,staffIndex);
            status = false;
        }
        else if(ans == "3")
        {
            staffGenerateReport(name,staffIndex);
            status = false;
        }
        else if(ans == "4")
        {
            staffViewFeedBack(name,staffIndex);
            status = false;
        }
        else if(ans == "5")
        {
            staffCreateCampaign(name,staffIndex);
            status = false;
        }
        else if(ans == "6")
        {
            staffManageOperation(name,staffIndex);
            status = false;
        }
        else if(ans == "7")
        {
            cout << "\nARE YOU SURE YOU WANT TO LOG OUT ? <y/n> : ";
            getline(cin,confirmDetails);

            if(confirmDetails == "Y" || confirmDetails == "y")
            {
                addOperation(staffIndex,"STAFF LOGGED OUT","LOG OUT","staff");
                loginScreen();
                status = false;
            }
            else if(confirmDetails == "N" || confirmDetails == "n")
            {
                staffMainPage(name,staffIndex);
                status = false;
            }
            else
            {
                cout << "INVALID INPUT~~~ PLEASE CHOOSE VALID OPTION :)\n" <<endl;
                continue;
            }
            status = false;
        }
        else
        {
            cout << "INVALID INPUT~~~ PLEASE CHOOSE VALID OPTION :)\n" <<endl;
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

    outputPackage(packageRecord,packageIndex,"GENERAL");
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

void addReceiptDetails(string receiptType, int index, int customIndex)
{
    vector<Registration<string>> registeredList = getVectorList<Registration<string>>("registration.txt");
    vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");
    vector<Receipt> receiptList = getVectorList<Receipt>("receipt.txt");
    vector<Package<string>> packageList = getVectorList<Package<string>>("packageList.txt");
    vector<vector<string>> registerRecord;

    double amtBeforeTax = 0.0, taxAmt = 0.0, amtAfterTax = 0.0, totalGeneralAddOn = 0.0, depositAmt = 0.0;
    int packageIndex = -1;

    calculateAmount(amtBeforeTax, taxAmt, amtAfterTax, index, customIndex, totalGeneralAddOn, depositAmt);

    for (int i = 0; i < packageList.size(); i++)
    {
        if (registeredList[index].packageChosen == packageList[i].packageType)
        {
            packageIndex = i;
            break;
        }
    }

    string issueDates = getIssueDate();

    stringstream ssTotal, ssTax, ssFinal, ssGeneral, ssDeposit;
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

    int oriGuest = stoi(registeredList[index].guestAmount);
    int extraGuest = 0;

    if (customList[customIndex].item1 == "EXTRA GUEST")
    {
        extraGuest = stoi(customList[customIndex].item1Amt);
    }
    else if (customList[customIndex].item2 == "EXTRA GUEST")
    {
        extraGuest = stoi(customList[customIndex].item2Amt);
    }
    else if (customList[customIndex].item3 == "EXTRA GUEST")
    {
        extraGuest = stoi(customList[customIndex].item3Amt);
    }
    else if (customList[customIndex].item4 == "EXTRA GUEST")
    {
        extraGuest = stoi(customList[customIndex].item4Amt);
    }

    string totalGuestString = to_string(oriGuest + extraGuest);

    receiptList[index].registers.login.nickname = registeredList[index].login.nickname;
    receiptList[index].paymentStatus = registeredList[index].bookingStatus;
    receiptList[index].amtBeforeTax = amtBeforeTaxString;
    receiptList[index].taxAmt = taxAmtString;

    if (receiptList[index].amtAfterTax.empty())
    {
        receiptList[index].amtAfterTax = amtAfterTaxString;
    }
    if(receiptList[index].newAmtAfterTax.empty())
    {
        receiptList[index].newAmtAfterTax = "";
    }

    receiptList[index].issueDate = issueDates;
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
    receiptList[index].custom.item1Amt = customList[customIndex].item1Amt;
    receiptList[index].custom.item2 = customList[customIndex].item2;
    receiptList[index].custom.item2Price = customList[customIndex].item2Price;
    receiptList[index].custom.item2Amt = customList[customIndex].item2Amt;
    receiptList[index].custom.item3 = customList[customIndex].item3;
    receiptList[index].custom.item3Price = customList[customIndex].item3Price;
    receiptList[index].custom.item3Amt = customList[customIndex].item3Amt;
    receiptList[index].custom.item4 = customList[customIndex].item4;
    receiptList[index].custom.item4Price = customList[customIndex].item4Price;
    receiptList[index].custom.item4Amt = customList[customIndex].item4Amt;
    receiptList[index].totalGeneralAddOn = totalGeneralAddOnString;
    receiptList[index].totalGuestAmt = totalGuestString;
    receiptList[index].custom.themes.themeDescription = customList[customIndex].themes.themeDescription;
    receiptList[index].custom.themes.themePrice = customList[customIndex].themes.themePrice;
    receiptList[index].depositAmt = depositAmtString;


    if (receiptList[index].paymentType.empty())
    {
        receiptList[index].paymentType = "UNSPECIFIED";
    }

    saveVectorList(receiptList, "receipt.txt");

    registerRecord = {
                        {"RECEIPT ID",receiptList[index].receiptID,"",""},//0
                        {"ISSUE DATE",receiptList[index].issueDate,"",""},//1
                        {"PAYMENT STATUS",receiptList[index].paymentStatus,"",""},//2
                        {"CUSTOMER NAME",receiptList[index].registers.login.nickname,"",""},//3
                        {"EVENT DATE",receiptList[index].registers.eventDate,"",""},//4
                        {"EVENT START TIME",receiptList[index].registers.startTime,"",""},//5
                        {"EVENT END TIME",receiptList[index].registers.endTime,"",""},//6
                        {"PACKAGE CHOSEN",receiptList[index].registers.packageChosen,"",""},//7
                        {"VENUE",receiptList[index].package.venue,"",""},//8
                        {"CATERING",receiptList[index].package.catering,"",""},//9
                        {"DECORATION",receiptList[index].package.decoration,"",""},//10
                        {"ENTERTAINMENT",receiptList[index].package.entertaintment,"",""},//11
                        {"PARTY GIFT",receiptList[index].package.partyGift,"",""},//12
                        {"GUEST AMOUNT",receiptList[index].registers.guestAmount,"",""},//13
                        {"PRICE (RM)",receiptList[index].registers.totalCost,"",""},//14
                        {"SPECIAL REQUEST",receiptList[index].registers.specialRequest,"",""},//15
                        {"CUSTOM STATUS",receiptList[index].registers.customStatus,"",""},//16
                        {"GENERAL ADD ON","","",""},//17
                        {"ITEM","AMOUNT","PRICE",""},//18
                        {receiptList[index].custom.item1,receiptList[index].custom.item1Amt,receiptList[index].custom.item1Price,""},//19
                        {receiptList[index].custom.item2,receiptList[index].custom.item2Amt,receiptList[index].custom.item2Price,""},//20
                        {receiptList[index].custom.item3,receiptList[index].custom.item3Amt,receiptList[index].custom.item3Price,""},//21
                        {receiptList[index].custom.item4,receiptList[index].custom.item4Amt,receiptList[index].custom.item4Price,""},//22
                        {"PRICE (RM)",receiptList[index].totalGeneralAddOn,"",""},//23
                        {"CUSTOMIZE THEME","","",""},//24
                        {"ITEM","PRICE","",""},//25
                        {receiptList[index].custom.themes.themeDescription,receiptList[index].custom.themes.themePrice,"",""},//26
                        {"PRICE (RM)",receiptList[index].custom.themes.themePrice,"",""},//27
                        {"SUBTOTAL (RM)",receiptList[index].amtBeforeTax,"",""},//28
                        {"AMOUNT BEFORE TAX (RM)",receiptList[index].amtBeforeTax,"",""},//29
                        {"TAX (6 PERCENT) (RM)",receiptList[index].taxAmt,"",""},//30
                        {"TOTAL BILL (AFTER TAX) (RM)",receiptList[index].amtAfterTax,"",""},//31
                        {"DEPOSIT AMOUNT (20 PERCENT OF TOTAL BILL) (RM)",receiptList[index].depositAmt,"",""},//32
                        {"PAYMENT TYPE",receiptList[index].paymentType,"",""},//33
                        //deposit
                        {"AMOUNT NEED TO PAY (RM)",receiptList[index].depositAmt,"",""},//34
                        //full payment
                        {"AMOUNT NEED TO PAY (RM)",receiptList[index].newAmtAfterTax,"",""},//35
                        //deduct dposit
                        {"(-) DEPOSIT AMOUNT (RM)",receiptList[index].depositAmt,"",""},//36
                        {"ORIGINAL AMOUNT (RM)",amtAfterTaxString,"",""},//37
                        {"TOTAL GUEST AMOUNT",receiptList[index].totalGuestAmt,"",""},//38
                        {"TOTAL PAYED AMOUNT (RM)",amtAfterTaxString,"",""}//39
                    };
    printReceipt(registerRecord,index,receiptType);
}

//Customer main menu's registration event function
void custRegis(string name , int userIndex)
{
    clear();

    bool status = true;
    int row = 0,column =0;
    int packageIndex = 0;

    string confirmPackage;
    string ans;
    string registerId;
    string endTime;

    Registration<string> r;
    Registration<string> newResgister;

    MenuTemplate <string> m;

    m.menuTitle = "REGISTRATION SECTION";

    m.menuTitleTemplate();

    cout << "\n\n";
    
    Package <string> p;
    CustomList<string> newCustom;
    Receipt newReceipt;
    
    vector <LoginDetails> custList = getVectorList<LoginDetails>("customer.txt");
    vector<Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");
    vector<Package<string>> packageList = getVectorList<Package<string>>("packageList.txt");
    vector<vector<string>> packageRecord;
    vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");
    vector<Receipt> receiptList = getVectorList<Receipt>("receipt.txt");

    string receiptId = generateSerialNo("IN", receiptList, [](const Receipt& r) {return r.receiptID;});

    m.menuTitle = "PACKAGES";

    for(int i = 0; i < packageList.size();i++)
    {
        m.menuOptions.push_back(packageList[i].packageType);
    }

    while(status)
    {

        m.menuTemplate();

        cout << "PLEASE CHOOSE ANY PACKAGE SHOWN ABOVE <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            custMainPage(name,userIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        int ansInt = stoi(ans);
        packageIndex = ansInt-1;
        
        if(ansInt <= packageList.size() && ansInt > 0)
        {
            addPackageList(packageIndex);
        }
        else
        {
            cout << "INVALID INPUT... PLEASE NETER VALID OPTION :)\n" << endl;
            continue;
        }

        cout << "ARE YOU SURE YOU WANT THIS PACKAGE <y/n> ? : ";
        
        getline(cin, confirmPackage);

        if(confirmPackage.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

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

    status = true;

    m.menuTitle = "EVENT DATE";
    m.menuTitleTemplate();
    m.menuTitle = "PLEASE ENTER IN <YYYY-MM-DD>";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER THE EVENT DATE <0 to exit> : ";
        getline(cin , r.eventDate);

        if(r.eventDate == "0")
        {
            custMainPage(name,userIndex);
            status = false;
        }

        if(r.eventDate.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n"<<endl;
            continue;
        }

        regex dateFormat("^\\d{4}-(0[1-9]|1[0-2])-(0[1-9]|[12]\\d|3[01])$");

        if(!regex_match(r.eventDate,dateFormat))
        {
            cout << "INVALID INPUT... PLEASE FOLLOW FORMAT <YYYY-MM-DD> :)\n" << endl;
            continue;
        }  

        string today = getTodayDate();
        if (r.eventDate < today)
        {
            cout << "INVALID INPUT... PLEASE ENTER A DATE THAT IS TODAY OR IN THE FUTURE :)\n" << endl;
            continue;
        }


        status = false;
    }
    cout << "\n";
    m.menuTitle = "TIME <ENTER IN 24 HOURS FORMAT>";
    m.menuTitleTemplate();
    m.menuTitle = "PLEASE FOLLOW THE FORMAT <HH:MM>";
    m.menuTitleTemplate();

    status = true;

    while(status)
    {
        cout << "PLEASE ENTER THE EVENT TIME <0 to exit> : ";
        getline(cin , r.startTime);

        if(r.startTime == "0")
        {
            custMainPage(name,userIndex);
            status = false;
        }

        if(r.startTime.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY ;)\n" << endl;
            continue;
        }

        regex timeFormat("^([01]\\d|2[0-3]):[0-5]\\d$");

        if(!regex_match(r.startTime,timeFormat))
        {
            cout << "INVALID INPUT... PLEASE FOLLOW FORMAT <HH:MM> :)\n" << endl;
            continue;
        }  

        int timeDurationHours = stoi(packageList[packageIndex].timeDuration);
        int timeDurationMinutes = timeDurationHours * 60;

        if (dateExist(registerList, r.eventDate, r.startTime, timeDurationMinutes))
        {
            cout << "THE DATE & TIME HAVE BEEN BOOKED BY ANOTHER PERSON :)\n" << endl;
            continue;
        }

        r.startTime = timePrefix(r.startTime);
        endTime = addHoursToTime(r.startTime, stoi(packageList[packageIndex].timeDuration));
        status = false;
    }

    status = true;

    cout << "\n";
    m.menuTitle = "BIRTHDAY THEME NAME";
    m.menuTitleTemplate();
    m.menuTitle = "ENTER LESS THAN 20 CHARACTERS";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR BIRTHDAY THEME NAME <0 to exit> : ";
        getline(cin,r.birthdayName);

        if(r.birthdayName == "0")
        {
            custMainPage(name,userIndex);
            status = false;
        }

        if(r.birthdayName.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(r.birthdayName.length() > 20)
        {
            cout << "INVALID INPUT... PLEASE ENTER LESS THAN 20 CHARACTERS :)\n" << endl;
            continue;
        }
        transform(r.birthdayName.begin(),r.birthdayName.end(),r.birthdayName.begin(),::toupper);
        status = false;
    }

    status = true;

    cout << "\n";
    m.menuTitle = "CONTACT NUMBER <\'d\' to use default contact no>";
    m.menuTitleTemplate();
    m.menuTitle = "PLEASE FOLLOW THE FORMAT <xxx-xxxxxxx>";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR CONTACT NUMBER <0 to exit> : ";
        getline(cin,r.login.contactNum);

        if(r.login.contactNum == "0")
        {
            custMainPage(name,userIndex);
            status = false;
        }

        if(r.login.contactNum.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(r.login.contactNum == "D" || r.login.contactNum == "d")
        {
            r.login.contactNum = custList[userIndex].contactNum;
            status = false;
        }

        regex contactPattern("^01[0-9]{1}-[0-9]{7}$");
        if(!regex_match(r.login.contactNum,contactPattern))
        {
            cout << "INVALID INPUT... PLEASE FOLLOW FORMAT <xxx-xxxxxxx> :)\n" << endl;
            continue;
        }

        status = false;
    }

    status = true;

    cout << "\n";
    m.menuTitle = "EMAIL <\'d\' to use default email>";
    m.menuTitleTemplate();
    m.menuTitle = "PLEASE FOLLOW FORMAT <xxxxxxxxxx@xxxxx.com>";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER YOUR EMAIL <0 to exit> : ";
        getline(cin,r.login.email);

        if(r.login.email == "0")
        {
            custMainPage(name,userIndex);
            status = false;
        }

        if(r.login.email.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(r.login.email == "D" || r.login.email == "d")
        {
            r.login.email = custList[userIndex].email;
            status = false;
        }

        regex emailPattern("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.com$");
        if(!regex_match(r.login.email,emailPattern)&&r.login.email.length()>35)
        {
            cout << "INVALID INPUT... PLEASE FOLLOW FORMAT <xxxxxxxxxx@xxxxx.com> :)" << endl;
            cout << "PLEASE ENTER LESS THAN 35 CHAACTERS :)\n" <<endl;
            continue;
        }

        status = false;
    }

    status = true;

    cout << "\n";
    m.menuTitle = "GUEST AMOUNT <ENTER NUMBER>";
    m.menuTitleTemplate();
    m.menuTitle = "PLEASE ENTER AT LEAST 20 PEOPLE";
    m.menuTitleTemplate();
    m.menuTitle = "PLEASE ENTER LESS THAN 80 PEOPLE";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER GUEST AMOUNT <0 to exit> : ";
        getline(cin,r.guestAmount);

        if(r.guestAmount== "0")
        {
            custMainPage(name,userIndex);
            status = false;
        }

        if(r.guestAmount.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        regex guestFormat("^(?:[1-9]|[1-7][0-9])$");

        if(!regex_match(r.guestAmount , guestFormat))
        {
            cout << "PLEASE ENTER NUMBER AND WITHIN 20 TO 80 GUEST :)\n" << endl;
            continue;
        }
        int amt = stoi(r.guestAmount);
        if(amt < 20)
        {
            cout << "PLEASE ENTER AT LEAST 20 GUEST :)\n" << endl;
            continue;
        }
        else if(amt > 80)
        {
            cout << "PLEASE ENTER LESS THAN 80 GUEST :)\n" << endl;
            continue;
        }

        status = false;
    }

    status = true;

    cout << "\n";
    m.menuTitle = "SPECIAL REQUEST";
    m.menuTitleTemplate();
    m.menuTitle = "ENTER LESS THAN 60 CHARACTERS";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER SPECIAL REQUEST <0 to exit> : ";
        getline(cin,r.specialRequest);

        if(r.specialRequest== "0")
        {
            custMainPage(name,userIndex);
            status = false;
        }

        if(r.specialRequest.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(r.specialRequest.length()>60)
        {
            cout << "PLEASE DON\'T MORE THAN 60 CHARACTERS :)\n"<<endl;
            continue;
        }


        status = false;
    }

    // status = true;

    // m.menuTitle = "PACKAGES";

    // for(int i = 0; i < packageList.size();i++)
    // {
    //     m.menuOptions.push_back(packageList[i].packageType);
    // }

    // while(status)
    // {
    //     clear();;

    //     m.menuTemplate();

    //     cout << "PLEASE CHOOSE ANY PACKAGE SHOWN ABOVE <0 to exit> : ";
    //     getline(cin,ans);

    //     if(ans == "0")
    //     {
    //         custMainPage(name,userIndex);
    //         status = false;
    //     }

    //     if(ans.empty())
    //     {
    //         cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
    //         continue;
    //     }

    //     int ansInt = stoi(ans);
    //     packageIndex = ansInt-1;
    //     endTime = addHoursToTime(r.startTime, stoi(packageList[packageIndex].timeDuration));
    //     r.startTime = timePrefix(r.startTime);
    //     if(ansInt <= packageList.size() && ansInt > 0)
    //     {
    //         addPackageList(packageIndex);
    //     }
    //     else
    //     {
    //         cout << "INVALID INPUT... PLEASE NETER VALID OPTION :)\n" << endl;
    //         continue;
    //     }

    //     cout << "ARE YOU SURE YOU WANT THIS PACKAGE <y/n> ? : ";
        
    //     getline(cin, confirmPackage);

    //     if(confirmPackage.empty())
    //     {
    //         cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
    //         continue;
    //     }

    //     if(confirmPackage == "Y" || confirmPackage == "y")
    //     {
    //         r.packageChosen = packageList[packageIndex].packageType;
    //     }
    //     else if(confirmPackage == "N" || confirmPackage == "n")
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         cout << "INVALID INPUT... PLEASE ENTER <y/n> ONKY :)\n" << endl;
    //         continue;
    //     }
    //     status = false;
    // }   
    clear();

    vector<vector<string>> confirmRecord;

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
 
    outputConfirm(confirmRecord,"BOOKING CONFIRMATION");

    status = true;
    string confirmation;
    registerId = generateSerialNo("RE", registerList, [](const Registration<string>& r) {return r.serialNum;});


    while(status)
    {
        cout << "ARE YOU SURE ALL THE DETAILS SHOWN ABOVE ARE CORRECT ? <y/n> : ";
        getline(cin , confirmation);

        if(confirmation.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }
        if(confirmation == "Y" || confirmation == "y")
        {
            newResgister.serialNum = registerId;
            newResgister.login.nickname = custList[userIndex].nickname;
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
            newResgister.setupStatus = "SET UP PENDING";
            newResgister.staffCateringStatus = "CATERING PENDING";
            newResgister.staffDecorationStatus = "DECORATION PENDING";
            newResgister.staffEntertainmentStatus = "ENTERTAINMENT PENDING";
            newResgister.staffPartyItem = "PARTY ITEM PENDING";
            newResgister.orderStatus = "FALSE";
            newResgister.feedbackStatus = "FALSE";
            newResgister.doneCount = "0";
            registerList.push_back(newResgister);
            saveVectorList(registerList,"registration.txt");
            saveVectorList(packageList,"packageList.txt");

            newCustom.registers.serialNum = registerId;
            newCustom.item1 = "EMPTY";
            newCustom.item1Price = "0.00";
            newCustom.item1Amt = "0";
            newCustom.amt1Status = "FALSE";
            newCustom.item1Status = "FALSE";
            newCustom.item2 = "EMPTY";
            newCustom.item2Price = "0.00";
            newCustom.item2Amt = "0";
            newCustom.amt2Status = "FALSE";
            newCustom.item2Status = "FALSE";
            newCustom.item3 = "EMPTY";
            newCustom.item3Price = "0.00";
            newCustom.item3Amt = "0";
            newCustom.amt3Status = "FALSE";
            newCustom.item3Status = "FALSE";
            newCustom.item4 = "EMPTY";
            newCustom.item4Price = "0.00";
            newCustom.item4Amt = "0";
            newCustom.amt4Status = "FALSE";
            newCustom.item4Status = "FALSE";
            newCustom.themes.themeDescription = "EMPTY";
            newCustom.themes.themePrice = "0.00";
            newCustom.themes.themeStatus = "FALSE";
            customList.push_back(newCustom);

            newReceipt.receiptID = receiptId;
            newReceipt.registers.login.nickname = "";
            newReceipt.paymentStatus = "";
            newReceipt.issueDate = "";
            newReceipt.amtBeforeTax = "";
            newReceipt.taxAmt = "";
            newReceipt.amtAfterTax = "";
            newReceipt.registers.eventDate = "";
            newReceipt.registers.startTime = "";
            newReceipt.registers.endTime = "";
            newReceipt.registers.birthdayName = "";
            newReceipt.registers.login.contactNum = "";
            newReceipt.registers.login.email = "";
            newReceipt.registers.packageChosen = ""; 
            newReceipt.package.venue = "";
            newReceipt.package.catering = "";
            newReceipt.package.decoration = "";
            newReceipt.package.entertaintment = "";
            newReceipt.package.partyGift = "";
            newReceipt.registers.totalCost = ""; 
            newReceipt.registers.guestAmount = "";    
            newReceipt.registers.specialRequest = "";  
            newReceipt.registers.customStatus = "";
            newReceipt.custom.item1 = "";  
            newReceipt.custom.item1Price = "";  
            newReceipt.custom.item1Amt = "";
            newReceipt.custom.item2 = "";  
            newReceipt.custom.item2Price = ""; 
            newReceipt.custom.item2Amt = ""; 
            newReceipt.custom.item3 = "";  
            newReceipt.custom.item3Price = ""; 
            newReceipt.custom.item3Amt = ""; 
            newReceipt.custom.item4 = "";  
            newReceipt.custom.item4Price = "";  
            newReceipt.custom.item4Amt = "";
            newReceipt.totalGeneralAddOn = "";
            newReceipt.totalGuestAmt = "";
            newReceipt.custom.themes.themeDescription = "";
            newReceipt.custom.themes.themePrice = "";
            newReceipt.depositAmt = "";
            newReceipt.paymentType = "";
            receiptList.push_back(newReceipt);
            saveVectorList(receiptList,"receipt.txt");

            int registerIndex = getIndex<Registration<string>>(registerList, receiptId , [](Registration<string>r){return r.serialNum;});
            int customIndex = getIndex<CustomList<string>>(customList, receiptId , [](CustomList<string> c ){return c.registers.serialNum;});

            addOperation(userIndex,"CUSTOMER REGISTER EVENT","CUSTOMER OPERATION","customer");
            saveVectorList(customList,"customList.txt");
            cout << "BOOKING MADE SUCCESSFULLY~~~ :)"<<endl;
            pressAny();
            status = false;
        }
        else if(confirmation == "N" || confirmation == "n")
        {
            cout << "BOOKING MADE UNSUCCESSFULL~~~ :(\n"<<endl;;
            pressAny();
            custMainPage(name,userIndex);
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
            custMainPage(name,userIndex);
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

void cancelAlert(string name, int registerIndex,int usernameIndex)
{
    bool status = true;
    int counter;
    string ans;

    vector<Registration<string>> registeredList = getVectorList <Registration<string>>("registration.txt");
    vector<CustomList<string>> customList = getVectorList <CustomList<string>> ("customList.txt");
    vector<Receipt> receiptList = getVectorList <Receipt> ("receipt.txt");
    vector<Operation> operateList = getVectorList <Operation> ("operation.txt");

    cout << "\n\n* * * * * * * * * * * * WARNING * * * * * * * * * * * *" << endl;
    cout << "*                                                     *" << endl;
    cout << "*  ARE YOU SURE YOU WANT TO CANCEL YOUR BOOKING ????  *" << endl;
    cout << "*        YOU WILL LOST YOU DEPOSIT MONEY !!!          *" << endl;
    cout << "*                                                     *" << endl;
    cout << "* * * * * * * * * * * * WARNING * * * * * * * * * * * *\n" << endl;

    while(status)
    {
        cout << "ARE UYOU SURE YOU WANT TO CANCEL YOU BOOKING ? <y/n>" ;
        getline(cin,ans);

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(ans == "N" || ans == "n")
        {
            cout << "CANCEL BOOKING UNSUCCESSFUL......"<< endl;
            pressAny();
            custMainPage(name,usernameIndex);
            status = false;
        }
        else if(ans == "Y" || ans == "y")
        {
            cout << "YOU HAVE CANCELED SUCCESSFULLY....."<<endl;
            cout << "YOU HAVE CANCELED YOUR <" << registeredList[registerIndex].serialNum << "> BOOKING AND LOST YOUR RM" << receiptList[registerIndex].depositAmt << " :)"<<endl;
            addOperation(usernameIndex,"CANCEL <"+registeredList[registerIndex].serialNum +"> BOOKING","CUSTOMER OPERATION","CUSTOMER");
            pressAny();
            customList.erase(customList.begin()+registerIndex),
            registeredList.erase(registeredList.begin()+registerIndex);
            receiptList.erase(receiptList.begin()+registerIndex);
            saveVectorList(operateList,"operation.txt");
            saveVectorList(customList,"customList.txt");
            saveVectorList(registeredList,"registration.txt");
            saveVectorList(receiptList,"receipt.txt");
            custMainPage(name,usernameIndex);
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER VALID OPTION :)\n" << endl;
            continue;
        }
        status = false;
    }
}

void viewSetUp(string name,int usernameIndex, int registerIndex, int customIndex)
{
    MenuTemplate <string> m;

    bool status = true;
    string ans;
    clear();;

    vector <Registration<string>> registerList = getVectorList <Registration<string>> ("registration.txt");
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");
    vector <vector<string>> setupRecords;

    setupRecords = 
    {
        {"CATERING",registerList[registerIndex].staffCateringStatus},
        {"DECORATION",registerList[registerIndex].staffDecorationStatus},
        {"ENTERATAINMENT",registerList[registerIndex].staffEntertainmentStatus},
        {"PARTY ITEM",registerList[registerIndex].staffPartyItem}
    };

    m.menuTitle = "VIEW BOOKING SECTION";
    m.menuTitleTemplate();

    m.menuTitle = "MAINE MENU";
    m.menuOptions.push_back("VIEW RECEIPT");
    m.menuOptions.push_back("VIEW SET UP STATUS");

    m.menuTemplate();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            custViewBooking(name,usernameIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(ans == "1")
        {
            clear();;
            addReceiptDetails("PAYMENT DONE",registerIndex, customIndex);
            cout << "THANKS FOR TRUSTING US :)\n"<<endl;
            addOperation(usernameIndex,"VIEWED <"+registerList[registerIndex].serialNum +"> RECEIPT","CUSTOMER OPERATION","CUSTOMER");
            saveVectorList(operateList,"operation.txt");
            pressAny();
            viewSetUp(name, usernameIndex, registerIndex, customIndex);
            status = false;
        }
        else if(ans == "2")
        {
            if(registerList[registerIndex].setupStatus == "SET UP PENDING")
            {
                clear();;
                cout << "\nTO VIEW SET UP STATUS DETAILS"<<endl;
                pressAny();
                part1();
                cout << "\n";
                outputSetupDetails(setupRecords,"VIEW");
                cout << "\nWE HAVE START PREPARING YOUR BIRTDAY EVENT ALREADY"<<endl;
                cout << "WE\'LL BE DONE AS SOON AS POSSIBLE :)"<<endl;
                addOperation(usernameIndex,"VIEWED <"+registerList[registerIndex].serialNum +"> SET UP","CUSTOMER OPERATION","CUSTOMER");
                saveVectorList(operateList,"operation.txt");
                pressAny();
                viewSetUp(name, usernameIndex, registerIndex, customIndex);
                status = false;
            }
            else if(registerList[registerIndex].setupStatus == "SET UP HALFWAY")
            {
                clear();;
                cout << "\nTO VIEW SET UP STATUS DETAILS"<<endl;
                pressAny();
                part2();
                cout << "\n";
                outputSetupDetails(setupRecords,"VIEW");
                cout << "\nYOUR BIRTYDAY PARTY DONE 50 PERCENTS ALREADY :)"<<endl;
                cout << "WE\'LL BE DONE AS SOON AS POSSIBLE :)"<<endl;
                addOperation(usernameIndex,"VIEWED <"+registerList[registerIndex].serialNum +"> SET UP","CUSTOMER OPERATION","CUSTOMER");
                saveVectorList(operateList,"operation.txt");
                pressAny();
                viewSetUp(name, usernameIndex, registerIndex, customIndex);
                status = false;
            }
            else if(registerList[registerIndex].setupStatus == "SET UP DONE")
            {
                clear();;
                cout << "\nTO VIEW SET UP STATUS DETAILS"<<endl;
                pressAny();
                part3();
                cout << "\n";
                outputSetupDetails(setupRecords,"VIEW");
                cout << "ALL DONE !!! HOPE YOU HAVE A GREAT BIRTHDAY PARTY :)"<<endl;
                addOperation(usernameIndex,"VIEWED <"+registerList[registerIndex].serialNum +"> SET UP","CUSTOMER OPERATION","CUSTOMER");
                saveVectorList(operateList,"operation.txt");
                pressAny();
                viewSetUp(name, usernameIndex, registerIndex, customIndex);
                status = false;
            }
            status = false;
        }
        else
        {
            cout << "INVALID INPUT.... PLEASE ENTER AGAIN...\n"<< endl;
            continue;
        }

        status = false;
    }
}

//Customer view booking function
void custViewBooking(string name,int usernameIndex)
{
    bool status = true,innerStatus = true;
    int registerIndex, customIndex;
    string ans,payOrCancel;

    clear();;

    MenuTemplate <string> m;

    vector<vector<pair<string,string>>> bookingRecords;
    vector <Operation> operateList = getVectorList<Operation> ("operation.txt");
    vector<vector<string>> registerRecord;
    vector<string> headers = {"RECEIPT ID","USERNAME","STATUS","CUSTOMIZE","SET UP"};
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
        string setupStatus;
        if(name == registeredList[i].login.nickname)
        {
            reId = registeredList[i].serialNum;
            userName = registeredList[i].login.nickname;;
            status = registeredList[i].bookingStatus;
            customStatus = registeredList[i].customStatus;
            setupStatus = registeredList[i].setupStatus;
        }

        if(registeredList[i].bookingStatus == "PAYMENT DONE")
        {
            bookingRecords.push_back
            (
                {   
                    {headers[0],reId},
                    {headers[1],userName},
                    {headers[2],status},
                    {headers[3],customStatus},
                    {headers[4],setupStatus}
                }
            );
        }
        else
        {
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
    }

    if(registeredList.size() == 0)
    {
        cout << "\nYOU HAVEN\'T MAKE ANY BOOKING YET :)\n";
        pressAny();
        custMainPage(name,usernameIndex);
    }

    printRecords(bookingRecords);
    cout << "THESE ARE THE CURRENT BOOKINGS YOU HAVE MADE :)\n"<<endl;

    while(status)
    {
        cout << "PLEASE CHOOSE ANY BOOKING TO VIEW THE DETAILS <enter RECEIPT ID> <0 to exit> : ";
        getline(cin , ans);

        registerIndex = getIndex<Registration<string>>(registeredList, ans , [](Registration<string>r){return r.serialNum;});
        customIndex = getIndex<CustomList<string>>(customList, ans , [](CustomList<string> c ){return c.registers.serialNum;});

        string compareAns = ans;
        transform(compareAns.begin(),compareAns.end(),compareAns.begin(),::toupper);

        if(ans == "0")
        {
            custMainPage(name,usernameIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if (registerIndex != -1 && registeredList[registerIndex].login.nickname == name) 
        {
            if(registeredList[registerIndex].bookingStatus == "PAYMENT PENDING")
            {
                addOperation(usernameIndex,"VIEWED <"+registeredList[registerIndex].serialNum +"> BOOKING","CUSTOMER OPERATION","CUSTOMER");
                saveVectorList(operateList,"operation.txt");
                addReceiptDetails("RECEIPT",registerIndex,customIndex);
                custPayment("RECEIPT",registerIndex,customIndex,name,usernameIndex);
                status = false;
            }
            else if(registeredList[registerIndex].bookingStatus == "DEPOSIT DONE")
            {
                addReceiptDetails("DEPOSIT",registerIndex,customIndex);
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
                        cancelAlert(name,registerIndex,usernameIndex);
                        innerStatus = false;
                    }
                    else
                    {
                        cout << "PLEASE ENTER A VALID OPTION :)\n"<<endl;
                        continue;
                    }
                    innerStatus = false;
                }
                
                custPayment("DEPOSIT",registerIndex,customIndex,name,usernameIndex);
                status = false;
            }
            else if(registeredList[registerIndex].bookingStatus == "PAYMENT DONE")
            {
                viewSetUp(name,usernameIndex,registerIndex,customIndex);
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
void custViewCampaign(string name,int usernameIndex)
{
    MenuTemplate <string> m;

    string ans;
    bool status = true;

    vector<vector<string>> campaignRecord;
    vector <string> headers = {"CAMPAIGN ID","CAMPAIGN TITLE","CAMPAIGN CONTENT"}; 
    vector<Campaign> campaignList = getVectorList<Campaign>("campaign.txt");
    vector <Operation> operateList = getVectorList<Operation> ("operation.txt");

    clear();;

    m.menuTitle = "VIEW CAMPAGIN";
    m.menuTitleTemplate();

    outoutCampaignList();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY CAMPAIGN TO VIEW <0 to exit> <enter the number> : ";
        getline(cin, ans);

        if(ans == "0")
        {
            custMainPage(name, usernameIndex);
            status = false;
        }

        if(ans.empty() || !regex_match(ans, regex("^[0-9]+$")))
        {
            cout << "PLEASE ENTER A VALID NUMBER ONLY :)\n" << endl;
            continue;
        }

        int ansInt = stoi(ans);
        int campaignIndex = ansInt - 1;

        if(ansInt >= 1 && ansInt <= campaignList.size())  // inclusive check
        {
            campaignRecord = {
                {headers[0], campaignList[campaignIndex].campaignId},
                {headers[1],replaceCommas(campaignList[campaignIndex].contentTitle)},
                {headers[2],replaceCommas(campaignList[campaignIndex].content)}
            };

            outputCampaign(campaignRecord, "VIEW CAMPAIGN", campaignIndex);
            addOperation(usernameIndex,"VIEWED <"+campaignList[campaignIndex].campaignId +"> CAMPAIGN","CUSTOMER OPERATION","CUSTOMER");
            saveVectorList(operateList,"operation.txt");
            pressAny();
            custViewCampaign(name, usernameIndex);
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER BETWEEN 1 TO " << campaignList.size() << " :)\n" << endl;
            continue;
        }

        status = false;
    }
}

void manageCart(string name,string category,int userIndex,int customIndex,string receiptID,string prefix)
{
    int ansIndex;
    bool status = true,innerStatus = true;
    string ans,chosenItem,ans1,newAmt;

    vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");

    if(prefix == "REMOVE")
    {
        cout << "YOU HAVE CHOSE <" << category << "> CATEGORY TO REMOVE ITEM\n" << endl;
        while(status)
        {
            if(category == "GENERAL ADD ON")
            {
                cout << "PLEASE ENTER WHICH ITEM TO REMOVE <enter a number> <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    customPartyCart(name,userIndex,receiptID);
                    status = false;
                }
                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                ansIndex = stoi(ans);

                if(ans == "1" && customList[customIndex].item1Status == "FALSE")
                {
                    cout << "CHOSEN SLOT HAVE ALREADY EMPTY :)\n" << endl;
                    continue;
                }
                else if(ans == "2" && customList[customIndex].item2Status == "FALSE")
                {
                    cout << "CHOSEN SLOT HAVE ALREADY EMPTY :)\n" << endl;
                    continue;
                }
                else if(ans == "3" && customList[customIndex].item3Status == "FALSE")
                {
                    cout << "CHOSEN SLOT HAVE ALREADY EMPTY :)\n" << endl;
                    continue;
                }
                else if(ans == "4" && customList[customIndex].item4Status == "FALSE")
                {
                    cout << "CHOSEN SLOT HAVE ALREADY EMPTY :)\n" << endl;
                    continue;
                }
                else
                {
                    addRemoveItem("REMOVE",userIndex,ansIndex,customIndex,"0","FALSE");
                    pressAny();
                    custCustomPartyOption(name,userIndex,receiptID);
                    status = false;
                }

                if(ansIndex < 1 || ansIndex > customList.size())
                {
                    cout << "PLEASE ENTER A POSITIVE NUMBER BETWEEN <1 to " << customList.size() << "> :)\n"<<endl;
                    continue;
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

                if(chosenItem.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(chosenItem == "Y" || chosenItem == "y")
                {
                    addRemoveItem("REMOVE",userIndex,ansIndex,customIndex,"0","FALSE");
                    cout << "YOU HAVE SUCCESSFULLY REMOVED <" <<  category <<"> :)\n" <<endl;
                    addOperation(userIndex,"REMOVED CUSTOM ITEM","CUSTOMER OPERATION","CUSTOMER");
                    saveVectorList(operateList,"operation.txt");
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
    else if(prefix == "CHANGE AMOUNT")
    {
        cout << "YOU HAVE CHOSE <" << category << "> CATEGORY TO CHANGE ITEM\'S AMOUNT\n" << endl;
        while(status)
        {
            if(category == "GENERAL ADD ON")
            {
                cout << "PLEASE ENTER WHICH ITEM TO CHANGE AMOUNT <0 to exit> : ";
                getline(cin,ans1);

                if(ans1 == "0")
                {
                    customPartyCart(name,userIndex,receiptID);
                    status = false;
                }

                if(ans1.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(ans1 == "1" && customList[customIndex].amt1Status == "TRUE")
                {
                    while(innerStatus)
                    {
                        cout << "PLEASE ENTER NEW AMOUNT : ";
                        getline(cin,newAmt);

                        cout << "YOU HAVE CHANGED THE AMOUNT SUCCESSFULLY... :)\n"<<endl;
                        addOperation(userIndex,"CHANGED CUSTOM ITEM\'S AMOUNT","CUSTOMER OPERATION","CUSTOMER");
                        saveVectorList(operateList,"operation.txt");
                        customList[customIndex].item1Amt = newAmt;
                        saveVectorList(customList,"customList.txt");
                        pressAny();
                        customPartyCart(name ,userIndex,receiptID);
                        innerStatus = false;
                    }
                }
                else if(ans1 == "2" && customList[customIndex].amt2Status == "TRUE")
                {
                    while(innerStatus)
                    {
                        cout << "PLEASE ENTER NEW AMOUNT : ";
                        getline(cin,newAmt);

                        cout << "YOU HAVE CHANGED THE AMOUNT SUCCESSFULLY... :)\n"<<endl;
                        addOperation(userIndex,"CHANGED CUSTOM ITEM\'S AMOUNT","CUSTOMER OPERATION","CUSTOMER");
                        saveVectorList(operateList,"operation.txt");
                        customList[customIndex].item2Amt = newAmt;
                        saveVectorList(customList,"customList.txt");
                        pressAny();
                        customPartyCart(name ,userIndex,receiptID);
                        innerStatus = false;
                    }
                }
                else if(ans1 == "3" && customList[customIndex].amt3Status == "TRUE")
                {
                    while(innerStatus)
                    {
                        cout << "PLEASE ENTER NEW AMOUNT : ";
                        getline(cin,newAmt);

                        cout << "YOU HAVE CHANGED THE AMOUNT SUCCESSFULLY... :)\n"<<endl;
                        addOperation(userIndex,"CHANGED CUSTOM ITEM\'S AMOUNT","CUSTOMER OPERATION","CUSTOMER");
                        saveVectorList(operateList,"operation.txt");
                        customList[customIndex].item3Amt = newAmt;
                        saveVectorList(customList,"customList.txt");
                        pressAny();
                        customPartyCart(name ,userIndex,receiptID);
                        innerStatus = false;
                    }
                }
                else if(ans1 == "4" && customList[customIndex].amt4Status == "TRUE")
                {
                    while(innerStatus)
                    {
                        cout << "PLEASE ENTER NEW AMOUNT : ";
                        getline(cin,newAmt);

                        cout << "YOU HAVE CHANGED THE AMOUNT SUCCESSFULLY... :)\n"<<endl;
                        addOperation(userIndex,"CHANGED CUSTOM ITEM\'S AMOUNT","CUSTOMER OPERATION","CUSTOMER");
                        saveVectorList(operateList,"operation.txt");
                        customList[customIndex].item4Amt = newAmt;
                        saveVectorList(customList,"customList.txt");
                        pressAny();
                        customPartyCart(name ,userIndex,receiptID);
                        innerStatus = false;
                    }
                }
                else
                {
                    cout << "THE CHOSEN ITEM\'S AMOUNT CAN\'T BE CHANGE :)\n"<<endl;
                    continue;
                }
            }
            else
            {
                cout << "THE CHOSEN ITEM\'S AMOUNT CAN\'T BE CHANGE :)\n"<<endl;
                continue;
            }
            status = false;
        }
    }
}       

void customPartyCart(string name , int userIndex,string receiptID)
{
    bool status = true;
    bool innerstatus = true;
    string ans,removeItem,changeAmt;
    MenuTemplate <string> m;

    clear();;

    m.menuTitle = "CUSTOMIZE ITEM'S CART";
    m.menuTitleTemplate();

    vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");
    vector<Theme<string>> themeList = getVectorList<Theme<string>>("theme.txt");
    vector<Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");

    int customIndex = getIndex<CustomList<string>>(customList , receiptID , [](CustomList<string> cl){return cl.registers.serialNum;});

    if(customList[customIndex].item1Status == "FALSE" && customList[customIndex].item2Status == "FALSE" && customList[customIndex].item3Status == "FALSE" && 
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

    m.menuTitle = "CART OPTIONS";
    m.menuOptions.push_back("REMOVE ITEM");
    m.menuOptions.push_back("CHANGE AMOUNT");

    m.menuTemplate();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            custCustomPartyOption(name,userIndex,receiptID);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(ans == "1")
        {
            while(innerstatus)
            {
                cout << "PLEASE CHOOSE THE CATEGORY <g = GENERAL ADD ON / t = CUSTOMIZE THEME> : ";
                getline(cin,removeItem);

                if(removeItem.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(removeItem == "g" || removeItem == "G")
                {
                    if(customList[customIndex].item1Status == "FALSE" && customList[customIndex].item2Status == "FALSE" &&customList[customIndex].item3Status == "FALSE" &&customList[customIndex].item4Status == "FALSE")
                    {
                        cout << "YOUR GENERAL ADD ON SECTION HAVE ALREADY EMPTY :)\n" <<endl;
                        continue;
                    }
                    manageCart(name,"GENERAL ADD ON",userIndex,customIndex,receiptID,"REMOVE");
                    innerstatus = false;
                }
                
                if(removeItem == "T" || removeItem == "t")
                {
                    if(customList[customIndex].themes.themeStatus == "FALSE")
                    {
                        cout << "YOUR CUSTOMIZE THEME SECTION HAVE ALREADY EMPTY :)\n" <<endl;
                        continue;
                    }
                    manageCart(name,"CUSTOMIZE THEME",userIndex,customIndex,receiptID,"REMOVE");
                    innerstatus = false;
                }
                else
                {
                    cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :)\n" << endl;
                    continue;
                }
                innerstatus = false;
            }
        }
        else if(ans == "2")
        {
            manageCart(name,"GENERAL ADD ON",userIndex,customIndex,receiptID,"CHANGE AMOUNT");
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

void addRemoveItem(string prefix,int userIndex,int ansIndex,int customIndex, string totalAmtString,string amtStatus)
{
        vector<CustomPackage<string>> customPackage = getVectorList<CustomPackage<string>>("customPackage.txt");
        vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");
        vector<Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");
        vector<Theme<string>> themeList = getVectorList<Theme<string>>("theme.txt");
        
    if(prefix == "ADD")
    {
        // Find the first empty slot and fill it
        if(customList[customIndex].item1 == "EMPTY")
        {
            customList[customIndex].item1 = customPackage[ansIndex].item;
            customList[customIndex].item1Price = customPackage[ansIndex].itemPrice;
            customList[customIndex].item1Amt = totalAmtString;
            customList[customIndex].item1Status = "TRUE";
            if(amtStatus == "TRUE")
            {
                customList[customIndex].amt1Status = "TRUE";
            }
        }
        else if(customList[customIndex].item2 == "EMPTY")
        {
            customList[customIndex].item2 = customPackage[ansIndex].item;
            customList[customIndex].item2Price = customPackage[ansIndex].itemPrice;
            customList[customIndex].item2Amt = totalAmtString;
            customList[customIndex].item2Status = "TRUE";
            if(amtStatus == "TRUE")
            {
                customList[customIndex].amt2Status = "TRUE";
            }
        }
        else if(customList[customIndex].item3 == "EMPTY")
        {
            customList[customIndex].item3 = customPackage[ansIndex].item;
            customList[customIndex].item3Price = customPackage[ansIndex].itemPrice;
            customList[customIndex].item3Amt = totalAmtString;
            customList[customIndex].item3Status = "TRUE";
            if(amtStatus == "TRUE")
            {
                customList[customIndex].amt3Status = "TRUE";
            }
        }
        else if(customList[customIndex].item4 == "EMPTY")
        {
            customList[customIndex].item4 = customPackage[ansIndex].item;
            customList[customIndex].item4Price = customPackage[ansIndex].itemPrice;
            customList[customIndex].item4Amt = totalAmtString;
            customList[customIndex].item4Status = "TRUE";
            if(amtStatus == "TRUE")
            {
                customList[customIndex].amt4Status = "TRUE";
            }
        }

                // Mark the package item as used
        registerList[userIndex].customStatus = "ACTIVE";
        saveVectorList(customList, "customList.txt");
        saveVectorList(registerList, "registration.txt");
    }
    else if(prefix == "REMOVE")
    {
        if(ansIndex == 1 && customList[customIndex].item1Status == "TRUE")
        {
            cout << "YOU HAVE SUCCESSFULLY REMOVED <" <<  customList[customIndex].item1 <<"> :)" << endl;
            customList[customIndex].item1 = "EMPTY";
            customList[customIndex].item1Price = "0.00";
            customList[customIndex].item1Amt ="0";
            customList[customIndex].item1Status = "FALSE";
            customPackage[ansIndex].itemStatus = "AVAILABLE";
            customList[customIndex].amt1Status = "FALSE";
        }
        else if(ansIndex == 2 && customList[customIndex].item2Status == "TRUE")
        {
            cout << "YOU HAVE SUCCESSFULLY REMOVED <" <<  customList[customIndex].item2 <<"> :)" << endl;
            customList[customIndex].item2 = "EMPTY";
            customList[customIndex].item2Price = "0.00";
            customList[customIndex].item2Amt ="0";
            customList[customIndex].item2Status = "FALSE";
            customPackage[ansIndex].itemStatus = "AVAILABLE";
            customList[customIndex].amt2Status = "FALSE";
        }
        else if(ansIndex == 3 && customList[customIndex].item3Status == "TRUE")
        {
            cout << "YOU HAVE SUCCESSFULLY REMOVED <" <<  customList[customIndex].item3 <<"> :)" << endl;
            customList[customIndex].item3 = "EMPTY";
            customList[customIndex].item3Price = "0.00";
            customList[customIndex].item3Amt ="0";
            customList[customIndex].item3Status = "FALSE";
            customPackage[ansIndex].itemStatus = "AVAILABLE";
            customList[customIndex].amt3Status = "FALSE";
        }
        else if(ansIndex == 4 && customList[customIndex].item4Status == "TRUE")
        {
            cout << "YOU HAVE SUCCESSFULLY REMOVED <" <<  customList[customIndex].item4 <<"> :)" << endl;
            customList[customIndex].item4 = "EMPTY";
            customList[customIndex].item4Price = "0.00";
            customList[customIndex].item4Amt ="0";
            customList[customIndex].item4Status = "FALSE";
            customPackage[ansIndex].itemStatus = "AVAILABLE";
            customList[customIndex].amt4Status = "FALSE";
        }
        else if(customList[customIndex].themes.themeStatus == "TRUE")
        {
            customList[customIndex].themes.themeDescription = "EMPTY";
            customList[customIndex].themes.themePrice = "0.00";
            customList[customIndex].themes.themeStatus = "FALSE";
            themeList[ansIndex].themeStatus = "UNAVAILABLE";
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

void confirmation(string name, int userIndexs, string receiptID)
{
    bool innerStatus = true;
    string ans;

    while(innerStatus)
    {
        cout << "WOULD YOU LIKE TO ADD ON ANYTHING ? <y/n> : ";
        getline(cin,ans);

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl; 
            continue;
        }

        if(ans == "Y" || ans == "y")
        {
            customPartyGeneral(name,userIndexs,receiptID);
            innerStatus = false;
        }   
        else if(ans == "N" || ans == "n")
        {
            custCustomPartyOption(name,userIndexs,receiptID);
            innerStatus = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER VALID OPTION :)\n" << endl;
            continue;
        }
    innerStatus = false;
    }
}

void customPartyGeneral(string name, int userIndexs, string receiptID)
{
    clear();;

    MenuTemplate <string> m;
    CustomList<string> newCustom;

    bool status = true,innerStatus = true;

    vector<CustomPackage<string>> customPackage = getVectorList<CustomPackage<string>>("customPackage.txt");
    vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");
    vector<Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");
    vector<Operation> operateList = getVectorList <Operation> ("operation.txt");

    int customIndex = getIndex<CustomList<string>>(customList , receiptID , [](CustomList<string> cl){return cl.registers.serialNum;});
    int userIndex = getIndex<Registration<string>>(registerList , receiptID , [](Registration<string> r){return r.serialNum;});

    m.menuTitle = "GENERAL ADD ON SECTION";
    m.menuTitleTemplate();

    for (int i = 0; i < customPackage.size(); i++) 
    {
    bool itemFound = false;
    // Check all empty place in customList
    if (customList[customIndex].item1 != "EMPTY" && customList[customIndex].item1 == customPackage[i].item && 
        (customPackage[i].itemAmountStatus == "FALSE" || customPackage[i].itemAmountStatus == "TRUE")) {
        customPackage[i].tempStatus = "TRUE";
        itemFound = true;
    }
    else if (customList[customIndex].item2 != "EMPTY" && customList[customIndex].item2 == customPackage[i].item && 
             (customPackage[i].itemAmountStatus == "FALSE" || customPackage[i].itemAmountStatus == "TRUE")) {
        customPackage[i].tempStatus = "TRUE";
        itemFound = true;
    }
    else if (customList[customIndex].item3 != "EMPTY" && customList[customIndex].item3 == customPackage[i].item && 
             (customPackage[i].itemAmountStatus == "FALSE" || customPackage[i].itemAmountStatus == "TRUE")) {
        customPackage[i].tempStatus = "TRUE";
        itemFound = true;
    }
    else if (customList[customIndex].item4 != "EMPTY" && customList[customIndex].item4 == customPackage[i].item && 
             (customPackage[i].itemAmountStatus == "FALSE" || customPackage[i].itemAmountStatus == "TRUE")) {
        customPackage[i].tempStatus = "TRUE";
        itemFound = true;
    }
    // If no match found, set to FALSE
    if (!itemFound) {
        customPackage[i].tempStatus = "FALSE";
    }
}

    saveVectorList(customPackage,"customPackage.txt");

    cout << "\n";

    string ans;
    
    outputCustomMenu("GENERAL",0);

    while(status)
    {
        cout << "PLEASE ENTER ANY ITEM THAT YOU WANT TO ADD ON <enter number> <0 to exit> : ";
        getline(cin , ans);

        if(ans == "0")
        {
            custCustomPartyOption(name,userIndexs,receiptID);
            status = false;
        }

        if (!regex_match(ans, regex("^[0-9]+$"))) 
        {
            cout << "INVALID INPUT... PLEASE ENTER A NUMBER :)\n" << endl;
            continue;
        }

        int ansInt = stoi(ans);

        int ansIndex = ansInt - 1;

        if(ansInt < 1 || ansInt > customPackage.size())
        {
            cout << "PLEASE ENTER A POSITIVE NUMBER BETWEEN <1 to " << customPackage.size() << "> :)\n"<<endl;
            continue;
        }

        if (ans.empty()) 
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }
        
        if(customPackage[ansIndex].tempStatus == "TRUE")
        {
            cout << "YOU HAVE PUT THIS IN YOUR CART ALREADY :)\n"<<endl;
            continue;
        }
        else if(customPackage[ansIndex].itemStatus == "UNAVAILABLE")
        {
            cout << "ITEM <" << customPackage[ansIndex].item << "> HAVE ALREADY BOOKED BY OTHER PERSON :)"<< endl;
            cout << " PLEASE CHOOSE ANOTHER ONE :)"<< endl;
            continue;
        }
        else if(customPackage[ansIndex].itemStatus == "AVAILABLE" && customPackage[ansIndex].itemAmountStatus == "TRUE" && customPackage[ansIndex].tempStatus == "FALSE")
        {
            cout << "YOU HAVE CHOSE <"<< customPackage[ansIndex].item << "> TO ADD ON." << endl;
            addOperation(userIndex,"ADDED CUSTOM ITEM","CUSTOMER OPERATION","CUSTOMER");
            saveVectorList(operateList,"operation.txt");
            customPackage[ansIndex].tempStatus = "TRUE";
            saveVectorList(customPackage,"customPackage.txt");
            status = true;

            while(status)
            {
                string addOn;
                cout << "PLEASE ENTER THE AMOUNT YOU LIKE TO ADD <enter a number> : ";
                getline(cin,addOn);

                int addOnAmt = stoi(addOn);

                int oriAmt = stoi(customList[customIndex].item1Amt);
                int totalAmt = oriAmt + addOnAmt;
                string totalAmtString = to_string(totalAmt);

                addRemoveItem("ADD",userIndex,ansIndex,customIndex,totalAmtString,"TRUE");
                addOperation(userIndex,"ADDED CUSTOM ITEM","CUSTOMER OPERATION","CUSTOMER");
                saveVectorList(operateList,"operation.txt");
                cout << "YOU HAVE ADDED <" << customPackage[ansIndex].item << "> SUCESSFULLY... :)"<<endl;
                status = false;
            }

            confirmation(name,userIndexs,receiptID);
        }
        else if(customPackage[ansIndex].itemStatus == "AVAILABLE" && customPackage[ansIndex].itemAmountStatus == "FALSE" && customPackage[ansIndex].tempStatus == "FALSE")
        {
            cout << "YOU HAVE CHOSE <"<< customPackage[ansIndex].item << "> TO ADD ON." << endl;
            customPackage[ansIndex].tempStatus = "TRUE";
            saveVectorList(customPackage,"customPackage.txt");

            if(customList[customIndex].item1=="EMPTY")
            {
                addOperation(userIndex,"ADDED CUSTOM ITEM","CUSTOMER OPERATION","CUSTOMER");
                saveVectorList(operateList,"operation.txt");
                addRemoveItem("ADD",userIndexs,ansIndex,customIndex,"1","FALSE");
                status = false;
            }
            else if(customList[customIndex].item2=="EMPTY")
            {
                addOperation(userIndex,"ADDED CUSTOM ITEM","CUSTOMER OPERATION","CUSTOMER");
                saveVectorList(operateList,"operation.txt");
                addRemoveItem("ADD",userIndex,ansIndex,customIndex,"1","FALSE");
                status = false;
            }
            else if(customList[customIndex].item3=="EMPTY")
            {
                addOperation(userIndex,"ADDED CUSTOM ITEM","CUSTOMER OPERATION","CUSTOMER");
                saveVectorList(operateList,"operation.txt");
                addRemoveItem("ADD",userIndexs,ansIndex,customIndex,"1","FALSE");
                status = false;
            }
            else if(customList[customIndex].item4=="EMPTY")
            {
                addOperation(userIndex,"ADDED CUSTOM ITEM","CUSTOMER OPERATION","CUSTOMER");
                saveVectorList(operateList,"operation.txt");
                addRemoveItem("ADD",userIndexs,ansIndex,customIndex,"1","FALSE");
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
        confirmation(name,userIndexs,receiptID);
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :)\n" << endl;
            continue;
        }
        status = false;
    }
}

void customPartyTheme(string name , int userIndex,string receiptID)
{
    clear();;

    MenuTemplate <string> m;

    bool status = true;
    bool innerStatus = true;
    string ans,confirmAns;

    vector<Theme<string>> themeList = getVectorList<Theme<string>>("theme.txt");
    vector<CustomList<string>> customList = getVectorList<CustomList<string>>("customList.txt");
    vector<Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");
    vector <Operation> operateList = getVectorList<Operation>("operation.txt");

    int customIndex = getIndex<CustomList<string>>(customList , receiptID , [](CustomList<string> cl){return cl.registers.serialNum;});

    m.menuTitle = "CUSTOMIZE THEME SECTION";
    m.menuTitleTemplate();

    for(int i = 0;i < themeList.size();i++)
    {
        if(customList[customIndex].themes.themeDescription == themeList[i].themeDescription)
        {
            themeList[i].themeTemp = "TRUE";
            saveVectorList(themeList,"theme.txt");
        }
        else
        {
            themeList[i].themeTemp = "FALSE";
            saveVectorList(themeList,"theme.txt");
        }
    }

    cout << "\n\n";
    
    outputTheme("GENERAL",0);

    while(status)
    {
        cout << "PLEASE CHOOSE ANY CUSTOM THEME SHOWN ABOVE <enter number> <0 to exit> : ";
        getline(cin,ans);

        int ansIndex = stoi(ans) - 1;

        if(ans == "0")
        {
            for(int i = 0;i < themeList.size();i++)
                    {
                        themeList[i].themeTemp = "FALSE";
                    }
                    saveVectorList(themeList,"theme.txt");
            custCustomParty(name,userIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(themeList[ansIndex].themeTemp == "TRUE")
        {
            cout << "YOU HAVE PUT THIS IN YOUR CART ALREADY :)\n"<<endl;
            continue;
        }

        if(themeList[ansIndex].themeStatus == "UNAVAILABLE")
        {
            cout << "THE ITEM <" << themeList[ansIndex].themeDescription << "> YOU HAVE CHOSE IS BEING BOOKED BY OTHER PERSON :)"<<endl;
            cout << "PLEASE CHOOSE ANOTHER ONE :)\n"<<endl;
            continue;
        }

        if(themeList[ansIndex].themeStatus == "AVAILABLE" && ansIndex < themeList.size() && ansIndex >= 0)
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
                    for(int i = 0;i < themeList.size();i++)
                    {
                        themeList[i].themeTemp = "FALSE";
                    }
                    addOperation(userIndex,"ADDED CUSTOM THEME","CUSTOMER OPERATION","CUSTOMER");
                    saveVectorList(operateList,"operation.txt");
                    registerList[userIndex].customStatus = "ACTIVE";
                    saveVectorList(registerList,"registration.txt");
                    saveVectorList(themeList,"theme.txt");
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
            cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :)\n"<<endl;
            continue;
        }
        status = false;
    }
}

void custCustomPartyOption(string name, int userIndex,string receiptId)
{
    clear();;
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
            custMainPage(name,userIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
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
    clear();;

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
        if(name == registeredList[i].login.nickname)
        {
            reId = registeredList[i].serialNum;
            userName = registeredList[i].login.nickname;;
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
        custMainPage(name,userIndex);
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
            custMainPage(name,userIndex);
            status = false;
        }

        if(receiptId.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" <<endl;
            continue;
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

        if (registerIndex != -1 && registeredList[registerIndex].login.nickname == name) 
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

void custDeleteAccountAlert(string name,int userIndex)
{
    bool status = true;
    string ans;
    vector<LoginDetails> custList = getVectorList<LoginDetails>("customer.txt");
    vector<Registration<string>> registeredList = getVectorList<Registration<string>>("registration.txt");
    vector<CustomList<string>> customList = getVectorList <CustomList<string>> ("customList.txt");
    vector<Receipt> receiptList = getVectorList<Receipt>("receipt.txt");
    int registerIndex = getIndex<Registration<string>>(registeredList, name , [](Registration<string>r){return r.login.nickname;});
    int receiptIndex = getIndex<Receipt>(receiptList, name , [](Receipt rc ){return rc.registers.login.nickname;});

    cout << "* * * * * * * * * * * * WARNING * * * * * * * * * * * *" << endl;
    cout << "*                                                     *" << endl;
    cout << "*  ARE YOU SURE YOU WANT TO DELETE YOUR ACCOUNT ????  *" << endl;
    cout << "*                                                     *" << endl;
    cout << "* * * * * * * * * * * * WARNING * * * * * * * * * * * *\n" << endl;

     while(status)
    {
        cout << "ARE YOU SURE YOU WANT TO DELETE YOUR ACCOUNT ? <y/n>" ;
        getline(cin,ans);

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n"<< endl;
            continue;
        }

        if(ans == "N" || ans == "n")
        {
            cout << "DELETE ACCOUNT UNSUCCESSFUL......"<< endl;
            pressAny();
            custMainPage(name,userIndex);
            status = false;
        }
        else if(ans == "Y" || ans == "y")
        {
            cout << "YOU HAVE DELETE YOUR ACCOUNT SUCCESSFULLY....."<<endl;
            cout << "USER INDEX : " <<  userIndex<< endl;
            cout << "RECEIPT INDEX : " <<  receiptIndex<< endl;
            cout << "REGISTER INDEX : " <<  registerIndex<< endl;
            pressAny();

            if(receiptList.size() == 0)
            {
                custList.erase(custList.begin()+userIndex);
                registeredList.erase(registeredList.begin()+registerIndex);
                customList.erase(customList.begin()+registerIndex);
                addOperation(userIndex,"CUSTOMER DELETE ACCOUNT","CUSTOMER OPERATION","customer");
                saveVectorList(custList,"customer.txt");
                saveVectorList(registeredList,"registration.txt");
                saveVectorList(customList,"customList.txt");
                loginScreen();
                status = false;
            }
            custList.erase(custList.begin()+userIndex);
            receiptList.erase(receiptList.begin()+receiptIndex);
            registeredList.erase(registeredList.begin()+registerIndex);
            customList.erase(customList.begin()+registerIndex);
            saveVectorList(custList,"customer.txt");
            saveVectorList(registeredList,"registration.txt");
            saveVectorList(receiptList,"receipt.txt");
            saveVectorList(customList,"customList.txt");
            loginScreen();
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :)\n" << endl;
            continue;
        }
        status = false;
    }
}

void custProfileEdit(string name,int userIndex,string prefix)
{
    MenuTemplate <string> m;
    LoginDetails l;
    string ans;
    string confirmAns = "";
    bool status = true, innerStatus = true;

    vector<LoginDetails> customerList = getVectorList<LoginDetails>("customer.txt");
    vector<vector<string>> profileRecord;
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");
    vector <Registration<string>> registerList = getVectorList <Registration<string>> ("registration.txt");
    int registerIndex = getIndex<Registration<string>>(registerList, name , [](Registration<string>r){return r.login.nickname;});
    int num = customerList[userIndex].password.length();
    string passLen = to_string(num);

    clear();;

    profileRecord = 
    {
            {"USERNAME",customerList[userIndex].username},
            {"NICKNAME",customerList[userIndex].nickname},
            {"PHONE NUMBER",customerList[userIndex].contactNum},
            {"EMAIL",customerList[userIndex].email},
            {"PASSWORD",passLen}
    };

    if(prefix == "VIEW")
    {
        m.menuTitle = "VIEW PROFILE";
        m.menuTitleTemplate();
        addOperation(userIndex,"VIEWED USER PROFILE","CUSTOMER OPERATION","CUSTOMER");
        saveVectorList(operateList,"operation.txt");
        outputProfile(profileRecord,userIndex);
        pressAny();
        custViewProfile(name,userIndex);
    }
    else if(prefix == "EDIT")
    {
        m.menuTitle = "EDIT PROFILE";
        m.menuTitleTemplate();
    }

    outputProfile(profileRecord,userIndex);
    cout << "\n";

    m.menuOptions.clear();
    m.menuTitle = "EDIT MENU";
    m.menuOptions.push_back("CHANGE USERNAME");
    m.menuOptions.push_back("CHANGE CHANGE NICKNAME");
    m.menuOptions.push_back("CHANGE CONTACT NUMBER");
    m.menuOptions.push_back("CHANGE EMAIL");
    m.menuOptions.push_back("CHANGE PASSWORD");

    m.menuTemplate();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            custViewProfile(name,userIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(ans ==  "1")
        {

            while(innerStatus)
            {
                cout << "PLEAE ENTER YOU NEW USERNAME : ";
                getline(cin,l.username);
                cout << "\nYOU HAVE ENTERED <" << l.username << "> NEW USERNAME"<<endl;
                cout << "ARE YOU SURE YOU WANT TO CHANGE YOU CURRENT USERNAME <" << customerList[userIndex].username << "> ? <y/n>";
                getline(cin,confirmAns);

                if(confirmAns.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(usernameExist(customerList,l.username))
                {
                    cout << "THE USERNAME HAVE BEEN USED BY OTHER PROPLE :)\n" << endl;
                    continue;
                }

                if(confirmAns == "Y" || confirmAns == "y")
                {
                    cout << "YOU HAVE CHANGED YOUR USERNAME SUCCESSFUL :)"<<endl;
                    addOperation(userIndex,"CHANGED USERNAME","CUSTOMER OPERATION","CUSTOMER");
                    saveVectorList(operateList,"operation.txt");
                    customerList[userIndex].username = l.username;
                    addOperation(userIndex,"CUSTOMER CHANGE USERNAME","CUSTOMER OPERATION","customer");
                    saveVectorList(customerList,"customer.txt");
                    pressAny();
                    custViewProfile(name,userIndex);
                    innerStatus = false;
                }
                else if(confirmAns == "N" || confirmAns == "n")
                {
                    cout << "CHANGE USERNAME UNSUCCESSFUL..."<<endl;
                    pressAny();
                    custViewProfile(name,userIndex);
                    innerStatus = false;
                }
                else
                {
                    cout << "INVALID INPUT... PLEASE ENTER AGAIN :)\n"<<endl;
                    continue;
                }
                innerStatus = false;
            }
            status = false;
        }
        else if(ans ==  "2")
        {
            while(innerStatus)
            {
                cout << "PLEAE ENTER YOU NEW NICKNAME : ";
                getline(cin,l.nickname);
                cout << "\nYOU HAVE ENTERED <" << l.nickname << "> NEW NICKNAME"<<endl;
                cout << "ARE YOU SURE YOU WANT TO CHANGE YOU CURRENT NICKNAME <" << customerList[userIndex].nickname << "> ? <y/n>";
                getline(cin,confirmAns);

                if(confirmAns.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(confirmAns == "Y" || confirmAns == "y")
                {
                    cout << "YOU HAVE CHANGED YOUR NICKNAME SUCCESSFUL :)"<<endl;
                    addOperation(userIndex,"CHANGED NICKNAME","CUSTOMER OPERATION","CUSTOMER");
                    saveVectorList(operateList,"operation.txt");
                    transform(l.nickname.begin(),l.nickname.end(),l.nickname.begin(),::toupper);
                    customerList[userIndex].nickname = l.nickname;
                    for(int i = 0 ; i < registerList.size();i++)
                    {
                        if(registerList[i].login.nickname == name)
                        {
                            registerList[i].login.nickname = l.nickname;
                        }
                    }
                    saveVectorList(registerList,"registration.txt");
                    addOperation(userIndex,"CUSTOMER CHANGE NICKNAME","CUSTOMER OPERATION","customer");
                    saveVectorList(customerList,"customer.txt");
                    pressAny();
                    login("customer");
                    innerStatus = false;
                }
                else if(confirmAns == "N" || confirmAns == "n")
                {
                    cout << "CHANGE NICKNAME UNSUCCESSFUL..."<<endl;
                    pressAny();
                    custViewProfile(name,userIndex);
                    innerStatus = false;
                }
                else
                {
                    cout << "INVALID INPUT... PLEASE ENTER AGAIN :)\n"<<endl;
                    continue;
                }
                innerStatus = false;
            }
            status = false;
        }
        else if(ans ==  "3")
        {
            while(innerStatus)
            {
                cout << "PLEAE ENTER YOU NEW CONTACT NUMBER : ";
                getline(cin,l.contactNum);
                if(l.contactNum.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }
                cout << "\nYOU HAVE ENTERED <" << l.contactNum << "> NEW CONTACT NUMBER"<<endl;
                cout << "ARE YOU SURE YOU WANT TO CHANGE YOU CURRENT CONTACT NUMBER <" << customerList[userIndex].contactNum << "> ? <y/n>";
                getline(cin,confirmAns);

                if(confirmAns.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(confirmAns == "Y" || confirmAns == "y")
                {
                    cout << "YOU HAVE CHANGED YOUR CONTACT NUMBER SUCCESSFUL :)"<<endl;
                    addOperation(userIndex,"CHANGED CONTACT NUMBER","CUSTOMER OPERATION","CUSTOMER");
                    saveVectorList(operateList,"operation.txt");
                    customerList[userIndex].contactNum = l.contactNum;
                    addOperation(userIndex,"CUSTOMER CHANGE CONTACT NUM","CUSTOMER OPERATION","customer");
                    saveVectorList(customerList,"customer.txt");
                    pressAny();
                    custViewProfile(name,userIndex);
                    innerStatus = false;
                }
                else if(confirmAns == "N" || confirmAns == "n")
                {
                    cout << "CHANGE CONTACT NUMBER UNSUCCESSFUL..."<<endl;
                    pressAny();
                    custViewProfile(name,userIndex);
                    innerStatus = false;
                }
                else
                {
                    cout << "INVALID INPUT... PLEASE ENTER AGAIN :)\n"<<endl;
                    continue;
                }
                innerStatus = false;
            }
            status = false;
        }
        else if(ans ==  "4")
        {
            while(innerStatus)
            {
                cout << "PLEAE ENTER YOU NEW EMAIL : ";
                getline(cin,l.email);
                cout << "\nYOU HAVE ENTERED <" << l.email << "> NEW EMAIL"<<endl;
                cout << "ARE YOU SURE YOU WANT TO CHANGE YOU CURRENT EMAIL <" << customerList[userIndex].email << "> ? <y/n>";
                getline(cin,confirmAns);

                if(confirmAns == "Y" || confirmAns == "y")
                {
                    cout << "YOU HAVE CHANGED YOUR EMAIL SUCCESSFUL :)"<<endl;
                    addOperation(userIndex,"CHANGED EMAIL","CUSTOMER OPERATION","CUSTOMER");
                    saveVectorList(operateList,"operation.txt");
                    customerList[userIndex].email = l.email;
                    addOperation(userIndex,"CUSTOMER CHANGE EMAIL","CUSTOMER OPERATION","customer");
                    saveVectorList(customerList,"customer.txt");
                    pressAny();
                    custViewProfile(name,userIndex);
                    innerStatus = false;
                }
                else if(confirmAns == "N" || confirmAns == "n")
                {
                    cout << "CHANGE EMAIL UNSUCCESSFUL..."<<endl;
                    pressAny();
                    custViewProfile(name,userIndex);
                    innerStatus = false;
                }
                else
                {
                    cout << "INVALID INPUT... PLEASE ENTER AGAIN :)\n"<<endl;
                    continue;
                }
                innerStatus = false;
            }
            status = false;
        }
        else if(ans ==  "5")
        {
            changePass(name,userIndex,"customer");
            status = false;
        }
        else
        {
            cout << "INVALID INPUT.... PLEASE ENTER A VALID OPTION :)\n"<< endl;
            continue;
        }
        status = false;
    }
}

//Customer view profile function
void custViewProfile(string name,int userIndex)
{
    MenuTemplate <string> m;
    string ans;
    bool status = true;

    clear();;

    m.menuTitle = "MAIN MENU";
    m.menuOptions.push_back("VIEW PROFILE");
    m.menuOptions.push_back("EDIT PROFILE");
    m.menuOptions.push_back("DELETE ACCOUNT");

    m.menuTemplate();

    while(status)
    {
        cout << "PLEASE ENTER ANY OPTION <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            custMainPage(name,userIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(ans == "1")
        {
            custProfileEdit(name,userIndex,"VIEW");
            status = false;
        }
        else if(ans == "2")
        {
            custProfileEdit(name,userIndex,"EDIT");
            status = false;
        }   
        else if(ans == "3")
        {
            custDeleteAccountAlert(name,userIndex);
            status = false;
        }
        else
        {
            cout << "INVALID INPUT..... PLEASE ENTER A VALID OPTION :)\n"<< endl;
            continue;
        }

        status = false;
    }
}

//Customer make payment function
void custPayment(string receiptType,int registerIndex, int customIndex,string name,int usernameIndex)
{
    clear();;

    bool status = true;
    string payType;
    double newAmount = 0.0,totalBill,deposit;
    int newPackAmt, newGeneralAmt, newThemeAmt;

    vector<Registration<string>> registerList = getVectorList <Registration<string>>("registration.txt");
    vector<CustomList<string>> customList = getVectorList <CustomList<string>> ("customList.txt");
    vector<Receipt> receiptList = getVectorList <Receipt> ("receipt.txt");
    vector<Package<string>> packageList = getVectorList <Package<string>> ("packageList.txt");
    vector <CustomPackage<string>> customPackage = getVectorList <CustomPackage<string>> ("customPackage.txt");
    vector <Theme<string>> themeList = getVectorList <Theme<string>> ("theme.txt");

    newAmount += (stod(receiptList[registerIndex].amtAfterTax) - stod(receiptList[registerIndex].depositAmt));

    stringstream ssTotal;
    ssTotal << fixed << setprecision(2) << newAmount;

    MenuTemplate <string> m;
    m.menuTitle = "PAYMENT SECTION";
    m.menuTitleTemplate();

    addReceiptDetails(receiptType,registerIndex,customIndex);

    string newTotalString = ssTotal.str();

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
            custViewBooking(name,usernameIndex);
            status = false;
        }

        if(payType.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" <<endl;
            continue;
        }

        if(payType == "1")
        {
            receiptList[registerIndex].paymentType = "TOUCH N GO";
            if(receiptType == "RECEIPT")
            {   
                receiptList[registerIndex].newAmtAfterTax = newTotalString;
                receiptList[registerIndex].paymentStatus = "DEPOSIT DONE";
                registerList[registerIndex].bookingStatus = "DEPOSIT DONE";
                cout << "THANKS FOR YOUR DEPOSIT :)\n"<< endl;

                addOperation(usernameIndex,"CUSTOMER PAY DEPOSIT","CUSTOMER OPERATION","customer");
                saveVectorList(receiptList,"receipt.txt");
                saveVectorList(registerList,"registration.txt");
            }
            else if(receiptType == "DEPOSIT")
            {
                receiptList[registerIndex].paymentStatus = "PAYMENT DONE";
                registerList[registerIndex].bookingStatus = "PAYMENT DONE";
                cout << "THANKS FOR MAKING THE FULL PAYMENT :)\n"<< endl;
                addOperation(usernameIndex,"CUSTOMER PAY FULL PAYMENT","CUSTOMER OPERATION","customer");
                saveVectorList(receiptList,"receipt.txt");
                saveVectorList(registerList,"registration.txt");
            }
            pressAny();
            custMainPage(name,usernameIndex);
            status = false;
        }
        else if(payType == "2")
        {
            receiptList[registerIndex].paymentType = "CREDIT CARD";
            if(receiptType == "RECEIPT")
            {   
                receiptList[registerIndex].newAmtAfterTax = newTotalString;
                receiptList[registerIndex].paymentStatus = "DEPOSIT DONE";
                registerList[registerIndex].bookingStatus = "DEPOSIT DONE";
                cout << "THANKS FOR YOUR DEPOSIT :)\n"<< endl;
                addOperation(usernameIndex,"CUSTOMER PAY DEPOSIT","CUSTOMER OPERATION","customer");
                saveVectorList(receiptList,"receipt.txt");
                saveVectorList(registerList,"registration.txt");
            }
            else if(receiptType == "DEPOSIT")
            {
                receiptList[registerIndex].paymentStatus = "PAYMENT DONE";
                registerList[registerIndex].bookingStatus = "PAYMENT DONE";
                cout << "THANKS FOR MAKING THE FULL PAYMENT :)\n"<< endl;
                saveVectorList(receiptList,"receipt.txt");
                saveVectorList(registerList,"registration.txt");
                addOperation(usernameIndex,"CUSTOMER PAY FULL PAYMENT","CUSTOMER OPERATION","customer");
            }
            pressAny();
            custMainPage(name,usernameIndex);
            status = false;
        }
        else if(payType == "3")
        {
            receiptList[registerIndex].paymentType = "E-BANKING";
            if(receiptType == "RECEIPT")
            {   
                receiptList[registerIndex].newAmtAfterTax = newTotalString;
                receiptList[registerIndex].paymentStatus = "DEPOSIT DONE";
                registerList[registerIndex].bookingStatus = "DEPOSIT DONE";
                cout << "THANKS FOR YOUR DEPOSIT :)\n"<< endl;
                
                addOperation(usernameIndex,"CUSTOMER PAY DEPOSIT","CUSTOMER OPERATION","customer");
                saveVectorList(receiptList,"receipt.txt");
                saveVectorList(registerList,"registration.txt");
            }
            else if(receiptType == "DEPOSIT")
            {
                receiptList[registerIndex].paymentStatus = "PAYMENT DONE";
                registerList[registerIndex].bookingStatus = "PAYMENT DONE";
                cout << "THANKS FOR MAKING THE FULL PAYMENT :)\n"<< endl;
                addOperation(usernameIndex,"CUSTOMER PAY FULL PAYMENT","CUSTOMER OPERATION","customer");
                saveVectorList(receiptList,"receipt.txt");
                saveVectorList(registerList,"registration.txt");
            }
            pressAny();
            custMainPage(name,usernameIndex);
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


void feedBackSection(string name, int userIndex,int registerIndex)
{
    MenuTemplate <string> m;
    Feedback f;
    Feedback newFeedback;

    bool status = true;
    int starRate = 0;

    vector<Registration<string>> registeredList = getVectorList <Registration<string>>("registration.txt");
    vector<Feedback> feedbackList = getVectorList <Feedback> ("feedback.txt");

    clear();;
    m.menuTitle = "FEEDBACK SECTION";
    m.menuTitleTemplate();

    while(status)
    {
        m.menuTitle = "GIVE STAR RATE";
        m.menuTitleTemplate();
        cout << "PLEASE GIVE THE START RATE FROM 1 - 5 STARTS <0 to exit> : ";
        getline(cin,f.rate);

        if(f.rate == "0")
        {
            custMainPage(name,userIndex);
            status = false;
        }

        if(f.rate.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        regex starFormat("^[1-5]$");

        if(!regex_match(f.rate,starFormat))
        {
            cout << "PLEASE ENTER NUMBER BETWEEN 1 to 5 ONLY :)\n" << endl;
            continue;
        }

        starRate = stoi(f.rate);
        cout << "\n";
        comments(starRate);
        pressAny();
        cout << "\n";
        status = false;
    }

    status = true;

    while(status)
    {
        m.menuTitle = "COMMENT SECTION";
        m.menuTitleTemplate();
        m.menuTitle = "ENTER LESS THAN 150 CHARACTERS";
        m.menuTitleTemplate();
        cout << "PLEASE ENTER YOUR COMMENT <0 to exit> : ";
        getline(cin,f.content);

        if(f.content == "0")
        {
            custMainPage(name,userIndex);
            status = false;
        }

        if(f.content.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(f.content.length() > 150 )
        {
            cout << "PLEASE DON\'T ENTER MORE THAN 150 CHARACTERS :)\n"<<endl;
            continue;
        }

        string rateString = to_string(starRate);

        newFeedback.registers.serialNum = registeredList[registerIndex].serialNum;
        newFeedback.registers.login.nickname = registeredList[registerIndex].login.nickname;
        newFeedback.content = replaceCommas(f.content);
        newFeedback.rate = rateString;
        newFeedback.fbStatus = "FALSE";
        newFeedback.viewStatus = "VIEW PENDING";
        newFeedback.feedBackDate = getIssueDate();
        registeredList[registerIndex].feedbackStatus = "TRUE";
        feedbackList.push_back(newFeedback);
        addOperation(userIndex,"CUSTOMER PROVIDE FEEDBACK","CUSTOMER OPERATION","customer");
        saveVectorList(feedbackList,"feedback.txt");
        saveVectorList(registeredList,"registration.txt");
        cout << "WE\'VE RECEIVED YOUR FEED BACK :)"<<endl;
        cout << "THANKS FOR YOUR FEED BACK :)"<<endl;
        pressAny();
        custMainPage(name,userIndex);
        status = false;
    }
}

//Customer provide feedback function
void custFeedback(string name, int userIndex)
{
    MenuTemplate <string> m;

    bool status = true;

    string ans;

    vector<vector<pair<string,string>>> bookingRecords;
    vector<string> headers = {"RECEIPT ID","USERNAME","STATUS","CUSTOMIZE","SET UP"};
    vector<Feedback> feebackList = getVectorList<Feedback>("feedback.txt");
    vector<Registration<string>> registeredList = getVectorList <Registration<string>>("registration.txt");
    vector<CustomList<string>> customList = getVectorList <CustomList<string>> ("customList.txt");

    for(int i = 0 ; i < registeredList.size() ; i++)
    {
        string reId;
        string userName;
        string status;
        string customStatus;
        string setupStatus;
        if(name == registeredList[i].login.nickname && registeredList[i].orderStatus == "DONE")
        {
            reId = registeredList[i].serialNum;
            userName = registeredList[i].login.nickname;;
            status = registeredList[i].bookingStatus;
            customStatus = registeredList[i].customStatus;
            setupStatus = registeredList[i].setupStatus;
            bookingRecords.push_back
            (
                {   
                    {headers[0],reId},
                    {headers[1],userName},
                    {headers[2],status},
                    {headers[3],customStatus},
                    {headers[4],setupStatus}
                }
            );
        }
    }

    if(registeredList.size() == 0)
    {
        cout << "\nYOU HAVEN\'T MAKE ANY BOOKING YET :)\n";
        pressAny();
        custMainPage(name,userIndex);
    }
    
    clear();;
    m.menuTitle = "FEEDBACK SECTION";
    m.menuTitleTemplate();

    if(bookingRecords.size() != 0)
    {
        printRecords(bookingRecords);
    }
    else
    {   
        cout << "YOU DON\'T HAVE ANY BOOKING IS DONE YET :)\n"<<endl;
        pressAny();
        custMainPage(name,userIndex);
    }
    
    while(status)
    {
        cout << "PLEASE CHOOSE ANY BOOKING RECORD TO PROVIDE FEEDBACK <0 to exit> : ";
        getline(cin,ans);

        int registerIndex = getIndex<Registration<string>>(registeredList, ans , [](Registration<string>r){return r.serialNum;});
        int customIndex = getIndex<CustomList<string>>(customList, ans , [](CustomList<string> c ){return c.registers.serialNum;});

        string compareAns = ans;
        transform(compareAns.begin(),compareAns.end(),compareAns.begin(),::toupper);

        if(ans == "0")
        {
            custMainPage(name,userIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(registeredList[registerIndex].feedbackStatus == "TRUE")
        {
            cout << "YOU HAVE PROVIDED YOUR FEED BACK FOR THIS BOOOKING ALREADY :)\n"<<endl;
            continue;
        }

        if (registerIndex != -1 && registeredList[registerIndex].login.nickname == name) 
        {
            feedBackSection(name,userIndex,registerIndex);
            status = false;
        }
        else
        {
            cout << "PLEASE ENTER A VALID RECEIPT ID TO VIEW BOOKING :)\n"<<endl;
            continue;
        }
        status = false;
    }
}

void eventApproval(string name,int staffIndex, int registerIndex,string prefix)
{
    bool status = true;
    string ans;

    vector<Registration<string>> registerList = getVectorList<Registration<string>>("registration.txt");
    vector<Operation> operateList = getVectorList <Operation> ("operation.txt");

    while(status)
    {
        cout << "ARE YOU SURE THE <" << prefix << "> IS DONE ? <y/n> : ";
        getline(cin,ans);

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(ans == "y" || ans == "Y")
        {
            if(prefix == "CATERING")
            {
                addOperation(staffIndex,"APPROVED " + prefix + "\'S STATUS","STAFF OPERATION","STAFF");
                registerList[registerIndex].staffCateringStatus = "CATERING DONE";
            }
            else if(prefix == "DECORATION")
            {
                addOperation(staffIndex,"APPROVED " + prefix + "\'S STATUS","STAFF OPERATION","STAFF");
                registerList[registerIndex].staffDecorationStatus = "DECORATION DONE";
            }
            else if(prefix == "ENTERTAINMENT")
            {
                addOperation(staffIndex,"APPROVED " + prefix + "\'S STATUS","STAFF OPERATION","STAFF");
                registerList[registerIndex].staffEntertainmentStatus = "ENTERTAINMENT DONE";
            }
            else if(prefix == "PARTY ITEM")
            {
                addOperation(staffIndex,"APPROVED " + prefix + "\'S STATUS","STAFF OPERATION","STAFF");
                registerList[registerIndex].staffPartyItem = "PARTY ITEM DONE";
            }
            saveVectorList(operateList,"operation.txt");

            int counter = stoi(registerList[registerIndex].doneCount);
            counter +=1;
            string counterString = to_string(counter);
            registerList[registerIndex].doneCount = counterString;

            if (registerList[registerIndex].doneCount == "2") 
            {
            registerList[registerIndex].setupStatus = "SET UP HALFWAY";
            }
            else if (registerList[registerIndex].doneCount == "4") 
            {
                registerList[registerIndex].setupStatus = "SET UP DONE";
            }
            else
            {
                registerList[registerIndex].setupStatus = "SET UP PENDING";
            }
            saveVectorList(registerList,"registration.txt");
            status = false; 
        }
        else if(ans == "n" || ans == "N")
        {
            manageEvent(name, staffIndex, registerIndex);
            status = false; 
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :)\n" << endl;
            continue;
        }

        status = false;
    }
}

void manageEventOptions(string name,int staffIndex, int registerIndex, string prefix)
{
    if(prefix == "CATERING")
    {
        eventApproval(name,staffIndex,registerIndex,prefix);
        cout << "YOU HAVE APPROVED " + prefix + "\'S STATUS SUCCESSFULLY.... :)\n" <<endl;
        pressAny();
        manageEvent(name,staffIndex,registerIndex);
    }
    else if(prefix == "DECORATION")
    {
        eventApproval(name,staffIndex,registerIndex,prefix);
        cout << "YOU HAVE APPROVED " + prefix + "\'S STATUS SUCCESSFULLY.... :)\n" <<endl;
        pressAny();
        manageEvent(name,staffIndex,registerIndex);
    }
    else if(prefix == "ENTERTAINMENT")
    {
        eventApproval(name,staffIndex,registerIndex,prefix);
        cout << "YOU HAVE APPROVED " + prefix + "\'S STATUS SUCCESSFULLY.... :)\n" <<endl;
        pressAny();
        manageEvent(name,staffIndex,registerIndex);
    }
    else if(prefix == "PARTY ITEM")
    {
        eventApproval(name,staffIndex,registerIndex,prefix);
        cout << "YOU HAVE APPROVED " + prefix + "\'S STATUS SUCCESSFULLY.... :)\n" <<endl;
        pressAny();
        manageEvent(name,staffIndex,registerIndex);
    }
}

void manageEvent(string name,int staffIndex, int registerIndex)
{
    MenuTemplate <string> m;

    bool status = true, innerStatus = true;
    string ans;

    vector <Registration<string>> registerList = getVectorList <Registration<string>> ("registration.txt");
    vector <vector<string>> setupRecords;
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");

    setupRecords = 
    {
        {"CATERING",registerList[registerIndex].staffCateringStatus},
        {"DECORATION",registerList[registerIndex].staffDecorationStatus},
        {"ENTERATAINMENT",registerList[registerIndex].staffEntertainmentStatus},
        {"PARTY ITEM",registerList[registerIndex].staffPartyItem}
    };

    clear();;
    m.menuTitle = "MANAGE EVENT SECTION";
    m.menuTitleTemplate();

    m.menuTitle = "BOOKING MANAGING " + registerList[registerIndex].serialNum;
    m.menuTitleTemplate();

    m.menuTitle = "MANAGE EVENT OPTIONS";
    string prompt = "";
    if(registerList[registerIndex].setupStatus == "SET UP DONE")
    {
        prompt = "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE <0 to exit> <\'d\' TO COPLETE THE EVENT BOOKING> : ";
    }
    else
    {
        prompt = "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE <0 to exit> : ";
    }

    outputSetupDetails(setupRecords,"MANAGE");
    if(registerList[registerIndex].setupStatus == "SET UP DONE" && registerList[registerIndex].orderStatus == "DONE")
    {
        cout << "THE CURRENT BOOKING HAVE BEEN DONE :)\n" << endl;
        pressAny();
        staffMonitorEvent(name,staffIndex);
    }

    while(status)
    {
        cout << prompt;
        getline(cin,ans);

        if(ans == "0")
        {
            staffMonitorEvent(name,staffIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(ans == "1")
        {
            if(registerList[registerIndex].staffCateringStatus == "CATERING DONE")
            {
                cout << "YOU HAVE APPROVED THIS CATEGORY :)\n" << endl;
                continue;
            }
            manageEventOptions(name,staffIndex,registerIndex,"CATERING");
            status = false;
        }
        else if(ans == "2")
        {
            if(registerList[registerIndex].staffDecorationStatus == "DECORATION DONE")
            {
                cout << "YOU HAVE APPROVED THIS CATEGORY :)\n" << endl;
                continue;
            }
            manageEventOptions(name,staffIndex,registerIndex,"DECORATION");
            status = false;
        }
        else if(ans == "3")
        {
            if(registerList[registerIndex].staffEntertainmentStatus == "ENTERTAINMENT DONE")
            {
                cout << "YOU HAVE APPROVED THIS CATEGORY :)\n" << endl;
                continue;
            }
            manageEventOptions(name,staffIndex,registerIndex,"ENTERTAINMENT");
            status = false;
        }
        else if(ans == "4")
        {
            if(registerList[registerIndex].staffPartyItem == "PARTY ITEM DONE")
            {
                cout << "YOU HAVE APPROVED THIS CATEGORY :)\n" << endl;
                continue;
            }
            manageEventOptions(name,staffIndex,registerIndex,"PARTY ITEM");
            status = false;
        }
        else if((ans == "d" || ans == "D") && registerList[registerIndex].setupStatus == "SET UP DONE")
        {
            registerList[registerIndex].orderStatus = "DONE";
            addOperation(staffIndex,"COMPLETE BOOKING","STAFF OPERATION","STAFF");
            saveVectorList(operateList,"operation.txt");
            saveVectorList(registerList,"registration.txt");
            cout << "<" << registerList[registerIndex].serialNum << "> HAS DONE SUCCESSFULLY :)\n" << endl;
            pressAny();
            staffMainPage(name,staffIndex);
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

//Staff monitor event function
void staffMonitorEvent(string name, int staffIndex)
{
    clear();;
    MenuTemplate <string> m;

    bool status = true;
    string ans;

    m.menuTitle = "MANAGE EVENT SECTION";

    m.menuTitleTemplate();

    cout << "\n";

    vector<vector<pair<string,string>>> bookingRecords;
    vector<string> headers = {"RECEIPT ID","USERNAME","STATUS","CUSTOMIZE","SET UP"};
    vector<Registration<string>> registeredList = getVectorList <Registration<string>>("registration.txt");


    bool hasBookingToMonitor = any_of(
        registeredList.begin(),
        registeredList.end(),
        [](const Registration<string>& reg) {
            return reg.bookingStatus == "PAYMENT DONE" &&
                   reg.setupStatus != "SET UP DONE";
        });

    if (!hasBookingToMonitor)
    {
        cout << "THERE'S NO BOOKING NEED TO BE MONITOR :)\n" << endl;
        pressAny();
        staffMainPage(name, staffIndex);
        return;
    }


    for(int i = 0 ; i < registeredList.size() ; i++)
    {
        string reId;
        string userName;
        string status;
        string customStatus;
        string setupStatus;
        if(registeredList[i].bookingStatus == "PAYMENT DONE")
        {
            reId = registeredList[i].serialNum;
            userName = registeredList[i].login.nickname;;
            status = registeredList[i].bookingStatus;
            customStatus = registeredList[i].customStatus;
            setupStatus = registeredList[i].setupStatus;

        }

        bookingRecords.push_back
        (
            {   
                {headers[0],reId},
                {headers[1],userName},
                {headers[2],status},
                {headers[3],customStatus},
                {headers[4],setupStatus}
            }
        );
    }

    printRecords(bookingRecords);

    while(status)
    {
        cout << "PLEASE CHOOSE ANY RECORDS TO MANAGE THE BOOKINGS <0 to exit> <enter the RECIPET ID> : ";
        getline(cin,ans);   

        if(ans == "0")
        {
            staffMainPage(name,staffIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        transform(ans.begin(),ans.end(),ans.begin(),::toupper);

        int registerIndex = getIndex<Registration<string>>(registeredList, ans , [](Registration<string>r){return r.serialNum;});

        if(ans == registeredList[registerIndex].serialNum)
        {
            manageEvent(name,staffIndex,registerIndex);
            status = false;
        }
        else
        {
            cout << "INVALID INPUT.... PLEASE ENTER A VALID OPTION :)\n" << endl;
            continue;
        }

        status = false;
    }
}

void outputPackageRecord(int index,string purpose)
{
    vector<Package<string>> packageList = getVectorList <Package<string>> ("packageList.txt");
    vector<vector<string>> packageRecord;

            packageRecord =
                {
                    {"PACKAGE TYPE",packageList[index].packageType},
                    {"VENUE",packageList[index].venue},
                    {"TIME DURATION",packageList[index].timeDuration},
                    {"CATERING",packageList[index].catering},
                    {"DECORATION",packageList[index].decoration},
                    {"ENTERTAINMENT",packageList[index].entertaintment},
                    {"ACTIVITIES",packageList[index].activities},
                    {"PARTY GIFT",packageList[index].partyGift},
                    {"CAKE",packageList[index].cake},
                    {"PRICE",packageList[index].price}
                };

            if(purpose == "OUTPUT")
            {
                outputPackage(packageRecord,index,"GENERAL");
            }
            else if(purpose == "EDIT")
            {
                outputPackage(packageRecord,index,"EDIT");    
            }
}

void itemList(string option,string prefix)
{
    MenuTemplate <string> m; 

    vector<Package<string>> packageList = getVectorList <Package<string>> ("packageList.txt");
    vector<Theme<string>> themeList = getVectorList <Theme<string>> ("theme.txt");
    vector<CustomPackage<string>> customPackage = getVectorList <CustomPackage<string>> ("customPackage.txt");

    clear();;

    m.menuTitle = option+" "+ prefix + "\'S ITEM SECTION";
    m.menuTitleTemplate();

    bool status = true, innerStatus = true;
    string title, ans, confirmAns;

    if(prefix == "PACKAGE")
    {
        title = "PACKAGE LIST";
        for(int i = 0 ; i < packageList.size();i++)
        {
            m.menuOptions.push_back(packageList[i].packageType);
        }
    }
    else if(prefix == "GENERAL ADD ON")
    {
        title = "GENERAL ADD ON LIST";
        for(int i = 0 ; i < customPackage.size();i++)
        {
            m.menuOptions.push_back(customPackage[i].item);
        }
    }
    else if(prefix == "CUSTOM THEME")
    {
        title = "CUSTOME THEME LIST";
        for(int i = 0 ; i < themeList.size();i++)
        {
            m.menuOptions.push_back(themeList[i].themeDescription);
        }
    }

    m.menuTitle = title;
    m.menuTemplate();
}

void addItem(string name,int staffIndex,string prefix)
{
    MenuTemplate <string> m; 
    Package <string> p;
    CustomPackage <string> c;
    Theme <string> t;
    Package <string> newPackage;
    CustomPackage <string> newCustomPackage;
    Theme <string> newTheme;

    vector <Package <string>> packageList = getVectorList <Package <string>> ("packageList.txt");
    vector <CustomPackage <string>> customPackage = getVectorList <CustomPackage <string>> ("customPackage.txt");
    vector <Theme <string>> themeList = getVectorList <Theme <string>> ("theme.txt");
    vector<vector<string>> confirmRecord;
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");

    string newThemePriceString, newPackagePriceString, newCustomPackagePriceString, newAddOnPriceString;
    regex priceFormat("^(?:0|[1-9][0-9]*)$");

    m.menuTitle = "ADD"+ prefix + "\'S ITEM SECTION";
    m.menuTitleTemplate();

    bool status = true, innerStatus = true;
    string title, ans;

    clear();;
    m.menuTitle = "ADD "+prefix+"\'S ITEM SECTION";
    m.menuTitleTemplate();

    if(prefix == "PACKAGE")
    {
        m.menuTitle = "PACKAGE\'S NAME";
        m.menuTitleTemplate();
        m.menuTitle = "ENTER LESS THAN 52 CHARACTERS";
        m.menuTitleTemplate();

        while(status)
        {
            cout << "PLEASE ENTER YOUR NEW PACKAGE\'S NAME <0 to exit> : ";
            getline(cin,p.packageType);

            if(p.packageType == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(p.packageType.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }
            else if(p.packageType.length() > 52)
            {
                cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :)\n" << endl;
                continue;
            }
            else if(packageExist(packageList,p.packageType))
            {
                cout << "THE NAME HAVE BEEN USED BY OTHER PACKAGE :)\n" << endl;
                continue;
            }
        }

            status = false;

        m.menuTitle = "PACKAGE\'S VENUE";
        m.menuTitleTemplate();
        m.menuTitle = "ENTER LESS THAN 52 CHARACTERS";
        m.menuTitleTemplate();

        status = true;

        while(status)
        {
            cout << "PLEASE ENTER YOUR NEW PACKAGE\'S VENUE <0 to exit> : ";
            getline(cin,p.venue);

            if(p.venue == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(p.venue.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }
            else if(p.venue.length() > 52)
            {
                cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :)\n" << endl;
                continue;
            }

            status = false;
        }

        m.menuTitle = "PACKAGE\'S TIME DURATION";
        m.menuTitleTemplate();
        m.menuTitle = "ALLOW INTERGER NUMBER ONLY";
        m.menuTitleTemplate();
        m.menuTitle = "ENTER WITHIN 1 TO 6 HOURS";
        m.menuTitleTemplate();

        status = true;

        while(status)
        {
            cout << "PLEASE ENTER YOU NEW PACKAGE\'S TIME DURATION <0 to exit> : ";
            getline(cin,p.timeDuration);

            if(p.timeDuration == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(p.timeDuration.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            regex timeFormat("^[1-6]$");

            if(!regex_match(p.timeDuration,timeFormat))
            {
                cout << "INVALID INPUT... PLEASE ENTER WITHIN 1 TO 6 HOURS ONLY :)\n" << endl;
                continue;
            }
        
            status = false;
        }

        m.menuTitle = "PACKAGE\'S CATERING";
        m.menuTitleTemplate();
        m.menuTitle = "ENTER LESS THAN 52 CHARACTERS";
        m.menuTitleTemplate();

        status = true;

        while(status)
        {
            cout << "PLEASE ENTER YOUR NEW PACKAGE\'S CATERING <0 t exit> : ";
            getline(cin,p.catering);

            if(p.catering == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(p.catering.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(p.catering.length() > 52)
            {
                cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                continue;
            }

            status = false;
        }

        m.menuTitle = "PACKAGE\'S DECORATION";
        m.menuTitleTemplate();
        m.menuTitle = "ENTER LESS THAN 52 CHARACTERS";
        m.menuTitleTemplate();

        status = true;

        while(status)
        {
            cout << "PLEASE ENTER YOUR NEW PACKAGE\'S DECORATION <0 to exit> : ";
            getline(cin,p.decoration);

            if(p.decoration == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(p.decoration.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(p.decoration.length() > 52)
            {
                cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                continue;
            }

            status = false;
        }

        m.menuTitle = "PACKAGE\'S ENTERTAINMENT";
        m.menuTitleTemplate();
        m.menuTitle = "ENTER LESS THAN 52 CHARACTERS";
        m.menuTitleTemplate();

        status = true;

        while(status)
        {
            cout << "PLEASE ENTER YOUR NEW PACKAGE\'S ENTERTAINMENT <0 to exit> : ";
            getline(cin,p.entertaintment);

            if(p.entertaintment == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(p.entertaintment.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(p.entertaintment.length() > 52)
            {
                cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                continue;
            }

            status = false;
        }

        status = true;

        m.menuTitle = "PACKAGE\'S ACTIVITIES";
        m.menuTitleTemplate();
        m.menuTitle = "ENTER LESS THAN 52 CHARACTERS";
        m.menuTitleTemplate();

        status = true;

        while(status)
        {
            cout << "PLEASE ENTER YOU NEW PACKAGE\'S ACTIVITIES <0 to exit> : ";
            getline(cin,p.activities);

            if(p.activities == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(p.activities.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(p.activities.length() > 52)
            {
                cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                continue;
            }

            status = false;
        }

        status = true;

        m.menuTitle = "PACKAGE\'S PARTY GIFTS";
        m.menuTitleTemplate();
        m.menuTitle = "ENTER LESS THAN 52 CHARACTERS";
        m.menuTitleTemplate();

        status = true;

        while(status)
        {
            cout << "PLEASE ENTER YOUR NEW PACKAGE\'S PARTY GIFT <0 to exit> : ";
            getline(cin,p.partyGift);

            if(p.partyGift == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(p.partyGift.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(p.partyGift.length() > 52)
            {
                cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                continue;
            }

            status = false;
        }

        status = true;

        m.menuTitle = "PACKAGE\'S CAKE";
        m.menuTitleTemplate();
        m.menuTitle = "ENTER LESS THAN 52 CHARACTERS";
        m.menuTitleTemplate();

        status = true;

        while(status)
        {
            cout << "PLEASE ENTER YOU NEW PACKAGE\'S CAKE <0 to exit> : ";
            getline(cin,p.cake);

            if(p.cake == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(p.cake.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(p.cake.length() > 52)
            {
                cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                continue;
            }

            status = false;
        }

        status = true;

        m.menuTitle = "PACKAGE\'S PRICE";
        m.menuTitleTemplate();
        m.menuTitle = "ENTER INTEGER NUMBER ONLY";
        m.menuTitleTemplate();

        status = true;

        while(status)
        {
            cout << "PLEASE ENTER YOUR NEW PACKAGE\'S PRICE <0 to exit> : ";
            getline(cin,p.price);

            if(p.price == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(p.price.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(p.price.length() > 4)
            {
                cout << "PLEASE DON\'T MAKE IT TOO EXPENSIVE :) \n" << endl;
                continue;
            }

            if(!regex_match(p.price,priceFormat))
            {
                cout << "PLEASE ENTER INTEGER NUMBER ONLY :)\n" << endl;
                continue;
            }

            double newPackagePrice = stod(p.price);
            stringstream ssPacakgePrice;
            ssPacakgePrice << fixed << setprecision(2) << newPackagePrice;
            newPackagePriceString = ssPacakgePrice.str();

            status = false;
        }

        newPackage.packageType = replaceCommas(p.packageType);
        newPackage.venue = replaceCommas(p.venue);
        newPackage.timeDuration = p.timeDuration;
        newPackage.catering = replaceCommas(p.catering);
        newPackage.decoration = replaceCommas(p.decoration);
        newPackage.entertaintment = replaceCommas(p.entertaintment);
        newPackage.activities = replaceCommas(p.activities);
        newPackage.partyGift = replaceCommas(p.partyGift);
        newPackage.cake = replaceCommas(p.cake);
        newPackage.price = newPackagePriceString;
        newPackage.packageTimeChosen = "0";

        confirmRecord =
        {
            {"NAME",p.packageType},
            {"VENUE",p.venue},
            {"TIME DURATION",p.timeDuration},
            {"CATERING",p.catering},
            {"DECORATION",p.decoration},
            {"ENTERTAINMENT",p.entertaintment},
            {"ACTIVITIES",p.activities},
            {"PARTY GIFT",p.partyGift},
            {"CAKE",p.cake},
            {"PRICE",newPackagePriceString}
        };

        clear();;

        outputConfirm(confirmRecord,"PACKAGE CONFIRMATION");

        status = true;
        string confirmPackage;

        while(status)
        {   
            cout << "PLEASE CHECK BEFORE PUBLISH THE NEW PACKAGE <y/n> : ";
            getline(cin,confirmPackage);

            if(confirmPackage.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(confirmPackage == "Y" || confirmPackage == "y")
            {
                packageList.push_back(newPackage);
                addOperation(staffIndex,"ADDED NEW PACKAGE","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                saveVectorList(packageList,"packageList.txt");
                cout << "NEW PACKAGE PUBLISH SUCCESSFUL....\n"<<endl;
                pressAny();
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }
            else if(confirmPackage == "N" || confirmPackage == "n")
            {
                cout << "NEW PACKAGE PUBLISH UNSUCCESSFUL....\n"<<endl;
                pressAny();
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }
            else
            {
                cout << "INVALID INPUT.... PLEASE ENTER A VALID OPTION :) \n" << endl;
                continue;
            }
            status = false;
        }
    }
    else if(prefix == "GENERAL ADD ON")
    {
        m.menuTitle = "ITEM\'S NAME";
        m.menuTitleTemplate();
        m.menuTitle = "ENTER LESS THAN 30 CHARACTERS";
        m.menuTitleTemplate();

        while(status)
        {
            cout << "PLEASE ENTER THE NEW GENERAL ADD ON\'S NAME <0 to exit> : ";
            getline(cin,c.item);

            if(c.item == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(c.item.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(c.item.length() > 30)
            {
                cout << "PLEASE ENTER LESS THAN 30 CHARACTERS :)\n" << endl;
                continue;
            }
            else if(customExist(customPackage,c.item))
            {
                cout << "THE NAME HAVE BEEN USED BY OTHER GENERAL ADD ON :)\n" << endl;
                continue;
            }

            status = false;
        }

        m.menuTitle = "ITEM\'S PRICE";
        m.menuTitleTemplate();

        status = true;

        while(status)
        {
            cout << "PLEASE ENTER THE NEW GENERAL ADD ON\'S PRICE <0 to exit> : ";
            getline(cin,c.itemPrice);

            if(c.itemPrice == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(c.itemPrice.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(!regex_match(c.itemPrice,priceFormat))
            {
                cout << "PLEASE ENTER INTEGER NUMBER ONLY :)\n" << endl;
                continue;
            }

            double newAddOnPrice = stod(c.itemPrice);
            stringstream ssAddOnPrice;
            ssAddOnPrice << fixed << setprecision(2) << newAddOnPrice;
            newAddOnPriceString = ssAddOnPrice.str();


            status = false;
        }

        m.menuTitle = "ITEM\'S AMOUNT STATUS";
        m.menuTitleTemplate();
        m.menuTitle = "y = ACTIVATE / n = NON ACTIVATE";
        m.menuTitleTemplate();

        status = true;

        string amtStatus;

        while(status)
        {
            cout << "IS THE NEW GENERAL ADD ON\'S AMOUNT ABLE TO ADD MORE THAN ONE ? <0 to exit> <y/n> : ";
            getline(cin,amtStatus);

            if(amtStatus == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(amtStatus.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(amtStatus == "Y" || amtStatus == "y")
            {
                c.itemAmountStatus = "TRUE";

                m.menuTitle = "ITEM\'S AMOUNT LIMIT";
                m.menuTitleTemplate();
                m.menuTitle = "ENTER INTEGER NUMBER ONLY";
                m.menuTitleTemplate();

                while(innerStatus)
                {
                    cout << "PLEASE ENTER THE AMOUNT LIMIT <0 to exit> : ";
                    getline(cin,c.itemAmtLimit);

                    if(c.itemAmtLimit == "0")
                    {
                        manageItemOptions(name,staffIndex,prefix);
                        innerStatus = false;
                    }

                    if(c.itemAmtLimit.empty())
                    {
                        cout << "PLEASE DON\'T LEAVE IT EMPTY :) \n" << endl;
                        continue;
                    }

                    regex amtFormat("^-?(?:0|[1-9][0-9]*)$");

                    if(!regex_match(c.itemAmtLimit,amtFormat))
                    {
                        cout << "PLEASE ENTER INTEGER NUMBER ONLT :)\n" << endl;
                        continue;
                    }

                    innerStatus = false;
                }

                status = false;
            }
            else if(amtStatus == "N" || amtStatus == "n")
            {   
                c.itemAmountStatus = "FALSE";
                c.itemAmtLimit = "0";
                status = false;
            }
            else
            {
                cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :)\n" << endl;
                continue;
            }

            status = false;
        }

        newCustomPackage.item = replaceCommas(c.item);
        newCustomPackage.itemPrice = newAddOnPriceString;
        newCustomPackage.tempStatus = "FALSE";
        newCustomPackage.itemStatus = "AVAILABLE";
        newCustomPackage.itemAmountStatus = c.itemAmountStatus;
        newCustomPackage.itemAmount = "0";
        newCustomPackage.itemAmtLimit = c.itemAmtLimit;
        newCustomPackage.customTimeChosen = "0";

        confirmRecord =
        {
            {"NAME",c.item},
            {"PRICE",newAddOnPriceString},
            {"AMOUNT STATUS",c.itemAmountStatus},
            {"AMOUNT LIMIT",c.itemAmtLimit}
        };

        clear();;

        outputConfirm(confirmRecord,"GENERAL ADD ON CONFIRMATION");

        status = true;
        string confirmAddon;

        while(status)
        {   
            cout << "PLEASE CHECK BEFORE PUBLISH THE NEW GENERAL ADD ON <y/n> : ";
            getline(cin,confirmAddon);

            if(confirmAddon.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(confirmAddon == "Y" || confirmAddon == "y")
            {
                customPackage.push_back(newCustomPackage);
                saveVectorList(customPackage,"customPackage.txt");
                cout << "NEW GENERAL ADD ON PUBLISH SUCCESSFUL....\n"<<endl;
                addOperation(staffIndex,"ADDED NEW GENERAL ADD ON","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                pressAny();
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }
            else if(confirmAddon == "N" || confirmAddon == "n")
            {
                cout << "NEW GENERAL ADD ON PUBLISH UNSUCCESSFUL....\n"<<endl;
                pressAny();
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }
            else
            {
                cout << "INVALID INPUT.... PLEASE ENTER A VALID OPTION :) \n" << endl;
                continue;
            }
            status = false;
        }
    }
    else if(prefix == "CUSTOM THEME")
    {
        m.menuTitle = "THEME\'S NAME";
        m.menuTitleTemplate();
        m.menuTitle = "ENTER LESS THAN 42 CHARACTERS";
        m.menuTitleTemplate();

        status = true;

        while(status)
        {
            cout << "PLEASE ENTER THE NEW THEME\'S NAME <0 to exit> : ";
            getline(cin,t.themeDescription);

            if(t.themeDescription.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(t.themeDescription == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(t.themeDescription.length() > 42)
            {
                cout << "PLEASE ENTER LESS THAN 42 CHARACTERS :)\n" << endl;
                continue;
            }
            else if(themeExist(themeList,t.themeDescription))
            {
                cout << "THE NAME HAVE BEEN USED BY OTHER THEME:)\n" << endl;
                continue;
            }

            status = false;
        }

        m.menuTitle = "THEME\'S PRICE";
        m.menuTitleTemplate();

        status = true;

        while(status)
        {   
            cout << "PLEASE ENTER NEW THEME\'S PRICE <0 to exit> : ";
            getline(cin,t.themePrice);

            if(t.themePrice == "0")
            {
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }

            if(t.themePrice.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(t.themePrice.length() > 4 )
            {
                cout << "PLEASE DON\'T MAKE IT TOO EXPENSIVE :)\n" << endl;
                continue;
            }

            regex priceFormat("^(?:0|[1-9][0-9]*)$");

            if(!regex_match(t.themePrice,priceFormat))
            {
                cout << "PLEASE ENTER INTEGER NUMBER ONLY :)\n" << endl;
                continue;
            }

            double newThemePrice = stod(ans);
            stringstream ssThemePrice;
            ssThemePrice << fixed << setprecision(2) << newThemePrice;
            newThemePriceString = ssThemePrice.str();
            status = false;
        }

        newTheme.themeDescription = replaceCommas(t.themeDescription);
        newTheme.themePrice = newThemePriceString;
        newTheme.themeStatus = "AVAILABLE";
        newTheme.themeTemp = "FALSE";
        newTheme.themeTimeChosen = "0";

        confirmRecord =
        {
            {"NAME",t.themeDescription},
            {"PRICE",t.themePrice}
        };

        clear();;

        outputConfirm(confirmRecord,"THEME CONFIRMATION");

        status = true;
        string confirmTheme;

        while(status)
        {   
            cout << "PLEASE CHECK BEFORE PUBLISH THE NEW THEME <y/n> : ";
            getline(cin,confirmTheme);

            if(confirmTheme.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            if(confirmTheme == "Y" || confirmTheme == "y")
            {
                themeList.push_back(newTheme);
                saveVectorList(themeList,"theme.txt");
                cout << "NEW THEME PUBLISH SUCCESSFUL....\n"<<endl;
                addOperation(staffIndex,"ADDED NEW THEME","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                pressAny();
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }
            else if(confirmTheme == "N" || confirmTheme == "n")
            {
                cout << "NEW THEME PUBLISH UNSUCCESSFUL....\n"<<endl;
                pressAny();
                manageItemOptions(name,staffIndex,prefix);
                status = false;
            }
            else
            {
                cout << "INVALID INPUT.... PLEASE ENTER A VALID OPTION :) \n" << endl;
                continue;
            }
            status = false;
        }
    }
}

void removeItem(string name,int staffIndex,string prefix)
{
    vector<Package<string>> packageList = getVectorList <Package<string>> ("packageList.txt");
    vector<Theme<string>> themeList = getVectorList <Theme<string>> ("theme.txt");
    vector<CustomPackage<string>> customPackage = getVectorList <CustomPackage<string>> ("customPackage.txt");
    vector<vector<string>> listRecord;
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");

    bool status = true, innerStatus = true;
    string title, ans, confirmAns;

    clear();;

    itemList("REMOVE",prefix);

    while(status)
    {
        cout << "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            manageItemOptions(name,staffIndex,prefix);
            status = false;
        }

        int packageIndex = stoi(ans) - 1;
        if(prefix == "PACKAGE")
        {
            clear();;

            outputPackageRecord(packageIndex,"OUTPUT");

                while(innerStatus)
                {
                    cout << "ARE YOU SURE YOU WANT TO REMOVE THIS ITEM ? <y/n> : ";
                    getline(cin,confirmAns);

                    if(confirmAns.empty())
                    {
                        cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                        continue;
                    }

                    if(confirmAns == "y" || confirmAns == "Y")
                    {
                        cout << "YOU HAVE BEEN REMOVED <" << packageList[packageIndex].packageType << "> SUCCESSFUL...\n"<<endl;
                        addOperation(staffIndex,"REMOVED PACKAGE","STAFF OPERATION","STAFF");
                        saveVectorList(operateList,"operation.txt");
                        packageList.erase(packageList.begin()+packageIndex);
                        saveVectorList(packageList,"packageList.txt");
                        pressAny();
                        manageItemOptions(name,staffIndex,prefix);
                        innerStatus = false;
                    }
                    else if(confirmAns == "N" || confirmAns == "n")
                    {
                        cout << "REMOVE ITEM UNSUCCESFUL...\n" << endl;
                        pressAny();
                        manageItemOptions(name,staffIndex,prefix);
                        innerStatus = false;
                    }
                    else
                    {
                        cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :) \n" << endl;
                        continue;
                    }
                    innerStatus = false;
                }
        }
        else if(prefix == "GENERAL ADD ON")
        {
            clear();;
            outputCustomMenu("SPECIFIC",packageIndex);

                while(innerStatus)
                {
                    cout << "ARE YOU SURE YOU WANT TO REMOVE THIS ITEM ? <y/n> : ";
                    getline(cin,confirmAns);

                    if(confirmAns.empty())
                    {
                        cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                        continue;
                    }

                    if(confirmAns == "y" || confirmAns == "Y")
                    {
                        cout << "YOU HAVE BEEN REMOVED <" << customPackage[packageIndex].item << "> SUCCESSFUL...\n"<<endl;
                        addOperation(staffIndex,"REMOVED GENERAL ADD ON","STAFF OPERATION","STAFF");
                        saveVectorList(operateList,"operation.txt");
                        customPackage.erase(customPackage.begin()+packageIndex);
                        saveVectorList(customPackage,"customPackage.txt");
                        pressAny();
                        manageItemOptions(name,staffIndex,prefix);
                        innerStatus = false;
                    }
                    else if(confirmAns == "N" || confirmAns == "n")
                    {
                        cout << "REMOVE ITEM UNSUCCESFUL...\n" << endl;
                        pressAny();
                        manageItemOptions(name,staffIndex,prefix);
                        innerStatus = false;
                    }
                    else
                    {
                        cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :) \n" << endl;
                        continue;
                    }
                    innerStatus = false;
                }
        }
        else if(prefix == "CUSTOM THEME")
        {
            clear();;
            outputTheme("SPECIFIC",packageIndex);

                while(innerStatus)
                {
                    cout << "ARE YOU SURE YOU WANT TO REMOVE THIS ITEM ? <y/n> : ";
                    getline(cin,confirmAns);

                    if(confirmAns.empty())
                    {
                        cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                        continue;
                    }

                    if(confirmAns == "y" || confirmAns == "Y")
                    {
                        cout << "YOU HAVE BEEN REMOVED <" << themeList[packageIndex].themeDescription << "> SUCCESSFUL...\n"<<endl;
                        addOperation(staffIndex,"REMOVED THEME","STAFF OPERATION","STAFF");
                        saveVectorList(operateList,"operation.txt");
                        themeList.erase(themeList.begin()+packageIndex);
                        saveVectorList(themeList,"theme.txt");
                        pressAny();
                        manageItemOptions(name,staffIndex,prefix);
                        innerStatus = false;
                    }
                    else if(confirmAns == "N" || confirmAns == "n")
                    {
                        cout << "REMOVE ITEM UNSUCCESFUL...\n" << endl;
                        pressAny();
                        manageItemOptions(name,staffIndex,prefix);
                        innerStatus = false;
                    }
                    else
                    {
                        cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :) \n" << endl;
                        continue;
                    }
                    innerStatus = false;
                }
        }        
        status = false;
    }
}

void editSection(string name,int staffIndex,string prefix,int index,string option)
{
    bool status = true;
    string ans;
    string newThemePriceString, newPackagePriceString, newCustomPackagePriceString;
    vector<Package<string>> packageList = getVectorList <Package<string>> ("packageList.txt");
    vector<Theme<string>> themeList = getVectorList <Theme<string>> ("theme.txt");
    vector<CustomPackage<string>> customPackage = getVectorList <CustomPackage<string>> ("customPackage.txt");
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");
    regex priceFormat("^(?:0|[1-9][0-9]*)$");

    if(prefix == "PACKAGE")
    {
        if(option == "1")
        {
            cout << "YOU HAVE CHOSE TO EDIT <NAME> OF THE <"+prefix+"> :)\n" <<endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW NAME <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(ans.length() > 52)
                {
                    cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                    continue;
                }

                cout << "YOU HAVE CHANGED THE NAME SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED PACAKAGE\'S NAME","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <" << packageList[index].packageType << "> TO <" << ans << "> :)\n"<<endl;
                packageList[index].packageType = replaceCommas(ans);
                saveVectorList(packageList,"packageList.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
        else if(option == "2")
        {
            cout << "YOU HAVE CHOSE TO EDIT <VENUE> OF THE <"+prefix+"> :)" << endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW VENUE <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(ans.length() > 52)
                {
                    cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                    continue;
                }

                cout << "YOU HAVE CHANGED THE VENUE SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED PACKAGE\'S VENUE","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <" << packageList[index].venue << "> TO <" << ans << "> :)\n"<<endl;
                packageList[index].venue = replaceCommas(ans);
                saveVectorList(packageList,"packageList.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
        else if(option == "3")
        {
            cout << "YOU HAVE CHOSE TO EDIT <TIME DURATION> OF THE <"+prefix+"> :)" << endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW TIME DURATION <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                regex timeFormat("^[1-6]$");

                if(!regex_match(ans,timeFormat))
                {
                    cout << "INVALID INPUT... PLEASE ENTER WITHIN 1 TO 6 HOURS ONLY :)\n" << endl;
                    continue;
                }

                cout << "YOU HAVE CHANGED THE TIME DURATION SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED PACAKAGE\'S TIME DURATION","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <" << packageList[index].timeDuration << " HOURS> TO <" << ans << " HOURS> :)\n"<<endl;
                packageList[index].timeDuration = ans;
                saveVectorList(packageList,"packageList.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
        else if(option == "4")
        {
            cout << "YOU HAVE CHOSE TO EDIT <CATERING> OF THE <"+prefix+"> :)" << endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW CATERING <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(ans.length() > 52)
                {
                    cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                    continue;
                }

                cout << "YOU HAVE CHANGED THE CATERING SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED PACAKAGE\'S CATERING","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <" << packageList[index].catering << "> TO <" << ans << "> :)\n"<<endl;
                packageList[index].catering = replaceCommas(ans);
                saveVectorList(packageList,"packageList.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
        else if(option == "5")
        {
            cout << "YOU HAVE CHOSE TO EDIT <DECORATION> OF THE <"+prefix+"> :)" << endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW DECORATION <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(ans.length() > 52)
                {
                    cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                    continue;
                }

                cout << "YOU HAVE CHANGED THE DECORATION SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED PACAKAGE\'S DECORATION","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <" << packageList[index].decoration << "> TO <" << ans << "> :)\n"<<endl;
                packageList[index].decoration = replaceCommas(ans);
                saveVectorList(packageList,"packageList.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
        else if(option == "6")
        {
            cout << "YOU HAVE CHOSE TO EDIT <ENTERTAINMENT> OF THE <"+prefix+"> :)"<< endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW ENTERTAINMENT <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(ans.length() > 52)
                {
                    cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                    continue;
                }

                cout << "YOU HAVE CHANGED THE ENTERTAINMENT SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED PACAKAGE\'S ENTERTAINMENT","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <" << packageList[index].entertaintment << "> TO <" << ans << "> :)\n"<<endl;
                packageList[index].entertaintment = replaceCommas(ans);
                saveVectorList(packageList,"packageList.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
        else if(option == "7")
        {
            cout << "YOU HAVE CHOSE TO EDIT <ACTIVITIES> OF THE <"+prefix+"> :)"<< endl; 
            while(status)
            {
                cout << "PLEASE ENTER THE NEW ACTIVITIES <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(ans.length() > 52)
                {
                    cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                    continue;
                }

                cout << "YOU HAVE CHANGED THE ACTIVITIES SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED PACAKAGE\'S ACTIVITIES","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <" << packageList[index].activities << "> TO <" << ans << "> :)\n"<<endl;
                packageList[index].activities = replaceCommas(ans);
                saveVectorList(packageList,"packageList.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
        else if(option == "8")
        {
            cout << "YOU HAVE CHOSE TO EDIT <PARTY GIFT> OF THE <"+prefix+"> :)"<< endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW PARTY GIFT <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(ans.length() > 52)
                {
                    cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                    continue;
                }

                cout << "YOU HAVE CHANGED THE PARTY GIFT SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED PACAKAGE\'S PARTY GIFT","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <" << packageList[index].partyGift << "> TO <" << ans << "> :)\n"<<endl;
                packageList[index].partyGift = replaceCommas(ans);
                saveVectorList(packageList,"packageList.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
        else if(option == "9")
        {
            cout << "YOU HAVE CHOSE TO EDIT <CAKE> OF THE <"+prefix+"> :)" << endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW CAKE <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(ans.length() > 52)
                {
                    cout << "PLEASE ENTER LESS THAN 52 CHARACTERS :) \n" << endl;
                    continue;
                }

                cout << "YOU HAVE CHANGED THE CAKE SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED PACAKAGE\'S CAKE","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <" << packageList[index].cake << "> TO <" << ans << "> :)\n"<<endl;
                packageList[index].cake = replaceCommas(ans);
                saveVectorList(packageList,"packageList.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }

        }
        else if(option == "10")
        {
            cout << "YOU HAVE CHOSE TO EDIT <PRICE> OF THE <"+prefix+"> :)" << endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW PRICE <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }


                if(ans.length() > 4)
                {
                    cout << "PLEASE DON\'T MAKE IT TOO EXPENSIVE :) \n" << endl;
                    continue;
                }

                if(!regex_match(ans,priceFormat))
                {
                    cout << "PLEASE ENTER INTEGER NUMBER ONLY :)\n" << endl;
                    continue;
                }

                double newPackagePrice = stod(ans);
                stringstream ssPackagePrice;
                ssPackagePrice << fixed << setprecision(2) << newPackagePrice;
                string newPackagePriceString = ssPackagePrice.str();

                cout << "YOU HAVE CHANGED THE PRICE SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED PACAKAGE\'S PRICE","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <RM" << packageList[index].price << "> TO <RM" << newPackagePriceString << "> :)\n"<<endl;
                packageList[index].price = newPackagePriceString;
                saveVectorList(packageList,"packageList.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
    }
    else if(prefix == "GENERAL ADD ON")
    {
        if(option == "1")
        {
            cout << "YOU HAVE CHOSE TO EDIT <NAME> OF THE <"+prefix+"> :)" << endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW NAME <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY ;)\n" << endl;
                    continue;
                }


                if(ans.length() > 28)
                {
                    cout << "PLEASE ENTER LESS THAN 28 CHARACTERS :)\n " << endl;
                    continue;
                }

                cout << "YOU HAVE CHANGED THE NAME SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED CUSTOM ITEM\'S NAME","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <" << customPackage[index].item << "> TO <" << ans << "> :)\n"<<endl;
                customPackage[index].item = replaceCommas(ans);
                saveVectorList(customPackage,"customPackage.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
        else if(option == "2")
        {
            cout << "YOU HAVE CHOSE TO EDIT <PRICE> OF THE <"+prefix+"> :)" << endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW PRICE <0 to exit> : ";
                getline(cin,ans);

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false
                    ;
                }

                if(!regex_match(ans,priceFormat))
                {
                    cout << "PLEASE ENTER INTEGER NUMBER ONLY :)\n" << endl;
                    continue;
                }

                double newCustomPackagePrice = stod(ans);
                stringstream ssCustomPackagePrice;
                ssCustomPackagePrice << fixed << setprecision(2) << newCustomPackagePrice;
                newCustomPackagePriceString = ssCustomPackagePrice.str();

                cout << "YOU HAVE CHANGED THE PRICE SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED CUSTOM ITEM\'S PRICE","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <RM" << customPackage[index].itemPrice << "> TO <RM" << newCustomPackagePriceString << "> :)\n"<<endl;
                customPackage[index].itemPrice = newCustomPackagePriceString;
                saveVectorList(customPackage,"customPackage.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
        else if(option == "3")
        {
            cout << "YOU HAVE CHOSE TO EDIT <AMOUNT STATUS> OF THE <"+prefix+"> :)" << endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW AMOUNT STATUS <0 to exit> <y = ACTIVATE / n = NOT ACTIVATE> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :\n" << endl;
                    continue;
                }
                
                string newAmtStatus;
                if(ans == "Y" || ans == "y")
                {
                    newAmtStatus = "TRUE";
                    cout << "YOU HAVE CHANGED THE AMOUNT STATUS SUCCESSFUL..."<<endl;
                    cout << "FROM <" << customPackage[index].itemAmountStatus << "> TO <" << newAmtStatus << "> :)\n"<<endl;
                    customPackage[index].itemAmountStatus = newAmtStatus;
                    status = false;
                }
                else if(ans == "N" || ans == "n")
                {
                    newAmtStatus = "FALSE";
                    cout << "YOU HAVE CHANGED THE AMOUNT STATUS SUCCESSFUL..."<<endl;
                    addOperation(staffIndex,"CHANGED AMOUNT STATUS","STAFF OPERATION","STAFF");
                    saveVectorList(operateList,"operation.txt");
                    cout << "FROM <" << customPackage[index].itemAmountStatus << "> TO <" << newAmtStatus << "> :)\n"<<endl;
                    customPackage[index].itemAmountStatus = newAmtStatus;
                    status = false;
                }
                else
                {
                    cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :)\n" << endl;
                    continue;
                }

                saveVectorList(customPackage,"customPackage.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
        else if(option == "4")
        {
            cout << "YOU HAVE CHOSE TO EDIT <AMOUNT LIMIT> OF THE <"+prefix+"> :)" << endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW AMOUNT LIMIT <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                cout << "YOU HAVE CHANGED THE AMOUNT LIMIT SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED AMOUNT LIMIT","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <" << customPackage[index].itemAmtLimit << "> TO <" << ans << "> :)\n"<<endl;
                customPackage[index].itemAmtLimit = ans;
                saveVectorList(customPackage,"customPackage.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
    }
    else if(prefix == "CUSTOM THEME")
    {
        if(option == "1")
        {
            cout << "YOU HAVE CHOSE TO EDIT <NAME> OF THE <"+prefix+"> :)" << endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW NAME <0 to exit> : ";
                getline(cin,ans);

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(ans.empty())
                {
                    cout << "PLEAS E DON\'T LEAVE IT EMPTY :)\n " << endl;
                    continue;
                }

                if(ans.length() > 42)
                {
                    cout<< "PLEASE ENTER LESS THAN 42 CHARACTERS :)\n" << endl;
                    continue;
                }

                cout << "YOU HAVE CHANGED THE NAME SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED THEME\'S NAME","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <" << themeList[index].themeDescription << "> TO <" << ans << "> :)\n"<<endl;
                themeList[index].themeDescription = replaceCommas(ans);
                saveVectorList(themeList,"theme.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
        else if(option == "2")
        {
            cout << "YOU HAVE CHOSE TO EDIT <PRICE> OF THE <"+prefix+"> :)" << endl;
            while(status)
            {
                cout << "PLEASE ENTER THE NEW PRICE <0 to exit> : ";
                getline(cin,ans);

                if(ans.empty())
                {
                    cout<< "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                    continue;
                }

                if(ans == "0")
                {
                    editOptions(name,staffIndex,prefix,index);
                    status = false;
                }

                if(!regex_match(ans,priceFormat))
                {
                    cout << "PLEASE ENTER INTEGER NUMBER ONLY :)\n" << endl;
                    continue;
                }

                double newThemePrice = stod(ans);
                stringstream ssThemePrice;
                ssThemePrice << fixed << setprecision(2) << newThemePrice;
                string newThemePriceString = ssThemePrice.str();

                cout << "YOU HAVE CHANGED THE PRICE SUCCESSFUL..."<<endl;
                addOperation(staffIndex,"CHANGED THEME\'S PRICE","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                cout << "FROM <RM" << themeList[index].themePrice << "> TO <RM" << newThemePriceString << "> :)\n"<<endl;
                themeList[index].themePrice = newThemePriceString;
                saveVectorList(themeList,"theme.txt");
                pressAny();
                editOptions(name,staffIndex,prefix,index);
                status = false;
            }
        }
    }
}

void editOptions(string name,int staffIndex,string prefix,int index)
{
    MenuTemplate <string> m;

    bool status = true;
    string ans, title;

    vector<Package<string>> packageList = getVectorList <Package<string>> ("packageList.txt");
    vector<Theme<string>> themeList = getVectorList <Theme<string>> ("theme.txt");
    vector<CustomPackage<string>> customPackage = getVectorList <CustomPackage<string>> ("customPackage.txt");
    vector<vector<string>> customPackageRecords;
    vector<vector<string>> themeRecords;

    clear();;

    if(prefix == "PACKAGE")
    {
        outputPackageRecord(index,"EDIT");
    }
    else if(prefix == "GENERAL ADD ON")
    {
        if(customPackage[index].itemAmountStatus == "TRUE")
        {
            customPackageRecords = 
            {
                {"NAME",customPackage[index].item},
                {"PRICE",customPackage[index].itemPrice},
                {"AMOUNT STATUS",customPackage[index].itemAmountStatus},
                {"ITEM LIMIT ",customPackage[index].itemAmtLimit}
            };
        }
        else
        {
            customPackageRecords = 
            {
                {"NAME",customPackage[index].item},
                {"PRICE",customPackage[index].itemPrice},
                {"AMOUNT STATUS",customPackage[index].itemAmountStatus}
            };
        }
        title = "GENERAL ADD ON EDIT OPTIONS";

        outputList(customPackageRecords,prefix);

    }
    else if(prefix == "CUSTOM THEME")
    {
        title = "CUSTOM THEME EDIT OPTIONS";
        themeRecords = 
        {
            {"NAME",themeList[index].themeDescription},
            {"PRICE",themeList[index].themePrice}
        };

        outputList(themeRecords,prefix);
    }

    while(status)
    {
        cout << "PLEASE CHOOSE WHICH SECTION TO EDIT <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            editItem(name,staffIndex,prefix);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        int ansInt = stoi(ans);

        if(prefix == "PACKAGE"&& (ansInt < 1 || ansInt > 10))
        {
            cout << "PLEASE ENTER THE VALID OPTION :)\n"<<endl;
            continue;
        }
        else if(prefix == "GENERAL ADD ON"&&customPackage[index].itemAmountStatus == "TRUE"&& (ansInt < 1 || ansInt > customPackageRecords.size()))
        {
            cout << "PLEASE ENTER THE VALID OPTION :)\n"<<endl;
            continue;
        }
        else if(prefix == "GENERAL ADD ON"&&customPackage[index].itemAmountStatus == "FALSE" && (ansInt < 1 || ansInt > 3))
        {
            cout << "PLEASE ENTER THE VALID OPTION :)\n"<<endl;
            continue;
        }
        else if(prefix == "CUSTOM THEME"&& (ansInt < 1 || ansInt > themeRecords.size()))
        {
            cout << "PLEASE ENTER THE VALID OPTION :)\n"<<endl;
            continue;
        }
        else
        {
            editSection(name,staffIndex,prefix,index,ans);
            status = false;
        }
        status = false;
    }
}

void editItem(string name,int staffIndex,string prefix)
{
    vector<Package<string>> packageList = getVectorList <Package<string>> ("packageList.txt");
    vector<Theme<string>> themeList = getVectorList <Theme<string>> ("theme.txt");
    vector<CustomPackage<string>> customPackage = getVectorList <CustomPackage<string>> ("customPackage.txt");
    vector<vector<string>> listRecord;

    bool status = true,innerStatus = true;
    string title, ans, editAns;
    int editIndex;

    clear();;

    itemList("EDIT",prefix);

    while(status)
    {
        cout << "PLEASE CHOOSE ANY "+prefix+ " TO EDIT <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            manageItemOptions(name,staffIndex,prefix);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        int index = stoi(ans)-1;

        if(prefix == "PACKAGE")
        {
            clear();;
            editOptions(name,staffIndex,prefix,index);
            status = false;
        }
        else if(prefix == "GENERAL ADD ON")
        {
            clear();;
            editOptions(name,staffIndex,prefix,index);
            status = false;
        }
        else if(prefix == "CUSTOM THEME")
        {
            clear();;
            editOptions(name,staffIndex,prefix,index);
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER VALID OPTION :)\n" << endl;
            continue;
        }
        status = false;
    }
}

void previewItem(string name,int staffIndex,string prefix)
{
    clear();;

    vector<Package<string>> packageList = getVectorList <Package<string>> ("packageList.txt");
    vector<Theme<string>> themeList = getVectorList <Theme<string>> ("theme.txt");
    vector<CustomPackage<string>> customPackage = getVectorList <CustomPackage<string>> ("customPackage.txt");
    vector<vector<string>> listRecord;
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");

    bool status = true;
    string title, ans, confirmAns;

    itemList("PREVIEW",prefix);

    while(status)
    {
        cout << "CHOOSE ANY OPTIONS SHOWN ABOVE TO PREVIEW THE ITEM <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            manageItemOptions(name,staffIndex,prefix);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        int index = stoi(ans)-1;


        if(prefix == "PACKAGE")
        {
            clear();;

            outputPackageRecord(index,"OUTPUT");

                cout << "HERE\'S THE PREVIEW FOR THE PACKAGE :)\n" << endl;
                addOperation(staffIndex,"PREVIEWED PACKAGE","STAFF OPERATION","STAFF");
                saveVectorList(operateList,"operation.txt");
                pressAny();
                previewItem(name,staffIndex,prefix);
                status = false;
        }
        else if(prefix == "GENERAL ADD ON")
        {
            clear();;
            outputCustomMenu("SPECIFIC",index);
            cout << "HERE\'S THE PREVIEW FOR THE GENERAL ADD ON :)\n" << endl;
            addOperation(staffIndex,"PREVIEWED GENERAL ADD ON","STAFF OPERATION","STAFF");
            saveVectorList(operateList,"operation.txt");
            pressAny();
            previewItem(name,staffIndex,prefix);
            status = false;

        }
        else if(prefix == "CUSTOM THEME")
        {
            clear();;
            outputTheme("SPECIFIC",index);
            cout << "HERE\'S THE PREVIEW FOR THE CUSTOM THEME :)\n" << endl;
            addOperation(staffIndex,"PREVIEWED THEME","STAFF OPERATION","STAFF");
            saveVectorList(operateList,"operation.txt");
            pressAny();
            previewItem(name,staffIndex,prefix);
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :)" << endl;
            continue;
        }
        status = false;
    }
}

void manageItemOptions(string name,int staffIndex,string prefix)
{
    MenuTemplate <string> m; 

    bool status = true;
    string title, ans;

    clear();;

    m.menuTitle = "MANAGE <"+prefix+"> SECTION";
    m.menuTitleTemplate();

    if(prefix == "PACKAGE")
    {
        title = "PACKAGE OPTIONS";
    }
    else if(prefix == "GENERAL ADD ON")
    {
        title = "GENERAL ADD ON OPTIONS";
    }
    else if(prefix == "CUSTOM THEME")
    {
        title = "CUSTOM THEME OPTIONS";
    }

    m.menuTitle = title;
    m.menuOptions.push_back("ADD ITEM");
    m.menuOptions.push_back("REMOVE ITEM");
    m.menuOptions.push_back("EDIT ITEM");
    m.menuOptions.push_back("PREVIEW ITEM");

    m.menuTemplate();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            staffManageItem(name,staffIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(ans == "1")
        {
            addItem(name,staffIndex,prefix);
            status = false;
        }
        else if(ans == "2")
        {
            removeItem(name,staffIndex,prefix);
            status = false;
        }
        else if(ans == "3")
        {   
            editItem(name,staffIndex,prefix);
            status = false;
        }
        else if(ans == "4")
        {
            previewItem(name,staffIndex,prefix);
            status = false;
        }
        else
        {
            cout << "INVALID INPUT.. PLEASE ENTER VALID OPTION :) \n" << endl;
            continue;
        }

        status = false;
    }
}

void staffManageItem(string name,int staffIndex)
{
    MenuTemplate <string> m; 

    bool status = true;
    string ans;

    clear();;

    m.menuTitle = "MANAGE ITEM SECTION";

    m.menuOptions.push_back("MANAGE PACKAGE");
    m.menuOptions.push_back("MANAGE GENERAL ADD ON");
    m.menuOptions.push_back("MANAGE CUSTOM THEME");

    m.menuTemplate();

    while(status)
    {
        cout << "PLEASE CHOOSE ANY OPTIONS SHOWN ABOVE <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            staffMainPage(name,staffIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(ans == "1")
        {
            manageItemOptions(name,staffIndex, "PACKAGE");
            status = false;
        }
        else if(ans == "2")
        {
            manageItemOptions(name,staffIndex, "GENERAL ADD ON");
            status = false;
        }
        else if(ans == "3")
        {
            manageItemOptions(name,staffIndex, "CUSTOM THEME");
            status = false;
        }
        else
        {
            cout << "INVALID INPUT.... PELASE ENTER VALID OPTION :)\n" << endl;
            continue;
        }

        status = false;
    }
    
}   

void generateReport(string name, int staffIndex, string prefix)
{
    MenuTemplate <string> m;

    vector <Receipt> receiptList = getVectorList <Receipt> ("receipt.txt");
    vector <Feedback> feedbackList = getVectorList <Feedback> ("feedback.txt");
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");
    vector <CustomPackage<string>> customPackage = getVectorList <CustomPackage<string>> ("customPackage.txt");
    vector <Theme<string>> themeList = getVectorList <Theme<string>> ("theme.txt");
    vector<Package<string>> packageList = getVectorList<Package<string>>("packageList.txt");
    vector<vector<string>> reportRecords;
    vector<vector<string>> generalRecords;
    vector<vector<string>> themeRecords;
    vector<vector<string>> extraInfo;
    string startDate,endDate;

    bool status = true;
    double totalRevenue = 0.0, pendingPayment = 0.0, completePayment = 0.0, totalPackageRevenue = 0.0,
    totalAddOnRevenue = 0.0,totalFeedback = 0.0,averageRating = 0.0,generalTotalRevenue = 0.0,themeTotalRevenue = 0.0;
    int packageTime,generalTime,themeTime;
    
    cout << "\n";
    m.menuTitle = "START DATE";
    m.menuTitleTemplate();
    m.menuTitle = "PLEASE ENTER IN <YYYY-MM-DD>";
    m.menuTitleTemplate();

        while(status)
        {
            cout << "PLEASE ENTER THE START DATE <0 to exit> : ";
            getline(cin,startDate);

            if(startDate == "0")
            {
                staffGenerateReport(name,staffIndex);
                status = false;
            }

            if(startDate.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            regex dateFormat("^\\d{4}-(0[1-9]|1[0-2])-(0[1-9]|[12]\\d|3[01])$");

            if(!regex_match(startDate,dateFormat))
            {
                cout  << "INVALID INPUT... PLEASE ENTER IN <YYYY-MM-DD> FORMAT :)\n" <<endl;
                continue;
            }

            status = false;
        }

        status = true;

        m.menuTitle = "END DATE";
        m.menuTitleTemplate();
        m.menuTitle = "PLEASE ENTER IN <YYYY-MM-DD>";
        m.menuTitleTemplate();

        while(status)
        {
            cout << "PLEASE ENTER THE END DATE <0 to exit> : ";
            getline(cin,endDate);

            if(endDate == "0")
            {
                staffGenerateReport(name,staffIndex);
                status = false;
            }

            if (startDate > endDate)
            {
                cout << "START DATE MUST BE EARLIER THAN OR SAME AS END DATE :)\n" << endl;
                pressAny();
                staffGenerateReport(name, staffIndex);
                status = false;
            }


            if(endDate.empty())
            {
                cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
                continue;
            }

            regex dateFormat("^\\d{4}-(0[1-9]|1[0-2])-(0[1-9]|[12]\\d|3[01])$");

            if(!regex_match(endDate,dateFormat))
            {
                cout  << "INVALID INPUT... PLEASE ENTER IN <YYYY-MM-DD> FORMAT :)\n" <<endl;
                continue;
            }
            status = false;

            calculateReport(totalRevenue, pendingPayment, completePayment, totalPackageRevenue,totalAddOnRevenue,totalFeedback,averageRating,generalTotalRevenue,themeTotalRevenue,packageTime,generalTime,themeTime,startDate,endDate);

            stringstream ssTotalRevenue,ssPendingPayment, ssCompletePayment, ssTotalPackageRevenue,ssTotalAddOnRevenue,ssTotalFeedback,ssAverageRating,ssGeneralTotalRevenue,ssThemeTotalRevenue;

            ssTotalRevenue << fixed << setprecision(2) << totalRevenue;
            ssPendingPayment << fixed << setprecision(2) << pendingPayment;
            ssCompletePayment << fixed << setprecision(2) << completePayment;
            ssTotalPackageRevenue << fixed << setprecision(2) << totalPackageRevenue;
            ssTotalAddOnRevenue << fixed << setprecision(2) << totalAddOnRevenue;
            ssTotalFeedback << fixed << setprecision(2) << totalFeedback;
            ssAverageRating << fixed << setprecision(2) << averageRating;
            ssGeneralTotalRevenue << fixed << setprecision(2) << generalTotalRevenue;
            ssThemeTotalRevenue << fixed << setprecision(2) << themeTotalRevenue;

            string totalRevenueStr = ssTotalRevenue.str();
            string totalPendingPayemntStr = ssPendingPayment.str();
            string totalCompletePaymentStr = ssCompletePayment.str();
            string totalPackageRevenueStr  = ssTotalPackageRevenue.str();
            string totalAddOnRevenueStr = ssTotalAddOnRevenue.str();
            string totalFeedbackStr = ssTotalFeedback.str();
            string averageRatingStr = ssAverageRating.str();
            string generalTotalRevenueStr = ssGeneralTotalRevenue.str();
            string themeTotalRevenueStr = ssThemeTotalRevenue.str();
            string packageTimeStr = to_string(packageTime);
            string generalTimeStr = to_string(generalTime);
            string themeTimeStr = to_string(themeTime);

        if(prefix == "REVENUE")
        {   
            for(int i = 0; i < receiptList.size();i++)
            {
                string receiptID = receiptList[i].receiptID;
                string custName = receiptList[i].registers.login.nickname;
                string issueDate = (receiptList[i].issueDate).substr(0,10);
                string amtAfterTax = receiptList[i].amtAfterTax;
                string paymentStatus = receiptList[i].paymentStatus;
                string paymentType = receiptList[i].paymentType;
                if(checkDateRange(receiptList[i].issueDate,startDate,endDate))
                {
                    reportRecords.push_back
                    (
                        {receiptID,custName,issueDate,amtAfterTax,paymentStatus,paymentType}
                    );
                }
                else
                {
                    cout << "TEHRE\'S NO DATA THAT WITHIN THE DATE\'S RANGE YOU HAVE SETTED :)\n"<<endl;
                    pressAny();
                    staffGenerateReport(name,staffIndex);
                }

            }

            extraInfo = 
            {
                {"TOTAL REVENUE",totalRevenueStr},
                {"PENDING PAYMENT",totalPendingPayemntStr},
                {"COMPLETED PAYMENT",totalCompletePaymentStr}
            };
        }
        else if (prefix == "ITEM PERFORMANCE")
        {
            for (const auto& p : packageList)
            {
                if (stoi(p.packageTimeChosen) > 0)
                {
                    reportRecords.push_back
                    (
                        { p.packageType, p.venue, p.catering, p.packageTimeChosen, p.price }
                    );
                }
            }

            for (const auto& cp : customPackage)
            {
                if (stoi(cp.customTimeChosen) > 0)
                {
                    double itemTotalRevenue = safeStod(cp.itemPrice) * stoi(cp.customTimeChosen);
                    stringstream ss;
                    ss << fixed << setprecision(2) << itemTotalRevenue;
                    generalRecords.push_back(
                        { cp.item, cp.customTimeChosen, ss.str(), "", "", "" }
                    );
                }
            }

            for (const auto& t : themeList)
            {
                if (stoi(t.themeTimeChosen) > 0)
                {
                    double themeRevenue = safeStod(t.themePrice) * stoi(t.themeTimeChosen);
                    stringstream ss;
                    ss << fixed << setprecision(2) << themeRevenue;
                    themeRecords.push_back
                    (
                        { t.themeDescription, t.themeTimeChosen, ss.str(), "", "", "" }
                    );
                }
            }

            extraInfo = 
            {
                { "PACKAGE REVENUE", totalPackageRevenueStr },
                { "GENERAL ADD-ON REVENUE", totalAddOnRevenueStr },
                { "THEME REVENUE", themeTotalRevenueStr }
            };
        }
        else if(prefix == "FEEDBACK")
        {
            for(int i = 0; i < feedbackList.size();i++)
            {
                if(checkDateRange(feedbackList[i].feedBackDate,startDate,endDate))
                {
                    string custName = feedbackList[i].registers.login.nickname;
                    string rating = feedbackList[i].rate;
                    string ratingDate = (feedbackList[i].feedBackDate).substr(0,10);
                    reportRecords.push_back
                    (
                        {custName,rating,ratingDate,"","",""}
                    );
                }
                else
                {
                    cout << "TEHRE\'S NO DATA THAT WITHIN THE DATE\'S RANGE YOU HAVE SETTED :)\n"<<endl;
                    pressAny();
                    staffGenerateReport(name,staffIndex);
                }
            }

            extraInfo = 
            {
                {"TOTAL FEEDBACK",to_string(feedbackList.size())},
                {"AVERAGE RATING",averageRatingStr},
                {"",""}
            };
        }

        clear();;

        m.menuTitle = "GENERATE REPORT SECTION";
        m.menuTitleTemplate();


        outputReport(reportRecords,generalRecords,themeRecords,extraInfo,prefix);
        cout << "\nTHIS IS THE "+ prefix +" REPORT :)\n" << endl;
        pressAny();
        staffGenerateReport(name,staffIndex);
        }
}

//Staff view report function
void staffGenerateReport(string name, int staffIndex)
{
    MenuTemplate <string> m;
    string ans;
    bool status = true;
    clear();;

    m.menuTitle = "GENERATE REPORT SECTION";
    m.menuTitleTemplate();

    m.menuTitle = "REPORT OPTIONS";
    m.menuOptions.push_back("REVENUE REPORT");
    m.menuOptions.push_back("ITEM PERFORMANCE REPORT");
    m.menuOptions.push_back("FEEDBACK REPORT");

    m.menuTemplate();

    while(status)
    {
        cout << "PLASE CHOOSE ANY OPTIONS SHOWN ABOVE <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            staffMainPage(name,staffIndex);
            continue;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(ans == "1")
        {
            generateReport(name,staffIndex,"REVENUE");
            status = false;
        }
        else if(ans == "2")
        {
            generateReport(name,staffIndex,"ITEM PERFORMANCE");
            status = false;
        }
        else if(ans == "3")
        {
            generateReport(name,staffIndex,"FEEDBACK");
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :)\n" << endl;
            continue;
        }
        status = false;
    }
}

void viewFeedback(string name,int staffIndex,int feedBackIndex)
{
    MenuTemplate <string> m;
    Operation newOperation;
    m.menuTitle = "VIEW FEEDBACK SECTION";

    clear();;

    m.menuTitleTemplate();

    cout << "\n";

    vector<Feedback> feedbackList = getVectorList<Feedback>("feedback.txt");
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");
    vector <LoginDetails> staffList = getVectorList <LoginDetails> ("staff.txt");
    vector<vector<string>> feedbackRecords;

    feedbackRecords =
    {
        {"RECEIPT ID",feedbackList[feedBackIndex].registers.serialNum},
        {"CUSTOMER NAME",feedbackList[feedBackIndex].registers.login.nickname},
        {"FEED BACK PROVIDED",replaceCommas(feedbackList[feedBackIndex].content)}
    };

    outputFeedbackRecords(feedbackRecords);

    string id = feedbackList[feedBackIndex].registers.serialNum;

    if(feedbackList[feedBackIndex].viewStatus == "VIEW PENDING")
    {
        addOperation(staffIndex,"VIEWED <"+id+"> FEED BACK","STAFF OPERATION","staff");
    }

    feedbackList[feedBackIndex].viewStatus = "VIEWED";
    saveVectorList(feedbackList,"feedback.txt");
    pressAny();
    staffViewFeedBack(name,staffIndex);
}

//Staff view customer's feedback function
void staffViewFeedBack(string name, int staffIndex)
{
    MenuTemplate <string> m;

    bool status = true;

    string ans;

    vector<vector<string>> feedBackRecords;
    vector<Feedback> feedbackList = getVectorList<Feedback>("feedback.txt");
    vector<Registration<string>> registeredList = getVectorList <Registration<string>>("registration.txt");

    clear();;

    m.menuTitle = "VIEW FEEDBACK SECTION";
    m.menuTitleTemplate();

    if(feedbackList.size()==0)
    {
        cout << "YOU GOT NO FEED BACK TO VIEW~~ :)\n"<<endl;
        pressAny();
        staffMainPage(name,staffIndex);
    }

    feedBackHeader();

    for(int i = 0; i < feedbackList.size();i++)
    {
        feedBackRecords.push_back
        (
            {
                {feedbackList[i].registers.serialNum,feedbackList[i].viewStatus,feedbackList[i].rate}
            }
        );
    }

    if(feedBackRecords.size()!=0)
    {
        outputFeedBackList(feedBackRecords);
    }

    while(status)
    {
        cout << "PLEASE CHOOSE ANY RECEIPT TO VIEW THE FEEDBACK <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            staffMainPage(name,staffIndex);
            status = false;
        }

        string ansTran = ans;
        transform(ansTran.begin(),ansTran.end(),ansTran.begin(),::toupper);

        int feedBackIndex = getIndex<Feedback>(feedbackList, ansTran , [](Feedback f){return f.registers.serialNum;});

        if(ansTran == feedbackList[feedBackIndex].registers.serialNum)
        {
            viewFeedback(name,staffIndex,feedBackIndex);
            status = false;
        }
        else
        {
            cout << "PLEASE CHOOSE A VALID RECEIPT ID :)\n"<<endl;
            continue;
        }
        status = false;
    }
}

//Staff create campaign and promote to customer page function
void staffCreateCampaign(string name, int staffIndex)
{
    MenuTemplate <string> m;
    Campaign c;
    Campaign newCampaign;
    Operation newOperation;

    bool status = true;
    string ans;

    vector<vector<string>> campaignRecords;
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");
    vector <Campaign> campaignList = getVectorList <Campaign> ("campaign.txt");
    vector <LoginDetails> staffList = getVectorList <LoginDetails> ("staff.txt");


    clear();;

    m.menuTitle = "CREATE CAMPAIGN SECTION";
    m.menuTitleTemplate();
    m.menuTitle = "ENTER LESS THAN 40 CHARACTERS";
    m.menuTitleTemplate();

    cout << "\n";

    m.menuTitle = "CAMPAIGN\'S TITLE";
    m.menuTitleTemplate();
    m.menuTitle = "ENTER LESS THAN 40 CHARACTERS";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER THE CAMPAIGN\'S TITLE <0 to exit> : ";
        getline(cin,c.contentTitle);

        if(c.contentTitle == "0")
        {
            staffMainPage(name,staffIndex);
            status = false;
        }

        if(c.contentTitle.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(c.contentTitle.length()> 40)
        {
            cout << "PLEASE DON\'T ENTER MORE THAN 40 CHARACTERS :)\n";
            continue;
        }
        else if(campaignExist(campaignList,c.contentTitle))
        {
            cout<< "THE TITLE HAVE BEEN USED BY OTHER CAMPAIGN :)\n" << endl;
            continue;
        }

        transform(c.contentTitle.begin(),c.contentTitle.end(),c.contentTitle.begin(),::toupper);

        status = false;
    }

    status = true;

    m.menuTitle = "CAMPAIGN\'S CONTENT";
    m.menuTitleTemplate();
    m.menuTitle = "ENTER LESS THAN 150 CHARACTERS";
    m.menuTitleTemplate();

    while(status)
    {
        cout << "PLEASE ENTER THE CAMPAIGN\'S CONTENT <0 to exit> : ";
        getline(cin,c.content);

        if(c.content == "0")
        {
            staffMainPage(name,staffIndex);
            status = false;
        }

        if(c.content.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(c.content.length()> 150)
        {
            cout << "PLEASE DON\'T ENTER MORE THAN 150 CHARACTERS :)\n";
            continue;
        }
        status = false;
    }

    campaignRecords =
    {
        {"CAMPAIGN TITLE",c.contentTitle},
        {"CAMPAIGN CONTENT",c.content}
    };

    outputCampaign(campaignRecords,"CONFIRMATION",campaignList.size()-1);

    status = true;

    string confirmCam;

    while(status)
    {
        cout << "PLEASE MAKE SURE THE ALL THE CONTENT IS CORRECT BEFORE PUBLISH <y/n> : ";
        getline(cin,confirmCam);

        if(confirmCam.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(confirmCam == "Y" || confirmCam == "y")
        {
            cout << "CAMPAIGN CREATED SUCCESSFUL... :)\n"<<endl;
            string campaignId = generateSerialNo("CE", campaignList, [](const Campaign& c) {return c.campaignId;});

            newCampaign.campaignId = campaignId;
            newCampaign.contentTitle = replaceCommas(c.contentTitle);
            newCampaign.content = replaceCommas(c.content);
            newCampaign.contentStatus = "VIEW PENDING";
            campaignList.push_back(newCampaign);

            addOperation(staffIndex,"CREATED CAMPAIGN","STAFF OPERATION","staff");

            saveVectorList(campaignList,"campaign.txt");
            pressAny();
            staffMainPage(name,staffIndex);
            status = false;
        }
        else if(confirmCam == "N" || confirmCam == "n")
        {
            cout << "CAMPAIGN CREATED UNSUCCESSFUL... :(\n"<<endl;
            pressAny();
            staffMainPage(name,staffIndex);
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :)\n" << endl;
            continue;
        }
        status = false;
    }
}

void filterOperation(string name, int staffIndex, string prefix,string operation)
{
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");
    vector<vector<string>> operationRecords;

    for(int i =0 ; i < operateList.size();i++)
    {
        string userName = operateList[i].login.nickname;
        string operations = operateList[i].operations;
        string dateTime = operateList[i].dateTime;

        if(operateList[i].operatePrefix == prefix && operateList[i].operateType == operation)
        {
            operationRecords.push_back
            (
                {   
                    {userName},
                    {operations},
                    {dateTime}
                }
            );
        }
    }

    outputOperations(operationRecords,prefix);
    pressAny();
    manageOperation(name,staffIndex,prefix);
}

void manageOperation(string name, int staffIndex, string prefix)
{
    MenuTemplate <string> m;

    bool status = true;
    string ans;
    string operation;

    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");
    vector <LoginDetails> staffList = getVectorList <LoginDetails> ("staff.txt");
    vector<vector<string>> operationRecords;

    clear();;

    if(operateList.size()==0)
    {
        cout << "YOU GOT NO OPERATION HISTORY AT ALL :)\n" << endl;
        pressAny();
        staffMainPage(name,staffIndex);
    }

    if(prefix == "STAFF")
    {   
        m.menuTitle = "TRACK STAFF SECTION";
        m.menuOptions.push_back("TRACK LOG IN");
        m.menuOptions.push_back("TRACK LOG OUT");
        m.menuOptions.push_back("TRACK STAFF OPERATION");
        m.menuTitleTemplate();
        operation = "STAFF OPERATION";
    }
    else if(prefix == "CUSTOMER")
    {
        m.menuTitle = "TRACK CUSTOMER SECTION";
        m.menuOptions.push_back("TRACK LOG IN");
        m.menuOptions.push_back("TRACK LOG OUT");
        m.menuOptions.push_back("TRACK CUSTOMER OPERATION");
        m.menuTitleTemplate();
        operation = "CUSTOMER OPERATION";
    }
        
        m.menuTitle = "MAIN MENU";
        m.menuTemplate();

    while(status)
    {
        cout << "PLEASE CHOOSE THE OPTIONS SHOWN ABOVE <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            staffManageOperation(name,staffIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(ans == "1")
        {
            filterOperation(name,staffIndex,prefix,"LOG IN");
            status = false;
        }
        else if(ans == "2")
        {
            filterOperation(name,staffIndex,prefix,"LOG OUT");
            status = false;
        }
        else if(ans == "3")
        {
            filterOperation(name,staffIndex,prefix,operation);
            status = false;
        }
        else
        {
            cout << "INVALID INPUT... PLEASE ENTER A VALID OPTION :)\n" << endl;
            continue;
        }
        status = false;
    }
}

//Staff manage user's function
void staffManageOperation(string name, int staffIndex)
{
    MenuTemplate <string> m;

    bool status = true;
    string ans;
    
    vector <Operation> operateList = getVectorList <Operation> ("operation.txt");
    vector <LoginDetails> staffList = getVectorList <LoginDetails> ("staff.txt");

    clear();;

    cout << "\n";

    m.menuTitle = "TRACKING OPTIONS";
    m.menuOptions.push_back("STAFF");
    m.menuOptions.push_back("CUSTOMER");

    m.menuTemplate();

    while(status)
    {   
        cout << "CHOOSE WHICH ASPECT TO TRACK <0 to exit> : ";
        getline(cin,ans);

        if(ans == "0")
        {
            staffMainPage(name,staffIndex);
            status = false;
        }

        if(ans.empty())
        {
            cout << "PLEASE DON\'T LEAVE IT EMPTY :)\n" << endl;
            continue;
        }

        if(ans == "1")
        {
            manageOperation(name,staffIndex,"STAFF");
            status = false;
        }
        else if(ans == "2")
        {
            manageOperation(name,staffIndex,"CUSTOMER");
            status = false;
        }
        else
        {
            cout << "INVALID INPUT.... PLEASE ENTER A VALID OPTION :)\n"<<endl;
            continue;
        }

        status = false;
    }

}
