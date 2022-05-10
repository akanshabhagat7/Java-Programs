import java.lang.*;

class Demo
{
	public int i,j;
	
	public Demo()
	{}
	public void fun()
	{
		System.out.println("Demo fun");
	}
}

class Hello // extends Demo
{
	public int i,j;
	public Demo Dref;
	public Hello()
	{
		i=0;
		j=0;
		Dref= new Demo(); // Composition
	}
}

class Composition
{
	public static void main(String arg[])
	{
		Hello hobj = new Hello();
		hobj.Dref.fun();
		
	}
}