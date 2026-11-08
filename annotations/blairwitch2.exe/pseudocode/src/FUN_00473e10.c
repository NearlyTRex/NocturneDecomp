// Name: FUN_00473e10
// Address: 00473e10
// Address Range: [[00473e10, 00474015]]
// Convention: unknown
// Signature: void FUN_00473e10(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00473e10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  _DAT_01510dac = _DAT_02653710;
  _DAT_01510dc8 = _DAT_02653714;
  _DAT_01510dc0 = _DAT_0265370c;
  _DAT_01510dbc = _DAT_02653714;
  _DAT_01510db4 = _DAT_0265370c;
  _DAT_01510db0 = _DAT_02653714;
  _DAT_01510da8 = _DAT_0265370c;
  if (*(float *)(param_2 + 0x18) <= 0.0) {
    fVar5 = (((float10)*(float *)(param_2 + 0x10) + (float10)*(float *)(param_2 + 0x18)) -
            (float10)*(float *)(param_1 + 0x10)) - (float10)*(float *)(param_2 + 0x20);
    fVar6 = (float10)1 / (float10)*(float *)(param_1 + 0x28);
    fVar7 = (float10)*(float *)(param_2 + 0x10);
  }
  else {
    fVar5 = ((float10)*(float *)(param_2 + 0x10) - (float10)*(float *)(param_1 + 0x10)) -
            (float10)*(float *)(param_2 + 0x20);
    fVar6 = (float10)1 / (float10)*(float *)(param_1 + 0x28);
    fVar7 = (float10)*(float *)(param_2 + 0x10) + (float10)*(float *)(param_2 + 0x18);
  }
  fVar5 = fVar5 * fVar6;
  fVar6 = ((fVar7 - (float10)*(float *)(param_1 + 0x10)) + (float10)*(float *)(param_2 + 0x20)) *
          fVar6;
  _DAT_01510db8 = _DAT_01510dac;
  _DAT_01510dc4 = _DAT_01510dac;
  FUN_005b7ff0();
  FUN_005b7ff0();
  iVar4 = (int)ROUND(fVar5);
  fVar8 = (float10)1 / (float10)*(float *)(param_1 + 0x2c);
  fVar5 = ((float10)*(float *)(param_2 + 0x28) - (float10)*(float *)(param_1 + 0x14)) * fVar8;
  fVar8 = ((float10)*(float *)(param_2 + 0x24) - (float10)*(float *)(param_1 + 0x14)) * fVar8;
  fVar7 = (float10)0;
  FUN_005b7ff0();
  FUN_005b7ff0();
  if ((float10)*(float *)(param_2 + 0x1c) <= fVar7) {
    fVar9 = (((float10)*(float *)(param_2 + 0x14) + (float10)*(float *)(param_2 + 0x1c)) -
            (float10)*(float *)(param_1 + 0x18)) - (float10)*(float *)(param_2 + 0x20);
    fVar10 = (float10)1 / (float10)*(float *)(param_1 + 0x30);
    fVar7 = (float10)*(float *)(param_2 + 0x14);
  }
  else {
    fVar9 = ((float10)*(float *)(param_2 + 0x14) - (float10)*(float *)(param_1 + 0x18)) -
            (float10)*(float *)(param_2 + 0x20);
    fVar10 = (float10)1 / (float10)*(float *)(param_1 + 0x30);
    fVar7 = (float10)*(float *)(param_2 + 0x14) + (float10)*(float *)(param_2 + 0x1c);
  }
  fVar9 = fVar9 * fVar10;
  fVar10 = ((fVar7 - (float10)*(float *)(param_1 + 0x18)) + (float10)*(float *)(param_2 + 0x20)) *
           fVar10;
  FUN_005b7ff0();
  FUN_005b7ff0();
  for (; iVar1 = (int)ROUND(fVar5), iVar4 <= (int)ROUND(fVar6); iVar4 = iVar4 + 1) {
    for (; iVar2 = (int)ROUND(fVar9), iVar1 <= (int)ROUND(fVar8); iVar1 = iVar1 + 1) {
      for (; iVar2 <= (int)ROUND(fVar10); iVar2 = iVar2 + 1) {
        iVar3 = FUN_00472af0(param_1,iVar4,iVar1,iVar2);
        if (iVar3 != 0) {
          FUN_00446d20(iVar3,param_2);
        }
      }
    }
  }
  return;
}
