// Name: core_game.cpp_CGame_processJoystickControls_FUN_004b7510
// Address: 004b7510
// Address Range: [[004b7510, 004b7540]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_004b7510(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_004b7510(CGame *this_ptr,SPlayerInput *player_control)

{
  core_game_cpp_CGame_resetKeyState_FUN_004b7140(this_ptr);
  core_game_cpp_FUN_004b76c0(this_ptr,player_control);
  return;
}
