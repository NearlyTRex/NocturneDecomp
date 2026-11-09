// Name: core_game.cpp_CGame_processJoystickControls_FUN_004b97b0
// Address: 004b97b0
// Address Range: [[004b97b0, 004b97e0]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_004b97b0(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_004b97b0(CGame *this_ptr,SPlayerInput *player_control)

{
  core_game_cpp_CGame_resetKeyState_FUN_004b93e0(this_ptr);
  core_game_cpp_FUN_004b9960(this_ptr,player_control);
  return;
}
