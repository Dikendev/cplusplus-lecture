#include <iostream>

int main(int argc, char *argv[])
{

  enum Color
  {
    BLUE,
    BLACK,
    RED
  };

  Color paint = BLUE;
  std::cout << "Color selected is : " << paint;

  return 0;
}