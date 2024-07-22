#include <iostream>
#include "Header.h"
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
int main() {
    int num_Posts = 0;

    char ch;
    int cho = 0;
    bool rec = true;
    string caption;
    Post post;
    int login_choice = 0, usertype = 0, user_choice;
    string email, password;
    bool success, check = true;
    User* user = nullptr;
    sf::SoundBuffer buffer;
    sf::Sound sound;
    sound.setBuffer(buffer);
    bool usercheck = false, admincheck = false, trainercheck = false;
    int x = 0; string n; notif no;
    while (true) {
        sf::RenderWindow window(sf::VideoMode(800, 600), "FitConnect");


        if (!buffer.loadFromFile("coin2.wav"))
            return -1;
        while (true) {
            do {
                sf::Font font;
                if (!font.loadFromFile("ShortBaby-Mg2w.ttf")) {
                    cout << "Error loading font file." << endl;
                    return 1;
                }

                sf::Text text;
                text.setFont(font);
                text.setCharacterSize(24);
                sf::Color lightBlue(75, 92, 9);
                text.setFillColor(lightBlue);
                text.setString("                                           ~~~~~~FitConnect~~~~~~~                         \n\n\n\n\n   Press 1 to login\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \n  Press 2 to signup:");
                text.setPosition(5.f, 5.f);

                while (window.isOpen()) {
                    sf::Event event;
                    while (window.pollEvent(event)) {
                        if (event.type == sf::Event::Closed) {
                            window.close();
                        }
                        if (event.type == sf::Event::KeyPressed) {
                            if (event.key.code == sf::Keyboard::Num1) {
                                sound.play();
                                login_choice = 1;
                                break;
                            }
                            if (event.key.code == sf::Keyboard::Num2) {
                                sound.play();
                                login_choice = 2;
                                break;
                            }

                        }
                    }
                    if (login_choice == 1 || login_choice == 2) {
                        break;
                    }

                    window.clear(sf::Color(200, 200, 200));

                    // Draw the margin
                    sf::RectangleShape marginRect(sf::Vector2f(window.getSize().x - 10.f, window.getSize().y - 10.f));
                    marginRect.setFillColor(sf::Color(91, 136, 153));
                    marginRect.setPosition(7.f, 7.f);
                    window.draw(marginRect);

                    // Draw the text
                    window.draw(text);

                    window.display();
                }
            } while (login_choice != 1 && login_choice != 2);

            sf::Text text;
            sf::Font font;
            if (!font.loadFromFile("ShortBaby-Mg2w.ttf")) {
                cout << "Error loading font file." << endl;
                return 1;
            }
            text.setFont(font);
            text.setCharacterSize(24);
            sf::Color lightBlue(75, 92, 9);
            text.setFillColor(lightBlue);
            int choice = 0;
            switch (login_choice) {
            case 1:
                text.setString("                                           ~~~~~~FitConnect~~~~~~~                         \n\n\n                                                Login Page \n\n\n\n\n   Press 1 to login as admin:\n\n   Press 2 to login as trainer:\n\n   Press 3 to login as user:");
                text.setPosition(5.f, 1.f);

                while (window.isOpen()) {
                    sf::Event event;
                    while (window.pollEvent(event)) {
                        if (event.type == sf::Event::Closed) {
                            window.close();
                        }
                        if (event.type == sf::Event::KeyPressed) {
                            if (event.key.code == sf::Keyboard::Num1) {
                                sound.play();
                                usertype = 1;
                                break;
                            }
                            if (event.key.code == sf::Keyboard::Num2) {
                                sound.play();
                                usertype = 2;
                                break;
                            }
                            if (event.key.code == sf::Keyboard::Num3) {
                                sound.play();
                                usertype = 3;
                                break;
                            }
                        }
                    }
                    if (usertype >= 1 && usertype <= 3) {
                        break;
                    }
                    window.clear(sf::Color(200, 200, 200));

                    // Draw the margin
                    sf::RectangleShape marginRect(sf::Vector2f(window.getSize().x - 10.f, window.getSize().y - 10.f));
                    marginRect.setFillColor(sf::Color(91, 136, 153));
                    marginRect.setPosition(7.f, 7.f);
                    window.draw(marginRect);
                    window.draw(text);
                    window.display();
                }
                cout << "Enter email:";
                cin >> email;
                cout << "Enter password:";
                cin >> password;
                switch (usertype) {
                case 1:
                    user = new Admin;
                    admincheck = true;
                    do {
                        success = user->getcredentials(email, password);
                        if (!success) {
                            cout << "Do you want to enter your credentials again?\nPress 0 for no\nPress 1 for yes:";
                            cin >> check;
                            if (check == true) {
                                cout << "Enter email:";
                                cin >> email;
                                cout << "Enter password:";
                                cin >> password;
                            }
                        }
                    } while (!success && check == true);
                    break;
                case 2:
                    user = new Trainer;
                    trainercheck = true;
                    do {
                        success = user->getcredentials(email, password);
                        if (!success) {
                            cout << "Do you want to enter your credentials again?\nPress 0 for no\nPress 1 for yes:";
                            cin >> check;
                            if (check == true) {
                                cout << "Enter email:";
                                cin >> email;
                                cout << "Enter password:";
                                cin >> password;
                            }
                        }
                    } while (!success && check == true);
                    break;
                case 3:
                    user = new USER;
                    usercheck = true;
                    do {
                        success = user->getcredentials(email, password);
                        if (!success) {
                            cout << "Do you want to enter your credentials again?\nPress 0 for no\nPress 1 for yes:";
                            cin >> check;
                            if (check == true) {
                                cout << "Enter email:";
                                cin >> email;
                                cout << "Enter password:";
                                cin >> password;
                            }
                        }
                    } while (!success && check == true);
                    break;
                }
                if (check)
                    break;
            case 2:
                text.setString("                                           ~~~~~~FitConnect~~~~~~~                         \n\n\n                                                Signup Page \n\n\n\n\n   Press 1 to signin as trainer:\n \n   Press 2 to signin as user:");
                text.setPosition(5.f, 5.f);

                while (window.isOpen()) {
                    sf::Event event;
                    while (window.pollEvent(event)) {
                        if (event.type == sf::Event::Closed) {
                            window.close();
                        }
                        if (event.type == sf::Event::KeyPressed) {
                            if (event.key.code == sf::Keyboard::Num1) {
                                usertype = 1;
                                sound.play();
                                break;
                            }
                            if (event.key.code == sf::Keyboard::Num2) {
                                usertype = 2;
                                sound.play();
                                break;
                            }
                        }
                    }
                    if (usertype >= 1 && usertype <= 2) {
                        break;
                    }
                    window.clear(sf::Color(200, 200, 200));

                    // Draw the margin
                    sf::RectangleShape marginRect(sf::Vector2f(window.getSize().x - 10.f, window.getSize().y - 10.f));
                    marginRect.setFillColor(sf::Color(91, 136, 153));
                    marginRect.setPosition(7.f, 7.f);
                    window.draw(marginRect);
                    window.draw(text);
                    window.display();
                }
                switch (usertype)
                {
                case 1:
                    user = new Trainer;
                    user->getdetails();

                    break;
                case 2:
                    user = new USER;
                    user->getdetails();
                    break;
                default:
                    break;
                }
                break;
            }
            do {
                if (usercheck) {
                    choice = displayUserMenu();
                    switch (choice) {
                    case 1:
                        user->profile();
                        cout << "Do you want to check your following? (y/n)";
                        cin >> ch;
                        if (ch == 'y') {
                            user->checkfollow();
                        }
                        break;
                    case 2:
                        user->checknotif();
                        break;
                    case 3:
                        do {
                            cout << "Press 1 to add post\nPress 2 to view feed:";
                            cin >> cho;
                        } while (cho != 1 && cho != 2);
                        if (cho == 1) {
                            cout << "Enter the caption:";
                            cin.ignore();
                            getline(cin, caption);
                            num_Posts++;
                            post.addPost(user->getUsername(), caption, num_Posts);
                        }
                        else post.viewPost();
                        break;
                    case 4:
                        user->getlocationactivity();
                        break;
                    case 5:
                        user->nutritionTracking();
                        break;
                    case 6:
                        user->workouttracking();
                        break;
                    case 7:
                        user->getTrainer();
                        break;
                    case 8:
                        user->startWorkout();
                        break;
                    case 9:
                        user->addnutri();
                        break;
                    case 10:
                        delete user;
                        rec = false;
                        break;
                    case 11:
                        user->challenge();
                        break;

                    case 12:
                        ifstream file("trainer.dat", ios::binary | ios::in);
                        UserCredentials credentials;
                        bool found = false;
                        string us, pass;
                        // Read each record from the binary file
                        while (file >> ws && !file.eof()) {
                            char backslash;
                            file >> backslash;

                            if (backslash == '\\') {
                                file.ignore(1000, '\n'); // Skip to the next line
                                file.getline(credentials.email, sizeof(credentials.email));
                                file.getline(credentials.password, sizeof(credentials.password));

                                string email(credentials.email);
                                string passcode(credentials.password);
                                us = email;
                                pass = passcode;
                                file.getline(credentials.name, sizeof(credentials.name));
                                file.getline(credentials.location, sizeof(credentials.location));

                                file >> credentials.age;
                                file >> credentials.weight;
                                file >> credentials.height;
                                file >> credentials.packages[0];
                                file >> credentials.packages[1];
                                cout << "Trainer " << credentials.name << " in " << credentials.location << endl;

                            }
                            file.ignore(); // Skip the newline character

                        }

                        file.close();
                        string s, tname;
                        int num;
                        streampos lastPos;
                        cout << "Enter the trainer name to follow";
                        cin >> s;
                        ifstream File("trainer.dat", ios::binary | ios::in);
                        found = false;
                        // Read each record from the binary file
                        while (File >> ws && !File.eof()) {
                            char backslash;
                            File >> backslash;

                            if (backslash == '\\') {
                                File.ignore(1000, '\n'); // Skip to the next line
                                File.getline(credentials.email, sizeof(credentials.email));
                                File.getline(credentials.password, sizeof(credentials.password));

                                string email(credentials.email);
                                string passcode(credentials.password);
                                us = email;
                                pass = passcode;
                                File.getline(credentials.name, sizeof(credentials.name));
                                File.getline(credentials.location, sizeof(credentials.location));
                                if (s == credentials.name) {
                                    found = true;
                                    break;
                                }
                                File >> credentials.age;
                                File >> credentials.weight;
                                File >> credentials.height;
                                File >> credentials.packages[0];
                                File >> credentials.packages[1];
                                File.ignore(); // Skip the newline character

                            }
                            else {
                                File.ignore(1000, '\n'); // Skip the rest of the user's data
                            }

                        }
                        if (found) {
                            user->follow(s);
                        }
                        else cout << "No trainer found" << endl;
                        user->follow(s);
                        break;
                    }

                }
                if (trainercheck) {
                    choice = displayTrainerMenu();
                    switch (choice) {
                    case 1:
                        user->profile();
                        break;
                    case 2:
                        user->startWorkout();
                        break;
                    case 3:
                        cho = 0;
                        do {
                            cout << "Press 1 to add post\nPress 2 to view feed:";
                            cin >> cho;
                        } while (cho != 1 && cho != 2);
                        if (cho == 1) {
                            cout << "Enter the caption:";
                            cin.ignore();
                            getline(cin, caption);
                            num_Posts++;
                            post.addPost(user->getUsername(), caption, num_Posts);
                        }
                        else {
                        post.viewPost();
                        }
                        break;
                    case 4:
                        user->getlocationactivity();
                        break;
                    case 5:
                        user->checkfollow();
                        break;
                    case 6:
                        delete user;
                        rec = false;
                        break;
                    }
                }

                if (admincheck) {
                    choice = displayAdminMenu();
                    switch (choice) {
                    case 1:
                        user->profile();
                        break;
                    case 2:

                        cout << "Enter the notification:";
                        cin >> n;


                        while (n[x] != '\0') {
                            no.notification[x] = n[x];
                            x++;
                        }
                        user->addnotif(no);
                        break;
                    case 3:
                        user->getlocationactivity();
                        break;
                    case 4:
                        user->addUser();
                        break;
                    case 5:
                        user->challenge();
                        break;
                    case 6:
                        user->seechallenge();
                        break;
                    case 7:
                        delete user;
                        rec = false;
                        break;
                    }

                }
            } while (rec);
        }
    }
    return 0;
}
