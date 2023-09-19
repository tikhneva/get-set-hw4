#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Parrot {
private:
    int wings;
    int legs_count;
    string nick;
    string plumage_color;
    string eyes_color;

public:
    void SetWings(int w) {
        if (w == 2)
        {
            wings = w;
        }
        else
        {
            cout << "Parrot is not able to fly" << endl;
        }
    }
    int GetWings() const {
        return wings;
    }

    void SetLegs(int l) {
        if (l == 2)
        {
            legs_count = l;
        }
        else
        {
            cout << "Parrot is not able to walk" << endl;
        }
    }
    int GetLegs() const {
        return legs_count;
    }

    void SetNick(string n) {
            nick = n;
    }
    string GetNick() const {
        return nick;
    }

    void SetPlumage(string p) {
        plumage_color = p;
    }
    string GetPlumage() const {
        return plumage_color;
    }

    void SetEyes(string e) {
        eyes_color = e;
    }
    string GetEyes() const {
        return eyes_color;
    }

    void MakeNoize() {
        cout << "ARH!\n";
    }

    void Fly() {
        cout << "ïàïóãà ëåòèòü!\n";
    }

    void Eat(string meal) {
        cout << "ïàïóãà ¿ñòü " << meal << "\n";
    }

    void Sleep() {
        cout << "ïàïóãà ñïèòü\n";
    }

    void Stare() {
        cout << "ïàïóãà ï³äîçð³ëî äèâèòüñÿ íà âàñ\n";
    }
};

class Human {
private:
    string name;
    string eyes_color;
    string hair_color;
    string skill;
    double heigh;
    double beauty;
    double foot_size;

public:
    void SetName(string n) {
        name = n;
    }
    string GetName() const {
        return name;
    }

    void SetEye(string e) {
        eyes_color = e;
    }
    string GetEye() const {
        return eyes_color;
    }

    void SetHair(string h) {
        hair_color = h;
    }
    string GetHair() const {
        return hair_color;
    }

    void SetSkill(string s) {
        skill = s;
    }
    string GetSkill() const {
        return skill;
    }

    void SetHeigh(double h) {
        if (h == 163)
        {
            heigh = h;
        }
        else
        {
            cout << "This is the wrong heigh of this person" << endl;
        }
    }
    double GetHeigh() const {
        return heigh;
    }

    void SetBeauty(double b) {
        if (b >= 100)
        {
            beauty = b;
        }
        else
        {
            cout << "My human cannot be less than 100% beautiful!!" << endl;
        }
    }
    double GetBeauty() const {
        return beauty;
    }

    void SetFoot(double f) {
        if (f >= 36 && f <= 38)
        {
            foot_size = f;
        }
        else
        {
            cout << "Wrong foot size" << endl;
        }
    }
    double GetFoot() const {
        return foot_size;
    }

    void PetLover() {
        cout << "äèâè ÿêå êîøåíÿ!\n";
    }

    void LatestNews() {
        cout << "ÿ òîá³ çàðàç òàêå ðîçïîâ³ì!\n";
    }

    void Cooking(string pasta) {
        cout << "*Àë³ñà ãîòóº ñìà÷íó ñòðàâó äëÿ ïîäðóãè*" << pasta << "\n";
    }

    void Lateness() {
        cout << "âèáà÷òå çà çàï³çíåííÿ\n";
    }

    void Hobby() {
        cout << "äàâàé ñþäè ñâîþ ëàïöþ\n";
    }
};

class Room {
private:
    string location;
    string size;
    int window_count;
    int residents_count;
    double comfort;

public:
    void SetLocation(string l) {
        location = l;
    }
    string GetLocation() const {
        return location;
    }

    void SetSize(string s) {
        size = s;
    }
    string GetSize() const {
        return size;
    }

    void SetWindow(int w) {
        if (w == 1)
        {
            window_count = w;
        }
        else
        {
            cout << "There is only one window" << endl;
        }
    }
    int GetWindow() const {
        return window_count;
    }

    void SetResidents(int r) {
        if (r >= 1 && r <= 4)
        {
            residents_count = r;
        }
        else
        {
            cout << "There is no room to breathe" << endl;
        }
    }
    int GetResidents() const {
        return residents_count;
    }

    void SetComfort(double c) {
        if (c >= 6 && c <= 10)
        {
            comfort = c;
        }
        else
        {
            cout << "You would not be able to sleep with this comfort level" << endl;
        }
    }
    double GetComfort() const {
        return comfort;
    }

    void SleepPlace() {
        cout << "íà ï³äëîç³ ëåæèòü ìàòðàö, ùîá ñïàòè\n";
    }

    void NeighborhoodNoises() {
        cout << "knock bdjsdchk!\n";
    }

    void Food(string ramyeon) {
        cout << "äåñü á³ëÿ ðàêîâèíè º ðàìüîí" << ramyeon << "\n";
    }

    void AirConditioner() {
        cout << "ôøøøøøø\n";
    }

    void Door() {
        cout << "ãðàº ï³ñíÿ, êîëè â³ä÷³íÿþòüñÿ àáî çà÷èíÿþòüñÿ äâåð³\n";
    }
};

class Phone {
private:
    string phone_model;
    string color;
    double display_diagonol;
    double memory;
    int cameras_count;

public:
    void SetModel(string m) {
        phone_model = m;
    }
    string GetModel() const {
        return phone_model;
    }

    void SetColor(string c) {
        color = c;
    }
    string GetColor() const {
        return color;
    }

    void SetDisplay(double d) {
        if (d == 5.4)
        {
            display_diagonol = d;
        }
        else
        {
            cout << "Wrong display diagonol" << endl;
        }
    }
    double GetDisplay() const {
        return display_diagonol;
    }

    void SetMemory(double m) {
        if (m >= 32 && m <= 128)
        {
            memory = m;
        }
        else
        {
            cout << "You do not have such memory on this phone" << endl;
        }
    }
    double GetMemory() const {
        return memory;
    }

    void SetCamera(int cam) {
        if (cam >= 1 && cam <= 2)
        {
            cameras_count = cam;
        }
        else
        {
            cout << "You can make pictures only with one or two cameras on this phone" << endl;
        }
    }
    int GetCamera() const {
        return cameras_count;
    }

    void CameraClick() {
        cout << "*÷³ê*\n";
    }

    void Photo() {
        cout << "çàðàç ÿê çðîáëþ ãàðíå ôîòî\n";
    }

    void Memory() {
        cout << "íà ïðèñòð¿ íåìàº â³ëüíîãî ì³ñöÿ\n";

    }
    void Calls() {
        cout << "âõ³äíèé äçâ³íîê\n";
    }

    void Music() {
        cout << "I feel the rush" << "\n" << "Addicted to your touch\n";
    }
};

class Music {
private:
    string song_name;
    string kind_of_song;
    string song_author;
    string song_language;
    int song_release;

public:
    void SetSongName(string n) {
        song_name = n;
    }
    string GetSongName() const {
        return song_name;
    }

    void SetSongKind(string k) {
        kind_of_song = k;
    }
    string GetSongKind() const {
        return kind_of_song;
    }

    void SetAuthor(string a) {
        song_author = a;
    }
    string GetAuthor() const {
        return song_author;
    }

    void SetLanguage(string l) {
        song_language = l;
    }
    string GetLanguage() const {
        return song_language;
    }

    void SetSongRelease(int s) {
        if (s == 2022)
        {
            song_release = s;
        }
        else
        {
            cout << "Song release year is incorrect" << endl;
        }
    }
    int GetSongRelease() const {
        return song_release;
    }

    void Lyrics() {
        cout << "How could I forget" << "\n" << "The day you lied to me\n";
    }

    void Melody() {
        cout << "â³äòâîðþºòüñÿ ïðèºìíà ìåëîä³ÿ\n";
    }

    void Mood() {
        cout << "ÿêà ÷óäîâà ï³ñíÿ\n";
    }

    void Vocabulary() {
        cout << "î, íîâå ñëîâî\n";
    }

    void Headphones() {
        cout << "*ïîêà÷óþ ãîëîâîþ ó ðèòì ìóçèêè*\n";
    }
};

int main()
{
    Parrot myParrot;
    myParrot.wings = 40;
    myParrot.legs_count = 2;
    myParrot.nick = "Sarah";
    myParrot.plumage_color = "red";
    myParrot.eyes_color = "yellow";

    Human myHuman;
    myHuman.heigh = 162; //cm
    myHuman.beauty = 100; //%
    myHuman.foot_size = 37; // EU size
    myHuman.name = "Alice";
    myHuman.eyes_color = "green";
    myHuman.hair_color = "light brown";
    myHuman.skill = "luck";

    Roomm myRoom;
    myRoom.window_count = 1;
    myRoom.residents_count = 2;
    myRoom.location = "Seoul";
    myRoom.size = "very small";
    myRoom.comfort = 2; // 2 out of 10

    Phone myPhone;
    myPhone.display_diagonol = 5.4; //inches
    myPhone.memory = 128;
    myPhone.cameras_count = 2;
    myPhone.phone_model = "IPhone 13 mini";
    myPhone.color = "blue";

    Music myMusic;
    myMusic.song_release = 2022; //year
    myMusic.song_name = "i hate to admit";
    myMusic.kind_of_song = "sad";
    myMusic.song_author = "Bang Chan";
    myMusic.song_language = "English and Korean";


}
