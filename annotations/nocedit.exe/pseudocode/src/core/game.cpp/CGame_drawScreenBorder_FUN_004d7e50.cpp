// Name: core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50
// Address: 004d7e50
// Address Range: [[004d7e50, 004d7f1f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_004d7e50(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_004d7e50(CGame *this_ptr)

{
  g_ActiveRenderColor = 0;
  engine_2d_c_drawLine_FUN_004011b0(0,0,g_WindowWidth + -1,0);
  engine_2d_c_drawLine_FUN_004011b0(1,1,g_WindowWidth + -2,1);
  engine_2d_c_drawLine_FUN_004011b0(0,g_WindowHeight + -1,g_WindowWidth + -1,g_WindowHeight + -1);
  engine_2d_c_drawLine_FUN_004011b0(1,g_WindowHeight + -2,g_WindowWidth + -2,g_WindowHeight + -2);
  engine_2d_c_drawLine_FUN_004011b0(0,1,0,g_WindowHeight + -2);
  engine_2d_c_drawLine_FUN_004011b0(1,2,1,g_WindowHeight + -3);
  engine_2d_c_drawLine_FUN_004011b0(g_WindowWidth + -1,1,g_WindowWidth + -1,g_WindowHeight + -2);
  engine_2d_c_drawLine_FUN_004011b0(g_WindowWidth + -2,2,g_WindowWidth + -2,g_WindowHeight + -3);
  return;
}
