// Name: core_skeleton.cpp_FUN_0054f360
// Address: 0054f360
// Address Range: [[0054f360, 0054f3ff]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_0054f360(CDeformableModelInstance *param_1,CBodyPart *param_2,int param_3)

#include "nocturne.h"

void core_skeleton_cpp_FUN_0054f360(CDeformableModelInstance *param_1,CBodyPart *param_2,int param_3)

{
  CDeformableModel *this_ptr;
  uint lod_index;
  byte *puVar1;
  
  if (param_2 == (CBodyPart *)0x0) {
    *(uint *)(&param_1->field_0x2140 + param_3 * 4) = 0;
    return;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(param_1);
  lod_index = (uint)(1 < *(int *)this_ptr);
  for (puVar1 = &this_ptr->field_0x0 + lod_index * 8;
      (0 < (int)lod_index && (*(int *)(puVar1 + 8) != 0)); puVar1 = puVar1 + -8) {
    lod_index = lod_index - 1;
  }
  if (lod_index != *(uint *)&param_1->field_0x2320) {
    core_skeleton_cpp_FUN_0054e420(param_1,lod_index);
  }
  core_skeleton_cpp_CDeformableModel_dismember_FUN_0054a6a0
            (this_ptr,*(int *)&param_1->field_0x2320,param_2,param_3,
             *(CVector3i **)&param_1->field_0x2324,*(int *)(&param_1->field_0x2230 + param_3 * 4));
  *(uint *)(&param_1->field_0x2140 + param_3 * 4) = 0;
  return;
}
