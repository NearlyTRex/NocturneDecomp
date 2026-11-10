// Name: core_game.cpp_CGame_clearOverlay_FUN_004b4710
// Address: 004b4710
// Address Range: [[004b4710, 004b472f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_clearOverlay_FUN_004b4710(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_clearOverlay_FUN_004b4710(CGame *this_ptr)

{
  this_ptr->status_display_count = 0;
  this_ptr->field_0xb80 = 0;
  this_ptr->message_timer = 0.0;
  return;
}
