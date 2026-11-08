// Name: FUN_00433580
// Address: 00433580
// Address Range: [[00433580, 0043377b]]
// Convention: unknown
// Signature: int FUN_00433580(int param_1,float *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00433580(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  float local_18;
  
  if ((*(int *)(param_1 + 0x2f00) < 0) || (*(int *)(param_1 + 0x27c4) <= *(int *)(param_1 + 0x2f00))
     ) {
    _DAT_01d71de0 = "..\\core\\charactr.cpp";
    _DAT_01d71de4 = 0x1269;
    FUN_004e4330("CCharacter::advanceLayerAction - invalid layerActionIndex");
  }
  piVar6 = (int *)(param_1 + 0x27c8 + *(int *)(param_1 + 0x2f00) * 0x38);
  if (*(float *)(param_1 + 0x2f04) < 0.0) {
    *(uint *)(param_1 + 0x2f04) = 0;
  }
  if (1.0 < *(float *)(param_1 + 0x2f04)) {
    *(uint *)(param_1 + 0x2f04) = 0x3f800000;
  }
  fVar3 = *(float *)(param_1 + 0x2f04) * (float)piVar6[0xd];
  local_18 = (float)piVar6[0xd] * (1.0 - *(float *)(param_1 + 0x2f04));
  iVar7 = piVar6[10];
  if (iVar7 != 0) goto LAB_00433692;
  fVar1 = *(float *)(piVar6[1] * 0x84 + param_1 + 0xbc74 + param_3 * 4);
  fVar2 = *(float *)(*piVar6 * 0x84 + param_1 + 0xbc74 + param_3 * 4);
  fVar4 = fVar1 + local_18;
  fVar5 = fVar2 + fVar3;
  if (fVar4 <= fVar5) {
    if (fVar4 < fVar5) {
      iVar7 = 1;
      goto LAB_00433692;
    }
    if (fVar1 <= fVar2) {
      iVar7 = 1;
      goto LAB_00433692;
    }
  }
  iVar7 = -1;
LAB_00433692:
  if (iVar7 < 0) {
    local_18 = fVar3;
  }
  if (*param_2 < local_18) {
    fVar3 = ((float)iVar7 * *param_2) / (float)piVar6[0xd] + *(float *)(param_1 + 0x2f04);
    *(float *)(param_1 + 0x2f04) = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)(param_1 + 0x2f04) = 0;
    }
    if (1.0 < *(float *)(param_1 + 0x2f04)) {
      *(uint *)(param_1 + 0x2f04) = 0x3f800000;
    }
    *param_2 = 0.0;
    return -1;
  }
  *param_2 = *param_2 - local_18;
  if (-1 < iVar7) {
    iVar7 = piVar6[1];
    *(uint *)(param_1 + 0x2f04) = 0x3f800000;
    return iVar7;
  }
  iVar7 = *piVar6;
  *(uint *)(param_1 + 0x2f04) = 0;
  return iVar7;
}
