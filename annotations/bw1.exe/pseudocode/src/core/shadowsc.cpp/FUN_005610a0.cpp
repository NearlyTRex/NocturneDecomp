// Name: core_shadowsc.cpp_FUN_005610a0
// Address: 005610a0
// Address Range: [[005610a0, 005610dd]]
// Convention: unknown
// Signature: void core_shadowsc_cpp_FUN_005610a0(int param_1)

#include "nocturne.h"

void core_shadowsc_cpp_FUN_005610a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(*(uint *)(param_1 + 0xc27c));
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"scorp-die1.wav @ 4");
  *(uint *)(param_1 + 0xc284) = 0x41000000;
  *(uint *)(param_1 + 0xc27c) = uVar2;
  return;
}
