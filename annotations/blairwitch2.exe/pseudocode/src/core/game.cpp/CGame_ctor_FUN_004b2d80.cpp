// Name: core_game.cpp_CGame_ctor_FUN_004b2d80
// Address: 004b2d80
// Address Range: [[004b2d80, 004b2fef]]
// Convention: __cdecl
// Signature: CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004b2d80(CGame *this_ptr)

#include "nocturne.h"

CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004b2d80(CGame *this_ptr)

{
  *(uint *)&this_ptr->field_0xb1c = 0x5f7574;
  *(uint *)this_ptr = 0x280;
  *(uint *)&this_ptr->field_0x4 = 0x1e0;
  *(uint *)&this_ptr->field_0x8 = 0x20;
  *(uint *)&this_ptr->field_0x240 = 0x10000;
  *(uint *)&this_ptr->field_0xc = 0;
  *(uint *)&this_ptr->field_0x10 = 1;
  *(uint *)&this_ptr->field_0x14 = 1;
  *(uint *)&this_ptr->field_0x18 = 1;
  *(uint *)&this_ptr->field_0x1c = 1;
  *(uint *)&this_ptr->field_0x24 = 1;
  *(uint *)&this_ptr->field_0x20 = 0;
  *(uint *)&this_ptr->field_0xd0 = 1;
  core_game_cpp_FUN_004b6e10(this_ptr);
  this_ptr->field_0xec = 0;
  *(uint *)&this_ptr->field_0x1ec = 0;
  *(uint *)&this_ptr->field_0x1f0 = 0;
  *(uint *)&this_ptr->field_0x1f4 = 0;
  *(uint *)&this_ptr->field_0x1f8 = 0;
  *(uint *)&this_ptr->field_0x1fc = 0;
  *(uint *)&this_ptr->field_0x208 = 0x3f800000;
  *(uint *)&this_ptr->field_0x20c = 0;
  *(uint *)&this_ptr->field_0x210 = 0;
  *(uint *)&this_ptr->field_0x214 = 0;
  *(uint *)&this_ptr->field_0x21c = 0;
  *(uint *)&this_ptr->field_0x220 = 0;
  *(uint *)&this_ptr->field_0x224 = 0;
  *(uint *)&this_ptr->field_0x228 = 0;
  *(uint *)&this_ptr->field_0x22c = 0;
  *(uint *)&this_ptr->field_0x230 = 0;
  *(uint *)&this_ptr->field_0x234 = 0;
  *(uint *)&this_ptr->field_0x238 = 0;
  *(uint *)&this_ptr->field_0xd4 = 9;
  *(uint *)&this_ptr->field_0xdc = 0;
  *(uint *)&this_ptr->field_0x9e0 = 0;
  *(uint *)&this_ptr->field_0x9e4 = 0x3f800000;
  *(uint *)&this_ptr->field_0x240 = 0x10000;
  *(uint *)&this_ptr->field_0x244 = 0;
  *(uint *)&this_ptr->field_0xe0 = 0;
  *(uint *)&this_ptr->field_0x248 = 1;
  *(uint *)&this_ptr->field_0x24c = 1;
  *(uint *)&this_ptr->field_0x250 = 0;
  *(uint *)&this_ptr->field_0x254 = 0;
  this_ptr->field_0x8d8 = 0;
  *(uint *)&this_ptr->field_0x9d8 = 0;
  *(uint *)&this_ptr->field_0x9dc = 0;
  *(uint *)&this_ptr->field_0x258 = 0;
  *(uint *)&this_ptr->field_0x9e8 = 0;
  *(uint *)&this_ptr->field_0xaec = 0;
  *(uint *)&this_ptr->field_0x25c = 0;
  *(uint *)&this_ptr->field_0x260 = 0;
  *(uint *)&this_ptr->field_0x264 = 0;
  *(uint *)&this_ptr->field_0x23c = 0;
  *(uint *)&this_ptr->field_0x268 = 0;
  *(uint *)&this_ptr->field_0x270 = 0;
  *(uint *)&this_ptr->field_0x26c = 0;
  *(uint *)&this_ptr->field_0x274 = 0;
  *(uint *)&this_ptr->field_0x278 = 0;
  *(uint *)&this_ptr->field_0xe4 = 0;
  *(uint *)&this_ptr->field_0xe8 = 0;
  DAT_01cb7b50 = 0;
  this_ptr->field_0x9ec = 0;
  core_game_cpp_FUN_004bb500(this_ptr,0,0x3f800000,0x40a00000,0,0,0,0);
  *(uint *)&this_ptr->field_0xb14 = 0;
  return this_ptr;
}
