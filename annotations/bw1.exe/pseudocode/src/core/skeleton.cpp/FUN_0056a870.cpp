// Name: core_skeleton.cpp_FUN_0056a870
// Address: 0056a870
// Address Range: [[0056a870, 0056a8e5]]
// Convention: unknown
// Signature: undefined4 core_skeleton_cpp_FUN_0056a870(CDeformableModelInstance *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint core_skeleton_cpp_FUN_0056a870(CDeformableModelInstance *param_1,uint param_2,uint param_3)

{
  CDeformableModel *pCVar1;
  uint uVar2;
  int lod_index;
  byte *puVar3;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(param_1);
  lod_index = *(int *)pCVar1 + -2;
  if (lod_index < 0) {
    lod_index = 0;
  }
  if (lod_index != *(int *)&param_1->field_0x2320) {
    core_skeleton_cpp_FUN_00569890(param_1,lod_index);
  }
  puVar3 = &param_1->field_0x2140;
  uVar2 = *(uint *)&param_1->field_0x2324;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(param_1);
  uVar2 = core_skeleton_cpp_FUN_005660c0(pCVar1,lod_index,param_2,param_3,uVar2,puVar3);
  return uVar2;
}
