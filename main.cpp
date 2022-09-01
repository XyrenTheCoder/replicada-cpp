#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

static const char alphanum[] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
int len = sizeof(alphanum) - 1;
char genRandom() {
    return alphanum[rand() % len];
}

int main() {
    
    string name;
    string cwd = filesystem::current_path();
    
    int count = 0;
    
    //while (count < 200)
    while (true) {
        srand(time(0));
        for(int z = 0; z < 20; z++) {
            name = genRandom();
        }
        
    }
}
