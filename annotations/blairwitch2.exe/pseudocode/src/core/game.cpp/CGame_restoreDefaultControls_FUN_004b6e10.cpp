// Name: core_game.cpp_CGame_restoreDefaultControls_FUN_004b6e10
// Address: 004b6e10
// Address Range: [[004b6e10, 004b7036]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_restoreDefaultControls_FUN_004b6e10(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_restoreDefaultControls_FUN_004b6e10(CGame *this_ptr)

{
  this_ptr->key_walk = 0x1f;
  *(uint *)&this_ptr->field_0x30 = 0x2a;
  *(uint *)&this_ptr->field_0x34 = 0x38;
  *(uint *)&this_ptr->field_0x38 = 0x1e;
  *(uint *)&this_ptr->field_0x3c = 0x20;
  *(uint *)&this_ptr->field_0x40 = 0x14d;
  *(uint *)&this_ptr->field_0x44 = 0x14b;
  *(uint *)&this_ptr->field_0x48 = 0x1d;
  *(uint *)&this_ptr->field_0x4c = 0x1c;
  *(uint *)&this_ptr->field_0x50 = 0x10;
  *(uint *)&this_ptr->field_0x54 = 0xffffffff;
  *(uint *)&this_ptr->field_0x58 = 0xffffffff;
  *(uint *)&this_ptr->field_0x5c = 0xffffffff;
  *(uint *)&this_ptr->field_0x60 = 0xffffffff;
  *(uint *)&this_ptr->field_0x64 = 0xffffffff;
  *(uint *)&this_ptr->field_0x68 = 0x21;
  *(uint *)&this_ptr->field_0x6c = 0xffffffff;
  *(uint *)&this_ptr->field_0x70 = 0xffffffff;
  *(uint *)&this_ptr->field_0x74 = 0x148;
  *(uint *)&this_ptr->field_0x78 = 0x150;
  *(uint *)&this_ptr->field_0x7c = 2;
  *(uint *)&this_ptr->field_0x80 = 3;
  *(uint *)&this_ptr->field_0x84 = 4;
  *(uint *)&this_ptr->field_0x88 = 0xffffffff;
  *(uint *)&this_ptr->field_0x8c = 0xffffffff;
  *(uint *)&this_ptr->field_0x94 = 0xc;
  *(uint *)&this_ptr->field_0x90 = 0xd;
  *(uint *)&this_ptr->field_0x98 = 0x1a;
  *(uint *)&this_ptr->field_0x9c = 0x1b;
  *(uint *)&this_ptr->field_0xa0 = 0x19;
  *(uint *)&this_ptr->field_0xa4 = 0x29;
  *(uint *)&this_ptr->field_0xaf0 = 0x12;
  this_ptr->invert_mouse_y_axis = 0;
  this_ptr->always_run = 0;
  this_ptr->x_mouse_sensitivity = 0x10000;
  this_ptr->y_mouse_sensitivity = 0x10000;
  *(uint *)&this_ptr->field_0xd8 = 0;
  this_ptr->shadow_flag = 0x11;
  if (*(int *)&this_ptr->field_0xd0 == 1) {
    *(uint *)&this_ptr->field_0x34 = 0x38;
    *(uint *)&this_ptr->field_0x38 = 0x1e;
    *(uint *)&this_ptr->field_0x3c = 0x20;
    *(uint *)&this_ptr->field_0x44 = 0x255;
    *(uint *)&this_ptr->field_0x40 = 0x255;
    *(uint *)&this_ptr->field_0x48 = 0x200;
    *(uint *)&this_ptr->field_0x4c = 0x1c;
    *(uint *)&this_ptr->field_0x50 = 0x138;
    *(uint *)&this_ptr->field_0x68 = 0x201;
    *(uint *)&this_ptr->field_0x74 = 0x256;
    *(uint *)&this_ptr->field_0x78 = 0x256;
    *(uint *)&this_ptr->field_0x7c = 2;
    *(uint *)&this_ptr->field_0x80 = 3;
    *(uint *)&this_ptr->field_0x84 = 4;
    *(uint *)&this_ptr->field_0x88 = 0xffffffff;
    *(uint *)&this_ptr->field_0x8c = 0xffffffff;
    *(uint *)&this_ptr->field_0xaf0 = 0x12;
    *(uint *)&this_ptr->field_0x30 = 0x2a;
    *(uint *)&this_ptr->field_0x50 = 0x10;
    if (*(int *)&this_ptr->field_0xd0 != 2) {
      return;
    }
  }
  else if (*(int *)&this_ptr->field_0xd0 != 2) {
    return;
  }
  *(uint *)&this_ptr->field_0x68 = 0x203;
  *(uint *)&this_ptr->field_0x4c = 0x204;
  *(uint *)&this_ptr->field_0x44 = 0x251;
  *(uint *)&this_ptr->field_0x40 = 0x252;
  this_ptr->shadow_flag = 0x253;
  this_ptr->key_walk = 0x254;
  *(uint *)&this_ptr->field_0x48 = 0x202;
  return;
}
