// Name: FUN_00453f00
// Address: 00453f00
// Address Range: [[00453f00, 00453fea]]
// Convention: unknown
// Signature: undefined4 FUN_00453f00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,float *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00453f00(int param_1,int param_2,uint param_3,uint param_4,uint param_5,float *param_6)

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
    _DAT_01cc4800 = "..\\core\\dmodel.cpp";
    _DAT_01cc4804 = 0x43e;
    FUN_004c8440("Tried to call CKeyFramedModel::getFloorHeight for model %s but this model does not have a collision triangle list!",param_1);
  }
  if (((*(float *)(param_1 + 0x364) != *param_6) || (*(float *)(param_1 + 0x368) != param_6[1])) ||
     (*(float *)(param_1 + 0x36c) != param_6[2])) {
    FUN_00454100(param_1,param_6);
  }
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x358) + *(int *)(param_1 + 0x354) * param_2 * 0x38;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x354)) {
    do {
      iVar1 = FUN_0046d110(iVar4,param_3,param_4,param_5);
      if (iVar1 != 0) {
        uVar3 = 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x38;
    } while (iVar2 < *(int *)(param_1 + 0x354));
  }
  return uVar3;
}
