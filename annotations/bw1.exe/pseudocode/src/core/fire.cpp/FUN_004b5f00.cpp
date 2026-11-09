// Name: core_fire.cpp_FUN_004b5f00
// Address: 004b5f00
// Address Range: [[004b5f00, 004b5f95]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004b5f00(undefined4 param_1,undefined4 param_2,undefined4 param_3,CKeyFramedModel *param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004b5f00(uint param_1,uint param_2,uint param_3,CKeyFramedModel *param_4,uint param_5)

{
  int iVar1;
  CLeaf *pCVar2;
  
  iVar1 = _DAT_01cadb64 + 1;
  pCVar2 = CLeaf_ARRAY_01cadb68 + _DAT_01cadb64;
  _DAT_01cadb64 = iVar1;
  if (0x3f < iVar1) {
    _DAT_01cadb64 = 0;
  }
  if (param_4 == (CKeyFramedModel *)0x0) {
    iVar1 = rand();
    param_4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                        ((CKeyFramedModelInstance *)((iVar1 % 4) * 0x17c + 0x1c576a8));
  }
  core_fire_cpp_FUN_004af0f0(pCVar2,param_2,param_3,param_4,param_5);
  return;
}
