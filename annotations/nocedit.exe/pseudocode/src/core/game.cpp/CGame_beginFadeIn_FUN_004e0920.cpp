// Name: core_game.cpp_CGame_beginFadeIn_FUN_004e0920
// Address: 004e0920
// Address Range: [[004e07d5, 004e091b] [004e0920, 004e095b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004e0920(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004e0920(CGame *this_ptr)

{
  DAT_02d831ec = 1;
  DAT_02d831f4 = g_WindowWidth / 2;
  DAT_02d831f8 = g_WindowHeight / 2;
  DAT_02d831f0 = 0;
  core_game_cpp_CGame_calculateIrisFadeCenter_FUN_004e09a0(this_ptr);
  return;
}
