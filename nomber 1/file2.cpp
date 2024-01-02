/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
    vector<Lyrics> lyricsls;
    

    void AddLyrics(Lyrics ls) { // добавление песни
                                //  (название,автор, год создания) в каталог
        lyricsls .push_back( ls);
    } 
    
    void inputText( string t) {// ввод текста песен с клавиатуры
        cout<<"Введите текст песни"<<t;
        cin>>t;
        }
        
        void editText(int index, string t){// редактирование текста песен
            if (t != "")
            lyricsls [index].text = t;
        }
        
         
        void printText( string t) {// вывод текста песен на экран
        cout<<"Text:"<<t;
        }
        
        int SearchByName(string name) {// поиск по названию песни
        for (size_t i = 0; i < lyricsls .size(); i++)
        {
            if (lyricsls [i].name == name)
                return i;
        }
        return -1; // -1 означает что такого элемента нет
    }
       
       int SearchByAuthor(string author) {// поиск по автору
        for (size_t i = 0; i < lyricsls.size(); i++)
        {
            if (lyricsls[i].author == author)
                return i;
        }
        return -1; // -1 означает что такого элемента нет
    } 
    
    int SearchByText(string t) {// поиск по тексту песен
        for (size_t i = 0; i < lyricsls.size(); i++)
        {
            if (lyricsls[i].text == t)
                return i;
        }
        return -1; // -1 означает что такого элемента нет
    } 
    
     void DeleteText(int index,string t) {//удаление текста песен (???)
        lyricsls.erase(lyricsls.begin() + index  );
    }};
    
    int Menu(){
        SongList songlist;
        string name; 
        string author;
        string text;
        time_t estimationDate;
        
        SongMenu  mM;
        cout<<выберите пункт меню:<<mM;
        do{
          cout<<"1-добавить песню:"; 
          cout<<"2-ввод текста песни с клавиатуры:";
          cout<<"3-редактирование текста песни:";
          cout<<"4-вывод текста песни на экран:";
          cout<<"5-поиск песни по названию:";
          cout<<"6-поиск песни по автору:";
          cout<<"7-поиск песни по тексту:";
          cout<<"8-удаление песни:";
          cout<<"9-выход из меню:";
          cin>>mM;
        }
        switch(mM){
        case 1:
        
    }

int main()
{setlocale(LC_ALL,"");
    Lyrics lyrics("name", "author", "some text", 0);
    std::cout << lyrics.GetString();
    
    
}