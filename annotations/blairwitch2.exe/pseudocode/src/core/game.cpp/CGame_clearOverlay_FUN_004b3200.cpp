// Name: core_game.cpp_CGame_clearOverlay_FUN_004b3200
// Address: 004b3200
// Address Range: [[004b3200, 004b3218]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_clearOverlay_FUN_004b3200(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_clearOverlay_FUN_004b3200(CGame *this_ptr)

{
  this_ptr->status_display_count = 0;
  this_ptr->message_timer = 0.0;
  return;
}
