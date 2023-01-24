#include <iostream>

using namespace std;

class university{
public:
int refernce(){
cout<<"kill";
}
};

class college: public university{
};

class stream: public college{
};

int main()
{
    stream myObj;
    myObj.refernce();

}
