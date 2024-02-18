// Knowledge competition.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>

using namespace std;

struct question {

    string text;
    string optionA;
    string optionB;
    string optionC;
    string optionD;

    char correctAnswer;

};

void showQuestion(const question& question) {

    cout << question.text << endl;
    cout << "A) " << question.optionA << endl;
    cout << "B) " << question.optionB << endl;
    cout << "C) " << question.optionC << endl;
    cout << "D) " << question.optionD << endl;

}

bool checkTheAnswer(const question& question, char answer) {

    return (answer == question.correctAnswer);

}

int main()
{
    question question1 = {

        "Turkiye'nin baskenti hangi sehirdir?",
        "A) Ankara",
        "B) Istanbul",
        "C) Izmir",
        "D) Bursa",
        'A'

    };

    question question2 = {

        "Dunyadaki en uzun nehir hangisidir?",
        "A) Nil Nehri",
        "B) Amazon Nehri",
        "C) Yangtze Nehri",
        "D) Mississippi Nehri",
        'A'

    };

    int numberOfCorrectAnswer = 0;
    cout << "Welcome to the Quiz Game!" << endl;
    showQuestion(question1);
    char answer1;
    cin >> answer1;

    if (checkTheAnswer(question1, answer1)) {

        cout << "Correct Answer :)" << endl;
        numberOfCorrectAnswer++;

    }
    else {

        cout << "Wrong answer! Please tre again. :(" << endl;

    }

    showQuestion(question2);
    char answer2;
    cin >> answer2;

   

    if (checkTheAnswer(question2, answer2)) {

        cout << "Correct Answer :)" << endl;
        numberOfCorrectAnswer++;

    }
    else {

        cout << "Wrong answer! Please try again. :(" << endl;

    }

    cout << "The quiz has ended. Total number of correct answers: " << numberOfCorrectAnswer << endl;
    return 0;

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
