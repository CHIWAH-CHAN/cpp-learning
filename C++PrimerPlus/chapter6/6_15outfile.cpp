//写入到文件中
#include <iostream>
#include <fstream>

int main()
{
    using namespace std;
     char automobile[50];
     int year;
     double a_price;
     double d_price;

     ofstream outFile;  //创建一个输出类
     outFile.open("carinfo.txt");   //关联到一个文件

     cout << "Enter the make and model of automobile: ";
     cin.getline(automobile, 50);
     cout << "Enter the modle year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    // 在屏幕上显示信息
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and modle: " << automobile << endl;
    cout << "Year: " << year <<endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    // 使用outFile提取相同内容
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and modle: " << automobile << endl;
    outFile << "Year: " << year <<endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close();
    return 0;
}