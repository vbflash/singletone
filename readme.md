### Description for Singletone Template

## abstract
I want to using singletone template on my project.
but, some singletone template don't work on my project and it is don't reasonable another platform.


## Description for C/C++ on embedded

01. singletone using for your project
- import singletone.hpp

02. on my class using inheritance of singletone template

class Logger{

public:
    Logger(){};  // Private so that it can  not be called   
    Logger(Logger const&){};             // copy constructor is private 
    Logger& operator=(Logger const&){};  // assignment operator is private  
    static Logger* m_pInstance;


private:
    int m_number;
    char m_name[20];
public:
    void init( int number, char *name);

    int getNumber() { return m_number; }
    char* getName() { return m_name; }

};


void Logger::init( int number, char *name )
{
    m_number = number;
    strcpy( m_name, name );
}
<font color=red>
typedef Singleton<Logger> LoggerSingleton; 
</font>
