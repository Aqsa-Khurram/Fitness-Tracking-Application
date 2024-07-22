#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
using namespace std;
struct notif {
    char notification[40];
};
struct workoutrecord {
    float totalCalBurn = 0;
    char username[20];
    char rec1[20];
    float rec1calburnt=0;
    char rec2[20];
    float rec2calburnt=0;
    char rec3[20];
    float rec3calburnt=0;
};
int displayUserMenu() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "FitConnect");
    
    int userchoice = 0;
    sf::SoundBuffer buffer;
    sf::Sound sound;
    sound.setBuffer(buffer);
    if (!buffer.loadFromFile("coin2.wav"))
        return -1;
    sf::Font font;
    if (!font.loadFromFile("ShortBaby-Mg2w.ttf")) {
        std::cout << "Error loading font file." << std::endl;
        return 0;
    }

    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(24);
    sf::Color lightBlue(75, 92, 9);
    text.setFillColor(lightBlue);
    text.setString("                                           ~~~~~~FitConnect~~~~~~~                         \n\n\n                                                       Menu \n\n\n\n\n   Press 1 to see your profile\n   Press 2 to check notifications\n   Press 3 to see your feed\n   Press 4 to see location-based activity\n   Press 5 to see your nutrition tracking\n   Press 6 to see workout tracking\n   Press 7 for trainer\n   Press 8 to start a workout\n   Press 9 to add your meal record\n   Press A to logout   \n   Press B for a challenge\n   Press C to follow a trainer");
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
                    userchoice = 1;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num2) {
                    sound.play();
                    userchoice = 2;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num3) {
                    sound.play();
                    userchoice = 3;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num4) {
                    sound.play();
                    userchoice = 4;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num5) {
                    sound.play();
                    userchoice = 5;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num6) {
                    sound.play();
                    userchoice = 6;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num7) {
                    sound.play();
                    userchoice = 7;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num8) {
                    sound.play();
                    userchoice = 8;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num9) {
                    sound.play();
                    userchoice = 9;
                    break;
                }
                if (event.key.code == sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                    sound.play();
                    userchoice = 10;
                    break;
                }
                if (event.key.code == sf::Keyboard::isKeyPressed(sf::Keyboard::B)) {
                    sound.play();
                    userchoice = 11;
                    break;
                }
                if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::C) {
                    sound.play();
                    userchoice = 12;
                    break;
                }
            }
        }

        if (userchoice >= 1 && userchoice <=12) {
            break;
        }

        window.clear(sf::Color(200, 200, 200));
        sf::RectangleShape marginRect(sf::Vector2f(window.getSize().x - 10.f, window.getSize().y - 10.f));
        marginRect.setFillColor(sf::Color(91, 136, 153));
        marginRect.setPosition(7.f, 7.f);
        window.draw(marginRect);
        window.draw(text);
        window.display();
    }
    return userchoice;
}
int displayTrainerMenu() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "FitConnect");

    int userchoice = 0;
    sf::SoundBuffer buffer;
    sf::Sound sound;
    sound.setBuffer(buffer);
    if (!buffer.loadFromFile("coin2.wav"))
        return -1;
    sf::Font font;
    if (!font.loadFromFile("ShortBaby-Mg2w.ttf")) {
        std::cout << "Error loading font file." << std::endl;
        return 0;
    }

    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(24);
    sf::Color lightBlue(75, 92, 9);
    text.setFillColor(lightBlue);
    text.setString("                                           ~~~~~~FitConnect~~~~~~~                         \n\n\n                                                       Menu \n\n\n\n\n   Press 1 to see your profile\n   Press 2 to start a workout\n   Press 3 to see your feed\n   Press 4 to see location-based activity\n   Press 5 to check your followers\n   Press 6 to logout   ");
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
                    userchoice = 1;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num2) {
                    sound.play();
                    userchoice = 2;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num3) {
                    sound.play();
                    userchoice = 3;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num4) {
                    sound.play();
                    userchoice = 4;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num5) {
                    sound.play();
                    userchoice = 5;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num6) {
                    sound.play();
                    userchoice = 6;
                    break;
                }

            }
        }

        if (userchoice >= 1 && userchoice <= 6) {
            break;
        }

        window.clear(sf::Color(200, 200, 200));
        sf::RectangleShape marginRect(sf::Vector2f(window.getSize().x - 10.f, window.getSize().y - 10.f));
        marginRect.setFillColor(sf::Color(91, 136, 153));
        marginRect.setPosition(7.f, 7.f);
        window.draw(marginRect);
        window.draw(text);
        window.display();
    }
    return userchoice;
}
int displayAdminMenu() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "FitConnect");

    int userchoice = 0;
    sf::SoundBuffer buffer;
    sf::Sound sound;
    sound.setBuffer(buffer);
    if (!buffer.loadFromFile("coin2.wav"))
        return -1;
    sf::Font font;
    if (!font.loadFromFile("ShortBaby-Mg2w.ttf")) {
        std::cout << "Error loading font file." << std::endl;
        return 0;
    }

    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(24);
    sf::Color lightBlue(75, 92, 9);
    text.setFillColor(lightBlue);
    text.setString("                                           ~~~~~~FitConnect~~~~~~~                         \n\n\n                                                       Menu \n\n\n\n\n   Press 1 to see your profile\n   Press 2 to add a notification\n   Press 3 to add location based activity\n   Press 4 to add user\n   Press 5 to add challenge\n   Press 6 to see people who have completed their challenges uptil now\n   Press 7 to logout");
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
                    userchoice = 1;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num2) {
                    sound.play();
                    userchoice = 2;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num3) {
                    sound.play();
                    userchoice = 3;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num4) {
                    sound.play();
                    userchoice = 4;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num5) {
                    sound.play();
                    userchoice = 5;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num6) {
                    sound.play();
                    userchoice = 6;
                    break;
                }
                if (event.key.code == sf::Keyboard::Num7) {
                    sound.play();
                    userchoice = 6;
                    break;
                }
            }
        }

        if (userchoice >= 1 && userchoice <=7) {
            break;
        }

        window.clear(sf::Color(200, 200, 200));
        sf::RectangleShape marginRect(sf::Vector2f(window.getSize().x - 10.f, window.getSize().y - 10.f));
        marginRect.setFillColor(sf::Color(91, 136, 153));
        marginRect.setPosition(7.f, 7.f);
        window.draw(marginRect);
        window.draw(text);
        window.display();
    }
    return userchoice;
}
struct fileReader {
    char email[128];
    char password[128];
    char name[60];
    int age;
    float weight;
    float height;
    string goals[5];
    bool goals_achieved[5];
    int calories_burnt;
    string type;
    string notifications[5];
    string recommendations[5];
    int calorie_consumpsion;
};
struct UserCredentials {
    char email[128];
    char password[128];
    char name[60];
    int age;
    float weight;
    float height;
    char location[20];int packages[2] = { 0,0 };
};
struct Workout {
    string goals[5];
    bool goals_achieved[5];
    int calories_burnt;
    string type;
    string notifications[5];
};
struct NutritionTracking {
    string recommendations[5];
    int calorie_consumpsion;
};
struct Post_ {
    char username[20];
    int num_Posts;
    char caption[30];
    int likes;
    char comments[15][30];
};
class Post {
    Post_ post;
public:
    Post() {
       post.likes = 0;
        post.num_Posts = 0;
    }
    void addPost(const std::string& username, const std::string& cap, int num) {
        Post_ post;
        post.num_Posts = num;
        strcpy_s(post.username, username.c_str());
        post.likes = 0;
        strcpy_s(post.caption, cap.c_str());
        for (int i = 0; i < 15; i++) {
            post.comments[i][0] = '\0';
        }

        std::ofstream file("Posts.dat", std::ios::binary | std::ios::app);
        if (!file.is_open()) {
            cout << "Error opening file: Posts.dat" << std::endl;
            return;
        }

        file.write(reinterpret_cast<const char*>(&post), sizeof(Post_));

        file.close();
    }


    void likePost(const string& username, int number) {
        ifstream inputFile("Posts.dat", ios::binary | ios::in);
        ofstream tempFile("temp.dat", ios::binary | ios::out);

        if (!inputFile.is_open() || !tempFile.is_open()) {
            cerr << "Error opening file: Posts.dat" << endl;
            return;
        }

        Post_ post;
        bool found = false;

        while (inputFile.read(reinterpret_cast<char*>(&post), sizeof(Post_))) {
            if (strcmp(post.username, username.c_str()) == 0 && post.num_Posts == number) {
                found = true;
                post.likes++; // increment likes count
            }
            tempFile.write(reinterpret_cast<const char*>(&post), sizeof(Post_));
        }

        inputFile.close();
        tempFile.close();

        // Open the original file in output mode
        ofstream outFile("Posts.dat", ios::binary | ios::out);
        if (!outFile.is_open()) {
            cerr << "Error opening file: Posts.dat" << endl;
            return;
        }

        // Open the temporary file in input mode
        ifstream inFile("temp.dat", ios::binary | ios::in);
        if (!inFile.is_open()) {
            cerr << "Error opening file: temp.dat" << endl;
            outFile.close();
            return;
        }

        // Copy the contents of the temporary file to the original file
        outFile << inFile.rdbuf();

        // Close the files
        inFile.close();
        outFile.close();

        // Remove the temporary file
        remove("temp.dat");

        if (!found) {
            cout << "Post not found." << endl;
        }
    }

    void addComment(const string& username, int number, const string& comment) {
        std::ifstream inputFile("Posts.dat", std::ios::binary | std::ios::in);
        std::ofstream tempFile("tempfile.dat", std::ios::binary | std::ios::out);

        if (!inputFile.is_open() || !tempFile.is_open()) {
            cout << "Error opening file: Posts.dat" << std::endl;
            return;
        }

        Post_ post;
        bool found = false;

        while (inputFile.read(reinterpret_cast<char*>(&post), sizeof(Post_))) {
            if (std::strcmp(post.username, username.c_str()) == 0 && post.num_Posts == number) {
                found = true;
                for (int i = 0; i < 15; i++) {
                    if (post.comments[i][0] == '\0') {
                        for (int j = 0; j < 30; j++) {
                            if (comment[j] == '\0') {
                                post.comments[i][j] = '\0';
                                break;
                            }
                            post.comments[i][j] = comment[j];
                        }
                        break;
                    }
                }
            }

            tempFile.write(reinterpret_cast<const char*>(&post), sizeof(Post_));
            if (found) {
                break;
            }
        }

        if (!found) {
            std::cout << "Post not found." << std::endl;
            return;
        }

        inputFile.close();
        tempFile.close();

        // Copy contents from temp file back to original file
        std::ifstream tempFileRead("tempfile.dat", std::ios::binary | std::ios::in);
        std::ofstream inputFileWrite("Posts.dat", std::ios::binary | std::ios::out);

        if (!tempFileRead.is_open() || !inputFileWrite.is_open()) {
            cout << "Error opening file: Posts.dat or tempfile.dat" << std::endl;
            return;
        }

        inputFileWrite << tempFileRead.rdbuf();

        inputFileWrite.close();
        tempFileRead.close();

        // Remove the temporary file
        std::remove("tempfile.dat");
    }

    
   
    void viewPost() {
        ifstream file("Posts.dat", ios::binary | ios::in);
        if (!file.is_open()) {
            cout << "Error opening file: Posts.dat" << endl;
            return;
        }
        int num=0;
        string com;
        while (file.read(reinterpret_cast<char*>(&post), sizeof(Post_))) {
            

            cout << "Post Number: " << post.num_Posts << endl;
            cout << "Poster: " << post.username << endl;
            cout << "Caption: " << post.caption << endl;
            cout << "Likes: " << post.likes << endl;
            cout << "Comments:" << endl;
            for (int i = 0; i < 15; i++) {
                if (post.comments[i][0] != '\0')
                    cout << "- " << post.comments[i] << endl;
            }
            cout << endl;
            char ch;
            cout << "Press any key to see the next post:(Press l to like, Press c to comment,Press f to follow)";
            cin >> ch;
            if (ch == 'l') {
                likePost(post.username, post.num_Posts);
            }
            else if (ch == 'c') {
                cout << "Enter your comment";
                cin.ignore();
                getline(cin, com);
                addComment(post.username, post.num_Posts, com);
            }
        }
        file.close();
    }

};
struct meal {
    float totalCal= 0;
    char username[20];
    char rec1[20];
    float rec1cal=0;
    char rec2[20];
    float rec2cal=0;
    char rec3[20];
    float rec3cal=0;
};
struct chal {
    char challenge[40];
};
struct name1 {
    char username[20];
};
class User {
protected:
    string username;
    string password;
    string location;
public:
    virtual string getUsername() {
        return username;
    }
    virtual bool getcredentials(string id, string pass) = 0;
    virtual void writeCredentials(const UserCredentials& credentials, const Workout& workout, const NutritionTracking& nutrition) = 0;
    virtual void profile() = 0;
    virtual void getdetails()=0;
    virtual void getTrainer() = 0;
    virtual void getlocationactivity() = 0;
    virtual void follow(string username) = 0;
    virtual void addUser() = 0;
    virtual void startWorkout() = 0;
    virtual void checkfollow() = 0;
    virtual void checknotif() = 0;
    virtual void challenge() = 0;
    virtual void addnotif(notif obj) = 0;
    virtual void seechallenge() {
        chal challenge;
        name1 name;
        fstream file("challenges.dat", ios::binary | ios::in | ios::out);
        file.read(reinterpret_cast<char*>(&challenge), sizeof(chal));
        while (file.read(reinterpret_cast<char*>(&name), sizeof(name1))) {
            cout << name.username << endl;
        }
    }
    virtual void addnutri() {
        int choice;
        meal workout1;
        do {
            cout << "Press 1 for Vegetarian diet\nPress 2 for low protien diet\nPress 3 for Cardiac diet\nPress 4 for keto\nPress 5 for Intemittent fasting:";
            cin >> choice;
        } while (choice < 1 || choice > 5);
        switch (choice) {
        case 1:
            strcpy_s(workout1.rec1, "Vegetarian");
            workout1.rec1cal =2200;
            break;
        case 2:
            strcpy_s(workout1.rec1, "low protien");
            workout1.rec1cal =1850;
            break;
        case 3:
            strcpy_s(workout1.rec1, "cardiac");
            workout1.rec1cal = 1700;
            break;
        case 4:
            strcpy_s(workout1.rec1, "keto");
            workout1.rec1cal =  2300;
            break;
        case 5:
            strcpy_s(workout1.rec1, "fasting");
            workout1.rec1cal = 1300;
            break;
        }
        workout1.rec2[0] = '\0';
        workout1.rec3[0] = '\0';
       
        fstream file("nutrition.dat", ios::binary | ios::in | ios::out);

        if (!file.is_open()) {
            cout << "Error opening file: nutrition.dat" << endl;
            return;
        }

        meal workout2;
        bool found = false;
        // Read each record from the file to check if the username exists
        while (file.read(reinterpret_cast<char*>(&workout2), sizeof(workout2))) {
            if (strcmp(username.c_str(), workout2.username) == 0) {
                found = true;
                break;
            }
        }

        if (found) {
            // If the user is found, check if any record is empty
            if (strlen(workout2.rec1) == 0) {
                strcpy_s(workout2.rec1, workout1.rec1);
                workout2.rec1cal = workout1.rec1cal;
                workout2.totalCal += workout1.rec1cal;
            }
            else if (strlen(workout2.rec2) == 0) {
                strcpy_s(workout2.rec2, workout1.rec1);
                workout2.rec2cal= workout1.rec1cal;
                workout2.totalCal += workout1.rec1cal;
            }
            else {
                strcpy_s(workout2.rec3, workout1.rec1);
                workout2.rec3cal = workout1.rec1cal;

                strcpy_s(workout2.rec2, workout2.rec1);
                workout2.rec2cal = workout2.rec1cal;

                strcpy_s(workout2.rec1, workout1.rec1);
                workout2.rec1cal = workout1.rec1cal;
                workout2.totalCal += workout1.rec1cal;
            }
            // Move to the position where the record was read and overwrite it
            file.seekp(-static_cast<int>(sizeof(workout2)), ios::cur);
            file.write(reinterpret_cast<char*>(&workout2), sizeof(workout2));
        }
        else {
            strcpy_s(workout1.username, username.c_str());
            workout1.totalCal = workout1.rec1cal;
            // If the user is not found, append the new record to the end of the file
            file.clear(); // Clear any eof or fail flags
            file.seekp(0, ios::end); // Move to the end of the file
            file.write(reinterpret_cast<char*>(&workout1), sizeof(workout1));
        }


        file.close();
    }
    
    virtual void nutritionTracking() {
        fstream file("nutrition.dat", ios::binary | ios::in | ios::out);

        if (!file.is_open()) {
            cout << "Error opening file: nutrition.dat" << endl;
            return;
        }

        meal nutrition;
        bool found = false;
        while (file.read(reinterpret_cast<char*>(&nutrition), sizeof(meal))) {
            if (strcmp(username.c_str(), nutrition.username) == 0) {
                found = true;
                if (found) {
                    cout << "Name=" << nutrition.username << endl << "Record 1=" <<nutrition.rec1 << endl << "Calories intake=" << nutrition.rec1cal << endl << "Record 2=" << nutrition.rec2 << endl << "Calories intake=" << nutrition.rec2cal << endl << "Record 3=" << nutrition.rec3 << endl << "Calories intake=" << nutrition.rec3cal << endl << "Total calories intake=" << nutrition.totalCal << endl;
                }
                break;
            }
        }
    }
    
    virtual void workouttracking() {
        fstream file("workout.dat", ios::binary | ios::in | ios::out);

        if (!file.is_open()) {
            cout << "Error opening file: workout.dat" << endl;
            return;
        }

        workoutrecord workout2;
        bool found = false;
        while (file.read(reinterpret_cast<char*>(&workout2), sizeof(workout2))) {
            if (strcmp(username.c_str(), workout2.username) == 0) {
                found = true;
                if (found) {
                    cout << "Name=" << workout2.username << endl << "Record 1=" << workout2.rec1 << endl << "Calories burnt=" << workout2.rec1calburnt << endl << "Record 2=" << workout2.rec2 << endl << "Calories burnt=" << workout2.rec2calburnt << endl << "Record 3=" << workout2.rec3 << endl << "Calories burnt=" << workout2.rec3calburnt << endl << "Total calories burnt=" << workout2.totalCalBurn << endl;
                }
                break;
            }
        }

    }
    
    
};
struct locationActivity {
    char isl[40];
    char khi[40];
    char lhr[40];
    char fsd[40];
};
class Admin : public User {
public:
    void challenge() override{
        chal newChallenge;

        // Prompt the admin to enter the challenge
        cout << "Enter the challenge: ";
        cin.ignore();
        cin.getline(newChallenge.challenge, sizeof(newChallenge.challenge));
        // Open the file in binary mode and truncate it to delete previous data
        ofstream file("challenges.dat", ios::binary | ios::trunc);
        if (!file.is_open()) {
            cerr << "Error opening file." << endl;
            return;
        }

        file.write(reinterpret_cast<const char*>(&newChallenge), sizeof(chal));

        file.close();

        cout << "Challenge added successfully." << endl;
    }
    void checknotif() override{}
    void addnotif(notif obj) override {
        ofstream file("notifications.dat", ios::binary |ios::trunc);

        if (!file.is_open()) {
            cout << "Error opening file: notifications.dat" << std::endl;
            return;
        }

        file.write(reinterpret_cast<char*>(&obj), sizeof(notif));

        file.close();
    }
    bool getcredentials(string id, string pass) override {
            ifstream file("admin.dat", ios::binary | ios::in);
            if (!file.is_open()) {
                cout << "Error opening file: admin.dat" << endl;
                return false;
            }

            UserCredentials credentials;
            bool found = false;

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
                    if (email == id && passcode == pass) {
                        username = email;
                        password = passcode;
                        found = true;

                        cout << "Credentials matched." << endl;
                        break;
                    }
                    else {
                        file.ignore(1000, '\n'); // Skip the rest of the user's data
                    }
                }
            }

            if (!found) {
                cout << "Credentials not found." << endl;
            }
            file.close();

            return found;
    }

    void writeCredentials(const UserCredentials& credentials, const Workout& workout, const NutritionTracking& nutrition) override {
        ofstream file("admin.dat", ios::binary | ios::app);

        if (!file.is_open()) {
            cout << "Error opening file: admin.dat" << endl;
            return;
        }

        // Write the user credentials to the file
        file << '\\' << endl;
        file << credentials.email << endl;
        file << credentials.password << endl;
        file.close();
    }
    void checkfollow() override{}
    void getdetails(){}
    void profile() {
        cout << username << "\n";
    }
    void getTrainer() override{}
    void getlocationactivity() override {
        int choice;
        locationActivity activity;
        activity.isl[0] = '\0';
        activity.khi[0] = '\0';
        activity.lhr[0] = '\0';
        activity.fsd[0] = '\0';
        string str;
        do {
            cout << "Enter city you want to add location activity for: (1 for Islamabad, 2 for Karachi, 3 for Lahore and 4 for Faisalabad)" << endl;
            cin >> choice;
        } while (choice < 1 || choice > 4);
        
        cout << "Enter message:" << endl;
        cin.ignore();
        getline(cin, str);
        int i = 0;
        switch(choice){
            case 1:
                while (str[i] != '\0') {
                    activity.isl[i] = str[i];
                    i++;
                }
                activity.isl[i] = '\0';
          break;
            case 2:
                while (str[i] != '\0') {
                    activity.khi[i] = str[i];
                    i++;
                }
                activity.khi[i] = '\0';
                break;
            case 3:
                while (str[i] != '\0') {
                    activity.lhr[i] = str[i];
                    i++;
                }
                activity.lhr[i] = '\0';
                break;
            case 4:
                while (str[i] != '\0') {
                    activity.fsd[i] = str[i];
                    i++;
                }
                activity.fsd[i] = '\0';
                break;
        }
        ifstream inputFile("locationactivity.dat", ios::binary | ios::in);
        ofstream tempFile("temp.dat", ios::binary | ios::out);

        if (!inputFile.is_open() || !tempFile.is_open()) {
            cerr << "Error opening file:locationactivity.dat" << endl;
            return;
        }

        locationActivity act;
        while (inputFile.read(reinterpret_cast<char*>(&act), sizeof(locationActivity))) {
            if (choice == 1){
                for (int i = 0; i < 40; i++){
                    
                    act.isl[i] = activity.isl[i];
                    if (activity.isl[i] == '\0')
                        break;
                }
            }
            else  if (choice == 2) {
                for (int i = 0; i < 40; i++) {

                    act.khi[i] = activity.khi[i];
                    if (activity.khi[i] == '\0')
                        break;
                }
            }
            else  if (choice == 3) {
                for (int i = 0; i < 40; i++) {

                    act.lhr[i] = activity.lhr[i];
                    if (activity.lhr[i] == '\0')
                        break;
                }
            }
            else  if (choice == 4) {
                for (int i = 0; i < 40; i++) {

                    act.fsd[i] = activity.fsd[i];
                    if (activity.fsd[i] == '\0')
                        break;
                }
            }
            tempFile.write(reinterpret_cast<char*>(&act), sizeof(locationActivity));
        }

        inputFile.close();
        tempFile.close();
        remove("locationactivity.dat");
        rename("temp.dat", "locationactivity.dat");
    }
    string checklocationactivity(string loca) {
        ifstream inputFile("locationactivity.dat", ios::binary | ios::in);
        locationActivity act;
        inputFile.read(reinterpret_cast<char*>(&act), sizeof(locationActivity));
        if (loca == "Islamabad")
            return act.isl;
        if (loca == "Karachi")
            return act.khi;
        if (loca == "Lahore")
            return act.lhr;
        if (loca == "Faisalabad")
            return act.fsd;
        return "";
    }
    void follow(string s)override{}
     void addUser() override {
         string email, password, name, location;
         int age, choice;
         float weight, height;
         cout << "Enter your email:";
         cin >> email;
         cout << "Enter your password:";
         cin >> password;
         cout << "Enter your first name:";
         cin.ignore(); // Ignore the newline character left in the stream from previous input
         getline(cin, name);
         cout << "Enter your age:";
         cin >> age;
         cout << "Enter your weight:";
         cin >> weight;
         cout << "Enter your height:";
         cin >> height;
         do {
             cout << "Enter your location:\nPress 1 for Islamabad\nPress 2 for Karachi\nPress 3 for Lahore\nPress 4 for Faisalabad:";
             cin >> choice;
         } while (choice < 1 || choice>4);
         switch (choice) {
         case 1: location = "Islamabad"; break;
         case 2: location = "Karachi"; break;
         case 3: location = "Lahore"; break;
         case 4: location = "Faisalabad"; break;
         }
         UserCredentials credentials;
         credentials.age = age;
         credentials.weight = weight;
         credentials.height = height;
         strncpy_s(credentials.email, email.c_str(), sizeof(credentials.email));
         strncpy_s(credentials.password, password.c_str(), sizeof(credentials.password));
         strncpy_s(credentials.name, name.c_str(), sizeof(credentials.name));
         strncpy_s(credentials.location, location.c_str(), sizeof(credentials.location));
         Workout workout;
         NutritionTracking nutrition;
         ofstream file("user.dat", ios::binary | ios::out | ios::app); // Open the file in append mode
         if (!file.is_open()) {
             cerr << "Error opening file: user.dat" << endl;
             return;
         }

         // Write a delimiter to separate user records
         file << "\\" << endl;

         // Write user credentials
         file << credentials.email << endl;
         file << credentials.password << endl;
         file << credentials.name << endl;
         file << credentials.age << endl;
         file << credentials.weight << endl;

         file << credentials.height << endl;
         file << credentials.location << endl;
         file << "" << endl;
             file << "" << endl;
         // Write workout details
         for (int i = 0; i < 5; i++) {
             file << workout.goals[i] << endl;
             file << workout.goals_achieved[i] << endl;
             file << workout.notifications[i] << endl;
         }
         file << workout.calories_burnt << endl;
         file << workout.type << endl;

         // Write nutrition tracking details
         for (int i = 0; i < 5; i++) {
             file << nutrition.recommendations[i] << endl;
         }
         file << nutrition.calorie_consumpsion << endl;

         file.close();
    }
     virtual void startWorkout()override{
     }
};

class Trainer :public User {
    string name;
    int age;
    float weight;
    float height;
    int package[2];
    char clients[8][20];
public:
    void checknotif() override{}
    void addnotif(notif obj)override {}
    void checkfollow() override {
            ifstream file("following.dat", ios::binary | ios::in);
            if (!file.is_open()) {
                cout << "Error opening file: following.dat" << endl;
                return;
            }
            string uname, tname;
            while (file >> ws && !file.eof()) {
                char backslash;
                file >> backslash;

                if (backslash == '\\') {
                    file.ignore(1000, '\n'); // Skip to the next line
                    getline(file, uname);
                    getline(file, tname);

                    if (tname == username) {
                        cout << uname << endl;
                    }
                }
            }
        }
    
    bool getcredentials(string id, string pass) override {
        ifstream file("trainer.dat", ios::binary | ios::in);
        if (!file.is_open()) {
            cout << "Error opening file: user.dat" << endl;
            return false;
        }

        UserCredentials credentials;
        bool found = false;

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
                if (email == id && passcode == pass) {
                    username = email;
                    password = passcode;
                    found = true;
                    file.getline(credentials.name, sizeof(credentials.name));
                    file.getline(credentials.location, sizeof(credentials.location));
                    file >> credentials.age;
                    file >> credentials.weight;
                    file >> credentials.height;
                    file >> credentials.packages[0];
                    file >> credentials.packages[1];
                    file.ignore(); // Skip the newline character
                    break;
                }
                else {
                    file.ignore(1000, '\n'); // Skip the rest of the user's data
                }
            }
        }

        if (!found) {
            cout << "Credentials not found." << endl;
        }
        else {
            name = credentials.name;
            age = credentials.age;
            weight = credentials.weight;
            height = credentials.height;
            package[0] = credentials.packages[0];
            package[1]=credentials.packages[1];

        }
        file.close();

        return found;
    }

    void writeCredentials(const UserCredentials& credentials, const Workout& workout, const NutritionTracking& nutrition) override {
        ofstream file("trainer.dat", ios::binary | ios::out | ios::app); // Open the file in append mode
        if (!file.is_open()) {
            cerr << "Error opening file: trainer.dat" << endl;
            return;
        }

        // Write a delimiter to separate user records
        file << "\\" << endl;

        if (!getcredentials(credentials.email, credentials.password)) {
            file << credentials.email << endl;
            file << credentials.password << endl;
            file << credentials.name << endl;
            file << credentials.location << endl;
            file << credentials.age << endl;
            file << credentials.weight << endl;
            file << credentials.height << endl;
            file << credentials.packages[0] << endl;
            file << credentials.packages[1] << endl;
        }
        else {
            cout << "Email or password already exists" << endl;
        }
        file.close();
    }
    void getdetails() override{
        string email, password, name, location;
        int age, choice;
        float weight, height;
        cout << "Enter your email:";
        cin >> email;
        cout << "Enter your password:";
        cin >> password;
        cout << "Enter your first name:";
        cin.ignore(); // Ignore the newline character left in the stream from previous input
        getline(cin, name);
        cout << "Enter your age:";
        cin >> age;
        cout << "Enter your weight:";
        cin >> weight;
        cout << "Enter your height:";
        cin >> height;
        do {
            cout << "Enter your location:\nPress 1 for Islamabad\nPress 2 for Karachi\nPress 3 for Lahore\nPress 4 for Faisalabad:";
            cin >> choice;
        } while (choice < 1 || choice>4);
        switch (choice) {
        case 1: location = "Islamabad"; break;
        case 2: location = "Karachi"; break;
        case 3: location = "Lahore"; break;
        case 4: location = "Faisalabad"; break;
        }
        int num, num1;
        cout << "Enter your basic package for a month:";
        cin >> num;
        cout << "Enter your vip package for a month:";
        cin >> num1;
        UserCredentials credentials;
        credentials.age = age;
        credentials.weight = weight;
        credentials.height = height;
        credentials.packages[0] = num;
        credentials.packages[1] = num1;
        strncpy_s(credentials.email, email.c_str(), sizeof(credentials.email));
        strncpy_s(credentials.password, password.c_str(), sizeof(credentials.password));
        strncpy_s(credentials.name, name.c_str(), sizeof(credentials.name));
        strncpy_s(credentials.location, location.c_str(), sizeof(credentials.location));
        Workout workout;
        NutritionTracking nutrition;
        writeCredentials(credentials,workout,nutrition);
    }
    void profile() override{
        cout << "Username="<<username << "\n" <<"Name="<< name << "\n" <<"Age="<< age << "\n" <<"Weight="<< weight << "\n" <<"Height="<< height << endl;
    }
    void getTrainer() override {}

    void getlocationactivity() override{
    }
    void follow(string username) {
        
    }
    virtual void addUser() override {
    }
     void startWorkout() override{
        int choice;
        workoutrecord workout1;
        do {
            cout << "Press 1 for Aerobic Exercise\nPress 2 for squats\nPress 3 for Dips\nPress 4 for bench press\nPress 5 for Pilates:";
            cin >> choice;
        } while (choice < 1 || choice > 5);
        int time_;
        cout << "Excellent Choice!\nEnter time(in minutes) you worked out for:";
        cin >> time_;
        switch (choice) {
        case 1:
            strcpy_s(workout1.rec1, "Aerobic Exercise");
            workout1.rec1calburnt = time_ * 7.5;
            break;
        case 2:
            strcpy_s(workout1.rec1, "Squats");
            workout1.rec1calburnt = time_ * 8;
            break;
        case 3:
            strcpy_s(workout1.rec1, "Dips");
            workout1.rec1calburnt = time_ * 3.4;
            break;
        case 4:
            strcpy_s(workout1.rec1, "Bench Press");
            workout1.rec1calburnt = time_ * 9;
            break;
        case 5:
            strcpy_s(workout1.rec1, "Pilates");
            workout1.rec1calburnt = time_ * 5.5;
            break;
        }

        fstream file("workout.dat", ios::binary | ios::in | ios::out);

        if (!file.is_open()) {
            cout << "Error opening file: workout.dat" << endl;
            return;
        }

        workoutrecord workout2;
        bool found = false;
        // Read each record from the file to check if the username exists
        while (file.read(reinterpret_cast<char*>(&workout2), sizeof(workout2))) {
            if (strcmp(username.c_str(), workout2.username) == 0) {
                found = true;
                break;
            }
        }

        if (found) {
            // If the user is found, check if any record is empty
            if (strlen(workout2.rec1) == 0) {
                strcpy_s(workout2.rec1, workout1.rec1);
                workout2.rec1calburnt = workout1.rec1calburnt;
                workout2.totalCalBurn += workout1.rec1calburnt;
            }
            else if (strlen(workout2.rec2) == 0) {
                strcpy_s(workout2.rec2, workout1.rec1);
                workout2.rec2calburnt = workout1.rec1calburnt;
                workout2.totalCalBurn += workout1.rec1calburnt;
            }
            else {
                strcpy_s(workout2.rec3, workout1.rec1);
                workout2.rec3calburnt = workout1.rec1calburnt;

                strcpy_s(workout2.rec2, workout2.rec1);
                workout2.rec2calburnt = workout2.rec1calburnt;

                strcpy_s(workout2.rec1, workout1.rec1);
                workout2.rec1calburnt = workout1.rec1calburnt;
                workout2.totalCalBurn += workout1.rec1calburnt;
            }
            // Move to the position where the record was read and overwrite it
            file.seekp(-static_cast<int>(sizeof(workout2)), ios::cur);
            file.write(reinterpret_cast<char*>(&workout2), sizeof(workout2));
        }
        else {
            strcpy_s(workout1.username, username.c_str());
            workout1.totalCalBurn = workout1.rec1calburnt;
            // If the user is not found, append the new record to the end of the file
            file.clear(); // Clear any eof or fail flags
            file.seekp(0, ios::end); // Move to the end of the file
            file.write(reinterpret_cast<char*>(&workout1), sizeof(workout1));
        }


        file.close();
    }
     void challenge () override{}
};

class USER :public User {
    string name;
    int age;
    float weight;
    float height;
    Workout workout;
    NutritionTracking nutrition;
    string location;
    string location_activity;
    int trainerPackage=0;
    string trainerName;
public:
    string getname() {
        return name;
    }
    int getage() {
        return age;
    }
    float getweight() {
        return weight;
    }
    float getheight() {
        return height;
    }
    void challenge() override{
        chal newChallenge;

        // Open the file in binary mode
        std::fstream file("challenges.dat", std::ios::binary | std::ios::in | std::ios::out );
        if (!file.is_open()) {
            cout << "Error opening file." << std::endl;
            return;
        }

        if (!file.read(reinterpret_cast<char*>(&newChallenge), sizeof(chal))) {
            cout << "No challenges found." << std::endl;
            file.close();
            return;
        }

        std::cout << "Challenge: " << newChallenge.challenge << std::endl;


        char response;
        cout << "Do you want to do this challenge? (y/n): ";
        cin >> response;
        name1 name2;
        int x = 0;
        while (username[x] != '\0') {
            name2.username[x] = username[x];
            x++;
        }
        if (response == 'y' || response == 'Y') {
            file.write(reinterpret_cast<const char*>(&name2), sizeof(name1));
            cout << "Challenge completed" << std::endl;
        }
        else {
            std::cout << "Challenge skipped." << std::endl;
        }

        file.close();
    
    }
    bool getcredentials(string id, string pass) override {
        ifstream file("user.dat", ios::binary | ios::in);
        if (!file.is_open()) {
            cout << "Error opening file: user.dat" << endl;
            return false;
        }

        UserCredentials credentials;
        bool found = false;

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
                if (email == id && passcode == pass) {
                    username = email;
                    password = passcode;
                    found = true;
                    file.getline(credentials.name, sizeof(credentials.name));
                    
                    file >> credentials.age;
                    file >> credentials.weight;
                    file >> credentials.height;
                    file.ignore(1000, '\n');
                    getline(file,location);
 getline(file,trainerName);
                    file >> trainerPackage;
                    file.ignore(); // Skip the newline character

                    for (int i = 0; i < 5; i++) {
                        getline(file, workout.goals[i]);
                        file >> workout.goals_achieved[i];
                        file.ignore();
                        getline(file, workout.notifications[i]);
                    }
                    file >> workout.calories_burnt;
                    file.ignore();
                    file.ignore();
                    getline(file, workout.type);

                    for (int i = 0; i < 5; i++) {
                        getline(file, nutrition.recommendations[i]);
                    }
                    file >> nutrition.calorie_consumpsion;
                    file.ignore();
                   
                    cout << "Credentials matched." << endl;
                    break;
                }
                else {
                    file.ignore(1000, '\n'); // Skip the rest of the user's data
                }
            }
        }

        if (!found) {
            cout << "Credentials not found." << endl;
        }
        else {
            name = credentials.name;
            age = credentials.age;
            weight = credentials.weight;
            height = credentials.height;

        }
        file.close();

        return found;
    }

    void writeCredentials(const UserCredentials& credentials, const Workout& workout, const NutritionTracking& nutrition) {
        ofstream file("user.dat", ios::binary | ios::out | ios::app); // Open the file in append mode
        if (!file.is_open()) {
            cerr << "Error opening file: user.dat" << endl;
            return;
        }

        // Write a delimiter to separate user records
        file << "\\" << endl;

        // Write user credentials
        file << credentials.email << endl;
        file << credentials.password << endl;
        file << credentials.name << endl;
        file << credentials.age << endl;
        file << credentials.weight << endl;

        file << credentials.height << endl;
        file << credentials.location << endl;
file << trainerName;
        file << trainerPackage;
        // Write workout details
        for (int i = 0; i < 5; i++) {
            file << workout.goals[i] << endl;
            file << workout.goals_achieved[i] << endl;
            file << workout.notifications[i] << endl;
        }
        file << workout.calories_burnt << endl;
        file << workout.type << endl;

        // Write nutrition tracking details
        for (int i = 0; i < 5; i++) {
            file << nutrition.recommendations[i] << endl;
        }
        file << nutrition.calorie_consumpsion << endl;
        
        file.close();
    }

    void addnotif(notif obj)override {}
    void getdetails() override {
        string email, password, name, location;
        int age, choice;
        float weight, height;
        cout << "Enter your email:";
        cin >> email;
        cout << "Enter your password:";
        cin >> password;
        cout << "Enter your first name:";
        cin.ignore(); // Ignore the newline character left in the stream from previous input
        getline(cin, name);
        cout << "Enter your age:";
        cin >> age;
        cout << "Enter your weight:";
        cin >> weight;
        cout << "Enter your height:";
        cin >> height;
        do {
            cout << "Enter your location:\nPress 1 for Islamabad\nPress 2 for Karachi\nPress 3 for Lahore\nPress 4 for Faisalabad:";
            cin >> choice;
        } while (choice < 1 || choice>4);
        switch (choice) {
        case 1: location = "Islamabad"; break;
        case 2: location = "Karachi"; break;
        case 3: location = "Lahore"; break;
        case 4: location = "Faisalabad"; break;
        }
        UserCredentials credentials;
        credentials.age = age;
            credentials.weight = weight;
            credentials.height = height;
            strncpy_s(credentials.email, email.c_str(), sizeof(credentials.email));
            strncpy_s(credentials.password, password.c_str(), sizeof(credentials.password));
            strncpy_s(credentials.name, name.c_str(), sizeof(credentials.name));
            strncpy_s(credentials.location, location.c_str(), sizeof(credentials.location));
            Workout workout1;
            NutritionTracking nutrition1;
            cout << "Enter your workout goals (Press Enter to stop):";
            cin.ignore(); // Ignore the newline character left in the stream from previous input
            for (int i = 0; i < 5; i++) {
                cout << "Enter goal " << i + 1 << ":";
                getline(cin, workout1.goals[i]);
                if (workout1.goals[i] == "") {
                    break;
                }
            }
            for (int i = 0; i < 5; i++) {
                workout1.goals_achieved[i] = false;
            }
            do {
                cout << "Press 1 for Aerobic Exercise\nPress 2 for squats\nPress 3 for Dips\nPress 4 for bench press\nPress 5 for Pilates:";
                cin >> choice;
            } while (choice < 1 || choice > 5);
            switch (choice) {
            case 1: workout1.type = "aerobic exercise"; break;
            case 2: workout1.type = "squats"; break;
            case 3: workout1.type = "dips"; break;
            case 4: workout1.type = "bench press"; break;
            case 5: workout1.type = "pilates"; break;
            }
            workout1.calories_burnt = 0;
            workout1.notifications[0] = "Don't forget to log your meals for today to track your calorie intake!";
            workout1.notifications[1] = "You're one workout away from a good mood. Let's get moving!";
            workout1.notifications[2] = "Time to sweat it out! Your workout for today is waiting for you.";
            workout1.notifications[3] = "Stay hydrated! Remember to drink water throughout the day.";
            workout1.notifications[4] = "Did you know? Adding more vegetables to your diet can help improve your overall health.";
            nutrition1.calorie_consumpsion = 0;
            for (int i = 0; i < 5; i++) {
                nutrition1.recommendations[i] = "";
            }
            writeCredentials(credentials, workout1, nutrition1);
    }

    void profile() override{
        cout << "Username="<<username << "\n" << "Name="<<name << "\n" <<"Age="<< age << "\n" << "Weight="<<weight << "\n" << "Height="<<height << "\n";
    }
    void checknotif() override{
        ifstream file("notifications.dat", ios::binary);

        notif obj;
        while (file.read(reinterpret_cast<char*>(&obj), sizeof(notif))) {
            cout <<  obj.notification << endl;
        }

        file.close();
    }
    void getTrainer() override {
        ifstream file("trainer.dat", ios::binary | ios::in);
        if (!file.is_open()) {
            cout << "Error opening file: trainer.dat" << endl;
            return ;
        }

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
                    if (location == credentials.location) {
                       cout << "Trainer " << credentials.name << " available!" << endl;
                       cout << "VIP Package=" << credentials.packages[1] << endl;
                        cout << "Basic Package=" << credentials.packages[0] << endl;
                    
                    }
                    file.ignore(); // Skip the newline character
                    
                }
                else {
                    file.ignore(1000, '\n'); // Skip the rest of the user's data
                }
            
            }
        file.close();
        string s,tname;
        int num;
        streampos lastPos;
        do {
            cout << "Enter the trainer name to hire him:";
            cin >> s;
            ifstream File("trainer.dat", ios::binary | ios::in);
            if (!File.is_open()) {
                cout << "Error opening file: trainer.dat" << endl;
                return;
            }
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
                    if (s == credentials.name && credentials.location == location) {
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
                do {
                    cout << "Enter package details:0 for basic,1 for VIP)";
                    cin >> num;
                } while (num != 0 && num != 1);
                trainerPackage =credentials.packages[num] ;
            }
        } while (!found);
        fstream userFile("user.dat", ios::binary | ios::in | ios::out);
        if (!userFile.is_open()) {
            cout << "Error opening file: user.dat" << endl;
            return;
        }

        UserCredentials userCredentials;
        while (userFile >> ws && !userFile.eof()) {
            streampos startPos = userFile.tellg(); // Get the current position in the file
            char backslash;
            userFile >> backslash;

            if (backslash == '\\') {
                userFile.ignore(1000, '\n'); // Skip to the next line
                userFile.getline(userCredentials.email, sizeof(userCredentials.email));
                userFile.getline(userCredentials.password, sizeof(userCredentials.password));

                string userEmail(userCredentials.email);
                string userPassword(userCredentials.password);
                cout << username<< endl <<userEmail << endl;
                if (username== userEmail) {
                    // Move back to the start of the record
                    userFile.seekp(startPos);
                    // Write the updated trainer's name and package to the file
                    userFile << '\\' << endl;
                    userFile << userCredentials.email << endl;
                    userFile << userCredentials.password << endl;
                    userFile << name << endl;
                    userFile <<age << endl;
                    userFile << weight << endl;
                    userFile << height << endl;
                    userFile << location << endl;
                    userFile << s << endl; // updated trainer name
                    userFile << trainerPackage << endl; // updated package
                    // Write workout details
                    for (int i = 0; i < 5; i++) {
                        userFile << workout.goals[i] << endl;
                        userFile << workout.goals_achieved[i] << endl;
                        userFile << workout.notifications[i] << endl;
                    }
                    userFile << workout.calories_burnt << endl;
                    userFile << workout.type << endl;

                    // Write nutrition tracking details
                    for (int i = 0; i < 5; i++) {
                       
                        userFile << nutrition.recommendations[i] << endl;
                    }
                    userFile << nutrition.calorie_consumpsion << endl;
                    userFile << '\\' << endl; // Mark the end of the record
                    break;
                }
            }
            else {
                userFile.ignore(1000, '\n'); // Skip the rest of the user's data
            }
        }
        userFile.close();
        }

     void getlocationactivity() override{
         Admin admin;
         location_activity = admin.checklocationactivity(location);
         cout << location_activity << endl;
    }
     void follow(string trainername) override{
         ofstream file("following.dat", ios::binary | ios::app);
         if (!file.is_open()) {
             cerr << "Error opening file: following.dat" << endl;
             return;
         }

         file << "\\" << endl;

         file << username << endl;
         file << trainername << endl;

         file.close();
     }
     virtual void addUser() override {

     }
     void startWorkout()override {
         int choice;
         workoutrecord workout1;
         do {
             cout << "Press 1 for Aerobic Exercise\nPress 2 for squats\nPress 3 for Dips\nPress 4 for bench press\nPress 5 for Pilates:";
             cin >> choice;
         } while (choice < 1 || choice > 5);
         int time_;
         cout << "Excellent Choice!\nEnter time(in minutes) you worked out for:";
         cin >> time_;
         switch (choice) {
         case 1:
             strcpy_s(workout1.rec1, "Aerobic Exercise");
             workout1.rec1calburnt = time_ * 7.5;
             break;
         case 2:
             strcpy_s(workout1.rec1, "Squats");
             workout1.rec1calburnt = time_ * 8;
             break;
         case 3:
             strcpy_s(workout1.rec1, "Dips");
             workout1.rec1calburnt = time_ * 3.4;
             break;
         case 4:
             strcpy_s(workout1.rec1, "Bench Press");
             workout1.rec1calburnt = time_ * 9;
             break;
         case 5:
             strcpy_s(workout1.rec1, "Pilates");
             workout1.rec1calburnt = time_ * 5.5;
             break;
         }

         fstream file("workout.dat", ios::binary | ios::in | ios::out);

         if (!file.is_open()) {
             cout << "Error opening file: workout.dat" << endl;
             return;
         }

         workoutrecord workout2;
         bool found = false;
         // Read each record from the file to check if the username exists
         while (file.read(reinterpret_cast<char*>(&workout2), sizeof(workout2))) {
             if (strcmp(username.c_str(), workout2.username) == 0) {
                 found = true;
                 break;
             }
         }

         if (found) {
             // If the user is found, check if any record is empty
             if (strlen(workout2.rec1) == 0) {
                 strcpy_s(workout2.rec1, workout1.rec1);
                 workout2.rec1calburnt = workout1.rec1calburnt;
                 workout2.totalCalBurn += workout1.rec1calburnt;
             }
             else if (strlen(workout2.rec2) == 0) {
                 strcpy_s(workout2.rec2, workout1.rec1);
                 workout2.rec2calburnt = workout1.rec1calburnt;
                 workout2.totalCalBurn += workout1.rec1calburnt;
             }
             else {
                 strcpy_s(workout2.rec3, workout1.rec1);
                 workout2.rec3calburnt = workout1.rec1calburnt;

                 strcpy_s(workout2.rec2, workout2.rec1);
                 workout2.rec2calburnt = workout2.rec1calburnt;

                 strcpy_s(workout2.rec1, workout1.rec1);
                 workout2.rec1calburnt = workout1.rec1calburnt;
                 workout2.totalCalBurn += workout1.rec1calburnt;
             }
             // Move to the position where the record was read and overwrite it
             file.seekp(-static_cast<int>(sizeof(workout2)), ios::cur);
             file.write(reinterpret_cast<char*>(&workout2), sizeof(workout2));
         }
         else {
             strcpy_s(workout1.username, username.c_str());
             workout1.totalCalBurn = workout1.rec1calburnt;
             // If the user is not found, append the new record to the end of the file
             file.clear(); // Clear any eof or fail flags
             file.seekp(0, ios::end); // Move to the end of the file
             file.write(reinterpret_cast<char*>(&workout1), sizeof(workout1));
         }
        

         file.close();
     }
     void checkfollow() override{
         ifstream file("following.dat", ios::binary | ios::in);
         if (!file.is_open()) {
             cout << "Error opening file: following.dat" << endl;
             return ;
         }
         string uname, tname;
         while (file >> ws && !file.eof()) {
             char backslash;
             file >> backslash;

             if (backslash == '\\') {
                 file.ignore(1000, '\n'); // Skip to the next line
                 getline(file, uname);
                 getline(file, tname);

                 if (uname== username) {
                     cout << tname << endl;
                 }
             }
         }
    }
};