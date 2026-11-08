// Name: FUN_00570020
// Address: 00570020
// Address Range: [[00570020, 005700dd]]
// Convention: unknown
// Signature: void FUN_00570020(undefined1 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00570020(byte *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x154) != 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x858;
    FUN_005030e0("SfxSample::freeMemory - freeing sample in use!");
  }
  FUN_00570260(param_1);
  FUN_00570130(param_1);
  FUN_005700e0(param_1);
  if (*(int *)(param_1 + 0x174) != 0) {
    uVar1 = FUN_0052ae80(*(int *)(param_1 + 0x174),0);
    FUN_005c0344(uVar1);
  }
  *(uint *)(param_1 + 0x174) = 0;
  FUN_005a0dc0(param_1 + 0x17c);
  *param_1 = 0;
  *(uint *)(param_1 + 0x150) = 0;
  *(uint *)(param_1 + 0x15c) = 0;
  *(uint *)(param_1 + 0x164) = 0;
  *(uint *)(param_1 + 0x168) = 0;
  *(uint *)(param_1 + 0x160) = 0xffffffff;
  return;
}
