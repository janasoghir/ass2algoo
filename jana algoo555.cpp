#include < 1ostream> 
#include ‹chrono>
using namespace std;
long long recursive(int n) {
if (n == 0)
return 1;
else
return n * recursive(n - 1);}
int main(){
// Measure the execution time
auto start = chrono: :high_resolution_clock: :now();
recursive(10000000);
auto end = chrono: : high_resolution_clock::now();
auto duration = chrono: :duration_cast‹chrono::nanoseconds>(end - start); 
cout « "Execution time: " « duration.count() « " nanoseconds" «< endl;
return 0;}
//======================================================================================================//
#include ‹iostream>
#include < chrono>
using namespace std;
 long long iterative(int n) {

long long fact = 1;

for (int j = 1; j <= n; ++j) 
fact *= j;
return fact;}
int main(){
// Measure the execution time
auto start = chrono: :high_resolution_clock: :now);
iterative (10000000);
auto end = chrono: high_resolution_clock: :now();
auto duration = chrono: :duration cast<chrono:: nanoseconds> (end - start);
cout « "Execution time: " « duration.count() «< " nanoseconds" << endl;
return 0;
}