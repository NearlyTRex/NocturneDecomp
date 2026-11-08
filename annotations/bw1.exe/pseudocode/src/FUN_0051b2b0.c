// Name: FUN_0051b2b0
// Address: 0051b2b0
// Address Range: [[0051b2b0, 0051b415]]
// Convention: unknown
// Signature: void FUN_0051b2b0(undefined4 *param_1)

#include "nocturne.h"

void FUN_0051b2b0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_00531090("Setting up actors",0);
  FUN_004fe9c0(0x01D1BD1C,uVar1);
  FUN_0056b830();
  iVar5 = 0;
  for (iVar3 = param_1[0x446]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14c)) {
    iVar5 = iVar5 + 1;
    (**(code **)(*(int *)(iVar3 + 0x154) + 4))(iVar3);
  }
  if (param_1[0x402] == 0) {
    FUN_0056b860();
  }
  iVar3 = param_1[0x446];
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar5 * 3 >> 0x1f;
    do {
      iVar4 = iVar4 + 1;
      (*(code *)**(uint **)(iVar3 + 0x154))(iVar3);
      if (iVar4 == (int)((iVar5 + (iVar5 >> 0x1f) * -4) - (uint)((iVar5 >> 0x1f) << 1 < 0)) >> 2) {
        uVar1 = FUN_00531090("Setting up actors",0);
        FUN_004fe9c0(0x01D1BD1C,uVar1);
      }
      if (iVar4 == iVar5 / 2) {
        uVar1 = FUN_00531090("Setting up actors",0);
        FUN_004fe9c0(0x01D1BD1C,uVar1);
      }
      if (iVar4 == (int)((iVar5 * 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) {
        uVar1 = FUN_00531090("Setting up actors",0);
        FUN_004fe9c0(0x01D1BD1C,uVar1);
      }
      iVar3 = *(int *)(iVar3 + 0x14c);
    } while (iVar3 != 0);
  }
  param_1[0x515] = *param_1;
  return;
}
