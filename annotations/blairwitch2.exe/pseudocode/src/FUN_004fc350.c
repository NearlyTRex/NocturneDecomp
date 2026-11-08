// Name: FUN_004fc350
// Address: 004fc350
// Address Range: [[004fc350, 004fc4b6]]
// Convention: unknown
// Signature: void FUN_004fc350(undefined4 *param_1)

#include "nocturne.h"

void FUN_004fc350(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_0050fe80("Setting up actors",0);
  FUN_004e1600(0x01D03000,uVar1);
  FUN_00549180();
  iVar5 = 0;
  for (iVar3 = param_1[0x445]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14c)) {
    iVar5 = iVar5 + 1;
    (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xc))(iVar3);
  }
  if (param_1[0x402] == 0) {
    FUN_005491b0();
  }
  iVar3 = param_1[0x445];
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar5 * 3 >> 0x1f;
    do {
      iVar4 = iVar4 + 1;
      (**(code **)(*(int *)(iVar3 + 0x2b0) + 8))(iVar3);
      if (iVar4 == (int)((iVar5 + (iVar5 >> 0x1f) * -4) - (uint)((iVar5 >> 0x1f) << 1 < 0)) >> 2) {
        uVar1 = FUN_0050fe80("Setting up actors",0);
        FUN_004e1600(0x01D03000,uVar1);
      }
      if (iVar4 == iVar5 / 2) {
        uVar1 = FUN_0050fe80("Setting up actors",0);
        FUN_004e1600(0x01D03000,uVar1);
      }
      if (iVar4 == (int)((iVar5 * 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) {
        uVar1 = FUN_0050fe80("Setting up actors",0);
        FUN_004e1600(0x01D03000,uVar1);
      }
      iVar3 = *(int *)(iVar3 + 0x14c);
    } while (iVar3 != 0);
  }
  param_1[0x514] = *param_1;
  return;
}
