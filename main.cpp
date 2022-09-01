#include <iostream>

using namespace std;

static const char alphanum[] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
int len = sizeof(alphanum) - 1;
char genRandom() {
   return alphanum[rand() % len];
}

int main() {
    
    
    string cwd = filesystem::current_path();
    
    int count = 0;
    
    //while (count < 200)
    while (true) {
        
    }
}
