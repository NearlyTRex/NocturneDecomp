// Name: core_game.cpp_CGame_processJoystickControls_FUN_0049ec80
// Address: 0049ec80
// Address Range: [[0049ec80, 0049ecb0]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_0049ec80(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_0049ec80(CGame *this_ptr,SPlayerInput *player_control)

{
  core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(this_ptr);
  core_game_cpp_CGame_processKeyboardControls_FUN_0049ee30(this_ptr,player_control);
  return;
}
