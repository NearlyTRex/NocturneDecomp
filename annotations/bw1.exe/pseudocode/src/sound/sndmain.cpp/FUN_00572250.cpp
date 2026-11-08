// Name: FUN_00572250
// Address: 00572250
// Address Range: [[00572250, 00572334]]
// Convention: unknown
// Signature: void FUN_00572250(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572250(int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xd75;
    FUN_005030e0("SfxSlot::seek - no sample?!");
  }
  uVar1 = FUN_00572430(*(uint *)(param_1 + 0x68),*(uint *)(param_1 + 0x50),
                       *(uint *)(param_1 + 0x54),*(uint *)(param_1 + 0x58),0);
  *(uint *)(param_1 + 0x58) = 0;
  *(ulonglong *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_005725a0(*(uint *)(param_1 + 0x68),*(uint *)(param_1 + 0x50),
                       *(uint *)(param_1 + 0x54),*(uint *)(param_1 + 0x58));
  *(ulonglong *)(param_1 + 0x50) = uVar1;
  if (*(int *)(*(int *)(param_1 + 0x68) + 0x160) < 0) {
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x54);
    return;
  }
  fVar3 = (float10)*(double *)(param_1 + 0x50);
  uVar2 = FUN_005c03a0(0);
  FUN_005702c0(uVar2,(int)ROUND(fVar3));
  *(double *)(param_1 + 0x10c) = (double)*(int *)(*(int *)(param_1 + 0x68) + 0x170);
  return;
}
