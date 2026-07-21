// Name: core_game.cpp_CGame_drawScreenBorder_FUN_0049a960
// Address: 0049a960
// Address Range: [[0049a960, 0049aa2f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_0049a960(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_0049a960(void)

{
  _DAT_01c00c70 = 0;
  engine_2d_c_drawLine_FUN_004015a0(0,0,DAT_005b761c + -1,0);
  engine_2d_c_drawLine_FUN_004015a0(1,1,DAT_005b761c + -2,1);
  engine_2d_c_drawLine_FUN_004015a0(0,DAT_005b7620 + -1,DAT_005b761c + -1,DAT_005b7620 + -1);
  engine_2d_c_drawLine_FUN_004015a0(1,DAT_005b7620 + -2,DAT_005b761c + -2,DAT_005b7620 + -2);
  engine_2d_c_drawLine_FUN_004015a0(0,1,0,DAT_005b7620 + -2);
  engine_2d_c_drawLine_FUN_004015a0(1,2,1,DAT_005b7620 + -3);
  engine_2d_c_drawLine_FUN_004015a0(DAT_005b761c + -1,1,DAT_005b761c + -1,DAT_005b7620 + -2);
  engine_2d_c_drawLine_FUN_004015a0(DAT_005b761c + -2,2,DAT_005b761c + -2,DAT_005b7620 + -3);
  return;
}
