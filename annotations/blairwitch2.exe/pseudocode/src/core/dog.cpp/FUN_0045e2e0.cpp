// Name: core_dog.cpp_FUN_0045e2e0
// Address: 0045e2e0
// Address Range: [[0045e2e0, 0045e337]]
// Convention: unknown
// Signature: void core_dog_cpp_FUN_0045e2e0(CEnemy *param_1)

#include "nocturne.h"

void core_dog_cpp_FUN_0045e2e0(CEnemy *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)&param_1->field_0x2b4);
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine1",1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  return;
}
