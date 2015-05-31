#include <iostream>
#include <list>

using namespace std;
/** \class Класс стек
*/
class List {
    list<int> catalog;/**< Переменная типа ist */
    int countOfFiles;/**< Количество элементов в стеке */
public:
    /** \brief Конструктор по умолчанию
    *
    */
    List();
    /** \brief Метод добавления элемента в стек
    *
    * \param [in] value - добавляемый элемент
    *
    */
    void add(int);
    /** \brief Метод удаления элемента из стека
    *
    * \param [in] number - номер элемента в стеке
    *
    */
    void del(int);
    /** \brief Вывод всех элементов
    *
    */
    void printAll();
    /** \brief Деструктор
    */

    ~List();
};

List::List(){
    countOfFiles = 0;
}
void List::add(int value){
    catalog.push_back(value);
    ++countOfFiles;
}
void List::del(int pos){
    int i = 0;
    for (list<int>::iterator it = catalog.begin(); it != catalog.end(); ++it){
        if (i == pos){
            catalog.pop_back();
        }
        ++i;
    }
}

void List::printAll(){
    for (list<int>::reverse_iterator it = catalog.rbegin(); it != catalog.rend(); ++it){
        cout << *it << endl;
    }
}
List::~List(){}



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