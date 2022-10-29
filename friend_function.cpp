#include <iostream>
using namespace std;
//friend function code
class student{
    private:
    int x=2;
    int y=4;
    
    friend int mul(student k);
    //benefit is it can access private data members 
};
int mul(student k){
        return k.x*k.y;

    
}
int main() {
	// your code goes here
    student obj;
    cout<<mul(obj);
	return 0;
}
