// Name: core_game.cpp_CGame_setFudgeTarget_FUN_0049b240
// Address: 0049b240
// Address Range: [[0049b240, 0049b258]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_0049b240(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_0049b240(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x9bc) = param_2;
  *(uint *)(param_1 + 0x9c0) = param_3;
  return;
}
