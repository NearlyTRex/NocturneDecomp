// Name: core_drone.cpp_FUN_00485cc0
// Address: 00485cc0
// Address Range: [[00485cc0, 00485d3f]]
// Convention: unknown
// Signature: void core_drone_cpp_FUN_00485cc0(CEnemy *param_1)

#include "nocturne.h"

void core_drone_cpp_FUN_00485cc0(CEnemy *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)&param_1->field_0x158);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  *(uint *)(param_1 + 1) = 0;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bipn04",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bipn09",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  *(uint *)&param_1[1].field_0xc = 0;
  *(uint *)&param_1[1].field_0x10 = 0;
  *(uint *)&param_1[1].field_0x14 = 0;
  return;
}
