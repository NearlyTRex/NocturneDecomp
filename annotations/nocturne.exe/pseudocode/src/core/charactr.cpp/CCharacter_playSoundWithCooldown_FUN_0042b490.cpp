// Name: core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490
// Address: 0042b490
// Address Range: [[0042b490, 0042b4c0]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b490(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b490(int param_1,uint param_2)

{
  if (0.0 < *(float *)(param_1 + 0x2dd0)) {
    return;
  }
  *(uint *)(param_1 + 0x2dd0) = 0x3dcccccd;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_2);
  return;
}
