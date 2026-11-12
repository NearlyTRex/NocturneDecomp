// Name: core_skeleton.cpp_FUN_00547230
// Address: 00547230
// Address Range: [[00547230, 00547272]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00547230(CDeformableModelInstance *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00547230(CDeformableModelInstance *param_1,uint param_2,uint param_3)

{
  CDeformableModel *pCVar1;
  uint *unaff_ESI;
  byte bVar2;
  uint auStackY_ffc [1014];
  CMatrix3x4f *pCVar3;
  uint uStack_14;
  
  bVar2 = 0;
  pCVar3 = (param_1->bone_transform).bone_model_matrices;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(param_1);
  core_skeleton_cpp_FUN_00541820(pCVar1,param_2,param_3,pCVar3);
  *unaff_ESI = uStack_14;
  unaff_ESI[(uint)bVar2 * -2 + 1] = *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8);
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       *(uint *)(&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  return;
}
