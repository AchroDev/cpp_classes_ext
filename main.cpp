#include <iostream>

class Log()
{
public:
    void SetLevel(int level)
    {

    }

    void Warn(const char* message)
    {

    }

};

int main(){
    Log log; // Initiating the log
    log.SetLevel(LogLevelWarning); // Setting a warning level for the log messages
    log.Warn("AHHH!"); // Example/Test warning message
    std::cin.get();
}