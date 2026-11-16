// Name: core_game.cpp_CGame_updateAlphaFade_FUN_004bb5b0
// Address: 004bb5b0
// Address Range: [[004bb5b0, 004bb61a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateAlphaFade_FUN_004bb5b0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateAlphaFade_FUN_004bb5b0(CGame *this_ptr)

{
  if (this_ptr->alpha_fade_active != 0) {
    this_ptr->alpha_fade_time_left = this_ptr->alpha_fade_time_left - this_ptr->delta_time_float;
    if (this_ptr->alpha_fade_time_left <= 0.0) {
      this_ptr->alpha_fade_active = 0;
      this_ptr->alpha_fade_time_left = 0.0;
    }
    this_ptr->alpha_fade_alpha =
         (this_ptr->alpha_fade_end - this_ptr->alpha_fade_start) *
         (1.0 - this_ptr->alpha_fade_time_left / this_ptr->alpha_fade_duration) +
         this_ptr->alpha_fade_start;
  }
  return;
}
