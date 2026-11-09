// Name: core_fire.cpp_FUN_0049d600
// Address: 0049d600
// Address Range: [[0049d600, 0049d695]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049d600(undefined4 param_1,undefined4 param_2,undefined4 param_3,CKeyFramedModel *param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049d600(uint param_1,uint param_2,uint param_3,CKeyFramedModel *param_4,uint param_5)

{
  int iVar1;
  CLeaf *pCVar2;
  
  iVar1 = _DAT_01c950d8 + 1;
  pCVar2 = CLeaf_ARRAY_01c950dc + _DAT_01c950d8;
  _DAT_01c950d8 = iVar1;
  if (0x3f < iVar1) {
    _DAT_01c950d8 = 0;
  }
  if (param_4 == (CKeyFramedModel *)0x0) {
    iVar1 = rand();
    param_4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                        ((CKeyFramedModelInstance *)((iVar1 % 4) * 0x17c + 0x1c3e4e8));
  }
  core_fire_cpp_FUN_00496750(pCVar2,param_2,param_3,param_4,param_5);
  return;
}
