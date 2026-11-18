// Name: core_game.cpp_CGame_startAlphaFade_FUN_004bb550
// Address: 004bb550
// Address Range: [[004bb550, 004bb576]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_startAlphaFade_FUN_004bb550(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_startAlphaFade_FUN_004bb550(CGame *this_ptr)

{
  this_ptr->alpha_fade_active = 1;
  this_ptr->alpha_fade_alpha = this_ptr->alpha_fade_start;
  this_ptr->alpha_fade_time_left = this_ptr->alpha_fade_duration;
  return;
}
