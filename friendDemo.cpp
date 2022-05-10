using namespace std;
#include<iostream>

class Hello1
{
	public:
	void gun() ;   // Case 2
    
	
};

class Hello2    // Case 3
{
	void sun();   
	void run();  
  
};


class Demo
{
	private:
	int x;
	
	public:
	Demo()
	{
		x=11;
	}
	
	friend void fun() ;
	friend void Hello1::gun();
	friend class Hello2;
};

void fun()    // Case 1
{
	Demo obj;
	cout<<obj.x<<"\n";
}

void Hello1::gun()    // Case 2
    {
	   Demo obj;
	   cout<<obj.x<<"\n";
    }

void Hello2::sun()    
    {
	   Demo obj;
	   cout<<obj.x<<"\n";
    }
	
void Hello2:: run()    
   {
	   Demo obj();
	   cout<<obj.x<<"\n";
    }


int main()
{
	fun();
	
	Hello1 hobj();
	hobj.gun();
	
	Hello2 hobj2();
	hobj2.sun();
	hobj2.run();
	
	return 0;
}

/*

InputStream