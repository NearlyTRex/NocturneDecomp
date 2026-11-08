// Name: FUN_0044f670
// Address: 0044f670
// Address Range: [[0044f670, 0044f75a]]
// Convention: unknown
// Signature: undefined4 FUN_0044f670(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,float *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0044f670(int param_1,int param_2,uint param_3,uint param_4,uint param_5,float *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x100) <= param_2) {
    param_2 = *(int *)(param_1 + 0x100) + -1;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*(int *)(param_1 + 0x358) == 0) {
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0x43e;
    FUN_004e4500("Tried to call CKeyFramedModel::getFloorHeight for model %s but this model does not have a collision triangle list!",param_1);
  }
  if (((*(float *)(param_1 + 0x364) != *param_6) || (*(float *)(param_1 + 0x368) != param_6[1])) ||
     (*(float *)(param_1 + 0x36c) != param_6[2])) {
    FUN_0044f840(param_1,param_6);
  }
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x358) + *(int *)(param_1 + 0x354) * param_2 * 0x38;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x354)) {
    do {
      iVar1 = FUN_00478550(iVar4,param_3,param_4,param_5);
      if (iVar1 != 0) {
        uVar3 = 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x38;
    } while (iVar2 < *(int *)(param_1 + 0x354));
  }
  return uVar3;
}
