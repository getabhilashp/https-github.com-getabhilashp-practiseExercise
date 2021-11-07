#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

class A
{
 int a = 3;
};
 class B :A
{
  public:
  int b =4;
  B(int b)
  {
    this->b = b;
  }
  
};
 struct C :A
{

};
int main() {

   int ar[5] = {1,8,3,4,5};
   std::vector<int> vt( ar, ar + 5);

    std::sort( ar ,ar+5);
    std::sort( vt.begin() ,vt.end());

    B obj(3) ;
    B *obj2 = new B(1);

    std::cout << "here"<<obj.b << " \n"  ;
        std::cout << "here"<<obj2->b << "\n"  ;

        obj.b = 6;
            std::cout << "here"<<obj.b << " \n"  ;
        std::cout << "here"<<obj2->b << "\n"  ;
        obj2->b = 9;
            std::cout << "here"<<obj.b << " \n"  ;
        std::cout << "here"<<obj2->b << "\n"  ;

   // delete obj;
    delete obj2;
     std::cout << "here"<<obj.b << " \n"  ;
        std::cout << "here"<<obj2->b << "\n"  ;
    //std::cout <<   ;



    std::cout << "Hello, world!"  ;

    if( std::binary_search(ar, ar+5, 9) == true)
    {
          std::cout << "Achieved!\n" << std::endl ;

    }

    for(int i = 0 ; i <= 4; i++)
    {
      std::cout << ar[i]  ;

    }
    for(int i = 0 ; i <= 4; i++)
    {
      std::cout << vt[i]  ;

    }
   std::cout<<"max" <<*max_element(vt.begin(), vt.end());
    for(int i = 0 ; i <= 4; i++)
    {
      std::cout << vt[i] << std::endl ;

    }
    std::cout<<"max" <<accumulate(vt.begin(), vt.end(), 0);
   for(int i = 0 ; i <= 4; i++)
    {
      std::cout << vt[i] << std::endl ;

    }
    auto q = lower_bound(vt.begin(), vt.end(),4);
   std::cout<<"count" <<    count(vt.begin(), vt.end(),4);
   std::cout<<"" << q-vt.begin();
   std::cout<<"max" <<*max_element(vt.begin(), vt.end());
   std::cout<<"max" <<*max_element(vt.begin(), vt.end());
    return 0;
}
