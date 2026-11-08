// Name: FUN_004f6a80
// Address: 004f6a80
// Address Range: [[004f6a80, 004f6be5]]
// Convention: unknown
// Signature: void FUN_004f6a80(undefined4 *param_1)

#include "nocturne.h"

void FUN_004f6a80(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_00508960("Setting up actors",0);
  FUN_004e0000(0x01D70AB8,uVar1);
  FUN_005503c0();
  iVar5 = 0;
  for (iVar3 = param_1[0x50f]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14c)) {
    iVar5 = iVar5 + 1;
    (**(code **)(*(int *)(iVar3 + 0x154) + 4))(iVar3);
  }
  if (param_1[0x402] == 0) {
    FUN_005503f0();
  }
  iVar3 = param_1[0x50f];
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar5 * 3 >> 0x1f;
    do {
      iVar4 = iVar4 + 1;
      (*(code *)**(uint **)(iVar3 + 0x154))(iVar3);
      if (iVar4 == (int)((iVar5 + (iVar5 >> 0x1f) * -4) - (uint)((iVar5 >> 0x1f) << 1 < 0)) >> 2) {
        uVar1 = FUN_00508960("Setting up actors",0);
        FUN_004e0000(0x01D70AB8,uVar1);
      }
      if (iVar4 == iVar5 / 2) {
        uVar1 = FUN_00508960("Setting up actors",0);
        FUN_004e0000(0x01D70AB8,uVar1);
      }
      if (iVar4 == (int)((iVar5 * 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) {
        uVar1 = FUN_00508960("Setting up actors",0);
        FUN_004e0000(0x01D70AB8,uVar1);
      }
      iVar3 = *(int *)(iVar3 + 0x14c);
    } while (iVar3 != 0);
  }
  param_1[0x515] = *param_1;
  return;
}
