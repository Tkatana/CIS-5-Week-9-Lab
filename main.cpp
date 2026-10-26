#include <iostream>
#include <string>

using std::cout;

// Lab 9 — Tyler Quintana
// CIS 5 Week 09 · Call and return
// Homework continues this program. Do not start a second file.

// TODO: double average(const int a[], int n); done
// TODO: void printSummary(double avg); done
double average(const int a[], int n){
  int sum = 0;
  for(int i = 0; i < n; ++ i) sum += a[i];
  return sum * 1.0 / n;
  
  }

void printsummary (double avg) {
cout << "Grade average is: " << avg << "\n";
}




int main() {
  const int N = 4;
  int scores[N] = {62, 98, 92, 76};
  double avg = average(scores, N);
  printsummary(avg);
  // TODO: double avg = average(scores, N); done
  // TODO: printSummary(avg);
  return 0;
}
