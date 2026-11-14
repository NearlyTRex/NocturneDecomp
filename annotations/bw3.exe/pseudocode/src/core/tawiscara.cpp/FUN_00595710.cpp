// Name: core_tawiscara.cpp_FUN_00595710
// Address: 00595710
// Address Range: [[00595710, 00595757]]
// Convention: unknown
// Signature: void core_tawiscara_cpp_FUN_00595710(int param_1)

#include "nocturne.h"

void core_tawiscara_cpp_FUN_00595710(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)(param_1 + 0xd074) = 0x41200000;
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(*(uint *)(param_1 + 0xd070));
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"were?.wav");
  *(uint *)(param_1 + 0xd074) = 0x41a00000;
  *(uint *)(param_1 + 0xd070) = uVar2;
  return;
}
