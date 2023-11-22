#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

#include "book.h"

void AddBook();

void DelBook();

void ChangeBook();

void SearchBook();

void BrowseBooks();

void SortBooks();

int main() {
    char in =-1;
    do{//条件选择
        cout<<"请选择系统功能"<<endl;
        cout<<"1)录入 2)删除 3)修改 4)查询 5)浏览 6)排序显示"<<endl;
        cin >> in;
        switch (in) {
            case'1':
                AddBook();
                break;
            case'2':
                DelBook();
                break;
            case'3':
                ChangeBook();
                break;
            case'4':
                SearchBook();
                break;
            case'5':
                BrowseBooks();
                break;
            case '6':
                SortBooks();
                break;
            case'0': {
                cout << "感谢您使用本系统,再见!" << endl;
                break;
            }
            default:
                cout << "In Put Error!!! Please try again!!!" << endl;
        }
    } while (in != '0');
}

void SortBooks() {

}

void BrowseBooks() {

}

void SearchBook() {

}

void ChangeBook() {

}

void DelBook() {

}

void AddBook() {
    Book book = *new Book();
    cout<<"请输入要添加的图书信息"<<endl;
    cout<<"请输入书名"<<endl;
    cin >> book.setBookMethods()


    ifstream file("books.csv");//打开本地csv文件
    if (file.is_open()) {
        file << "";
        file.close();
    } else {
        cout << "Unable to open file";
    }
}
