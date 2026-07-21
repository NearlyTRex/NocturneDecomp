// Name: core_drone.cpp_CDrone_setup_FUN_004629b0
// Address: 004629b0
// Address Range: [[004629b0, 00462a2f]]
// Convention: unknown
// Signature: void core_drone_cpp_CDrone_setup_FUN_004629b0(int param_1)

#include "nocturne.h"

void core_drone_cpp_CDrone_setup_FUN_004629b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(param_1 + 0x150);
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1 + 0x150);
  *(uint *)(param_1 + 0xbd24) = 0;
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bipn04",1);
  *(uint *)(param_1 + 0xbd28) = uVar2;
  uVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bipn09",1);
  *(uint *)(param_1 + 0xbd2c) = uVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  *(uint *)(param_1 + 0xbd30) = 0;
  *(uint *)(param_1 + 0xbd34) = 0;
  *(uint *)(param_1 + 0xbd38) = 0;
  return;
}
