// Name: core_game.cpp_CGame_drawScreenBorder_FUN_004b45e0
// Address: 004b45e0
// Address Range: [[004b45e0, 004b46af]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_004b45e0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_004b45e0(CGame *this_ptr)

{
  g_INT_01c6b5c0 = 0;
  engine_2d_c_drawLine_FUN_004011a0(0,0,g_INT_005fba18 + -1,0);
  engine_2d_c_drawLine_FUN_004011a0(1,1,g_INT_005fba18 + -2,1);
  engine_2d_c_drawLine_FUN_004011a0(0,g_INT_005fba1c + -1,g_INT_005fba18 + -1,g_INT_005fba1c + -1);
  engine_2d_c_drawLine_FUN_004011a0(1,g_INT_005fba1c + -2,g_INT_005fba18 + -2,g_INT_005fba1c + -2);
  engine_2d_c_drawLine_FUN_004011a0(0,1,0,g_INT_005fba1c + -2);
  engine_2d_c_drawLine_FUN_004011a0(1,2,1,g_INT_005fba1c + -3);
  engine_2d_c_drawLine_FUN_004011a0(g_INT_005fba18 + -1,1,g_INT_005fba18 + -1,g_INT_005fba1c + -2);
  engine_2d_c_drawLine_FUN_004011a0(g_INT_005fba18 + -2,2,g_INT_005fba18 + -2,g_INT_005fba1c + -3);
  return;
}
