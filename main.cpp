#include <iostream>
#include <string>
#include "lib.h"

int main(int argc, char *argv[])
{
  std::cout << "Hello, World!" << std::endl;
  std::cout << "Version " << fullVersion() << std::endl;
  return 0;
}
