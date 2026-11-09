// Name: core_larva.cpp_FUN_004fd9e0
// Address: 004fd9e0
// Address Range: [[004fd9e0, 004fda36]]
// Convention: unknown
// Signature: void core_larva_cpp_FUN_004fd9e0(CEnemy *param_1)

#include "nocturne.h"

void core_larva_cpp_FUN_004fd9e0(CEnemy *param_1)

{
  uint uVar1;
  
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)&param_1->field_0x158);
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
            ((CDeformableModelInstance *)&param_1->field_0x158);
  *(uint *)(param_1 + 1) = 0;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  uVar1 = core_actor_cpp_FUN_0040cc00(0,0x41f00000);
  *(uint *)&param_1->field_0xc1e4 = uVar1;
  return;
}
