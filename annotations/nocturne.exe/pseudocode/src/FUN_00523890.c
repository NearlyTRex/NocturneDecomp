// Name: FUN_00523890
// Address: 00523890
// Address Range: [[00523890, 005238ed]]
// Convention: unknown
// Signature: void FUN_00523890(undefined4 param_1)

#include "nocturne.h"

void FUN_00523890(uint param_1)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(param_1);
  *(uint *)(iVar1 + 0x120) = 0;
  *(uint *)(iVar1 + 300) = 0;
  *(uint *)(iVar1 + 0x130) = 0;
  *(uint *)(iVar1 + 0x128) = 0;
  *(uint *)(iVar1 + 0x134) = 0xffffffff;
  *(uint *)(iVar1 + 0x14c) = 0;
  *(uint *)(iVar1 + 0x144) = 0;
  *(uint *)(iVar1 + 0x154) = 0;
  return;
}
