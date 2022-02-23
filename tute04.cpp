#include <iostream>

long factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n :";
  std::cin >> n;
  std::cout << "Enter a value for r :";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long nCr(int n, int r){
  
   return factorial(n) / (factorial(r) * factorial(n - r));

   
}
long factorial(int no) {
    int factorial = 1;
    for (int i = 2; i <= no; i++)
        factorial = factorial * i;
    return factorial;
}