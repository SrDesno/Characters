#import <iostream>

class Character {
protected:
  std::string name;
  int direction; // 1 means going right, 2 means going left
public:
  Character();
  Character(std::string n, int d);
  void setName(std::string n) { name = n; }
  std::string getName() { return name; }
  void setDirection(int d) { direction = d; }
  int getDirection() { return direction; }
  virtual void print() = 0; // Note that this is a virtual method.
  // THEREFORE this is an abstract class.

};