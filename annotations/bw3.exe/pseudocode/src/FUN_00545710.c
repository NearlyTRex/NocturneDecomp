// Name: FUN_00545710
// Address: 00545710
// Address Range: [[00545710, 00545906]]
// Convention: unknown
// Signature: undefined4 FUN_00545710(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00545710(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  uint auStackY_101c [1001];
  uint auStack_64 [6];
  uint auStack_4c [6];
  float fStack_34;
  float afStack_30 [4];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  FUN_004fc070(param_1 + 0x158);
  iVar2 = _DAT_01d1a0a4;
  iVar3 = _DAT_01d5ba14 * 4;
  iVar4 = *(int *)(iVar3 + 0x1d5ba04);
  if (iVar4 != 0) {
    fStack_34 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
    afStack_30[0] = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
    afStack_30[1] = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
    afStack_30[2] = fStack_34;
    afStack_30[(uint)bVar7 * 0xfffffffe + 3] =
         (float)*(uint *)((int)afStack_30 + (uint)bVar7 * 0xfffffff8);
    afStack_30[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 4] =
         afStack_30[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 1];
    fStack_14 = fStack_20 * fStack_20 +
                afStack_30[2] * afStack_30[2] + afStack_30[3] * afStack_30[3];
    *(uint *)(param_1 + 0x27bc) = 0;
    fStack_1c = (float)(((int)fStack_14 >> 1) + iVar2);
    fStack_18 = *(float *)(*(int *)(iVar3 + 0x1d5ba04) + 0x20b88);
    if (fStack_18 < fStack_1c) {
      *(uint *)(param_1 + 0xd0d8) = 0;
    }
    else {
      fVar8 = (((float10)fStack_18 - (float10)fStack_1c) / (float10)fStack_18) *
              (float10)_DAT_005d1366;
      FUN_005a3120();
      *(int *)(param_1 + 0xd0d8) = (int)ROUND(fVar8);
    }
    if (*(int *)(param_1 + 0xcdd0) == 0) {
      FUN_004087f0(param_1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
      puVar5 = auStack_4c;
      puVar6 = auStack_64;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar4 = FUN_0041daf0(auStack_64);
      uVar1 = DAT_005f2afc;
      if (iVar4 != 0) {
        *(uint *)(param_1 + 0x27bc) = 1;
        FUN_0046d4c0(uVar1,*(uint *)(param_1 + 0xd0d8));
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
        FUN_0042f6f0(param_1);
      }
      FUN_00408830(param_1);
      return *(uint *)(param_1 + 0x27bc);
    }
  }
  return 0;
}
