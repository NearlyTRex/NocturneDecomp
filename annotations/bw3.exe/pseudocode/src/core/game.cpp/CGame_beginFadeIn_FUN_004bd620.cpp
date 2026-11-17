// Name: core_game.cpp_CGame_beginFadeIn_FUN_004bd620
// Address: 004bd620
// Address Range: [[004bd479, 004bd616] [004bd620, 004bd65b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004bd620(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004bd620(CGame *this_ptr)

{
  g_INT_01d22c84 = 1;
  g_INT_01d22c8c = g_INT_005fba18 / 2;
  g_INT_01d22c90 = g_INT_005fba1c / 2;
  g_FLOAT_01d22c88 = 0.0;
  core_game_cpp_calculateIrisFadeCenter_FUN_004bd6a0();
  return;
}
