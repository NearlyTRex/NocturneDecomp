// Name: core_game.cpp_CGame_processJoystickControls_FUN_0049ec80
// Address: 0049ec80
// Address Range: [[0049ec80, 0049ecb0]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_game_cpp_CGame_processJoystickControls_FUN_0049ec80(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl core_game_cpp_CGame_processJoystickControls_FUN_0049ec80(uint param_1,uint param_2)

{
  uint uVar1;
  
  core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(param_1);
  uVar1 = core_game_cpp_CGame_processKeyboardControls_FUN_0049ee30(param_1,param_2);
  return uVar1;
}
