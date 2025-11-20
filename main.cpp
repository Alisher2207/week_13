#include <iostream>
using namespace std;
void setToHundred(int**  p ) {
**p = 100 ;
}

void swapRef(int&a,int&b) {
    int temp=a;
    a=b;
    b=temp;

}
void swapPtr(int*a,int*b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}


void fixNeg(int *arr,int n ) {
int* end  ==arr +n ;
    for (int* p = arr ; p < end; p++) {
        if (*p< 0 ) {

        }
    }



}






//problem1
// int main() {
// int x ;
// cin>> x ;
// int * ptr =new int ;
//
// *ptr = x ;
//
// int**pptr =&ptr;
//
// setToHundred(pptr ) ;
//     cout<<*ptr ;
// return 0;
//
// }


//problem2

//
// int main() {
//     int x, y;
//     cin>>x>>y;
//     swapPtr(&x,&y);
//     cout<<x<<" "<<y<<endl;
//     return 0;
//
// }

//problem4