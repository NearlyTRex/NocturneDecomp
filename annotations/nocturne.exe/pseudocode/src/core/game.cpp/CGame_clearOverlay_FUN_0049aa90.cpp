// Name: core_game.cpp_CGame_clearOverlay_FUN_0049aa90
// Address: 0049aa90
// Address Range: [[0049aa90, 0049aaa8]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_clearOverlay_FUN_0049aa90(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_clearOverlay_FUN_0049aa90(CGame *this_ptr)

{
  this_ptr->status_display_count = 0;
  this_ptr->message_timer = 0.0;
  return;
}
