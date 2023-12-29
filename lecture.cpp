#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{

  std::vector<int> vec;
  vec.push_back(34);
  vec.push_back(12);

  std::cout << vec[0] << "\n";
  std::cout << vec[1] << "\n";

  return 0;
}