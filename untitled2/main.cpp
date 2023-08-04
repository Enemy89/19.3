#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::fstream text;
    text.open("C:\\Users\\Rhan\\CLionProjects\\untitled2\\statement.txt");
    if (text.is_open()==0) {
        std::cout<<"Path no valid!";
        return 0;
    }

    std::string last_name, first_name, max_last_name, max_first_name, date;
    int money, max_money=0, sum=0;
    while (!text.eof()) {
        text>>last_name>>first_name>>money>>date;
        sum+=money;
        if(max_money<money) {
            max_money=money;
            max_last_name=last_name;
            max_first_name=first_name;
        }
    }
    std::cout<<"Total amount of payments: "<<sum<<std::endl;
    std::cout<<"The person with the maximum payout amount: "<<max_last_name<<" "<<max_first_name;

    text.close();
}
