// Name: core_drone.cpp_FUN_0046d7c0
// Address: 0046d7c0
// Address Range: [[0046d7c0, 0046d83f]]
// Convention: unknown
// Signature: void core_drone_cpp_FUN_0046d7c0(CEnemy *param_1)

#include "nocturne.h"

void core_drone_cpp_FUN_0046d7c0(CEnemy *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)&param_1->field_0x2b4);
  *(uint *)(param_1 + 1) = 0;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bipn04",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bipn09",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  *(uint *)&param_1[1].field_0xc = 0;
  *(uint *)&param_1[1].field_0x10 = 0;
  *(uint *)&param_1[1].field_0x14 = 0;
  return;
}
