// Name: core_game.cpp_CGame_beginFadeIn_FUN_004bb240
// Address: 004bb240
// Address Range: [[004bb099, 004bb236] [004bb240, 004bb27b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004bb240(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004bb240(CGame *this_ptr)

{
  g_INT_01cb80e0 = 1;
  g_INT_01cb8110 = g_INT_006141b8 / 2;
  g_INT_01cb8114 = g_INT_006141bc / 2;
  g_FLOAT_01cb810c = 0.0;
  core_game_cpp_calculateIrisFadeCenter_FUN_004bb2c0();
  return;
}
