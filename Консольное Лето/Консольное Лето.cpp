#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

HANDLE hConsole;

int main(int argc, char** argv){

    srand((unsigned)time(0));
    int clas = 0;
    int put = 0;
    int superblin = 0;
    int cowkiller = 0;


	setlocale(0, "Russian");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int b = 0;
    int c = 0;
	SetConsoleTextAttribute(hConsole, 7);

    string s = "НАЧАТЬ ИГРУ НА ПРОБЕЛ";
    for (auto& x : s) {
        this_thread::sleep_for(std::chrono::milliseconds(20));
        cout << x;
    }
        cout << "\n";
    
        int a = _getch();
        if (a == 32) {
            system("cls");
            string s = "НАЧАЛО ИГРЫ\n";
            for (auto& x : s) {
                this_thread::sleep_for(std::chrono::milliseconds(110));
                cout << x;
            }
            SetConsoleTextAttribute(hConsole, 6);

            int a = _getch();
            if (a == 32) {
                system("cls");
                string s = "Однажды отдыхая в таверне к вам подбежал Руфус Гудсман, он был помощником мэра и выполнял его поручения.\n Руфус сказал что одна старая прорицательница, известная своей мудростью,предсказала, что ваша судьба спасти этот город.\n";
                for (auto& x : s) {
                    this_thread::sleep_for(std::chrono::milliseconds(50));
                    cout << x;
                }
                SetConsoleTextAttribute(hConsole, 3);
                int a = _getch();
                if (a == 32) {
                    system("cls");
                    string s = "Выберите класс: \n 1) Воин \n 2) Блин \n";
                    for (auto& x : s) {
                        this_thread::sleep_for(std::chrono::milliseconds(50));
                        cout << x;
                    }

                    cin >> clas;

                    if (clas == 1)
                    {
                            system("cls");
                            string s = "Ваш клас Воин\n";
                            for (auto& x : s) {
                                this_thread::sleep_for(std::chrono::milliseconds(50));
                                cout << x;
                            }
                    }

                    else if (clas == 2)
                    {
                        system("cls");
                        string s = "Вы Блин\n";
                        for (auto& x : s) {
                            this_thread::sleep_for(std::chrono::milliseconds(50));
                            cout << x;
                        }
                    }

                   
                    SetConsoleTextAttribute(hConsole, 6);

                    int a = _getch();
                    if (a == 32) {
                        system("cls");
                        string s = "Руфус выложил перед вами карту на которой был изображено два пути в Руины\n";
                        for (auto& x : s) {
                            this_thread::sleep_for(std::chrono::milliseconds(50));
                            cout << x;
                        }

                        int a = _getch();
                        if (a == 32) {
                            system("cls");
                            string s = "На карте вы рассмотрели домик, колодец и подьем в горы\n";
                            for (auto& x : s) {
                                this_thread::sleep_for(std::chrono::milliseconds(50));
                                cout << x;
                            }

                            int a = _getch();
                            if (a == 32) {
                                system("cls");
                                string s = "Руфус спросил у вас согласны ли вы отправиться в путешестивие и спасти город\n";
                                for (auto& x : s) {
                                    this_thread::sleep_for(std::chrono::milliseconds(50));
                                    cout << x;
                                }

                                int a = _getch();
                                if (a == 32) {
                                    system("cls");
                                    string s = "1)Помочь городу\n2)Остаться В таверне \n";
                                    for (auto& x : s) {
                                        this_thread::sleep_for(std::chrono::milliseconds(50));
                                        cout << x;
                                    }

                                    cin >> put;

                                    if (put == 2)
                                    {
                                        
                                        if (a == 32) {
                                            system("cls");
                                            string s = "Оставшись в баре вы решили навернуть блинчиков, но позвав бармена вы никого не увидели\n";
                                            for (auto& x : s) {
                                                this_thread::sleep_for(std::chrono::milliseconds(50));
                                                cout << x;
                                            }

                                            int a = _getch();
                                            if (a == 32) {
                                                system("cls");
                                                string s = "Обернувшись и посмотрев в окно вы увидели полный хаос и разруху в городе\n";
                                                for (auto& x : s) {
                                                    this_thread::sleep_for(std::chrono::milliseconds(50));
                                                    cout << x;
                                                }
                                                int a = _getch();
                                                if (a == 32) {
                                                    system("cls");
                                                    string s = "К вам на полной скорости летел огромный блин, он пробил стенку таверны и атаковал вас\n";
                                                    for (auto& x : s) {
                                                        this_thread::sleep_for(std::chrono::milliseconds(50));
                                                        cout << x;
                                                    }


                                                    if (clas == 1 || clas == 2)
                                                    {
                                                        int put = 0;
                                                        int clas = 1;
                                                        int xp_blin = 1000;
                                                        int xp = 1000000;
                                                        int dmg_blin = 10;
                                                        int dmg = 0;
                                                        int xeal = 0;
                                                        int zelya = 5;
                                                        int c = 0;

                                                        while (xp_blin > 0)
                                                        {

                                                            cout << "1)Удар\n2)Хилл\n3)Убежать\n";
                                                            cin >> c;
                                                            if (c == 1)
                                                            {
                                                                system("cls");
                                                                dmg = ((rand() % 6) + 1) + (((rand() % 20) + 1) / 2);
                                                                cout << "Вы нанесли: " << dmg << endl;
                                                                xp_blin = xp_blin - dmg;
                                                                cout << "Хр осталось: " << xp_blin << endl << endl;

                                                                xp = xp - dmg_blin;
                                                                cout << "У вас осталось: " << xp << endl;
                                                                if (xp <= 0)
                                                                {
                                                                    cout << "Вы умерли\n";
                                                                    break;
                                                                }

                                                            }

                                                            if (c == 2)
                                                            {
                                                                zelya = zelya - 1;
                                                                if (zelya > 0) {


                                                                    system("cls");
                                                                    xeal = 5 + (rand() % 10) + 1;
                                                                    xp = xp + xeal;
                                                                    if (xp > 20)
                                                                    {
                                                                        xp = 20;
                                                                    }
                                                                    cout << "Вы вылечили: " << xeal << endl;
                                                                    cout << "У вас: " << xp << endl;
                                                                }
                                                                else
                                                                {
                                                                    system("cls");
                                                                    cout << "У вас не осталось зелий\n";
                                                                }
                                                                
                                                            }

                                                            if (c == 3)
                                                            {
                                                                
                                                                if (a == 32) {
                                                                    system("cls");
                                                                    string s = "Вы попытались убежать но огромный блин засунул вас в рот и сьел\n";
                                                                    for (auto& x : s) {
                                                                        this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                        cout << x;
                                                                    }
                                                                    SetConsoleTextAttribute(hConsole, 4);
                                                                    int a = _getch();
                                                                    if (a == 32) {
                                                                        system("cls");
                                                                        string s = "ВЫ УМЕРЛИ\n";
                                                                        for (auto& x : s) {
                                                                            this_thread::sleep_for(std::chrono::milliseconds(200));
                                                                            cout << x;
                                                                        }
                                                                        break;
                                                                    }
                                                                }
                                                            }

                                                        }


                                                        if (xp_blin <= 0)
                                                        {
                                                            string s = "Вы читур\n";
                                                            for (auto& x : s) {
                                                                this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                cout << x;
                                                            }

                                                        }
                                                    }

                                                }

                                            }
                                        }
                                    }

                                    if (put == 1)
                                    {
                                        int put = 0;
                                        int clas = 1;
                                        int xp = 40;
                                        int dmg = 0;
                                        int xeal = 0;
                                        int zelya = 5;
                                        int c = 0;
                                        system("cls");
                                        string s = "Вы пошли с Руфусом, он передал вам все нужное оборудование и вы отправились в путь\n";
                                        for (auto& x : s) {
                                            this_thread::sleep_for(std::chrono::milliseconds(50));
                                            cout << x;
                                        }

                                        int a = _getch();
                                        if (a == 32) {
                                            system("cls");
                                            string s = "Проходя по дороге вы заметили домик в лесу и ведущую к нему дорожку\n";
                                            for (auto& x : s) {
                                                this_thread::sleep_for(std::chrono::milliseconds(50));
                                                cout << x;
                                            }
                                            int a = _getch();
                                            if (a == 32) {
                                                system("cls");

                                                cout << "1)Пойти в домик\n2)Пойти дальше\n";
                                                int dom;
                                                cin >> dom;
                                                if (dom == 1)
                                                {
                                                    zelya = zelya + 2;
                                                    if (a == 32) {
                                                        system("cls");
                                                        string s = "Зайдя в дом вы никогго не обнаружили ,но на столе лежали несколько зелий здоровья \n";
                                                        for (auto& x : s) {
                                                            this_thread::sleep_for(std::chrono::milliseconds(50));
                                                            cout << x;
                                                        }

                                                        int a = _getch();
                                                        if (a == 32) {
                                                            system("cls");
                                                            string s = "Выходя из дома вы заметили корову пасущуюся неподолеку от дома\n";
                                                            for (auto& x : s) {
                                                                this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                cout << x;
                                                            }
                                                            int a = _getch();
                                                            if (a == 32) {
                                                                system("cls");
                                                                cout << "1)Пройти мимо\n2)Зарезать корову\n";
                                                                int cow;
                                                                cin >> cow;
                                                                if (cow == 1)
                                                                {
                                                                    if (a == 32) {
                                                                        system("cls");
                                                                        string s = "Вы прошли мимо и вышли на тропинку\n";
                                                                        for (auto& x : s) {
                                                                            this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                            cout << x;
                                                                        }

                                                                    }
                                                                }

                                                                if (cow == 2)
                                                                {
                                                                    if (a == 32) {
                                                                        cowkiller += 1;
                                                                        system("cls");
                                                                        string s = "Вы зарезали корову, живите с этим\n";
                                                                        for (auto& x : s) {
                                                                            this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                            cout << x;
                                                                        }

                                                                    }
                                                                }
                                                            }
                                                            
                                                        }
                                                    }
                                                }

                                                if (dom == 2)
                                                {
                                                    
                                                    if (a == 32) {
                                                        system("cls");
                                                        string s = "Вы прошли дом, но увидели старый коложец и решили подойти к нему\n";
                                                        for (auto& x : s) {
                                                            this_thread::sleep_for(std::chrono::milliseconds(50));
                                                            cout << x;
                                                        }
                                                        int a = _getch();
                                                        if (a == 32) {
                                                            system("cls");
                                                            string s = "Подойдя к колодцу вы услышали кваканье из него\n";
                                                            for (auto& x : s) {
                                                                this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                cout << x;
                                                            }
                                                            int a = _getch();
                                                            if (a == 32) {
                                                                system("cls");
                                                                cout << "1)Спуститься\n2)Пойти дальше\n";
                                                                int kol;
                                                                cin >> kol;
                                                                if (kol == 1)
                                                                {
                                                                    if (a == 32) {
                                                                        system("cls");
                                                                        string s = "Спустившись вы обнаружили лягушку и бочку на которой лежала тарелка с блинчиками\n";
                                                                        for (auto& x : s) {
                                                                            this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                            cout << x;
                                                                        }

                                                                        int a = _getch();
                                                                        if (a == 32) {
                                                                            system("cls");
                                                                            string s = "Подойдя ближе вы услышали как лягушка говорит: \" Не трогай мои блинчики, они только мои\"\n";
                                                                            for (auto& x : s) {
                                                                                this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                cout << x;
                                                                            }

                                                                            int a = _getch();
                                                                            if (a == 32) {
                                                                                cout << "1)Убить лягушку и забрать блины\n2)Пнуть лягушку и забрать блины\n3)Уйти\n";
                                                                                int frog;
                                                                                cin >> frog;
                                                                                if (frog == 1)
                                                                                {
                                                                                    
                                                                                    
                                                                                    if (a == 32) {
                                                                                        system("cls");
                                                                                        string s = "Вы обнажили свой клинок и воткнули его в лягушку, подойдя к блинам они испарились\n";
                                                                                        for (auto& x : s) {
                                                                                            this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                            cout << x;
                                                                                        }
                                                                                    }
                                                                                }

                                                                                if (frog == 2)
                                                                                {
                                                                                    
                                                                                    
                                                                                    if (a == 32) {
                                                                                        system("cls");
                                                                                        string s = "Вы пнули лягушку и забрали блины, подойдя к блинам они испарились\n";
                                                                                        for (auto& x : s) {
                                                                                            this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                            cout << x;
                                                                                        }
                                                                                    }

                                                                                }

                                                                                if (frog == 3)
                                                                                {   
                                                                                    superblin += 1;
                                                                                   
                                                                                    if (a == 32) {
                                                                                        system("cls");
                                                                                        string s = "Вам стало жалко лягушку и вы начали подниматься, поднимаясь вы услишали как лягушка говорит вам что вы можете взять блин\n";
                                                                                        for (auto& x : s) {
                                                                                            this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                            cout << x;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }

                                                                        }
                                                                    }
                                                                }
                                                            }

                                                        }
                                                    }
                                                }
                                                int a = _getch();
                                                if (a == 32) {
                                                    system("cls");
                                                    string s = "Пройдя дальше вы обнаружили развилку и вспомнив карту, вы выбрали: \n";
                                                    for (auto& x : s) {
                                                        this_thread::sleep_for(std::chrono::milliseconds(50));
                                                        cout << x;
                                                    }

                                                    cout << "1)В гору\n2)Обойти гору\n";
                                                    int raz;
                                                    cin >> raz;
                                                    if (raz == 1)
                                                    {
                                                        if (a == 32) {
                                                            system("cls");
                                                            string s = "Поднимаясь по одному из склонов вы наткнулись на злобного гнома который обзывал вас\n";
                                                            for (auto& x : s) {
                                                                this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                cout << x;
                                                            }
                                                            int a = _getch();
                                                            if (a == 32) {
                                                                system("cls");
                                                                cout << "1)Атакавать его\n2)Пройти мимо\n";
                                                                int gnom;
                                                                cin >> gnom;
                                                                if (gnom == 1)
                                                                {

                                                                    int xp_gnom = 15;
                                                                    int xp = 30;
                                                                    int dmg_gnom = 3;
                                                                    int dmg = 0;
                                                                    int zelya = 7;
                                                                    int xeal = 0;
                                                                    int c = 0;

                                                                    while (xp_gnom > 0)
                                                                    {
                                                                        cout << "1)Удар\n2)Хилл\n3)Убежать\n";
                                                                        cin >> c;

                                                                        if (c == 1)
                                                                        {
                                                                            system("cls");
                                                                            dmg = ((rand() % 8) + 1) + (((rand() % 25) + 1) / 2);
                                                                            cout << "Вы нанесли: " << dmg << endl;
                                                                            xp_gnom = xp_gnom - dmg;
                                                                            cout << "Хр осталось: " << xp_gnom << endl << endl;

                                                                            xp = xp - dmg_gnom;
                                                                            cout << "У вас осталось: " << xp << endl;
                                                                            if (xp <= 0)
                                                                            {
                                                                                SetConsoleTextAttribute(hConsole, 4);
                                                                                string s = "ВЫ УМЕРЛИ\n";
                                                                                for (auto& x : s) {
                                                                                    this_thread::sleep_for(std::chrono::milliseconds(200));
                                                                                    cout << x;
                                                                                }
                                                                                break;
                                                                            }
                                                                        }

                                                                        if (c == 2)
                                                                        {
                                                                            zelya = zelya - 1;
                                                                            if (zelya > 0) {


                                                                                system("cls");
                                                                                xeal = 5 + (rand() % 10) + 1;
                                                                                xp = xp + xeal;
                                                                                if (xp > 30)
                                                                                {
                                                                                    xp = 30;
                                                                                }
                                                                                cout << "Вы вылечили: " << xeal << endl;
                                                                                cout << "У вас: " << xp << endl;
                                                                            }

                                                                            else
                                                                            {
                                                                                system("cls");
                                                                                cout << "У вас не осталось зелий\n";
                                                                            }
                                                                        }

                                                                        if (xp_gnom <= 0)
                                                                        {
                                                                            system("cls");
                                                                            string s = "Вы победили\n";
                                                                            for (auto& x : s) {
                                                                                this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                cout << x;
                                                                            }
                                                                        }
                                                                    }


                                                                }

                                                                if (gnom == 2)
                                                                {

                                                                }


                                                                int a = _getch();
                                                                if (a == 32) {
                                                                    system("cls");
                                                                    string s = "Пройдя дальше вы натыкаетесь на старое здание, зайдя в него вы видите женщину с длинным носом, на носу большая бородавка из которой ростут\n толстые темные волосинки. У нее горб и глаза на выкате\n\n";
                                                                    for (auto& x : s) {
                                                                        this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                        cout << x;
                                                                    }

                                                                    int a = _getch();
                                                                    if (a == 32) {
                                                                        system("cls");
                                                                        cout << "1)Поговорить с ней\n2)Атаковать ее\n";
                                                                        int vedma;
                                                                        cin >> vedma;
                                                                        if (vedma == 1)
                                                                        {   
                                                                            superblin += 1;
                                                                            if (a == 32) {
                                                                                system("cls");
                                                                                string s = "Вы узнаете что женщину зовут Эсмиральда, она приглашает вас попить чай и угащает блином\n";
                                                                                for (auto& x : s) {
                                                                                    this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                    cout << x;
                                                                                }

                                                                            }
                                                                        }

                                                                        if (vedma == 2)
                                                                        {
                                                                            if (a == 32) {
                                                                                system("cls");
                                                                                string s = "Вы пытаетесь обножить ножны но у вас сразу же пропадает земля под ногами и вы появляетесь возле руин\n";
                                                                                for (auto& x : s) {
                                                                                    this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                    cout << x;
                                                                                }
                                                                            }
                                                                        }
                                                                        

                                                                        int a = _getch();
                                                                        if (a == 32) {
                                                                            system("cls");
                                                                            string s = "На подходе к руинам вы встречаете морщинистого иссушенного временем старика около двух футов ростом.\n Он выглядит весьма хрупко. Он парит над землёй на высоте 3 футов, но выглядит очень больным.\n Он подзывает вас\n";
                                                                            for (auto& x : s) {
                                                                                this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                cout << x;
                                                                            }
                                                                            if (clas == 2)
                                                                            {
                                                                                string s = "Подойдя вы видите как старик начинает принюхаваться.\n Он говорит вам подойти еще ближе и когда вы подходите он бросаеться на вас и сьедает\n";
                                                                                for (auto& x : s) {
                                                                                    this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                    cout << x;
                                                                                }

                                                                                int a = _getch();
                                                                                if (a == 32) {
                                                                                    SetConsoleTextAttribute(hConsole, 4);
                                                                                    system("cls");
                                                                                    string s = "Вас сьел старик\n";
                                                                                    for (auto& x : s) {
                                                                                        this_thread::sleep_for(std::chrono::milliseconds(200));
                                                                                        cout << x;
                                                                                    }
                                                                                    return 0;
                                                                                }

                                                                            }

                                                                            if (clas == 1)
                                                                            {
                                                                                string s = "Он говорит, что он — хранитель великого зла и что его жизнь почти закончилась.\nЕму нужно, чтобы кто-то занял его место иначе зло вырвется на свободу и начнёт уничтожать всё и всех вокруг.\nОн говорит, что если кто-то из них возьмёт на себя эту работу, то уже никогда не сможет покинуть это место, застрянет здесь до того момента когда и им придёт пора умереть.\n";
                                                                                for (auto& x : s) {
                                                                                    this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                    cout << x;
                                                                                }

                                                                                int a = _getch();
                                                                                if (a == 32) {
                                                                                    system("cls");
                                                                                    string s = "Не успев договорить старик прерываеться, из под земли доноситься хохот, вас атакует злой блин\n";
                                                                                    for (auto& x : s) {
                                                                                        this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                        cout << x;
                                                                                    }

                                                                                    if (cowkiller == 1)
                                                                                    {
                                                                                        int a = _getch();
                                                                                        if (a == 32) {
                                                                                            system("cls");
                                                                                            string s = "Вы бросаетесь к старику но вам в голову приходят мысли о том что вы зарезали бедную корову, вы спотыкаетесь и падаете, вас сьедает блин\n";
                                                                                            for (auto& x : s) {
                                                                                                this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                                cout << x;
                                                                                            }

                                                                                            int a = _getch();
                                                                                            if (a == 32) {
                                                                                                SetConsoleTextAttribute(hConsole, 4);
                                                                                                system("cls");
                                                                                                string s = "Когда блин вас доел он полетел поедать и крушить город\nВы проиграли\n";
                                                                                                for (auto& x : s) {
                                                                                                    this_thread::sleep_for(std::chrono::milliseconds(200));
                                                                                                    cout << x;
                                                                                                }
                                                                                                return 0;
                                                                                            }
                                                                                        }
                                                                                    }

                                                                                }   if (superblin != 2){
                                                                                    int a = _getch();
                                                                                    if (a == 32) {
                                                                                        system("cls");
                                                                                        string s = "Вы бросаетесь к старику, скидываете его с пьедистала и сами становитесь туда, последнее что вы помните, хохот блина уходящего под землю\n";
                                                                                        for (auto& x : s) {
                                                                                            this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                            cout << x;
                                                                                        }

                                                                                        int a = _getch();
                                                                                        if (a == 32) {
                                                                                            SetConsoleTextAttribute(hConsole, 4);
                                                                                            system("cls");
                                                                                            string s = "Вы спасли город, но какой ценой...\n";
                                                                                            for (auto& x : s) {
                                                                                                this_thread::sleep_for(std::chrono::milliseconds(200));
                                                                                                cout << x;
                                                                                            }
                                                                                            return 0;
                                                                                        }
                                                                                    }



                                                                                }

                                                                                if (superblin == 2)
                                                                                {
                                                                                    int a = _getch();
                                                                                    if (a == 32) {
                                                                                        system("cls");
                                                                                        string s = "Вы бросаетесь к старику но спотыкаетесь, от безъисходносит вы бросаете в открытый рот блинного монстра два блина, лежавшие у вас в карманах.\nВнезапно блиномонстр останавливается а потом разрывается на мелкие кусочки.";
                                                                                        for (auto& x : s) {
                                                                                            this_thread::sleep_for(std::chrono::milliseconds(50));
                                                                                            cout << x;
                                                                                        }

                                                                                        int a = _getch();
                                                                                        if (a == 32) {
                                                                                            system("cls");
                                                                                            string s = "Ура вы победили древнее зло и город может спать спокойно\n";
                                                                                            for (auto& x : s) {
                                                                                                this_thread::sleep_for(std::chrono::milliseconds(100));
                                                                                                cout << x;
                                                                                            }
                                                                                        }
                                                                                    }



                                                                                }
                                                                            }
                                                                        }
                                                                        
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                        }
                                    }

                                }

                            }

                        }

                    }
                }

            }

           }

}
