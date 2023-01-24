#include <iostream>

using namespace std;
class student{
private:
int roll;
float weight;

public:
    void setroll(int r)
    {
        roll=r;
    }
    int getroll()
    {
        return roll;
    }
    void setweight(float w){
    weight=w;
    }
    float getweight()
    {
        return weight;
    }
};

int main()
{
    student obj;
    obj.setroll(23);
    obj.setweight(34.67);
    cout <<obj.getroll() << endl;
    cout<<obj.getweight()<< endl;
    return 0;
}
