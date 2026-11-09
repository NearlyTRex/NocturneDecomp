// Name: core_shadow.cpp_FUN_00545080
// Address: 00545080
// Address Range: [[00545080, 005450bd]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_00545080(int param_1)

#include "nocturne.h"

void core_shadow_cpp_FUN_00545080(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(param_1 + 0xd078));
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"shb_attack??.wav");
  *(uint *)(param_1 + 0xd07c) = 0x41000000;
  *(uint *)(param_1 + 0xd078) = uVar2;
  return;
}
