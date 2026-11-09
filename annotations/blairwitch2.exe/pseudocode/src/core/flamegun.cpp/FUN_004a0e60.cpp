// Name: core_flamegun.cpp_FUN_004a0e60
// Address: 004a0e60
// Address Range: [[004a0e60, 004a0f51]]
// Convention: unknown
// Signature: void core_flamegun_cpp_FUN_004a0e60(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flamegun_cpp_FUN_004a0e60(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  core_weapon_cpp_FUN_00589c80(param_1,param_2);
  if (*(int *)(param_1 + 0x6d4) == 0) {
    if (*(uint *)(param_1 + 0x6d8) != 0) {
      core_sound_cpp_FUN_0055af80(0x0264B290,*(uint *)(param_1 + 0x6d8));
      *(uint *)(param_1 + 0x6d8) = 0;
    }
  }
  else {
    iVar2 = core_sound_cpp_FUN_0055af70(0x0264B290,*(uint *)(param_1 + 0x6d8));
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"fl-throw.wav");
      *(uint *)(param_1 + 0x6d8) = uVar3;
    }
    param_2 = *(float *)(param_1 + 0x6e0) - param_2;
    *(float *)(param_1 + 0x6e0) = param_2;
    if (param_2 < 0.0) {
      fVar1 = 1.0 / _DAT_005f6b50;
      iVar2 = *(int *)(param_1 + 0x6c4) + -1;
      *(int *)(param_1 + 0x6c4) = iVar2;
      *(float *)(param_1 + 0x6e0) = fVar1 + param_2;
      if (iVar2 < 0) {
        *(uint *)(param_1 + 0x6c4) = 0;
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0x6d4);
  *(uint *)(param_1 + 0x6d4) = 0;
  *(uint *)(param_1 + 0x6dc) = uVar3;
  return;
}
