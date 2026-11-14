// Name: core_shadow.cpp_FUN_0055f540
// Address: 0055f540
// Address Range: [[0055f540, 0055f58b]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0055f540(int param_1)

#include "nocturne.h"

void core_shadow_cpp_FUN_0055f540(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(*(uint *)(param_1 + 0xc2a0));
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xc2d4) == 1) {
      pcVar3 = "shb_die??.wav";
    }
    else {
      pcVar3 = "child-laugh?.wav";
    }
    uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar3);
    *(uint *)(param_1 + 0xc2a0) = uVar2;
    *(uint *)(param_1 + 0xc298) = 0x41000000;
  }
  return;
}
