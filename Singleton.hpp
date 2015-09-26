
#ifndef _SINGLETON_HPP_
#define _SINGLETON_HPP_

#include "define.h"
#include <assert.h>

template <class T>
class Singleton	
{	
public:
	static T* GetSingletonPtr() {		
		if(!m_pInstance) m_pInstance = new T;		
		assert(m_pInstance != NULL);		
		return m_pInstance;		
	}	

	static T& GetSingleton() {

		if(!m_pInstance) m_pInstance = new T;		
		
		assert(m_pInstance != NULL);		
		return (*m_pInstance);
	}

protected:
		Singleton();	
		~Singleton();
	
private:	
		Singleton(Singleton const&);
		Singleton& operator=(Singleton const&);	
		static T* m_pInstance;
	
};
template <class T> T* Singleton<T>::m_pInstance=NULL;

#endif