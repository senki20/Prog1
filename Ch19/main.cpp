#include "std_lib_facilities.h"

template<typename T>
struct S{
    private:
    T val;
    public:
    S(T d) : val(d){}
    S& operator=(const T&);

    T& get();
    const T& get() const;
    
   

    
    

    
   

};

template<typename T>
T& S<T>::get() 
{
    return val;
}

template<typename T>
const T& S<T>::get() const
{
    return val;
}

template<typename T>
S<T>& S<T>::operator=(const T& s)
{
	val=s;
	return *this;
}

template<class T> istream& operator>>(istream& is, S<T>& ss)
{
	T v;
	cin >> v;
	if (!is) return is;
	ss = v;
	return is;
}


template<typename T> 
void read_val(T& v)
{
	cin >> v;	
    
}


int main()
{
   S<int> num=17;
   S<char> betu='a';
   S<double> doub=1.445;
   S<string> szoveg{"hello"};
   S<vector<int>> vecto=vector<int>{1,2,3};
   num=15;


   cout << num.get()<<'\n';
   cout << betu.get()<<'\n';
   cout << doub.get()<<'\n';
   cout << szoveg.get()<<'\n';

   for (int i=0;i<vecto.get().size();i++)
   {
      cout << vecto.get()[i]<<'\n';

   }

   cout<<num.get()<<'\n';

cout << "num: ";
   read_val(num);
   cout << "betu: ";
   read_val(betu);
   cout << "doub: ";
   read_val(doub);
   cout << "szoveg: ";
   read_val(szoveg);

   cout << num.get()<<'\n';
   cout << betu.get()<<'\n';
   cout << doub.get()<<'\n';
   cout << szoveg.get()<<'\n';

   

   
   

   return 0;
}