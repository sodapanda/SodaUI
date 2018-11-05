#include <chrono>
#include <stdio.h>
using namespace std;
using namespace std::chrono;
#include <functional>

class Utils
{
  public:
    void execWithTimePrint(const std::function<void()> &func)
    {
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        func();
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(t2 - t1).count();
        printf("exec time is %d\n", duration);
    }
};
