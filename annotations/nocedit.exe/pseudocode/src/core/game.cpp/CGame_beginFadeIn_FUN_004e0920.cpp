// Name: core_game.cpp_CGame_beginFadeIn_FUN_004e0920
// Address: 004e0920
// Address Range: [[004e07d5, 004e091b] [004e0920, 004e095b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004e0920(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004e0920(CGame *this_ptr)

{
  g_IrisFadeType = 1;
  g_IrisFadeCenterX = g_WindowWidth / 2;
  g_IrisFadeCenterY = g_WindowHeight / 2;
  g_IrisFadeRadius = 0.0;
  core_game_cpp_calculateIrisFadeCenter_FUN_004e09a0();
  return;
}
