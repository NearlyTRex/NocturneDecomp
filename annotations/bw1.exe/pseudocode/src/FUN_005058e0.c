// Name: FUN_005058e0
// Address: 005058e0
// Address Range: [[005058e0, 00505bbc]]
// Convention: unknown
// Signature: void FUN_005058e0(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005058e0(int param_1,int param_2,float param_3)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_1030 [1012];
  float *pfVar12;
  char *pcVar13;
  uint *puVar14;
  uint uStack_48;
  uint uStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar11 = 0;
  fStack_2c = param_3 * _DAT_005e7539;
  fStack_14 = fStack_2c / _DAT_00603444;
  pfVar10 = (float *)(param_1 + 0xaa0 + param_2 * 0xb8);
  FUN_00408b40(param_1,pfVar10 + 9);
  puVar14 = &stack0xffffffc4;
  pcVar13 = "manpuz-chargegemloop-red.wav";
  pfVar12 = pfVar10 + 0x2b;
  uStack_3c = uStack_48;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar11 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffbc + (uint)bVar11 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  uVar4 = FUN_005057c0(pfVar10 + 3,pfVar10[6],fStack_14,pfVar12,pcVar13,puVar14);
  uVar5 = FUN_005057c0(pfVar10 + 4,pfVar10[7],fStack_14,pfVar10 + 0x2c,
                       "manpuz-chargegemloop-green.wav",&stack0xffffffc4);
  uVar6 = FUN_005057c0(pfVar10 + 5,pfVar10[8],fStack_14,pfVar10 + 0x2d,
                       "manpuz-chargegemloop-blue.wav",&stack0xffffffc4);
  pfVar10[8] = 0.0;
  pfVar10[7] = pfVar10[8];
  pfVar10[6] = pfVar10[7];
  FUN_005056f0(param_1,param_2,&fStack_24,&stack0xffffffd0,&stack0xffffffd8);
  fStack_14 = fStack_2c / _DAT_00603448;
  fStack_1c = fStack_24 - *pfVar10;
  bVar11 = 1;
  if (fStack_1c < -fStack_14) {
    fVar1 = *pfVar10 - fStack_14;
LAB_00505a24:
    *pfVar10 = fVar1;
    bVar11 = 0;
  }
  else {
    if (fStack_14 < fStack_1c) {
      fVar1 = *pfVar10 + fStack_14;
      goto LAB_00505a24;
    }
    *pfVar10 = fStack_24;
  }
  pfVar12 = pfVar10 + 1;
  fStack_18 = fStack_30 - *pfVar12;
  if (-fStack_14 <= fStack_18) {
    if (fStack_14 < fStack_18) {
      fVar1 = *pfVar12 + fStack_14;
      goto LAB_00505a52;
    }
    *pfVar12 = fStack_30;
    bVar3 = 1;
  }
  else {
    fVar1 = *pfVar12 - fStack_14;
LAB_00505a52:
    *pfVar12 = fVar1;
    bVar3 = 0;
  }
  pfVar12 = pfVar10 + 2;
  fStack_20 = fStack_28 - *pfVar12;
  if (-fStack_14 <= fStack_20) {
    if (fStack_20 <= fStack_14) {
      *pfVar12 = fStack_28;
      bVar2 = 1;
      goto LAB_00505a84;
    }
    fVar1 = *pfVar12 + fStack_14;
  }
  else {
    fVar1 = *pfVar12 - fStack_14;
  }
  *pfVar12 = fVar1;
  bVar2 = 0;
LAB_00505a84:
  if ((((((bool)(bVar11 & bVar3 & bVar2)) && ((uVar4 & 1 & uVar5 & uVar6) != 0)) &&
       (piVar9 = (int *)(param_1 + 0x5f0 + param_2 * 100), *piVar9 != 0)) &&
      (((piVar9[2] & 0x7fffffffU) == 0 && ((piVar9[1] & 0x7fffffffU) == 0)))) &&
     (((float)piVar9[0x13] == pfVar10[3] &&
      (((float)piVar9[0x14] == pfVar10[4] && ((float)piVar9[0x15] == pfVar10[5])))))) {
    uVar7 = FUN_00506210(param_1,param_2);
    iVar8 = FUN_00506390(param_1,uVar7);
    if (iVar8 == 0) {
      FUN_00505ec0(param_1,param_2);
      return;
    }
    uVar7 = FUN_00506200(param_1,param_2);
    iVar8 = FUN_00506390(param_1,uVar7);
    if (iVar8 == 0) {
      FUN_00506060(param_1,param_2);
      return;
    }
  }
  return;
}
