// Name: core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
// Address: 004dbbc0
// Address Range: [[004dbbc0, 004dbd77]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(CGame *this_ptr)

{
  this_ptr->key_backup = 0x150;
  this_ptr->key_run = 0x2a;
  this_ptr->key_strafe = 0x38;
  this_ptr->key_strafe_left = 0x2c;
  this_ptr->key_strafe_right = 0x2d;
  this_ptr->key_right = 0x14d;
  this_ptr->key_left = 0x14b;
  this_ptr->key_fire = 0x39;
  this_ptr->key_use_item = 0x1c;
  this_ptr->key_light = 0x21;
  this_ptr->key_infrared = 0x17;
  this_ptr->key_draw = 0x20;
  this_ptr->key_jump = 0x22;
  this_ptr->key_point_up = 0x10;
  this_ptr->key_point_down = 0x1e;
  this_ptr->key_weapon_1 = 2;
  this_ptr->key_weapon_2 = 3;
  this_ptr->key_weapon_3 = 4;
  this_ptr->key_weapon_4 = 5;
  this_ptr->key_weapon_5 = 6;
  this_ptr->key_prev_weapon = 0xc;
  this_ptr->key_next_weapon = 0xd;
  this_ptr->key_next_item = 0x1a;
  this_ptr->key_prev_item = 0x1b;
  this_ptr->key_item_desc = 0x35;
  this_ptr->key_next_ammo = 0x29;
  this_ptr->invert_mouse_y_axis = 0;
  this_ptr->always_run = 0;
  this_ptr->x_mouse_sensitivity = 0x10000;
  this_ptr->y_mouse_sensitivity = 0x10000;
  this_ptr->aim_mode = AIM_MODE_AUTO;
  this_ptr->key_walk = 0x148;
  if (this_ptr->game_control == CONTROL_MODE_MOUSE) {
    this_ptr->key_backup = 0x1f;
    this_ptr->key_strafe_left = 0x1e;
    this_ptr->key_strafe_right = 0x20;
    this_ptr->key_run = 0x3a;
    this_ptr->key_fire = 0x200;
    this_ptr->key_point_up = 0x256;
    this_ptr->key_point_down = 0x256;
    this_ptr->key_left = 0x255;
    this_ptr->key_right = 0x255;
    this_ptr->key_draw = 0x12;
    this_ptr->key_jump = 0x22;
    this_ptr->key_light = 0x10;
    this_ptr->aim_mode = AIM_MODE_MANUAL;
    this_ptr->key_walk = 0x11;
    if (this_ptr->game_control != CONTROL_MODE_GAMEPAD) {
      return;
    }
  }
  else if (this_ptr->game_control != CONTROL_MODE_GAMEPAD) {
    return;
  }
  this_ptr->key_draw = 0x203;
  this_ptr->key_use_item = 0x204;
  this_ptr->key_left = 0x251;
  this_ptr->key_right = 0x252;
  this_ptr->key_walk = 0x253;
  this_ptr->key_backup = 0x254;
  this_ptr->key_fire = 0x202;
  return;
}
