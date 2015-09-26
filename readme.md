# Description for Singletone Template

### abstract
I want to using singletone template on my project.
but, some singletone template don't work on my project and it is don't reasonable another platform.


### Description for C/C++ on embedded

01. singletone using for your project
- import singletone.hpp

02. on my class using inheritance of singletone template
- same as inhertance but don't using it.
- just using below.

#### Importance
need to below in class header file.

    typedef Singleton<Logger> LoggerSingleton; 

#### Implement of singletone in main code

##### call to function1 
    LoggerSingleton::GetSingleton().init(1, "hong");

##### call to function2
    int n1 = LoggerSingleton::GetSingleton().getNumber();
    char *name1 = LoggerSingleton::GetSingleton().getName();

