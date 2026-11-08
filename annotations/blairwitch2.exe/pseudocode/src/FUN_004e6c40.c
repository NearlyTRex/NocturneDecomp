// Name: FUN_004e6c40
// Address: 004e6c40
// Address Range: [[004e6c40, 004e6f1c]]
// Convention: unknown
// Signature: void FUN_004e6c40(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6c40(int param_1,int param_2,float param_3)

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
  fStack_2c = param_3 * _DAT_005dc5e9;
  fStack_14 = fStack_2c / _DAT_005f98c4;
  pfVar10 = (float *)(param_1 + 0xbfc + param_2 * 0xb8);
  FUN_00408d70(param_1,pfVar10 + 9);
  puVar14 = &stack0xffffffc4;
  pcVar13 = "p?manpuz-chargegemloop-red.wav" + 2;
  pfVar12 = pfVar10 + 0x2b;
  uStack_3c = uStack_48;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar11 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffbc + (uint)bVar11 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  uVar4 = FUN_004e6b20(pfVar10 + 3,pfVar10[6],fStack_14,pfVar12,pcVar13,puVar14);
  uVar5 = FUN_004e6b20(pfVar10 + 4,pfVar10[7],fStack_14,pfVar10 + 0x2c,
                       "manpuz-chargegemloop-green.wav",&stack0xffffffc4);
  uVar6 = FUN_004e6b20(pfVar10 + 5,pfVar10[8],fStack_14,pfVar10 + 0x2d,
                       "manpuz-chargegemloop-blue.wav",&stack0xffffffc4);
  pfVar10[8] = 0.0;
  pfVar10[7] = pfVar10[8];
  pfVar10[6] = pfVar10[7];
  FUN_004e6a50(param_1,param_2,&fStack_24,&stack0xffffffd0,&stack0xffffffd8);
  fStack_14 = fStack_2c / _DAT_005f98c8;
  fStack_1c = fStack_24 - *pfVar10;
  bVar11 = 1;
  if (fStack_1c < -fStack_14) {
    fVar1 = *pfVar10 - fStack_14;
LAB_004e6d84:
    *pfVar10 = fVar1;
    bVar11 = 0;
  }
  else {
    if (fStack_14 < fStack_1c) {
      fVar1 = *pfVar10 + fStack_14;
      goto LAB_004e6d84;
    }
    *pfVar10 = fStack_24;
  }
  pfVar12 = pfVar10 + 1;
  fStack_18 = fStack_30 - *pfVar12;
  if (-fStack_14 <= fStack_18) {
    if (fStack_14 < fStack_18) {
      fVar1 = *pfVar12 + fStack_14;
      goto LAB_004e6db2;
    }
    *pfVar12 = fStack_30;
    bVar3 = 1;
  }
  else {
    fVar1 = *pfVar12 - fStack_14;
LAB_004e6db2:
    *pfVar12 = fVar1;
    bVar3 = 0;
  }
  pfVar12 = pfVar10 + 2;
  fStack_20 = fStack_28 - *pfVar12;
  if (-fStack_14 <= fStack_20) {
    if (fStack_20 <= fStack_14) {
      *pfVar12 = fStack_28;
      bVar2 = 1;
      goto LAB_004e6de4;
    }
    fVar1 = *pfVar12 + fStack_14;
  }
  else {
    fVar1 = *pfVar12 - fStack_14;
  }
  *pfVar12 = fVar1;
  bVar2 = 0;
LAB_004e6de4:
  if ((((((bool)(bVar11 & bVar3 & bVar2)) && ((uVar4 & 1 & uVar5 & uVar6) != 0)) &&
       (piVar9 = (int *)(param_1 + 0x74c + param_2 * 100), *piVar9 != 0)) &&
      (((piVar9[2] & 0x7fffffffU) == 0 && ((piVar9[1] & 0x7fffffffU) == 0)))) &&
     (((float)piVar9[0x13] == pfVar10[3] &&
      (((float)piVar9[0x14] == pfVar10[4] && ((float)piVar9[0x15] == pfVar10[5])))))) {
    uVar7 = FUN_004e7570(param_1,param_2);
    iVar8 = FUN_004e76f0(param_1,uVar7);
    if (iVar8 == 0) {
      FUN_004e7220(param_1,param_2);
      return;
    }
    uVar7 = FUN_004e7560(param_1,param_2);
    iVar8 = FUN_004e76f0(param_1,uVar7);
    if (iVar8 == 0) {
      FUN_004e73c0(param_1,param_2);
      return;
    }
  }
  return;
}
