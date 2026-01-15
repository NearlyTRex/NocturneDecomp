// Name: core_game.cpp_CallToJoystickStuff_FUN_004dc230
// Address: 004dc230
// Address Range: [[004dc230, 004dc260]]
// Convention: __cdecl
// Signature: void core_game.cpp_CallToJoystickStuff_FUN_004dc230(CGame * this_ptr, int unk1, SPlayerControl * unk)

#include "nocturne.h"

/* Signature: byte core_game.cpp_CallToJoystickStuff(uint param_1, uint param_2)
    */

void __cdecl
core_game_cpp_CallToJoystickStuff_FUN_004dc230(CGame *this_ptr,int unk1,SPlayerControl *unk)

{
  core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
  core_game_cpp_KeypressesAndCGame_FUN_004dc3e0(this_ptr,(SPlayerControl *)unk1);
  return;
}
