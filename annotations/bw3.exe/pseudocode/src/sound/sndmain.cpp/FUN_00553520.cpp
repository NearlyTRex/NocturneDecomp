// Name: FUN_00553520
// Address: 00553520
// Address Range: [[00553520, 005535dd]]
// Convention: unknown
// Signature: void FUN_00553520(undefined1 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00553520(byte *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x154) != 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x85a;
    FUN_004e4330("SfxSample::freeMemory - freeing sample in use!");
  }
  FUN_00553760(param_1);
  FUN_00553630(param_1);
  FUN_005535e0(param_1);
  if (*(int *)(param_1 + 0x174) != 0) {
    uVar1 = FUN_00502790(*(int *)(param_1 + 0x174),0);
    FUN_005a30c4(uVar1);
  }
  *(uint *)(param_1 + 0x174) = 0;
  FUN_00573db0(param_1 + 0x17c);
  *param_1 = 0;
  *(uint *)(param_1 + 0x150) = 0;
  *(uint *)(param_1 + 0x15c) = 0;
  *(uint *)(param_1 + 0x164) = 0;
  *(uint *)(param_1 + 0x168) = 0;
  *(uint *)(param_1 + 0x160) = 0xffffffff;
  return;
}
