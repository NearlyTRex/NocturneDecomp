// Name: FUN_0054d9b0
// Address: 0054d9b0
// Address Range: [[0054d9b0, 0054da6d]]
// Convention: unknown
// Signature: void FUN_0054d9b0(undefined1 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054d9b0(byte *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x154) != 0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x858;
    FUN_004e4500("SfxSample::freeMemory - freeing sample in use!");
  }
  FUN_0054dbf0(param_1);
  FUN_0054dac0(param_1);
  FUN_0054da70(param_1);
  if (*(int *)(param_1 + 0x174) != 0) {
    uVar1 = FUN_00509cb0(*(int *)(param_1 + 0x174),0);
    FUN_005b7fdc(uVar1);
  }
  *(uint *)(param_1 + 0x174) = 0;
  FUN_0057d180(param_1 + 0x17c);
  *param_1 = 0;
  *(uint *)(param_1 + 0x150) = 0;
  *(uint *)(param_1 + 0x15c) = 0;
  *(uint *)(param_1 + 0x164) = 0;
  *(uint *)(param_1 + 0x168) = 0;
  *(uint *)(param_1 + 0x160) = 0xffffffff;
  return;
}
