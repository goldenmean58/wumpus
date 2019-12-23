#ifndef MY_PLAYER_H
#define MY_PLAYER_H
#include "Object.h"
enum class Direction : int { Up = 0, Down = 1, Left = 2, Right = 3 };
constexpr int DEFAULT_ARROW_COUNT = 1;
class Player : public Object {
private:
  // Direction _direction;
  int _dx; // directions
  int _dy;
  int _arrow_count;
  int _action_count;
  bool _is_grab_gold;
  int _state;

public:
  void init();
  Player();
  Player(int arrow_count);
  Direction get_direction(int *_dx, int *_dy);
  int get_arrow_count();
  int get_action_count();
  bool is_grab_gold();
  int get_state();
  int move();
  int shoot();
  int grab();
  void turn_left();
  void turn_right();
  void set_direction(Direction);
  void grab_gold();
  void add_action_count();
  // Smell smell();
};

#endif
