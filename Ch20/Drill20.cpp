#include <iostream>
#include <vector>
#include <list>
#include <array>




using namespace std;

template <typename Iter1,typename Iter2>
void PrintArray(Iter1 array_begin,Iter2 array_end,string type)
{
    cout << type <<": ";
   for (auto i = array_begin; i!=array_end; ++i)
   {
       cout << *i<<" ";
   }
   cout <<endl;
}

template<typename Iter1,typename Iter2>
Iter2 Ccopy(Iter1 f1,Iter1 e1,Iter2 f2)
{
    for (Iter1 i=f1; i!=e1; ++i)
    {
        *f2++=*i;
    }
    return f2;
}



template<typename T>
void increase(T& arr,int amount)
{
    for (auto& i:arr)
    {
        i+=amount;
    }
    
}




int main()
{
    array<int,10> arr = {0,1,2,3,4,5,6,7,8,9};
    vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
    list<int> li = {0,1,2,3,4,5,6,7,8,9};

    array<int,10> arr1 = arr;
    vector<int> vec1 = vec;
    list<int> li1 = li;
    
    PrintArray(arr.begin(),arr.end(),"array");
    PrintArray(vec.begin(),vec.end(),"vector");
    PrintArray(li.begin(),li.end(),"list");
    cout<<endl;
  
    increase(arr,2);
    increase(vec,3);
    increase(li,5);

    PrintArray(arr.begin(),arr.end(),"array");
    PrintArray(vec.begin(),vec.end(),"vector");
    PrintArray(li.begin(),li.end(),"list");

    Ccopy(arr.begin(),arr.end(),vec.begin());
   // Ccopy(li.begin(),li.end(),arr.begin());

    vector<int>::iterator ivec= find(vec.begin(),vec.end(),3);
    if (ivec!=vec.end())
    {
        cout<<"A 3-as a "<<distance(vec.begin(),ivec)<<" helyen van\n";
        
        
    }

    list<int>::iterator listi = find(li.begin(),li.end(),27);
    if (listi!=li.end())
    {
        cout<<"A 27 a "<<distance(li.begin(),listi)<<" helyen van";
    }
    
    
   
   

    
}