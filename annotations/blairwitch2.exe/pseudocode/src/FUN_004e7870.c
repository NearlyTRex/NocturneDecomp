// Name: FUN_004e7870
// Address: 004e7870
// Address Range: [[004e7870, 004e78f4]]
// Convention: unknown
// Signature: void FUN_004e7870(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e7870(int param_1,float param_2)

{
  int iVar1;
  uint uStack_10;
  
  uStack_10 = (param_2 * _DAT_005dc72d) / _DAT_005dc731;
  iVar1 = (**(code **)*0x01D02F84)(0x01D02F84,0x38);
  if (iVar1 != 0) {
    uStack_10 = uStack_10 * (float)_DAT_005dc735;
  }
  iVar1 = (**(code **)*0x01D02F84)(0x01D02F84,0x33);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) - uStack_10;
  }
  iVar1 = (**(code **)*0x01D02F84)(0x01D02F84,0x34);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + uStack_10;
  }
  FUN_00408ae0(param_1);
  return;
}
