

#include "define.h"
#include "Singleton.hpp"

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

typedef Singleton<Logger> LoggerSingleton;

int main() {

	LoggerSingleton::GetSingleton().init(1, "hong");

	int n1 = LoggerSingleton::GetSingleton().getNumber();
	char *name1 = LoggerSingleton::GetSingleton().getName();

	cout << "number = " << n1 << endl;
	cout << "Name = " << name1 << endl;

	return 0;
}