// Name: core_game.cpp_CGame_stopAlphaFade_FUN_004bb580
// Address: 004bb580
// Address Range: [[004bb580, 004bb5a2]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_stopAlphaFade_FUN_004bb580(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_stopAlphaFade_FUN_004bb580(CGame *this_ptr)

{
  this_ptr->alpha_fade_active = 0;
  this_ptr->alpha_fade_alpha = 0.0;
  this_ptr->alpha_fade_time_left = 0.0;
  return;
}
