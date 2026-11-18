// Name: core_game.cpp_CGame_drawScreenBorder_FUN_004cc0c0
// Address: 004cc0c0
// Address Range: [[004cc0c0, 004cc18f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_004cc0c0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_004cc0c0(CGame *this_ptr)

{
  g_INT_01c4f020 = 0;
  engine_2d_c_drawLine_FUN_004011a0(0,0,g_INT_0061b498 + -1,0);
  engine_2d_c_drawLine_FUN_004011a0(1,1,g_INT_0061b498 + -2,1);
  engine_2d_c_drawLine_FUN_004011a0(0,g_INT_0061b49c + -1,g_INT_0061b498 + -1,g_INT_0061b49c + -1);
  engine_2d_c_drawLine_FUN_004011a0(1,g_INT_0061b49c + -2,g_INT_0061b498 + -2,g_INT_0061b49c + -2);
  engine_2d_c_drawLine_FUN_004011a0(0,1,0,g_INT_0061b49c + -2);
  engine_2d_c_drawLine_FUN_004011a0(1,2,1,g_INT_0061b49c + -3);
  engine_2d_c_drawLine_FUN_004011a0(g_INT_0061b498 + -1,1,g_INT_0061b498 + -1,g_INT_0061b49c + -2);
  engine_2d_c_drawLine_FUN_004011a0(g_INT_0061b498 + -2,2,g_INT_0061b498 + -2,g_INT_0061b49c + -3);
  return;
}
