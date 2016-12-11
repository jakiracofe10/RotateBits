#include <iostream>

using namespace std;

uint64_t rotateBitsRight(uint64_t n, uint64_t num) {
    if (n==0) {
        return 0;
    }
    return (n >> num)|(n << (64 - num));

}

int main() {
    //uint64_t n = 227;
    uint64_t n = 16;
    uint64_t numBits = 2;
    uint64_t result = rotateBitsRight(n, numBits);
    cout << result;


    return 0;
}