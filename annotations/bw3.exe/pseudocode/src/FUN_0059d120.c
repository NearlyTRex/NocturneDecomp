// Name: FUN_0059d120
// Address: 0059d120
// Address Range: [[0059d120, 0059d30f]]
// Convention: unknown
// Signature: undefined4 FUN_0059d120(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0059d120(int param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  uint auStack_50 [6];
  uint auStack_38 [6];
  double dStack_20;
  int iStack_18;
  
  bVar7 = 0;
  if (0.0 < (double)*(float *)(param_1 + 0xd068)) {
    dVar1 = (double)*(float *)(param_1 + 0xd068) * _DAT_005d9e74;
    if (*(int *)(param_1 + 0xd06c) == 0) {
      iStack_18 = FUN_0059b740(100);
      fVar8 = (float10)iStack_18 * (float10)dVar1;
    }
    else {
      dStack_20 = 1.0 - dVar1;
      iStack_18 = FUN_0059b740(100);
      fVar8 = (float10)iStack_18 * (float10)dStack_20;
    }
    FUN_005a3120();
    *(int *)(param_1 + 0xd05c) = (int)ROUND(fVar8);
    iVar3 = FUN_0040c840(*(uint *)(param_1 + 0x25b0),_DAT_02d0c150);
    if (iVar3 != 0) {
      (**(code **)(*(int *)(iVar3 + 0x154) + 0xf8))(iVar3,*(uint *)(param_1 + 0xd05c));
      iVar4 = FUN_0059b740(100);
      if (iVar4 == *(int *)(param_1 + 0xd05c)) {
        *(uint *)(iVar3 + 0xf8) = 1;
        *(uint *)(iVar3 + 0xfc) = 0;
      }
      else {
        *(uint *)(iVar3 + 0xf8) = 0;
        *(uint *)(iVar3 + 0xfc) = 1;
      }
    }
  }
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar5 = auStack_50;
  puVar6 = auStack_38;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  iVar3 = FUN_0041daf0(auStack_38);
  uVar2 = DAT_005f2afc;
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x27bc) = 1;
    FUN_0046d4c0(uVar2,*(uint *)(param_1 + 0xd05c));
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
