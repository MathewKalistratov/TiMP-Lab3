#include <iostream>
#include <list>

using namespace std;
/** \class Класс список
*/

class List {
    list<int> catalog; /**< переменная типа list */
    int countOfFiles; /**< количество элементов */
public:
    List();
    /** \brief Конструктор по умолчанию
    *
    */

    void add(int val);
    /** \brief Добавляем в список элемент val
    *
    */

    void del(int pos);
    /** \brief Метод для удаления элемента по номеру pos
    *
    */

    void printAll();
    /** \brief Метод для печати всех элементов
    */

    ~List();
};

List::List() {
    countOfFiles = 0;
}
void List::add(int value) {
    catalog.push_back(value);
    ++countOfFiles;
}
void List::del(int pos) {
    int i = 0;
    for (list<int>::iterator it = catalog.begin(); it != catalog.end(); ++it){
        if (i == pos) {
            catalog.erase(it);
        }
        ++i;
    }
}
void List::printAll() {
    for (const auto& it : catalog) {
        cout << it << endl;
        }
    }
List::~List() {}

int main()
{
    List * catalog = new List();
    int count = 0;
    cin >> count;
    for (int i = 0; i < count; i++){
        int number = 0;
        cin >> number;
        catalog->add(number);
    }
    catalog->printAll();
    delete catalog;
    system("pause");
    return 0;
}