// Name: core_game.cpp_CGame_drawScreenBorder_FUN_004b30d0
// Address: 004b30d0
// Address Range: [[004b30d0, 004b319f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_004b30d0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_004b30d0(CGame *this_ptr)

{
  g_INT_01c35e60 = 0;
  engine_2d_c_drawLine_FUN_004011a0(0,0,g_INT_006141b8 + -1,0);
  engine_2d_c_drawLine_FUN_004011a0(1,1,g_INT_006141b8 + -2,1);
  engine_2d_c_drawLine_FUN_004011a0(0,g_INT_006141bc + -1,g_INT_006141b8 + -1,g_INT_006141bc + -1);
  engine_2d_c_drawLine_FUN_004011a0(1,g_INT_006141bc + -2,g_INT_006141b8 + -2,g_INT_006141bc + -2);
  engine_2d_c_drawLine_FUN_004011a0(0,1,0,g_INT_006141bc + -2);
  engine_2d_c_drawLine_FUN_004011a0(1,2,1,g_INT_006141bc + -3);
  engine_2d_c_drawLine_FUN_004011a0(g_INT_006141b8 + -1,1,g_INT_006141b8 + -1,g_INT_006141bc + -2);
  engine_2d_c_drawLine_FUN_004011a0(g_INT_006141b8 + -2,2,g_INT_006141b8 + -2,g_INT_006141bc + -3);
  return;
}
