#include <iostream>
#include <thread>

int main(int argc, char **argv)
{
    std::cout << 1 << std::endl;
    for (;;)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}