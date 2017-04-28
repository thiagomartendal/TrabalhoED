#ifndef CARRO_H
#define CARRO_H

#include <cstdlib>  // rand

namespace carro {

class Carro {
 private:
    int size_;
    int s1, s2;
    int time_entry;
 public:
    Carro() {
        time_entry = 0;
        size_ = 3+(rand()%5);
        s1 = rand()%3;
        S2 = rand()%3;
    }

    ~Carro() = default;
};

}

#endif
