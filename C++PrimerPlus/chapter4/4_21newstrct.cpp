//使用new创建动态结构
#include <iostream>
struct inflatable //定义结构
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable * ps = new inflatable;//为结构分配内存
    cout << "Enter name of inflatable item:";
    cin.get(ps->name, 20);//获取成员方法1
    cout << "Enter volume in cubic feet:";
    cin >> (*ps).volume;//获取成员方法2
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << " cubic feet\n";
    cout << "Price: $" << ps->price << endl;
    delete ps;
    return 0;

}
