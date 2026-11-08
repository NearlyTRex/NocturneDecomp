// Name: FUN_0042a0c0
// Address: 0042a0c0
// Address Range: [[0042a0c0, 0042a2c9]]
// Convention: unknown
// Signature: int FUN_0042a0c0(int param_1,float *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042a0c0(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  float local_18;
  
  if ((*(int *)(param_1 + 0x2d04) < 0) || (*(int *)(param_1 + 0x2830) <= *(int *)(param_1 + 0x2d04))
     ) {
    _DAT_01d046a0 = "..\\core\\charactr.cpp";
    _DAT_01d046a4 = 0x114a;
    FUN_004e4500("CCharacter::advanceLayerAction - invalid layerActionIndex");
  }
  piVar6 = (int *)(param_1 + 0x2834 + *(int *)(param_1 + 0x2d04) * 0x38);
  if (*(float *)(param_1 + 0x2d08) < 0.0) {
    *(uint *)(param_1 + 0x2d08) = 0;
  }
  if (1.0 < *(float *)(param_1 + 0x2d08)) {
    *(uint *)(param_1 + 0x2d08) = 0x3f800000;
  }
  fVar3 = *(float *)(param_1 + 0x2d08) * (float)piVar6[0xd];
  local_18 = (float)piVar6[0xd] * (1.0 - *(float *)(param_1 + 0x2d08));
  iVar7 = piVar6[10];
  if (iVar7 != 0) goto LAB_0042a1e0;
  fVar1 = *(float *)(piVar6[1] * 0x58 + param_1 + 0x10230 + param_3 * 4);
  fVar2 = *(float *)(*piVar6 * 0x58 + param_1 + 0x10230 + param_3 * 4);
  fVar4 = fVar1 + local_18;
  fVar5 = fVar2 + fVar3;
  if (fVar4 <= fVar5) {
    if (fVar4 < fVar5) {
      iVar7 = 1;
      goto LAB_0042a1e0;
    }
    if (fVar1 <= fVar2) {
      iVar7 = 1;
      goto LAB_0042a1e0;
    }
  }
  iVar7 = -1;
LAB_0042a1e0:
  if (iVar7 < 0) {
    local_18 = fVar3;
  }
  if (*param_2 < local_18) {
    fVar3 = ((float)iVar7 * *param_2) / (float)piVar6[0xd] + *(float *)(param_1 + 0x2d08);
    *(float *)(param_1 + 0x2d08) = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)(param_1 + 0x2d08) = 0;
    }
    if (1.0 < *(float *)(param_1 + 0x2d08)) {
      *(uint *)(param_1 + 0x2d08) = 0x3f800000;
    }
    *param_2 = 0.0;
    return -1;
  }
  *param_2 = *param_2 - local_18;
  if (-1 < iVar7) {
    iVar7 = piVar6[1];
    *(uint *)(param_1 + 0x2d08) = 0x3f800000;
    return iVar7;
  }
  iVar7 = *piVar6;
  *(uint *)(param_1 + 0x2d08) = 0;
  return iVar7;
}
