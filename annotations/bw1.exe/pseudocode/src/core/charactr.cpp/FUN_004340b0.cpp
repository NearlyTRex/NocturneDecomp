// Name: FUN_004340b0
// Address: 004340b0
// Address Range: [[004340b0, 004342b9]]
// Convention: unknown
// Signature: int FUN_004340b0(int param_1,float *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004340b0(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  float local_18;
  
  if ((*(int *)(param_1 + 0x2c98) < 0) || (*(int *)(param_1 + 0x27c4) <= *(int *)(param_1 + 0x2c98))
     ) {
    _DAT_01d1d400 = "..\\core\\charactr.cpp";
    _DAT_01d1d404 = 0x1124;
    FUN_005030e0("CCharacter::advanceLayerAction - invalid layerActionIndex");
  }
  piVar6 = (int *)(param_1 + 0x27c8 + *(int *)(param_1 + 0x2c98) * 0x38);
  if (*(float *)(param_1 + 0x2c9c) < 0.0) {
    *(uint *)(param_1 + 0x2c9c) = 0;
  }
  if (1.0 < *(float *)(param_1 + 0x2c9c)) {
    *(uint *)(param_1 + 0x2c9c) = 0x3f800000;
  }
  fVar3 = *(float *)(param_1 + 0x2c9c) * (float)piVar6[0xd];
  local_18 = (float)piVar6[0xd] * (1.0 - *(float *)(param_1 + 0x2c9c));
  iVar7 = piVar6[10];
  if (iVar7 != 0) goto LAB_004341d0;
  fVar1 = *(float *)(piVar6[1] * 0x58 + param_1 + 0xb9f4 + param_3 * 4);
  fVar2 = *(float *)(*piVar6 * 0x58 + param_1 + 0xb9f4 + param_3 * 4);
  fVar4 = fVar1 + local_18;
  fVar5 = fVar2 + fVar3;
  if (fVar4 <= fVar5) {
    if (fVar4 < fVar5) {
      iVar7 = 1;
      goto LAB_004341d0;
    }
    if (fVar1 <= fVar2) {
      iVar7 = 1;
      goto LAB_004341d0;
    }
  }
  iVar7 = -1;
LAB_004341d0:
  if (iVar7 < 0) {
    local_18 = fVar3;
  }
  if (*param_2 < local_18) {
    fVar3 = ((float)iVar7 * *param_2) / (float)piVar6[0xd] + *(float *)(param_1 + 0x2c9c);
    *(float *)(param_1 + 0x2c9c) = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)(param_1 + 0x2c9c) = 0;
    }
    if (1.0 < *(float *)(param_1 + 0x2c9c)) {
      *(uint *)(param_1 + 0x2c9c) = 0x3f800000;
    }
    *param_2 = 0.0;
    return -1;
  }
  *param_2 = *param_2 - local_18;
  if (-1 < iVar7) {
    iVar7 = piVar6[1];
    *(uint *)(param_1 + 0x2c9c) = 0x3f800000;
    return iVar7;
  }
  iVar7 = *piVar6;
  *(uint *)(param_1 + 0x2c9c) = 0;
  return iVar7;
}
