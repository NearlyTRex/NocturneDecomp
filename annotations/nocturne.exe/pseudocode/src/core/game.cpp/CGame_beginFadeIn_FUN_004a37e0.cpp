// Name: core_game.cpp_CGame_beginFadeIn_FUN_004a37e0
// Address: 004a37e0
// Address Range: [[004a3695, 004a37db] [004a37e0, 004a381b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004a37e0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004a37e0(CGame *this_ptr)

{
  g_IrisFadeType = 1;
  g_IrisFadeCenterX = g_WindowWidth / 2;
  g_IrisFadeCenterY = g_WindowHeight / 2;
  g_IrisFadeRadius = 0.0;
  core_game_cpp_calculateIrisFadeCenter_FUN_004a3860();
  return;
}
