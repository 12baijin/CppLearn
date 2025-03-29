#include <iostream>
//string介绍
using namespace std;//包含std所有用法
using std::cout;//
using std::endl;
int main()
{
    std::cout << "Hello, World!" << std::endl;
    string str = "Hello, World!";
    string str2(str,2,7);//选中部分构造
    string str3(str);//拷贝构造
    string str4(std::move(str3));//移动构造
    string str5;
    // str5.append("你好");
    if(str2 == str)
    {
        cout << str2 << endl;
    }

    // string str5()
    cout << str << endl;
    int index {0};
    for (auto ch : str)
    {
        cout<<ch<<"\t";
        cout<<str[index++]<<endl;
    }
    cout<<str2<<endl;
    str.clear();//清空元素


    return 0;
}
