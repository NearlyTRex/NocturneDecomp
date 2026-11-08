// Name: FUN_0044f580
// Address: 0044f580
// Address Range: [[0044f580, 0044f66e]]
// Convention: unknown
// Signature: uint FUN_0044f580(int param_1,int param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0044f580(int param_1,int param_2,uint param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x100) <= param_2) {
    param_2 = *(int *)(param_1 + 0x100) + -1;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if ((*(float *)(param_1 + 0x364) == *param_4) && (*(float *)(param_1 + 0x368) == param_4[1])) {
    fVar1 = *(float *)(param_1 + 0x36c);
    fVar2 = param_4[2];
    uVar3 = (uint)(ushort)((ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                          (ushort)(fVar1 == fVar2) << 0xe);
    if ((fVar1 == fVar2) != 0) goto LAB_0044f5c6;
  }
  uVar3 = FUN_0044f840(param_1,param_4);
LAB_0044f5c6:
  if (*(int *)(param_1 + 0x358) == 0) {
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0x40e;
    uVar3 = FUN_004e4500("Tried to call CKeyFramedModel::intersectCylinderXZ for model %s but this model does not have a collision triangle list!",param_1);
  }
  iVar5 = *(int *)(param_1 + 0x358) + param_2 * *(int *)(param_1 + 0x354) * 0x38;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x354)) {
    do {
      iVar4 = iVar4 + 1;
      FUN_00477fe0(iVar5,param_3);
      uVar3 = *(uint *)(param_1 + 0x354);
      iVar5 = iVar5 + 0x38;
    } while (iVar4 < (int)uVar3);
  }
  return uVar3;
}
