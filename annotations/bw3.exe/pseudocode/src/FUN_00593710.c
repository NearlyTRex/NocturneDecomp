// Name: FUN_00593710
// Address: 00593710
// Address Range: [[00593710, 005939a6]]
// Convention: unknown
// Signature: undefined4 FUN_00593710(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00593710(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  uint auStack_54 [6];
  uint auStack_3c [8];
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  bVar5 = 0;
  fStack_18 = (float)*(int *)(param_1 + 0xd070) * (float)_DAT_005d91f3 * (float)_DAT_005d91fb;
  fStack_1c = ((float)_DAT_005d91eb - (float)*(int *)(param_1 + 0xd070)) * (float)_DAT_005d91f3 *
              (float)_DAT_005d91fb;
  if (*(int *)(param_1 + 0xd068) == 0) {
    fVar6 = ((float10)fStack_18 * (float10)*(float *)(param_1 + 0xd064)) /
            (float10)*(float *)(param_1 + 0xd06c);
    uVar8 = FUN_005a3120();
    iStack_14 = (int)ROUND(fVar6);
    *(int *)(param_1 + 0xd060) = (int)uVar8 - iStack_14;
    if (*(float *)(param_1 + 0xd064) == *(float *)(param_1 + 0xd06c)) {
      *(int *)(param_1 + 0xd0a0) = (int)((ulonglong)uVar8 >> 0x20);
      goto LAB_005937aa;
    }
  }
  else {
    fVar7 = ((float10)fStack_18 * (float10)*(float *)(param_1 + 0xd064)) /
            (float10)*(float *)(param_1 + 0xd06c) + (float10)fStack_1c;
    fVar6 = (float10)*(float *)(param_1 + 0xd064);
    FUN_005a3120();
    *(int *)(param_1 + 0xd060) = (int)ROUND(fVar7);
    if (fVar6 == (float10)*(float *)(param_1 + 0xd06c)) {
      *(uint *)(param_1 + 0xd0a0) = 1;
      goto LAB_005937aa;
    }
  }
  *(uint *)(param_1 + 0xd0a0) = 0xffffffff;
LAB_005937aa:
  iVar2 = FUN_0040c840(*(uint *)(param_1 + 0x2628),_DAT_02d0c150);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x154) + 0xf8))(iVar2,*(uint *)(param_1 + 0xd060));
    if (*(int *)(param_1 + 0xd060) == 0x10000) {
      *(uint *)(iVar2 + 0xf8) = 1;
      *(uint *)(iVar2 + 0xfc) = 0;
    }
    else {
      *(uint *)(iVar2 + 0xf8) = 0;
      *(uint *)(iVar2 + 0xfc) = 1;
    }
  }
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = auStack_54;
  puVar4 = auStack_3c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = FUN_0041daf0(auStack_3c);
  uVar1 = DAT_005f2afc;
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x27bc) = 1;
    FUN_0046d4c0(uVar1,*(uint *)(param_1 + 0xd060));
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
  if (0 < *(int *)(param_1 + 0x33a0)) {
    FUN_0042f6f0(param_1);
  }
  if (*(int *)(param_1 + 0xd060) == 0x10000) {
    iVar2 = param_1 + 0xd0b8;
    do {
      (**(code **)(*(int *)(iVar2 + 0x154) + 0x14))(iVar2);
      iVar2 = iVar2 + 0x2a4;
    } while (iVar2 != param_1 + 0xdb48);
  }
  return *(uint *)(param_1 + 0x27bc);
}
