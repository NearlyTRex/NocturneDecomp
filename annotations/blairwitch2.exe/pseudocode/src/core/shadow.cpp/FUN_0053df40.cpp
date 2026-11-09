// Name: core_shadow.cpp_FUN_0053df40
// Address: 0053df40
// Address Range: [[0053df40, 0053df7d]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0053df40(int param_1)

#include "nocturne.h"

void core_shadow_cpp_FUN_0053df40(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(param_1 + 0x10b1c));
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"@@shb_alert??.wav" + 2);
  *(uint *)(param_1 + 0x10b20) = 0x41a00000;
  *(uint *)(param_1 + 0x10b1c) = uVar2;
  return;
}
