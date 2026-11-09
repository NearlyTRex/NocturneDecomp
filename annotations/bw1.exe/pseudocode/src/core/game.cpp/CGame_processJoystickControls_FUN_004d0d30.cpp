// Name: core_game.cpp_CGame_processJoystickControls_FUN_004d0d30
// Address: 004d0d30
// Address Range: [[004d0d30, 004d0d60]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_004d0d30(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_004d0d30(CGame *this_ptr,SPlayerInput *player_control)

{
  core_game_cpp_CGame_resetKeyState_FUN_004d0960(this_ptr);
  core_game_cpp_FUN_004d0ee0(this_ptr,player_control);
  return;
}
