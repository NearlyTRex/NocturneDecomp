// Name: FUN_004610b0
// Address: 004610b0
// Address Range: [[004610b0, 004613a7]]
// Convention: unknown
// Signature: float FUN_004610b0(int param_1,float *param_2,float *param_3,undefined4 *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_004610b0(int param_1,float *param_2,float *param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1044 [959];
  float afStack_12c [30];
  uint auStack_b4 [10];
  uint auStack_8c [6];
  uint auStack_74 [6];
  float fStack_5c;
  float afStack_58 [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,param_2,param_3,0);
  puVar6 = auStack_8c;
  puVar7 = auStack_74;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  fStack_18 = (float)FUN_00420ee0(auStack_74);
  if ((0.0 <= fStack_18) && (fStack_18 <= 1.0)) {
    FUN_005c0357(afStack_12c,10,&DAT_005fb430);
    iVar3 = FUN_004615b0(param_1,afStack_12c,auStack_b4);
    iStack_28 = -1;
    fStack_5c = *param_3;
    *(float *)((int)afStack_58 + (uint)bVar8 * 0xfffffff8) = param_3[(uint)bVar8 * -2 + 1];
    afStack_58[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 1] =
         (param_3 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    iStack_1c = iVar3;
    fStack_2c = 1e+06;
    fStack_34 = SQRT(afStack_58[1] * afStack_58[1] +
                     fStack_5c * fStack_5c + afStack_58[0] * afStack_58[0]);
    if (fStack_34 <= 0.0) {
      afStack_58[0] = 0.0;
      fStack_5c = 0.0;
      afStack_58[1] = 0.0;
    }
    else {
      fStack_34 = 1.0 / fStack_34;
      fStack_5c = fStack_5c * fStack_34;
      afStack_58[0] = afStack_58[0] * fStack_34;
      afStack_58[1] = afStack_58[1] * fStack_34;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      pfVar5 = afStack_12c;
      do {
        fStack_44 = *pfVar5 - *param_2;
        fStack_40 = pfVar5[1] - param_2[1];
        fStack_3c = pfVar5[2] - param_2[2];
        afStack_58[2] = *pfVar5 - *param_2;
        afStack_58[(uint)bVar8 * 0xfffffffe + 3] = afStack_58[(uint)bVar8 * 0xfffffffe + 6];
        afStack_58[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 4] =
             afStack_58[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 7];
        fStack_24 = afStack_58[3] * afStack_58[3];
        fStack_20 = fStack_48 * fStack_48;
        fVar1 = fStack_48 * afStack_58[1] +
                afStack_58[2] * fStack_5c + afStack_58[3] * afStack_58[0];
        fVar2 = afStack_58[2] * afStack_58[2] + afStack_58[3] * afStack_58[3] +
                fStack_48 * fStack_48;
        if (0.0 < _DAT_005d8e68 - (fVar2 - fVar1 * fVar1)) {
          iStack_28 = iVar4;
          fStack_2c = SQRT(fVar2);
        }
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 3;
      } while (iVar4 < iStack_1c);
    }
    if (iStack_28 != -1) {
      param_4[3] = *(uint *)((int)auStack_b4 + iStack_28 * 4);
      param_4[2] = 0;
      param_4[1] = param_4[2];
      *param_4 = param_4[1];
      return fStack_2c /
             SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]);
    }
  }
  return 2.0;
}
