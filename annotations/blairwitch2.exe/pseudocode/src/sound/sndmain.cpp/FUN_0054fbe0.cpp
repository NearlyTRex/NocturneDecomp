// Name: FUN_0054fbe0
// Address: 0054fbe0
// Address Range: [[0054fbe0, 0054fcc4]]
// Convention: unknown
// Signature: void FUN_0054fbe0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054fbe0(int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xd75;
    FUN_004e4500("SfxSlot::seek - no sample?!");
  }
  uVar1 = FUN_0054fdc0(*(uint *)(param_1 + 0x68),*(uint *)(param_1 + 0x50),
                       *(uint *)(param_1 + 0x54),*(uint *)(param_1 + 0x58),0);
  *(uint *)(param_1 + 0x58) = 0;
  *(ulonglong *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_0054ff30(*(uint *)(param_1 + 0x68),*(uint *)(param_1 + 0x50),
                       *(uint *)(param_1 + 0x54),*(uint *)(param_1 + 0x58));
  *(ulonglong *)(param_1 + 0x50) = uVar1;
  if (*(int *)(*(int *)(param_1 + 0x68) + 0x160) < 0) {
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x54);
    return;
  }
  fVar3 = (float10)*(double *)(param_1 + 0x50);
  uVar2 = FUN_005b7ff0(0);
  FUN_0054dc50(uVar2,(int)ROUND(fVar3));
  *(double *)(param_1 + 0x10c) = (double)*(int *)(*(int *)(param_1 + 0x68) + 0x170);
  return;
}
