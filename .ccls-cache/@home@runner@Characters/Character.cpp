Character::Character() {
  name = "-";
  direction = 1; // 1 means going right
}
Character::Character(string n, int d) {
  name = n;
  direction = d;
}