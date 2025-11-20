#include <iostream>
using namespace std;


//problem 1

void setToHundred(int** p){
**p = 100;
}
int main(){
int x;
cin >> x;
int* p = &x;
setToHundred(&p);
cout << x;
return 0;
}

//problem 2
//
// void swapRef(int& a, int& b){
// int temp = a;
// a = b;
// b = temp;
// }
// int main(){
// int a, b;
// cin >> a >> b;
// swapRef(a,b);
// cout << a << ’ ’ << b;
// return 0;
// }
//
// //problem 3
//
// int countValid(int* arr[], int size){
// int count = 0;
// int **p = arr;
// for(int i = 0; i < size; ++i){
// if(*p != nullptr) ++count;
// ++p;
// }
// return count;
// }
// int main(){
// int size;
// cin >> size;
//
// int *arr[size];
// for(int i=0;i<size;i++){
// int v; cin >> v;
// if(v == -1) arr[i] = nullptr;
// else {
// arr[i] = new int(v);
// }
// }
// cout << countValid(arr,size);
// // cleanup
// for(int i=0;i<size;i++) if(arr[i]) delete arr[i];
// return 0;
// }
//
// //problem 4
//
// void fixNeg(int* arr, int size){
// int* p = arr;
// for(int i=0;i<size;i++){
// if(*p < 0) *p = 0;
// p++;
// }
// }
// int main(){
// int n; cin >> n;
// int a[n];
// for(int i=0;i<n;i++) cin >> a[i];
// fixNeg(a,n);
// for(int i=0;i<n;i++) cout << a[i] << (i+1==n? "":" ");
// return 0;
// }
//
// //problem 5
//
// int sum2D(int** m, int r, int c){
// int sum = 0;
// for(int i=0;i<r;i++){
// int* row = *(m + i);
// for(int j=0;j<c;j++){
// sum += *(row + j);
// }
// }
// return sum;
// }
// int main(){
// int r,c;
// cin >> r >> c;
// int** mat = new int*[r];
// for(int i=0;i<r;i++){
// mat[i] = new int[c];
// for(int j=0;j<c;j++) cin >> mat[i][j];
// }
// cout << sum2D(mat, r, c);
// for(int i=0;i<r;i++) delete [] mat[i];
// delete [] mat;
// return 0; }
//
// //problem 6
//
// void printIfValid(int* p){
// if(p == nullptr) cout << "null";
// else cout << *p;
// }
// int main(){
// string s; cin >> s;
// if(s == "n") {
// printIfValid(nullptr);
// } else {
// int val = stoi(s);
// printIfValid(&val);
// }
// return 0;
// }
//
// //problem 7
//
// int* findMax(int* arr, int size){
// int* p = arr;
// int* maxp = arr;
// for(int i=1;i<size;i++){
// p++;
// if(*p > *maxp) maxp = p;
// }
// return maxp;
// }
// int main(){
// int n; cin >> n;
// int a[n];
// for(int i=0;i<n;i++) cin >> a[i];
// int* mp = findMax(a,n);
// cout << *mp;
// return 0;
// }
//
// //problem 8
//
// void reverseArr(int** arr, int size){
// int* base = *arr;
// int *left = base;
// int *right = base + size - 1;
// while(left < right){
// int tmp = *left;
// *left = *right;
// *right = tmp;
// left++; right--;
// }
// }
// int main(){
// int n; cin >> n;
// int a[n];
// for(int i=0;i<n;i++) cin >> a[i];
// int* p = a;
// reverseArr(&p, n);
// for(int i=0;i<n;i++) cout << a[i] << (i+1==n? "":" ");
// return 0;
// }
//
// //problem 9
//
// void avg(const double* arr, int size, double* result){
// double s = 0;
// const double* p = arr;
// for(int i=0;i<size;i++){
// s += *p;
// p++;
// }
// *result = s / size;
// }
// int main(){
// int n; cin >> n;
// double a[n];
// for(int i=0;i<n;i++) cin >> a[i];
// double res;
// avg(a, n, &res);
// cout << res;
// return 0;
// }
//
// //problem 10
//
// void mergeSorted(const int* a, int n, const int* b, int m, int* out){
// const int* pa = a;
// const int* pb = b;
// int* po = out;
// int i=0,j=0;
// while(i<n && j<m){
// if(*pa <= *pb){
// *po = *pa; pa++; i++;
// } else {
// *po = *pb; pb++; j++;
// }
// po++;
// }
// while(i<n){ *po = *pa; pa++; po++; i++; }
// while(j<m){ *po = *pb; pb++; po++; j++; }
// }
// int main(){
// int n; cin >> n;
// int a[n]; for(int i=0;i<n;i++) cin >> a[i];
// int m; cin >> m;
// int b[m]; for(int i=0;i<m;i++) cin >> b[i];
// int out[n+m];
// mergeSorted(a,n,b,m,out);
// for(int i=0;i<n+m;i++) cout << out[i] << (i+1==n+m? "":" ");
// return 0;
// }
//
// //problem 11
//
// int removeValue(int* arr, int size, int val){
// int* write = arr;
// int* read = arr;
// for(int i=0;i<size;i++){
// if(*read != val){
// *write = *read;
// write++;
// }
// read++;
// }
// return (int)(write - arr);
// }
// int main(){
// int n; cin >> n;
// int a[n];
// for(int i=0;i<n;i++) cin >> a[i];
// int val; cin >> val;
// int newSize = removeValue(a, n, val);
// for(int i=0;i<newSize;i++) cout << a[i] << (i+1==newSize? "":" ");
// return 0;
// }
//
// //problem 12
//
// bool identical(const int* a, int** bptr, int size){
// const int* p = a;
// int* qb = *bptr;
// for(int i=0;i<size;i++){
// if(*p != *(qb + i)) return false;
// p++;
// }
// return true;
// }
// int main(){
// int n; cin >> n;
// int a[n];
// for(int i=0;i<n;i++) cin >> a[i];
// int b[n];
// for(int i=0;i<n;i++) cin >> b[i];
// int* pb = b;
// cout << identical(a, &pb, n);