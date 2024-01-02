#include <iostream>
#include <ctime>
#include <string>
#include <vector>
using namespace std;

struct Lyrics{ // структура "текст песен"
//** название песни, автор песни, текст песни, год создания**//

    string name;
    string author;
    string text;
    time_t estimationDate;

Lyrics(string n, string a, string t, time_t e) :
        name{ n }, author{ a }, text {t}, estimationDate{ e } {};

std::string GetString() {
        std::string result = "";
        result += "Name: " + name + " | ";
        result += "Author: " + author + " | ";
        result += "EstimationDate: " + to_string (estimationDate) + "\n";
        result += "Text: " + text;
        return result;
    }
};

struct SongList {
    vector<Lyrics> m_data;
    

    void AddLyrics(string n, string a, time_t e) { // добавление песни
                                //  (название,автор, год создания) в каталог
        m_data.push_back({ n, a, e });
    } 
    
    void inputText( string t) {// ввод текста песен с клавиатуры
        cout<<"Введите текст песни"<<text;
        cin>>text;
        }
        
        void editText(string t){// редактирование текста песен
            if (t != "")
            m_data[index].text = t;
        }
        
         
        void printText( string t) {// вывод текста песен на экран
        cout<<"Text:"<<text;
        }
        
        int SearchByName(string name) {// поиск по названию песни
        for (size_t i = 0; i < m_data.size(); i++)
        {
            if (m_data[i].name == name)
                return i;
        }
        return -1; // -1 означает что такого элемента нет
    }
       
       int SearchByAuthor(string author) {// поиск по автору
        for (size_t i = 0; i < m_data.size(); i++)
        {
            if (m_data[i].author == author)
                return i;
        }
        return -1; // -1 означает что такого элемента нет
    } 
    
    int SearchByText(string t) {// поиск по тексту песен
        for (size_t i = 0; i < m_data.size(); i++)
        {
            if (m_data[i].text == text)
                return i;
        }
        return -1; // -1 означает что такого элемента нет
    } 
    
     void DeleteText(string t) {//удаление текста песен (???)
        m_data.erase(m_data.begin() + index);
    }};
    
    int Menu(){
        SongList;
        string name; 
        string author;
        string text;
        time_t estimationDate;
        
        switch(SongList):
        case 1:
        
    }

int main()
{setlocale(LC_ALL,"");
    Lyrics lyrics("name", "author", "some text", 0);
    std::cout << lyrics.GetString();
    
    
}