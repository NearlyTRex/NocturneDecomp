// Name: FUN_0048c300
// Address: 0048c300
// Address Range: [[0048c300, 0048c505]]
// Convention: unknown
// Signature: void FUN_0048c300(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048c300(int param_1,int param_2)

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
  
  _DAT_0152c2ac = _DAT_02c8af2c;
  _DAT_0152c2c8 = _DAT_02c8af30;
  _DAT_0152c2c0 = _DAT_02c8af28;
  _DAT_0152c2bc = _DAT_02c8af30;
  _DAT_0152c2b4 = _DAT_02c8af28;
  _DAT_0152c2b0 = _DAT_02c8af30;
  _DAT_0152c2a8 = _DAT_02c8af28;
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
  _DAT_0152c2b8 = _DAT_0152c2ac;
  _DAT_0152c2c4 = _DAT_0152c2ac;
  FUN_005c03a0();
  FUN_005c03a0();
  iVar4 = (int)ROUND(fVar5);
  fVar8 = (float10)1 / (float10)*(float *)(param_1 + 0x2c);
  fVar5 = ((float10)*(float *)(param_2 + 0x28) - (float10)*(float *)(param_1 + 0x14)) * fVar8;
  fVar8 = ((float10)*(float *)(param_2 + 0x24) - (float10)*(float *)(param_1 + 0x14)) * fVar8;
  fVar7 = (float10)0;
  FUN_005c03a0();
  FUN_005c03a0();
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
  FUN_005c03a0();
  FUN_005c03a0();
  for (; iVar1 = (int)ROUND(fVar5), iVar4 <= (int)ROUND(fVar6); iVar4 = iVar4 + 1) {
    for (; iVar2 = (int)ROUND(fVar9), iVar1 <= (int)ROUND(fVar8); iVar1 = iVar1 + 1) {
      for (; iVar2 <= (int)ROUND(fVar10); iVar2 = iVar2 + 1) {
        iVar3 = FUN_0048afe0(param_1,iVar4,iVar1,iVar2);
        if (iVar3 != 0) {
          FUN_004583d0(iVar3,param_2);
        }
      }
    }
  }
  return;
}
