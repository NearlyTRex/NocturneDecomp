// Name: core_game.cpp_CGame_resetMusic_FUN_004c4d10
// Address: 004c4d10
// Address Range: [[004c4d10, 004c4d43]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetMusic_FUN_004c4d10(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetMusic_FUN_004c4d10(CGame *this_ptr)

{
  this_ptr->music_sfx_handle = 0;
  *(uint *)&this_ptr->music_position = 0;
  *(uint *)((int)&this_ptr->music_position + 4) = 0;
  this_ptr->music_volume = 1.0;
  this_ptr->music_name[0] = '\0';
  return;
}
