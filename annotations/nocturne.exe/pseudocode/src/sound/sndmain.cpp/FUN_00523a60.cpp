// Name: FUN_00523a60
// Address: 00523a60
// Address Range: [[00523a60, 00523b1e]]
// Convention: unknown
// Signature: void FUN_00523a60(undefined1 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00523a60(byte *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 300) != 0) {
    _DAT_01cc4800 = "A..\\sound\\sndmain.cpp" + 1;
    _DAT_01cc4804 = 0x70a;
    FUN_004c8440("SfxSample::freeMemory - freeing sample in use!");
  }
  FUN_00523cb0(param_1);
  FUN_00523b70(param_1);
  FUN_00523b20(param_1);
  if (*(int *)(param_1 + 0x144) != 0) {
    uVar1 = FUN_004e7dd0(*(int *)(param_1 + 0x144),0);
    FUN_00564494(uVar1);
  }
  *(uint *)(param_1 + 0x144) = 0;
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_00563380(*(int *)(param_1 + 0x14c));
    *(uint *)(param_1 + 0x14c) = 0;
  }
  *(uint *)(param_1 + 0x128) = 0;
  *(uint *)(param_1 + 0x138) = 0;
  *(uint *)(param_1 + 0x134) = 0xffffffff;
  *param_1 = 0;
  return;
}
