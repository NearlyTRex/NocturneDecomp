// Name: FUN_00555750
// Address: 00555750
// Address Range: [[00555750, 00555834]]
// Convention: unknown
// Signature: void FUN_00555750(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555750(int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xd77;
    FUN_004e4330("SfxSlot::seek - no sample?!");
  }
  uVar1 = FUN_00555930(*(uint *)(param_1 + 0x68),*(uint *)(param_1 + 0x50),
                       *(uint *)(param_1 + 0x54),*(uint *)(param_1 + 0x58),0);
  *(uint *)(param_1 + 0x58) = 0;
  *(ulonglong *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_00555aa0(*(uint *)(param_1 + 0x68),*(uint *)(param_1 + 0x50),
                       *(uint *)(param_1 + 0x54),*(uint *)(param_1 + 0x58));
  *(ulonglong *)(param_1 + 0x50) = uVar1;
  if (*(int *)(*(int *)(param_1 + 0x68) + 0x160) < 0) {
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x54);
    return;
  }
  fVar3 = (float10)*(double *)(param_1 + 0x50);
  uVar2 = FUN_005a3120(0);
  FUN_005537c0(uVar2,(int)ROUND(fVar3));
  *(double *)(param_1 + 0x10c) = (double)*(int *)(*(int *)(param_1 + 0x68) + 0x170);
  return;
}
