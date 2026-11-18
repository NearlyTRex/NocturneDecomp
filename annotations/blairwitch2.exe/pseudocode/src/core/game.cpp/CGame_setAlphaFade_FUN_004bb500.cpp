// Name: core_game.cpp_CGame_setAlphaFade_FUN_004bb500
// Address: 004bb500
// Address Range: [[004bb500, 004bb54a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setAlphaFade_FUN_004bb500(CGame *this_ptr,float start_alpha,float end_alpha,float duration,float red,float green,float blue,int texture_index)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setAlphaFade_FUN_004bb500(CGame *this_ptr,float start_alpha,float end_alpha,float duration,float red,float green,float blue,int texture_index)

{
  this_ptr->alpha_fade_start = start_alpha;
  this_ptr->alpha_fade_end = end_alpha;
  this_ptr->alpha_fade_duration = duration;
  this_ptr->alpha_fade_red = red;
  this_ptr->alpha_fade_green = green;
  this_ptr->alpha_fade_blue = blue;
  this_ptr->alpha_fade_texture = texture_index;
  return;
}
