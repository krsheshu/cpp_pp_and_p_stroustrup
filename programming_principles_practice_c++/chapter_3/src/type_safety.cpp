//Copyright: Free
//Author: krsheshu

 #include <iostream>

int main() {
  double d = 0;
  while (std::cin >> d) {
    // repeat the statements below
    // as long as we type in numbers
    int i = d;
    char y{100};
    // try to squeeze a double into an int
    char c = i;
    // try to squeeze an int into a char
    int i2 = c;
    // get the integer value of the character
    std::cout << "d=="
              << d
              // the original double
              << " i=="
              << i
              // converted to int
              << " i2==" << i2 << " y=="
              << y
              // int value of char
              << " char(" << c << ")\n";  // the char
  }
}
