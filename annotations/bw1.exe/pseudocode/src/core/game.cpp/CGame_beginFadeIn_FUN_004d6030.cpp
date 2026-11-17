// Name: core_game.cpp_CGame_beginFadeIn_FUN_004d6030
// Address: 004d6030
// Address Range: [[004d5e89, 004d6026] [004d6030, 004d606b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004d6030(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004d6030(CGame *this_ptr)

{
  g_INT_01cd0c7c = 1;
  g_INT_01cd0c84 = g_INT_0061b498 / 2;
  g_INT_01cd0c88 = g_INT_0061b49c / 2;
  g_FLOAT_01cd0c80 = 0.0;
  core_game_cpp_calculateIrisFadeCenter_FUN_004d60b0();
  return;
}
