// Name: core_game.cpp_CGame_processJoystickControls_FUN_004dc230
// Address: 004dc230
// Address Range: [[004dc230, 004dc260]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_004dc230(CGame *this_ptr,SPlayerControl *player_control)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_004dc230(CGame *this_ptr,SPlayerControl *player_control)

{
  core_game_cpp_CGame_resetKeyState_FUN_004dbe60(this_ptr);
  core_game_cpp_CGame_processKeyboardControls_FUN_004dc3e0(this_ptr,player_control);
  return;
}
