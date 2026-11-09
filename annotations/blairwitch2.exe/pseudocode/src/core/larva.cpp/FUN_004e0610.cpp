// Name: core_larva.cpp_FUN_004e0610
// Address: 004e0610
// Address Range: [[004e0610, 004e0666]]
// Convention: unknown
// Signature: void core_larva_cpp_FUN_004e0610(CEnemy *param_1)

#include "nocturne.h"

void core_larva_cpp_FUN_004e0610(CEnemy *param_1)

{
  uint uVar1;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  *(uint *)(param_1 + 1) = 0;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  uVar1 = core_actor_cpp_FUN_0040cf60(0,0x41f00000);
  *(uint *)&param_1->field_0x10a74 = uVar1;
  return;
}
