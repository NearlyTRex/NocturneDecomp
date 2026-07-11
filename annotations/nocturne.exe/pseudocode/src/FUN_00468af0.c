// Name: FUN_00468af0
// Address: 00468af0
// Address Range: [[00468af0, 00468cf5]]
// Convention: unknown
// Signature: void FUN_00468af0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468af0(int param_1,int param_2)

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
  
  _DAT_014b89ec = _DAT_02dd1188;
  _DAT_014b8a08 = _DAT_02dd118c;
  _DAT_014b8a00 = _DAT_02dd1184;
  _DAT_014b89fc = _DAT_02dd118c;
  _DAT_014b89f4 = _DAT_02dd1184;
  _DAT_014b89f0 = _DAT_02dd118c;
  _DAT_014b89e8 = _DAT_02dd1184;
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
  _DAT_014b89f8 = _DAT_014b89ec;
  _DAT_014b8a04 = _DAT_014b89ec;
  FUN_00563a30();
  FUN_00563a30();
  iVar4 = (int)ROUND(fVar5);
  fVar8 = (float10)1 / (float10)*(float *)(param_1 + 0x2c);
  fVar5 = ((float10)*(float *)(param_2 + 0x28) - (float10)*(float *)(param_1 + 0x14)) * fVar8;
  fVar8 = ((float10)*(float *)(param_2 + 0x24) - (float10)*(float *)(param_1 + 0x14)) * fVar8;
  fVar7 = (float10)0;
  FUN_00563a30();
  FUN_00563a30();
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
  FUN_00563a30();
  FUN_00563a30();
  for (; iVar1 = (int)ROUND(fVar5), iVar4 <= (int)ROUND(fVar6); iVar4 = iVar4 + 1) {
    for (; iVar2 = (int)ROUND(fVar9), iVar1 <= (int)ROUND(fVar8); iVar1 = iVar1 + 1) {
      for (; iVar2 <= (int)ROUND(fVar10); iVar2 = iVar2 + 1) {
        iVar3 = FUN_004678d0(param_1,iVar4,iVar1,iVar2);
        if (iVar3 != 0) {
          FUN_0044b430(iVar3,param_2);
        }
      }
    }
  }
  return;
}
