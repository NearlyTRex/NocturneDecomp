// Name: FUN_00598480
// Address: 00598480
// Address Range: [[00598480, 00598588]]
// Convention: unknown
// Signature: undefined4 FUN_00598480(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00598480(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0xcdd0) != 0) {
    return 0;
  }
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = auStack_20;
  puVar4 = auStack_38;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = FUN_0041daf0(auStack_38);
  uVar1 = DAT_005f2afc;
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x27bc) = 1;
    FUN_0046d4c0(uVar1,*(uint *)(param_1 + 0xd074));
    FUN_0046d4b0(DAT_005f2afc,0);
    FUN_0046e120(DAT_005f2afc,1);
    FUN_0054e3a0(param_1 + 0x158,0xffffffff,0x2e7,1,0);
    FUN_0046e4e0(DAT_005f2afc);
    if (_DAT_01d8e40c != 0) {
      FUN_004fcdc0(param_1 + 0x158,param_1);
    }
    if (0.0 < *(float *)(param_1 + 0x3254)) {
      FUN_0042f310(param_1);
    }
  }
  FUN_00408830(param_1);
  return *(uint *)(param_1 + 0x27bc);
}
