// Name: core_skeleton.cpp_FUN_00546d30
// Address: 00546d30
// Address Range: [[00546d30, 00546d9e]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00546d30(CDeformableModelInstance *param_1,float *param_2)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00546d30(CDeformableModelInstance *param_1,float *param_2)

{
  CSkeleton *pCVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(param_1);
  iVar3 = 0;
  pCVar2 = param_1;
  if (0 < *(int *)&pCVar1->field_0x1d1f8) {
    do {
      *(float *)&pCVar2->field_0xe8c = *param_2 + *(float *)&pCVar2->field_0xe8c;
      *(float *)&pCVar2->field_0xe9c = param_2[1] + *(float *)&pCVar2->field_0xe9c;
      iVar3 = iVar3 + 1;
      *(float *)&pCVar2->field_0xeac = param_2[2] + *(float *)&pCVar2->field_0xeac;
      pCVar2 = (CDeformableModelInstance *)&pCVar2->field_0x30;
    } while (iVar3 < *(int *)&pCVar1->field_0x1d1f8);
  }
  *(uint *)&param_1->field_0x2230 = 0xffffffff;
  return;
}
